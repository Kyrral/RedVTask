#pragma once

#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"

#include "TurrelHealthBar.generated.h"

UCLASS()
class REDVTASK_API UTurrelHealthBar : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(meta = (BindWidget))
	UProgressBar* progressBar;

	int health = 50;

public:
	UFUNCTION()
	void onHealthChanged(float newTurelHealth);
};	
