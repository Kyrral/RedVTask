#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"

#include "Kismet/GameplayStatics.h"

#include "HealthPack.generated.h"

UCLASS()
class REDVTASK_API AHealthPack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealthPack();
	int healthPoints = 25;

	void BeginPlay() override;
	void Tick(float DeltaTime) override;

	void setWidgetVisibility(bool v);

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, Category = "Material")
	UMaterialInterface* MaterialToApply;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* mesh;

	UPROPERTY()
	UWidgetComponent* widgetComponent;

	UPROPERTY()
	TSubclassOf<UUserWidget> widgetClass;

	UUserWidget* widget;

	void UpdateWidgetFacingCamera();
};
