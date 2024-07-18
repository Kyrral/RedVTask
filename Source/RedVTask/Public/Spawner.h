#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"

#include "TargetWidget.h"

#include "Spawner.generated.h"

UCLASS(Abstract)
class REDVTASK_API ASpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpawner();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<AActor> itemClass;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	int numberOfItems;
	
	UPROPERTY(EditAnywhere, Category = "Spawning")
	FVector spawnAreaMin;
	
	UPROPERTY(EditAnywhere, Category = "Spawning")
	FVector spawnAreaMax;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	float TraceDistance = 1000.0f;

	void spawnItems();
};
