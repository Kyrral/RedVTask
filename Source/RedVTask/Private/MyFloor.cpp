#include "MyFloor.h"

// Sets default values
AMyFloor::AMyFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = mesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMesh.Succeeded()) mesh->SetStaticMesh(CubeMesh.Object);

	mesh->SetRelativeScale3D(FVector(100.0f, 100.0f, 0.5f));

	mesh->SetCollisionProfileName(TEXT("BlockAll"));
	mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	mesh->SetGenerateOverlapEvents(true);
	mesh->SetCollisionResponseToAllChannels(ECR_Block);
}