#include "Drone.h"

// Sets default values
ADrone::ADrone()
{
    // Set this pawn to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    //
    ableToPick = false;
    isAlive = true;

    // stats
    health = healthMAX;
    cartridgeCount = cartridgeMAX / 2;

    CurrentPickupHItem = nullptr;
    CurrentPickupAItem = nullptr;

    // create collider
    collider = CreateDefaultSubobject<USphereComponent>(TEXT("collider"));
    collider->InitSphereRadius(300.0f);

    collider->SetCollisionProfileName(TEXT("Trigger"));
    collider->SetGenerateOverlapEvents(true);
    collider->SetCollisionResponseToAllChannels(ECR_Block);
    collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    RootComponent = collider;

    // item collider
    ItemCollider = CreateDefaultSubobject<USphereComponent>(TEXT("itemCollider"));
    ItemCollider->InitSphereRadius(500.0f);

    ItemCollider->SetCollisionProfileName(TEXT("Trigger"));
    ItemCollider->SetGenerateOverlapEvents(true);
    ItemCollider->SetCollisionResponseToAllChannels(ECR_Overlap);
    ItemCollider->SetupAttachment(RootComponent);

    //fire zone
    fireZone = CreateDefaultSubobject<USphereComponent>(TEXT("fireZoneCollider"));
    fireZone->InitSphereRadius(1500.0f);

    fireZone->SetCollisionProfileName(TEXT("Trigger"));
    fireZone->SetGenerateOverlapEvents(true);
    fireZone->SetCollisionResponseToAllChannels(ECR_Overlap);
    fireZone->SetupAttachment(RootComponent);

    // movement
    MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));

    // camera
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(RootComponent);

    MovementSpeed = 10000.0f;
    TurnRate = 45.0f;
    LookUpRate = 45.0f;

    bUseControllerRotationPitch = true;
    bUseControllerRotationYaw = true;
    bUseControllerRotationRoll = true;
}

// Called when the game starts or when spawned
void ADrone::BeginPlay()
{
    Super::BeginPlay();

    collider->OnComponentBeginOverlap.AddDynamic(this, &ADrone::onColliderBeginOverlap);

    ItemCollider->OnComponentBeginOverlap.AddDynamic(this, &ADrone::onItemColliderBeginOverlap);
    ItemCollider->OnComponentEndOverlap.AddDynamic(this, &ADrone::onItemColliderEndOverlap);

    fireZone->OnComponentEndOverlap.AddDynamic(this, &ADrone::onFireZoneColliderEndOverlap);
}

// Called every frame
void ADrone::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!CurrentVelocity.IsZero())
    {
        FVector ForwardDirection = CameraComponent->GetForwardVector();
        FVector RightDirection = CameraComponent->GetRightVector();
        FVector MovementDirection = (ForwardDirection * CurrentVelocity.X) + (RightDirection * CurrentVelocity.Y);

        FVector NewLocation = GetActorLocation() + (MovementDirection * DeltaTime * 1000);
        MovementComponent->AddInputVector(NewLocation, true);
    }
}

// Called to bind functionality to input
void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // movement
    PlayerInputComponent->BindAxis("MoveForward", this, &ADrone::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ADrone::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &ADrone::Turn);
    PlayerInputComponent->BindAxis("LookUp", this, &ADrone::LookUp);

    // abilities
    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ADrone::fire);
    PlayerInputComponent->BindAction("Pickup", IE_Pressed, this, &ADrone::PickUpItem);
}

//my methods
//
// move forward
void ADrone::MoveForward(float value) { CurrentVelocity.X = value * MovementSpeed; }

// move right
void ADrone::MoveRight(float value) { CurrentVelocity.Y = value * MovementSpeed; }

// rotate horizontally
void ADrone::Turn(float rate) { AddControllerYawInput(rate * TurnRate * GetWorld()->GetDeltaSeconds()); }

// rotate vertically
void ADrone::LookUp(float rate) { AddControllerPitchInput(rate * LookUpRate * GetWorld()->GetDeltaSeconds()); }

void ADrone::fire() {
    if (cartridgeCount == 0) return;

    FVector spawnLocation = GetActorLocation();
    missile = GetWorld()->SpawnActor<AMissile>({ spawnLocation.X, spawnLocation.Y, spawnLocation.Z }, { 0, 0, 0 });

    if (!missile) return;

    missile->setDamage(false);

    APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (!playerController) return;

    FVector CameraLocation;
    FRotator CameraRotation;
    playerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

    FVector forwardDir = CameraRotation.Vector();
    FVector launchVelocity = forwardDir * 10000.0f;
    UProjectileMovementComponent* projectileMovement = missile->FindComponentByClass<UProjectileMovementComponent>();

    if (projectileMovement) projectileMovement->Velocity = launchVelocity;
    --cartridgeCount;
    Fire(cartridgeCount);
}

void ADrone::PickUpItem()
{
    if (ableToPick == false) return;

    AHealthPack* hp = Cast<AHealthPack>(CurrentPickupHItem);
    AAmmoPack* ap = Cast<AAmmoPack>(CurrentPickupAItem);

    if (hp) {
        int temp = health + hp->healthPoints;
        if (temp == healthMAX) return;
        if (temp > healthMAX) SetHealth(healthMAX);
        else SetHealth(temp);

        CurrentPickupHItem->Destroy();
        CurrentPickupHItem = nullptr;
        return;
    }
    
    if (ap) {
        int temp = cartridgeCount + ap->cartridgePoints;
        if (temp == cartridgeMAX) return;
        if (temp > cartridgeMAX) Fire(cartridgeMAX);
        else Fire(temp);
        CurrentPickupAItem->Destroy();
        CurrentPickupAItem = nullptr;
    }
}

void ADrone::onColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    AMissile* m = Cast<AMissile>(OtherActor);
    if (m == nullptr) return;
    if (m->enemy == false) return;
    health = health - m->damage;
    if (health <= 0) health = 0;
    SetHealth(health);
    OtherActor->Destroy();
}

void ADrone::onItemColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    UE_LOG(LogTemp, Warning, TEXT("collider worked"));

    AHealthPack* hp = Cast<AHealthPack>(OtherActor);
    AAmmoPack* ap = Cast<AAmmoPack>(OtherActor);
    if (hp) {
        CurrentPickupHItem = hp;
        hp->setWidgetVisibility(true);
    }
    if (ap) {
        CurrentPickupAItem = ap;
        ap->setWidgetVisibility(true);
    }
    ableToPick = true;
}

void ADrone::onItemColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
    AHealthPack* hp = Cast<AHealthPack>(OtherActor);
    AAmmoPack* ap = Cast<AAmmoPack>(OtherActor);
    if (hp) {
        CurrentPickupHItem = nullptr;
        hp->setWidgetVisibility(false);
    }
    if (ap) {
        CurrentPickupAItem = nullptr;
        ap->setWidgetVisibility(false);
    }
    if (CurrentPickupHItem == nullptr && CurrentPickupAItem == nullptr) ableToPick = false;
}

void ADrone::onFireZoneColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
    AMissile* m = Cast<AMissile>(OtherActor);
    if (m == nullptr) return;
    if (m->enemy == false) m->Destroy();
}

bool ADrone::getIsAlive() { return isAlive; }

void ADrone::SetHealth(float NewHealth)
{
    if (NewHealth <= 0) {
        isAlive = false;
        cartridgeCount = 0;
        MovementComponent->StopMovementImmediately();

        bUseControllerRotationYaw = false;
        bUseControllerRotationPitch = false;
    }

    health = NewHealth;
    onHealthChanged.Broadcast(health);
}

void ADrone::Fire(float NewCartridgeCount)
{
    cartridgeCount = NewCartridgeCount;
    onFire.Broadcast(cartridgeCount);
}