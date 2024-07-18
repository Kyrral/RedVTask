#include "Spawner.h"

// Sets default values
ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	numberOfItems = 10;
	spawnAreaMin = FVector(-4000, -4000, 0);
	spawnAreaMax = FVector(4000, 4000, 0);
}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	spawnItems();
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// my methods
//
void ASpawner::spawnItems()
{
	if (itemClass == nullptr) return;

	for (int i = 0; i < numberOfItems; ++i)
	{
		FVector start = FMath::RandPointInBox(FBox(spawnAreaMin, spawnAreaMax));
		start = FVector(start.X, start.Y, start.Z + 100);
		FVector end = start - FVector(0, 0, TraceDistance);

		FHitResult hitResult;
		FCollisionQueryParams qParams;

		qParams.AddIgnoredActor(this);

		bool bHit = GetWorld()->LineTraceSingleByChannel(hitResult, start, end, ECC_Visibility, qParams);

		if (bHit) {
			FVector SpawnLocation = hitResult.Location;
			FRotator SpawnRotation = FRotator::ZeroRotator;
			GetWorld()->SpawnActor<AActor>(itemClass, SpawnLocation, SpawnRotation);
		}
	}
}

