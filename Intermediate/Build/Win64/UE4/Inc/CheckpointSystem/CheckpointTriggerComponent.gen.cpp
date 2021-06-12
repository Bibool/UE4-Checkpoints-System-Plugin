// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CheckpointSystem/Public/Components/CheckpointTriggerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpointTriggerComponent() {}
// Cross Module References
	CHECKPOINTSYSTEM_API UClass* Z_Construct_UClass_UCheckpointTriggerComponent_NoRegister();
	CHECKPOINTSYSTEM_API UClass* Z_Construct_UClass_UCheckpointTriggerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CheckpointSystem();
// End Cross Module References
	void UCheckpointTriggerComponent::StaticRegisterNativesUCheckpointTriggerComponent()
	{
	}
	UClass* Z_Construct_UClass_UCheckpointTriggerComponent_NoRegister()
	{
		return UCheckpointTriggerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCheckpointTriggerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckpointTriggerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CheckpointSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckpointTriggerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CheckpointTriggerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CheckpointTriggerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckpointTriggerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckpointTriggerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckpointTriggerComponent_Statics::ClassParams = {
		&UCheckpointTriggerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckpointTriggerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointTriggerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckpointTriggerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckpointTriggerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckpointTriggerComponent, 3119174653);
	template<> CHECKPOINTSYSTEM_API UClass* StaticClass<UCheckpointTriggerComponent>()
	{
		return UCheckpointTriggerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckpointTriggerComponent(Z_Construct_UClass_UCheckpointTriggerComponent, &UCheckpointTriggerComponent::StaticClass, TEXT("/Script/CheckpointSystem"), TEXT("UCheckpointTriggerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckpointTriggerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
