#include "TargetWidget.h"

#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/PanelWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"

void UTargetWidget::NativeConstruct()
{
    Super::NativeConstruct();

    gameOverTxt->SetVisibility(ESlateVisibility::Hidden);

    drone = Cast<ADrone>(GetOwningPlayerPawn());
    if (drone) {
        drone->onHealthChanged.AddDynamic(this, &ThisClass::onHealthChanged);
        drone->onFire.AddDynamic(this, &ThisClass::onFire);
    }
}

void UTargetWidget::onHealthChanged(const float NewHealth) {
    float MaxHealth = 100.0f;

    if (NewHealth == 0) {
        healthTextBlock->SetVisibility(ESlateVisibility::Hidden);
        cartridgeTextBlock->SetVisibility(ESlateVisibility::Hidden);
        healthBar->SetVisibility(ESlateVisibility::Hidden);
        cartridgeBar->SetVisibility(ESlateVisibility::Hidden);
        Image->SetVisibility(ESlateVisibility::Hidden);

        gameOverTxt->SetVisibility(ESlateVisibility::Visible);
    }

    FText text = FText::Format(NSLOCTEXT("Health", "HealthFormat", "{0}/{1}"),
        FText::AsNumber(FMath::RoundToInt(NewHealth)),
        FText::AsNumber(FMath::RoundToInt(MaxHealth)));

    healthTextBlock->SetText(text);
    healthBar->SetPercent(NewHealth / MaxHealth);
}

void UTargetWidget::onFire(const float newCartridgeCount)
{
    float MaxC = 500.0f;
    if (cartridgeTextBlock)
    {
        FText text = FText::Format(
            FText::FromString("{0}/{1}"),
            FText::AsNumber(FMath::RoundToInt(newCartridgeCount)),
            FText::AsNumber(FMath::RoundToInt(MaxC))
        );

        cartridgeTextBlock->SetText(text);
    }

    if (cartridgeBar)
    {
        float Percent = FMath::Clamp(newCartridgeCount / MaxC, 0.0f, 1.0f);
        cartridgeBar->SetPercent(Percent);
    }

    cartridgeBar->SetPercent(newCartridgeCount / 500.0f);
}