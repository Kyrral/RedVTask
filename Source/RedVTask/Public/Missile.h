#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Missile.generated.h"

UCLASS()
class REDVTASK_API AMissile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMissile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//
	UPROPERTY(EditAnywhere)
	bool enemy;

	UPROPERTY(EditAnywhere)
	int damage;

	void setDamage(bool e);

	UProjectileMovementComponent* ProjectileMovement;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* mesh;

	UPROPERTY(VisibleAnywhere, Category = "Movement")
	AActor* target;
};
