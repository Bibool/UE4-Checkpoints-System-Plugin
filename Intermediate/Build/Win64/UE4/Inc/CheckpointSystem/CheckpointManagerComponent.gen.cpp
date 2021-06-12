// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CheckpointSystem/Public/Components/CheckpointManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpointManagerComponent() {}
// Cross Module References
	CHECKPOINTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointTriggered__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CheckpointSystem();
	CHECKPOINTSYSTEM_API UClass* Z_Construct_UClass_UCheckpointManagerComponent_NoRegister();
	CHECKPOINTSYSTEM_API UClass* Z_Construct_UClass_UCheckpointManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	CHECKPOINTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCheckpointData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointTriggered__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointTriggered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointTriggered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CheckpointSystem, nullptr, "OnCheckpointTriggered__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointTriggered__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointTriggered__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointTriggered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointTriggered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCheckpointManagerComponent::execSetCurrentPlayer)
	{
		P_GET_OBJECT(AActor,Z_Param_APlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentPlayer(Z_Param_APlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckpointManagerComponent::execGetCurrentCheckpointData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCheckpointData*)Z_Param__Result=P_THIS->GetCurrentCheckpointData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckpointManagerComponent::execTeleportToLastCheckpoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportToLastCheckpoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckpointManagerComponent::execSetCurrentCheckpointData)
	{
		P_GET_STRUCT(FCheckpointData,Z_Param_FData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentCheckpointData(Z_Param_FData);
		P_NATIVE_END;
	}
	void UCheckpointManagerComponent::StaticRegisterNativesUCheckpointManagerComponent()
	{
		UClass* Class = UCheckpointManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentCheckpointData", &UCheckpointManagerComponent::execGetCurrentCheckpointData },
			{ "SetCurrentCheckpointData", &UCheckpointManagerComponent::execSetCurrentCheckpointData },
			{ "SetCurrentPlayer", &UCheckpointManagerComponent::execSetCurrentPlayer },
			{ "TeleportToLastCheckpoint", &UCheckpointManagerComponent::execTeleportToLastCheckpoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics
	{
		struct CheckpointManagerComponent_eventGetCurrentCheckpointData_Parms
		{
			FCheckpointData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckpointManagerComponent_eventGetCurrentCheckpointData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCheckpointData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckpointManagerComponent, nullptr, "GetCurrentCheckpointData", nullptr, nullptr, sizeof(CheckpointManagerComponent_eventGetCurrentCheckpointData_Parms), Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics
	{
		struct CheckpointManagerComponent_eventSetCurrentCheckpointData_Parms
		{
			FCheckpointData FData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::NewProp_FData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::NewProp_FData = { "FData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckpointManagerComponent_eventSetCurrentCheckpointData_Parms, FData), Z_Construct_UScriptStruct_FCheckpointData, METADATA_PARAMS(Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::NewProp_FData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::NewProp_FData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::NewProp_FData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets the current checkpoint data.\n\x09* @param FData The new checkpoint data to set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
		{ "ToolTip", "Sets the current checkpoint data.\n@param FData The new checkpoint data to set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckpointManagerComponent, nullptr, "SetCurrentCheckpointData", nullptr, nullptr, sizeof(CheckpointManagerComponent_eventSetCurrentCheckpointData_Parms), Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics
	{
		struct CheckpointManagerComponent_eventSetCurrentPlayer_Parms
		{
			AActor* APlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_APlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics::NewProp_APlayer = { "APlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckpointManagerComponent_eventSetCurrentPlayer_Parms, APlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics::NewProp_APlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckpointManagerComponent, nullptr, "SetCurrentPlayer", nullptr, nullptr, sizeof(CheckpointManagerComponent_eventSetCurrentPlayer_Parms), Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckpointManagerComponent_TeleportToLastCheckpoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckpointManagerComponent_TeleportToLastCheckpoint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Call this function to revert player location back to last set checkpoint. */" },
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
		{ "ToolTip", "Call this function to revert player location back to last set checkpoint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckpointManagerComponent_TeleportToLastCheckpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckpointManagerComponent, nullptr, "TeleportToLastCheckpoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckpointManagerComponent_TeleportToLastCheckpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointManagerComponent_TeleportToLastCheckpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckpointManagerComponent_TeleportToLastCheckpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckpointManagerComponent_TeleportToLastCheckpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckpointManagerComponent_NoRegister()
	{
		return UCheckpointManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCheckpointManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousCheckpointsCanOverwrite_MetaData[];
#endif
		static void NewProp_PreviousCheckpointsCanOverwrite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreviousCheckpointsCanOverwrite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomRotator_MetaData[];
#endif
		static void NewProp_UseCustomRotator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticallyGetPlayer_MetaData[];
#endif
		static void NewProp_AutomaticallyGetPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutomaticallyGetPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCheckpointTriggered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCheckpointTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGameModeOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGameModeOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGameInstanceOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UGameInstanceOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ACurrentPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ACurrentPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckpointManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CheckpointSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckpointManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckpointManagerComponent_GetCurrentCheckpointData, "GetCurrentCheckpointData" }, // 3399166764
		{ &Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentCheckpointData, "SetCurrentCheckpointData" }, // 1605187615
		{ &Z_Construct_UFunction_UCheckpointManagerComponent_SetCurrentPlayer, "SetCurrentPlayer" }, // 4192882563
		{ &Z_Construct_UFunction_UCheckpointManagerComponent_TeleportToLastCheckpoint, "TeleportToLastCheckpoint" }, // 1270719305
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckpointManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CheckpointManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_PreviousCheckpointsCanOverwrite_MetaData[] = {
		{ "Category", "CheckpointManagerComponent" },
		{ "Comment", "/** Can older checkpoints overwrite newer checkpoints?\n\x09* If set to true, running back to a previous checkpoint (which has lower priority)\n\x09* will overwrite the current checkpoint.\n\x09* If false, it will not be able to overwrite it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
		{ "ToolTip", "Can older checkpoints overwrite newer checkpoints?\nIf set to true, running back to a previous checkpoint (which has lower priority)\nwill overwrite the current checkpoint.\nIf false, it will not be able to overwrite it." },
	};
#endif
	void Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_PreviousCheckpointsCanOverwrite_SetBit(void* Obj)
	{
		((UCheckpointManagerComponent*)Obj)->PreviousCheckpointsCanOverwrite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_PreviousCheckpointsCanOverwrite = { "PreviousCheckpointsCanOverwrite", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCheckpointManagerComponent), &Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_PreviousCheckpointsCanOverwrite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_PreviousCheckpointsCanOverwrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_PreviousCheckpointsCanOverwrite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UseCustomRotator_MetaData[] = {
		{ "Category", "CheckpointManagerComponent" },
		{ "Comment", "/** Should the player use the custom rotator set on the checkpoints? */" },
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
		{ "ToolTip", "Should the player use the custom rotator set on the checkpoints?" },
	};
#endif
	void Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UseCustomRotator_SetBit(void* Obj)
	{
		((UCheckpointManagerComponent*)Obj)->UseCustomRotator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UseCustomRotator = { "UseCustomRotator", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCheckpointManagerComponent), &Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UseCustomRotator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UseCustomRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UseCustomRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AutomaticallyGetPlayer_MetaData[] = {
		{ "Category", "CheckpointManagerComponent" },
		{ "Comment", "/** Should the checkpoint manager attempt to automatically retrieve the player from the world?\n\x09*\x09It is better to manually set it in BeginPlay on GameMode by calling SetCurrentPlayer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
		{ "ToolTip", "Should the checkpoint manager attempt to automatically retrieve the player from the world?\n     It is better to manually set it in BeginPlay on GameMode by calling SetCurrentPlayer." },
	};
#endif
	void Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AutomaticallyGetPlayer_SetBit(void* Obj)
	{
		((UCheckpointManagerComponent*)Obj)->AutomaticallyGetPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AutomaticallyGetPlayer = { "AutomaticallyGetPlayer", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCheckpointManagerComponent), &Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AutomaticallyGetPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AutomaticallyGetPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AutomaticallyGetPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_OnCheckpointTriggered_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_OnCheckpointTriggered = { "OnCheckpointTriggered", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckpointManagerComponent, OnCheckpointTriggered), Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointTriggered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_OnCheckpointTriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_OnCheckpointTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AGameModeOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AGameModeOwner = { "AGameModeOwner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckpointManagerComponent, AGameModeOwner), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AGameModeOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AGameModeOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UGameInstanceOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UGameInstanceOwner = { "UGameInstanceOwner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckpointManagerComponent, UGameInstanceOwner), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UGameInstanceOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UGameInstanceOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_ACurrentPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CheckpointManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_ACurrentPlayer = { "ACurrentPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckpointManagerComponent, ACurrentPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_ACurrentPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_ACurrentPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckpointManagerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_PreviousCheckpointsCanOverwrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UseCustomRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AutomaticallyGetPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_OnCheckpointTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_AGameModeOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_UGameInstanceOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckpointManagerComponent_Statics::NewProp_ACurrentPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckpointManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckpointManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckpointManagerComponent_Statics::ClassParams = {
		&UCheckpointManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckpointManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckpointManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckpointManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckpointManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckpointManagerComponent, 2363815056);
	template<> CHECKPOINTSYSTEM_API UClass* StaticClass<UCheckpointManagerComponent>()
	{
		return UCheckpointManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckpointManagerComponent(Z_Construct_UClass_UCheckpointManagerComponent, &UCheckpointManagerComponent::StaticClass, TEXT("/Script/CheckpointSystem"), TEXT("UCheckpointManagerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckpointManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
