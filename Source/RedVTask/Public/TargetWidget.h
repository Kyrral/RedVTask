#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Components/Image.h"

#include "Drone.h"

#include "TargetWidget.generated.h"

UCLASS()
class REDVTASK_API UTargetWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    void NativeConstruct() override;

protected:
    UPROPERTY(meta = (BindWidget))
    UTextBlock* healthTextBlock;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* cartridgeTextBlock;

    UPROPERTY(meta = (BindWidget))
    UProgressBar* healthBar;

    UPROPERTY(meta = (BindWidget))
    UProgressBar* cartridgeBar;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* gameOverTxt;

    UPROPERTY(meta = (BindWidget))
    UImage* Image;

private:
    UFUNCTION()
    void onHealthChanged(const float newHealth);

    UFUNCTION()
    void onFire(const float newCartridgeCount);

    ADrone* drone;
};
