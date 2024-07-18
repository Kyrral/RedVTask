// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedVTask/Public/Spawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
REDVTASK_API UClass* Z_Construct_UClass_ASpawner();
REDVTASK_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_RedVTask();
// End Cross Module References

// Begin Class ASpawner
void ASpawner::StaticRegisterNativesASpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawner);
UClass* Z_Construct_UClass_ASpawner_NoRegister()
{
	return ASpawner::StaticClass();
}
struct Z_Construct_UClass_ASpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spawner.h" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numberOfItems_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnAreaMin_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnAreaMax_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numberOfItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_spawnAreaMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_spawnAreaMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemClass_MetaData), NewProp_itemClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_numberOfItems = { "numberOfItems", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, numberOfItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numberOfItems_MetaData), NewProp_numberOfItems_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_spawnAreaMin = { "spawnAreaMin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, spawnAreaMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnAreaMin_MetaData), NewProp_spawnAreaMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_spawnAreaMax = { "spawnAreaMax", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, spawnAreaMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnAreaMax_MetaData), NewProp_spawnAreaMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_itemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_numberOfItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_spawnAreaMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_spawnAreaMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_TraceDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RedVTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
	&ASpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawner()
{
	if (!Z_Registration_Info_UClass_ASpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawner.OuterSingleton, Z_Construct_UClass_ASpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawner.OuterSingleton;
}
template<> REDVTASK_API UClass* StaticClass<ASpawner>()
{
	return ASpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
ASpawner::~ASpawner() {}
// End Class ASpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_Spawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawner, ASpawner::StaticClass, TEXT("ASpawner"), &Z_Registration_Info_UClass_ASpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner), 908963633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_Spawner_h_507339699(TEXT("/Script/RedVTask"),
	Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_Spawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_Spawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
