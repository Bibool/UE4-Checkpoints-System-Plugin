// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CheckpointData.generated.h"

/**
* Structure containing data for the checkpoints to save.
*/

USTRUCT(BlueprintType)
struct FCheckpointData
{
	GENERATED_BODY()

	/** World Location of the checkpoint that the player will be teleported back to. */
	UPROPERTY( BlueprintReadWrite )
	FVector			Location;
	
	/** Custom Rotation to apply to player upon going back to checkpoint. */
	UPROPERTY( BlueprintReadWrite )
	FRotator		Rotation;
	
	/** Priority of the checkpoint, used to know if it should write-over previous checkpoint. */
	UPROPERTY( BlueprintReadWrite )
	int				Priority;
};