// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "CheckpointData.h"
#include "Components/ActorComponent.h"


#include "CheckpointManagerComponent.generated.h"

class AGameModeBase;
class UGameInstance;


DECLARE_DYNAMIC_MULTICAST_DELEGATE( FOnCheckpointTriggered ) ;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CHECKPOINTSYSTEM_API UCheckpointManagerComponent : public UActorComponent
{
	GENERATED_BODY()

	public:
	// Sets default values for this component's properties
	UCheckpointManagerComponent();

	/** Sets the current checkpoint data.
	* @param FData The new checkpoint data to set.
	*/
	UFUNCTION( BlueprintCallable )
	void SetCurrentCheckpointData( FCheckpointData const FData );

	/** Call this function to revert player location back to last set checkpoint. */
	UFUNCTION( BlueprintCallable )
	void TeleportToLastCheckpoint();	

	/** Can older checkpoints overwrite newer checkpoints?
	* If set to true, running back to a previous checkpoint (which has lower priority)
	* will overwrite the current checkpoint.
	* If false, it will not be able to overwrite it.
	*/
	UPROPERTY( EditDefaultsOnly )
	bool PreviousCheckpointsCanOverwrite;

	/** Should the player use the custom rotator set on the checkpoints? */
	UPROPERTY( EditDefaultsOnly )
	bool UseCustomRotator;

	/** Should the checkpoint manager attempt to automatically retrieve the player from the world?
	*	It is better to manually set it in BeginPlay on GameMode by calling SetCurrentPlayer.
	*/
	UPROPERTY( EditDefaultsOnly )
	bool AutomaticallyGetPlayer;

	UPROPERTY( BlueprintCallable, BlueprintAssignable )
	FOnCheckpointTriggered OnCheckpointTriggered;
	
	protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION( BlueprintCallable )
	FORCEINLINE FCheckpointData GetCurrentCheckpointData() const { return FCurrentCheckpointData; }

	UFUNCTION(BlueprintCallable)
	void SetCurrentPlayer( AActor* APlayer );

	private:
	FCheckpointData FCurrentCheckpointData;
	
	UPROPERTY()
	AGameModeBase*	AGameModeOwner;

	UPROPERTY()
	UGameInstance*	UGameInstanceOwner;

	UPROPERTY()
	AActor*			ACurrentPlayer;

	bool			BIsGameMode;
};
