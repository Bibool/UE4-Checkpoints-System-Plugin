// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CheckpointSystem/Public/CheckpointData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpointData() {}
// Cross Module References
	CHECKPOINTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCheckpointData();
	UPackage* Z_Construct_UPackage__Script_CheckpointSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FCheckpointData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHECKPOINTSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FCheckpointData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckpointData, Z_Construct_UPackage__Script_CheckpointSystem(), TEXT("CheckpointData"), sizeof(FCheckpointData), Get_Z_Construct_UScriptStruct_FCheckpointData_Hash());
	}
	return Singleton;
}
template<> CHECKPOINTSYSTEM_API UScriptStruct* StaticStruct<FCheckpointData>()
{
	return FCheckpointData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCheckpointData(FCheckpointData::StaticStruct, TEXT("/Script/CheckpointSystem"), TEXT("CheckpointData"), false, nullptr, nullptr);
static struct FScriptStruct_CheckpointSystem_StaticRegisterNativesFCheckpointData
{
	FScriptStruct_CheckpointSystem_StaticRegisterNativesFCheckpointData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CheckpointData")),new UScriptStruct::TCppStructOps<FCheckpointData>);
	}
} ScriptStruct_CheckpointSystem_StaticRegisterNativesFCheckpointData;
	struct Z_Construct_UScriptStruct_FCheckpointData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckpointData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Structure containing data for the checkpoints to save.\n*/" },
		{ "ModuleRelativePath", "Public/CheckpointData.h" },
		{ "ToolTip", "Structure containing data for the checkpoints to save." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCheckpointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckpointData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "CheckpointData" },
		{ "Comment", "/** World Location of the checkpoint that the player will be teleported back to. */" },
		{ "ModuleRelativePath", "Public/CheckpointData.h" },
		{ "ToolTip", "World Location of the checkpoint that the player will be teleported back to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCheckpointData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "CheckpointData" },
		{ "Comment", "/** Custom Rotation to apply to player upon going back to checkpoint. */" },
		{ "ModuleRelativePath", "Public/CheckpointData.h" },
		{ "ToolTip", "Custom Rotation to apply to player upon going back to checkpoint." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCheckpointData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "CheckpointData" },
		{ "Comment", "/** Priority of the checkpoint, used to know if it should write-over previous checkpoint. */" },
		{ "ModuleRelativePath", "Public/CheckpointData.h" },
		{ "ToolTip", "Priority of the checkpoint, used to know if it should write-over previous checkpoint." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCheckpointData, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckpointData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_Priority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckpointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CheckpointSystem,
		nullptr,
		&NewStructOps,
		"CheckpointData",
		sizeof(FCheckpointData),
		alignof(FCheckpointData),
		Z_Construct_UScriptStruct_FCheckpointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckpointData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCheckpointData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCheckpointData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CheckpointSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CheckpointData"), sizeof(FCheckpointData), Get_Z_Construct_UScriptStruct_FCheckpointData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCheckpointData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCheckpointData_Hash() { return 2015147930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
