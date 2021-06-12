// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CheckpointManagerComponent.h"

#include "Engine/GameInstance.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UCheckpointManagerComponent::UCheckpointManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	PreviousCheckpointsCanOverwrite = false;
	UseCustomRotator				= false;
	AutomaticallyGetPlayer			= true;
	BIsGameMode						= false;
}

void UCheckpointManagerComponent::SetCurrentCheckpointData( FCheckpointData const FData )
{
	if ( PreviousCheckpointsCanOverwrite )
	{
		FCurrentCheckpointData = FData;
	}
	else
	{
		if ( FData.Priority > FCurrentCheckpointData.Priority )
		{
			FCurrentCheckpointData = FData;
		}		
	}
	
	OnCheckpointTriggered.Broadcast();
}

// Called when the game starts
void UCheckpointManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	AGameModeBase* GameModeOwner		= Cast<AGameModeBase>(GetOwner() );
	UGameInstance* GameInstanceOwner	= Cast<UGameInstance>(GetOwner() );
	if ( !GameModeOwner || !GameInstanceOwner )
	{
		UE_LOG(LogTemp, Warning, TEXT("Component owner is not inheriting from AGameModeBase or UGameInstance."))
	}

	if ( GameModeOwner )
	{
		AGameModeOwner = GameModeOwner;
		BIsGameMode = true;
	}

	if ( GameInstanceOwner )
	{
		UGameInstanceOwner = GameInstanceOwner;
		BIsGameMode = false;
	}
	
	if ( AutomaticallyGetPlayer )
	{
		ACurrentPlayer = UGameplayStatics::GetPlayerPawn( GetWorld(), 0 );
		if (!ACurrentPlayer)
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to retrieve player from world, make sure to set in your GameMode beginplay. "))
		}
	}	
}

void UCheckpointManagerComponent::SetCurrentPlayer( AActor* APlayer )
{
	if ( APlayer ) ACurrentPlayer = APlayer;
}

void UCheckpointManagerComponent::TeleportToLastCheckpoint()
{
	if ( ACurrentPlayer )
	{
		if ( UseCustomRotator )
		{
			ACurrentPlayer->TeleportTo( FCurrentCheckpointData.Location, FCurrentCheckpointData.Rotation, false);
		}
		else
		{
			ACurrentPlayer->TeleportTo( FCurrentCheckpointData.Location, FRotator::ZeroRotator, false);
		}
	}
	else UE_LOG(LogTemp, Warning, TEXT("No player was set. Make sure to set it first."))	
}

