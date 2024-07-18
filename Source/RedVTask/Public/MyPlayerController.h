#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "TargetWidget.h"

#include "MyPlayerController.generated.h"

UCLASS()
class REDVTASK_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AMyPlayerController();

	void SetGameOverState(const float NewHealth);

	void BeginPlay() override;

	UPROPERTY()
	UTargetWidget* HUDWidget;

	UPROPERTY()
	TSubclassOf<UTargetWidget> WidgetClass;
};