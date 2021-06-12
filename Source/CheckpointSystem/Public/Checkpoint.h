// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "CheckpointData.h"
#include "GameFramework/Actor.h"
#include "Checkpoint.generated.h"

class UArrowComponent;
class UBillboardComponent;
class UBoxComponent;
class UCapsuleComponent;

UCLASS()
class CHECKPOINTSYSTEM_API ACheckpoint : public AActor
{
	GENERATED_BODY()

	public:
	ACheckpoint();

	/** The area in which the checkpoint will be triggered. */
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly )
	UBoxComponent*		TriggerArea;

	/** The rotation the player should be facing at, only uses Yaw (Z). To use this rotation, use the bool on the manager. */
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly )
	UArrowComponent*	CustomRotation;

	/** Where the player should load back onto the checkpoint. */
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly )
	UCapsuleComponent*	PlayerVisualization;

	/** The priority of the checkpoint, the lower the value, the earlier it should be in the level. */
	UPROPERTY( EditAnywhere, BlueprintReadOnly, meta = ( ClampMin = "1", ClampMax = "1000", UIMin = "1", UIMax = "1000" ) )
	int					Priority;

	/** Should this checkpoint self destroy after triggering?
	* If destroyed, it will be unable to be used again. */
	UPROPERTY( EditAnywhere, BlueprintReadOnly )
	bool				DestroyAfterTrigger;

	private:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	USceneComponent*		DefaultSceneRoot;

	UPROPERTY()
	UBillboardComponent*	EditorIcon;

	
	FCheckpointData			FData;

	UFUNCTION()
	void OnBeginOverlap( class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult );
};
