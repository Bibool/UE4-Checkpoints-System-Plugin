// Fill out your copyright notice in the Description page of Project Settings.

#include "Checkpoint.h"

#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CheckpointManagerComponent.h"
#include "Components/CheckpointTriggerComponent.h"


// Sets default values
ACheckpoint::ACheckpoint()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = DefaultSceneRoot;

	TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
	TriggerArea->SetupAttachment(DefaultSceneRoot);

	PlayerVisualization = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PlayerRepresentation"));
	PlayerVisualization->SetupAttachment(DefaultSceneRoot);
	PlayerVisualization->InitCapsuleSize(42.f, 96.0f);

	CustomRotation = CreateDefaultSubobject<UArrowComponent>(TEXT("CustomRotation"));
	CustomRotation->SetupAttachment(PlayerVisualization);

	EditorIcon = CreateDefaultSubobject<UBillboardComponent>(TEXT("EditorIcon"));
	EditorIcon->SetupAttachment(DefaultSceneRoot);

	Priority			= 0;
	DestroyAfterTrigger = true;
}

// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();

	TriggerArea->OnComponentBeginOverlap.AddDynamic(this, &ACheckpoint::OnBeginOverlap);
	
	FData.Priority = Priority;
	FData.Location = PlayerVisualization->GetComponentLocation();
	FData.Rotation = FRotator( 0, CustomRotation->GetComponentRotation().Yaw , 0);	
}

void ACheckpoint::OnBeginOverlap( UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{
	if ( OtherActor->FindComponentByClass<UCheckpointTriggerComponent>() )
	{
		if ( UCheckpointManagerComponent* Comp = UGameplayStatics::GetGameMode(GetWorld())->FindComponentByClass<UCheckpointManagerComponent>() )
		{
			Comp->SetCurrentCheckpointData( FData );

			if ( DestroyAfterTrigger )
			{
				Destroy();
			}
		}
	}
}
