#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"

#include "Missile.h"
#include "Drone.h"
#include "TurrelHealthBar.h"

#include "EngineUtils.h"

#include "Turel.generated.h"

UCLASS()
class REDVTASK_API ATurel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void UpdateWidgetFacingCamera();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void setTarget();

public:
	//stats
	//
	int health = 50;

	//
	float fireInterval = 1.0f;

	FTimerHandle fireTimerHandler;

	UFUNCTION()
	void CheckTargetInRange();

	bool active = false;
	UFUNCTION()
	void onFireZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void onFireZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
	
	UFUNCTION()
	void onColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* mesh;

	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* collider;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* fireZone;

	void rotate();
	void fire(AActor* OtherActor);

	AMissile* missile;
	ADrone* target;

	//widget
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
	UWidgetComponent* HealthBarWidgetComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UTurrelHealthBar> HealthBarWidgetClass;

	UTurrelHealthBar* HealthBarWidget;
};
