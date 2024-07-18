#include "Missile.h"

AMissile::AMissile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	RootComponent = mesh;
	mesh->SetRelativeScale3D({ 0.1f, 0.1f, 0.1f });

	ConstructorHelpers::FObjectFinder<UStaticMesh> sphereMesh(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
	if (sphereMesh.Succeeded()) mesh->SetStaticMesh(sphereMesh.Object);
	mesh->SetCollisionProfileName(TEXT("Trigger"));
	mesh->SetSimulatePhysics(false);
	mesh->SetCollisionResponseToAllChannels(ECR_Overlap);

	mesh->SetPhysMaterialOverride(nullptr);

	// proj movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->bAutoActivate = true;
	
	ProjectileMovement->InitialSpeed = 10000000.0f;
	ProjectileMovement->bShouldBounce = false;

	ProjectileMovement->bIsHomingProjectile = false;
	ProjectileMovement->ProjectileGravityScale = 0.0f;

	// stats
	enemy = false;
	damage = 10;
}

// Called when the game starts or when spawned
void AMissile::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void AMissile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMissile::setDamage(bool e)
{
	enemy = e;
	if (e) damage = 5;
	else damage = 10;
	ProjectileMovement->MaxSpeed = 10000000.0f;
}
