#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

#include "Missile.h"
#include "HealthPack.h"
#include "AmmoPack.h"

#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "Drone.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFire, float, NewCartridgeCount);

UCLASS()
class REDVTASK_API ADrone : public APawn
{
    GENERATED_BODY()

public:
    // Sets default values for this pawn's properties
    ADrone();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // stats
    int cartridgeCount, health;
    int cartridgeMAX = 500, healthMAX = 100;

private:
    // items
    bool ableToPick;
    bool isAlive;

    void SetHealth(float NewHealth);
    void Fire(float NewCartridgeCount);

    // movement
    FVector CurrentVelocity;
    float MovementSpeed;
    float TurnRate;
    float LookUpRate;

    void MoveForward(float value);
    void MoveRight(float value);
    void Turn(float rate);
    void LookUp(float rate);

    // combat
    void fire();

    //
    UPROPERTY(VisibleAnywhere)
    UCameraComponent* CameraComponent;

    UPROPERTY(VisibleAnywhere)
    UFloatingPawnMovement* MovementComponent;

    // colliders
    // health
    UPROPERTY(VisibleAnywhere, Category = "Components")
    USphereComponent* collider;

    // item pickup
    UPROPERTY(VisibleAnywhere, Category = "Components")
    USphereComponent* ItemCollider;

    // fire zone
    UPROPERTY(VisibleAnywhere, Category = "Components")
    USphereComponent* fireZone;

    //
    UPROPERTY(VisibleAnywhere)
    AMissile* missile;

public:
    //
    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnHealthChanged onHealthChanged;

    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnFire onFire;

    void PickUpItem();

    UPROPERTY()
    AHealthPack* CurrentPickupHItem;

    UPROPERTY()
    AAmmoPack* CurrentPickupAItem;

    // main collider
    UFUNCTION()
    void onColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    // item collider
    UFUNCTION()
    void onItemColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void onItemColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);

    // fire zone
    UFUNCTION()
    void onFireZoneColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);

    bool getIsAlive();
};