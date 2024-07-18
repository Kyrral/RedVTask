#include "HealthPack.h"

// Sets default values
AHealthPack::AHealthPack()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	RootComponent = mesh;
	mesh->SetRelativeScale3D({ 0.5f, 0.5f, 0.2f });
	ConstructorHelpers::FObjectFinder<UStaticMesh> cubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (cubeMesh.Succeeded()) mesh->SetStaticMesh(cubeMesh.Object);

	//
	FVector BoxExtent = mesh->GetStaticMesh()->GetBoundingBox().GetSize();
	mesh->SetRelativeLocation(FVector(0.0f, 0.0f, BoxExtent.Z / 2 * 0.2f));
	//

	mesh->SetCollisionProfileName(TEXT("Trigger"));
	mesh->SetSimulatePhysics(false);
	mesh->SetCollisionResponseToAllChannels(ECR_Overlap);
	mesh->SetGenerateOverlapEvents(true);

	// material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialFinder(TEXT("/Game/M_Health_Inst.M_Health_Inst"));
	if (MaterialFinder.Succeeded())
	{
		MaterialToApply = MaterialFinder.Object;
	}
	mesh->SetMaterial(0, MaterialToApply);


	// widget
	widgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarWidgetComponent"));
	widgetComponent->SetupAttachment(RootComponent);
	widgetComponent->SetVisibility(false);
	widgetComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 500.0f));
	widgetComponent->SetRelativeScale3D(FVector(0.3f, 0.3f, 0.7f));
	widgetComponent->SetCastShadow(false);

	static ConstructorHelpers::FClassFinder<UUserWidget> finder(TEXT("/Game/BP_PackHint.BP_PackHint_C"));
	widgetClass = finder.Class;
}

void AHealthPack::BeginPlay()
{
	Super::BeginPlay();

	// widget
	if (widgetComponent && widgetClass)
		widgetComponent->SetWidgetClass(widgetClass);
}

void AHealthPack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateWidgetFacingCamera();
}

void AHealthPack::setWidgetVisibility(bool v)
{
	widgetComponent->SetVisibility(v);
}

void AHealthPack::UpdateWidgetFacingCamera()
{
	if (widgetComponent)
	{
		FVector CameraLocation = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetCameraLocation();
		FVector DirectionToCamera = CameraLocation - GetActorLocation();
		DirectionToCamera.Normalize();

		FRotator NewRotation = DirectionToCamera.Rotation();
		widgetComponent->SetWorldRotation(NewRotation);
	}
}