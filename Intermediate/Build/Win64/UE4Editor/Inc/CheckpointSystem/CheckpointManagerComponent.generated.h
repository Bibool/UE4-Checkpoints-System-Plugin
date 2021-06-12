// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FCheckpointData;
#ifdef CHECKPOINTSYSTEM_CheckpointManagerComponent_generated_h
#error "CheckpointManagerComponent.generated.h already included, missing '#pragma once' in CheckpointManagerComponent.h"
#endif
#define CHECKPOINTSYSTEM_CheckpointManagerComponent_generated_h

#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_17_DELEGATE \
static inline void FOnCheckpointTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnCheckpointTriggered) \
{ \
	OnCheckpointTriggered.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_SPARSE_DATA
#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrentPlayer); \
	DECLARE_FUNCTION(execGetCurrentCheckpointData); \
	DECLARE_FUNCTION(execTeleportToLastCheckpoint); \
	DECLARE_FUNCTION(execSetCurrentCheckpointData);


#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentPlayer); \
	DECLARE_FUNCTION(execGetCurrentCheckpointData); \
	DECLARE_FUNCTION(execTeleportToLastCheckpoint); \
	DECLARE_FUNCTION(execSetCurrentCheckpointData);


#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckpointManagerComponent(); \
	friend struct Z_Construct_UClass_UCheckpointManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UCheckpointManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CheckpointSystem"), NO_API) \
	DECLARE_SERIALIZER(UCheckpointManagerComponent)


#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCheckpointManagerComponent(); \
	friend struct Z_Construct_UClass_UCheckpointManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UCheckpointManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CheckpointSystem"), NO_API) \
	DECLARE_SERIALIZER(UCheckpointManagerComponent)


#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckpointManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckpointManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckpointManagerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckpointManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckpointManagerComponent(UCheckpointManagerComponent&&); \
	NO_API UCheckpointManagerComponent(const UCheckpointManagerComponent&); \
public:


#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckpointManagerComponent(UCheckpointManagerComponent&&); \
	NO_API UCheckpointManagerComponent(const UCheckpointManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckpointManagerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckpointManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCheckpointManagerComponent)


#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AGameModeOwner() { return STRUCT_OFFSET(UCheckpointManagerComponent, AGameModeOwner); } \
	FORCEINLINE static uint32 __PPO__UGameInstanceOwner() { return STRUCT_OFFSET(UCheckpointManagerComponent, UGameInstanceOwner); } \
	FORCEINLINE static uint32 __PPO__ACurrentPlayer() { return STRUCT_OFFSET(UCheckpointManagerComponent, ACurrentPlayer); }


#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_19_PROLOG
#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_SPARSE_DATA \
	HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_RPC_WRAPPERS \
	HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_INCLASS \
	HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_SPARSE_DATA \
	HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHECKPOINTSYSTEM_API UClass* StaticClass<class UCheckpointManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_CheckpointSystem_Source_CheckpointSystem_Public_Components_CheckpointManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
