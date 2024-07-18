#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GameFramework/PlayerStart.h"

#include "MyHUD.h"
#include "Drone.h"
#include "TurrelSpawner.h"
#include "HealthPackSpawner.h"
#include "AmmoPackSpawner.h"
#include "MyPlayerController.h"
#include "MyFloor.h"

#include "MainGameMode.generated.h"

UCLASS()
class REDVTASK_API AMainGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;

	AMainGameMode();

	UWorld* world;
	ADrone* drone;
	APlayerStart* PlayerStart;
};
