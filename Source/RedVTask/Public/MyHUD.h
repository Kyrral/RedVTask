#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"

#include "TargetWidget.h"

#include "MyHUD.generated.h"

UCLASS()
class REDVTASK_API AMyHUD : public AHUD
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

public:

    AMyHUD();
};
