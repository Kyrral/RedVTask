#include "Turel.h"

// Sets default values
ATurel::ATurel()
{
	PrimaryActorTick.bCanEverTick = true;

	// mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	RootComponent = mesh;
	mesh->SetRelativeScale3D({ 0.5f, 0.5f, 1.0f });
	ConstructorHelpers::FObjectFinder<UStaticMesh> findMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (findMesh.Succeeded()) mesh->SetStaticMesh(findMesh.Object);

	//
	FVector BoxExtent = mesh->GetStaticMesh()->GetBoundingBox().GetSize();
	mesh->SetRelativeLocation(FVector(0.0f, 0.0f, BoxExtent.Z / 2));
	//

	// collider
	collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("collider"));
	collider->InitCapsuleSize(BoxExtent.X / 3, BoxExtent.Z / 2);
	collider->SetupAttachment(RootComponent);
	
	collider->SetCollisionProfileName(TEXT("Trigger"));
	collider->SetGenerateOverlapEvents(true);
	
	// fireZone
	fireZone = CreateDefaultSubobject<UBoxComponent>(TEXT("fireZone"));
	fireZone->SetupAttachment(RootComponent);
	fireZone->SetBoxExtent(FVector(2000.0f, 2000.0f, 2000.0f));
	fireZone->SetRelativeLocation(FVector(0.0f, 0.0f, 500.0f));

	fireZone->SetCollisionProfileName(TEXT("Trigger"));
	fireZone->SetGenerateOverlapEvents(true);

	// widget
	HealthBarWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarWidgetComponent"));
	HealthBarWidgetComponent->SetupAttachment(RootComponent);
	HealthBarWidgetComponent->SetVisibility(true);
	HealthBarWidgetComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));
	HealthBarWidgetComponent->SetCastShadow(false);

	static ConstructorHelpers::FClassFinder<UTurrelHealthBar> thbFinder(TEXT("/Game/BP_HealthBar.BP_HealthBar_C"));
	HealthBarWidgetClass = thbFinder.Class;
}

// Called when the game starts or when spawned
void ATurel::BeginPlay()
{
	Super::BeginPlay();
	setTarget();
	fireZone->OnComponentBeginOverlap.AddDynamic(this, &ATurel::onFireZoneBeginOverlap);
	fireZone->OnComponentEndOverlap.AddDynamic(this, &ATurel::onFireZoneEndOverlap);
	collider->OnComponentBeginOverlap.AddDynamic(this, &ATurel::onColliderBeginOverlap);

	GetWorld()->GetTimerManager().SetTimer(fireTimerHandler, this, &ATurel::CheckTargetInRange, fireInterval, true);

	// widget
	if (HealthBarWidgetComponent && HealthBarWidgetClass)
	{
		HealthBarWidgetComponent->SetWidgetClass(HealthBarWidgetClass);
	}

	HealthBarWidget = Cast<UTurrelHealthBar>(HealthBarWidgetComponent->GetWidget());

	if (HealthBarWidget)
	{
		HealthBarWidget->onHealthChanged(health);
	}
}

void ATurel::UpdateWidgetFacingCamera()
{
	if (HealthBarWidgetComponent)
	{
		FVector CameraLocation = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetCameraLocation();
		FVector DirectionToCamera = CameraLocation - GetActorLocation();
		DirectionToCamera.Normalize();

		FRotator NewRotation = DirectionToCamera.Rotation();
		HealthBarWidgetComponent->SetWorldRotation(NewRotation);
	}
}

// Called every frame
void ATurel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (active) rotate();
	UpdateWidgetFacingCamera();
}

// my methods
//
void ATurel::CheckTargetInRange()
{
	if (active && target->getIsAlive()) fire(target);
}

void ATurel::onFireZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == target) active = true;
}

void ATurel::onColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMissile* m = Cast<AMissile>(OtherActor);
	if (m == nullptr) return;
	
	if (m->enemy == true) return;
	health = health - 10;
	OtherActor->Destroy();
	HealthBarWidget->onHealthChanged(health);
	if (health <= 0) Destroy();
}

void ATurel::onFireZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	if (OtherActor == target) active = false;
	else {
		AMissile* m = Cast<AMissile>(OtherActor);
		if (m == nullptr) return;
		if (m->enemy) OtherActor->Destroy();
	}
}

void ATurel::setTarget()
{
	for (TActorIterator<ADrone> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		target = *ActorItr;
}

void ATurel::rotate()
{
	FVector targetLocation = target->GetActorLocation();
	FVector dirToTarget = (targetLocation - mesh->GetComponentLocation()).GetSafeNormal();

	mesh->SetWorldRotation({ 0.0f, dirToTarget.Rotation().Yaw, 0.0f });
}

void ATurel::fire(AActor* OtherActor)
{
	FVector spawnLocation = GetActorLocation();
	spawnLocation = { spawnLocation.X, spawnLocation.Y, spawnLocation.Z + 60 };
	FRotator spawnRotation = GetActorRotation();

	missile = GetWorld()->SpawnActor<AMissile>(spawnLocation, spawnRotation);

	if (!missile) {
		UE_LOG(LogTemp, Warning, TEXT("Failed to spawn missile"));
		return;
	}

	missile->setDamage(true);
	FVector forwardDir = (target->GetTargetLocation() - GetActorLocation()).GetSafeNormal();
	FVector velocity = forwardDir * 10000.0f;

	UProjectileMovementComponent* projectileMovement = missile->FindComponentByClass<UProjectileMovementComponent>();
	projectileMovement->Velocity = velocity;
}