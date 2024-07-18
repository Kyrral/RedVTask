#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Materials/MaterialInterface.h"

#include "Kismet/GameplayStatics.h"

#include "AmmoPack.generated.h"

UCLASS()
class REDVTASK_API AAmmoPack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAmmoPack();

	void BeginPlay() override;
	void Tick(float DeltaTime) override;

	void setWidgetVisibility(bool v);


	int cartridgePoints = 10;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* mesh;

	// widget
	UPROPERTY()
	UWidgetComponent* widgetComponent;

	UPROPERTY()
	TSubclassOf<UUserWidget> widgetClass;

	UUserWidget* widget;

	// material
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, Category = "Material")
	UMaterialInterface* MaterialToApply;

private:
	void UpdateWidgetFacingCamera();
};
