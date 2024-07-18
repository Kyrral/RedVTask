#include "MainGameMode.h"

AMainGameMode::AMainGameMode()
{
    HUDClass = AMyHUD::StaticClass();
    PlayerControllerClass = AMyPlayerController::StaticClass();
    DefaultPawnClass = ADrone::StaticClass();
}

void AMainGameMode::BeginPlay()
{
    Super::BeginPlay();
   
    world = GetWorld();

    FVector spawnLocation(0.0f, 0.0f, 0.0f);
    FRotator spawnRotation(0.0f, 0.0f, 0.0f);

    // floor
    AMyFloor* floor = world->SpawnActor<AMyFloor>(AMyFloor::StaticClass(), spawnLocation, spawnRotation);

    // player and player start
    PlayerStart = world->SpawnActor<APlayerStart>(APlayerStart::StaticClass(), { 0.0f, 0.0f, 2000.0f }, { 0.0f, 0.0f, 0.0f });
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    
    drone = world->SpawnActor<ADrone>(DefaultPawnClass, PlayerStart->GetActorLocation(), PlayerStart->GetActorRotation());
    PlayerController->Possess(drone);
    PlayerController->SetInitialLocationAndRotation(PlayerStart->GetActorLocation(), PlayerStart->GetActorRotation());

    // turrels
    TSubclassOf<ATurrelSpawner> ts = ATurrelSpawner::StaticClass();
    world->SpawnActor<ATurrelSpawner>(ts, spawnLocation, spawnRotation);

    // health packs
    TSubclassOf<AHealthPackSpawner> hps = AHealthPackSpawner::StaticClass();
    world->SpawnActor<AHealthPackSpawner>(hps, spawnLocation, spawnRotation);

    // ammo packs
    TSubclassOf<AAmmoPackSpawner> aps = AAmmoPackSpawner::StaticClass();
    world->SpawnActor<AAmmoPackSpawner>(aps, spawnLocation, spawnRotation);
}