#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFloor.generated.h"

UCLASS()
class REDVTASK_API AMyFloor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFloor();

public:
	UPROPERTY()
	UStaticMeshComponent* mesh;
};
