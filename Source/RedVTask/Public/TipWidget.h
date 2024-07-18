#pragma once

#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"
#include "Components/Textblock.h"

#include "TipWidget.generated.h"

UCLASS()
class REDVTASK_API UTipWidget : public UUserWidget
{
	GENERATED_BODY()
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* txtBlock;
};
