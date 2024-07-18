#include "MyPlayerController.h"

AMyPlayerController::AMyPlayerController() {
	static ConstructorHelpers::FClassFinder<UTargetWidget> WidgetClassFinder(TEXT("/Game/BP_MainWidget.BP_MainWidget_C"));
	WidgetClass = WidgetClassFinder.Class;
}

void AMyPlayerController::SetGameOverState(const float NewHealth)
{
    if (NewHealth <= 0)
    {
        FInputModeUIOnly InputMode;
        InputMode.SetWidgetToFocus(HUDWidget->TakeWidget());
        SetInputMode(InputMode);

        bShowMouseCursor = true;

        bEnableClickEvents = false;
        bEnableMouseOverEvents = false;
        bEnableTouchEvents = false;
        bEnableTouchOverEvents = false;
    }
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	HUDWidget = CreateWidget<UTargetWidget>(this, WidgetClass);

	if (HUDWidget != nullptr)
	{
		HUDWidget->SetIsFocusable(true);
		HUDWidget->SetVisibility(ESlateVisibility::Visible);
		HUDWidget->AddToViewport(9999);
	}
}