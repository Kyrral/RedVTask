// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedVTask/Public/HealthPackSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPackSpawner() {}

// Begin Cross Module References
REDVTASK_API UClass* Z_Construct_UClass_AHealthPackSpawner();
REDVTASK_API UClass* Z_Construct_UClass_AHealthPackSpawner_NoRegister();
REDVTASK_API UClass* Z_Construct_UClass_ASpawner();
UPackage* Z_Construct_UPackage__Script_RedVTask();
// End Cross Module References

// Begin Class AHealthPackSpawner
void AHealthPackSpawner::StaticRegisterNativesAHealthPackSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthPackSpawner);
UClass* Z_Construct_UClass_AHealthPackSpawner_NoRegister()
{
	return AHealthPackSpawner::StaticClass();
}
struct Z_Construct_UClass_AHealthPackSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HealthPackSpawner.h" },
		{ "ModuleRelativePath", "Public/HealthPackSpawner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPackSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHealthPackSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_RedVTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPackSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthPackSpawner_Statics::ClassParams = {
	&AHealthPackSpawner::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPackSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealthPackSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHealthPackSpawner()
{
	if (!Z_Registration_Info_UClass_AHealthPackSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthPackSpawner.OuterSingleton, Z_Construct_UClass_AHealthPackSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHealthPackSpawner.OuterSingleton;
}
template<> REDVTASK_API UClass* StaticClass<AHealthPackSpawner>()
{
	return AHealthPackSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPackSpawner);
AHealthPackSpawner::~AHealthPackSpawner() {}
// End Class AHealthPackSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_HealthPackSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHealthPackSpawner, AHealthPackSpawner::StaticClass, TEXT("AHealthPackSpawner"), &Z_Registration_Info_UClass_AHealthPackSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthPackSpawner), 3199581732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_HealthPackSpawner_h_261654125(TEXT("/Script/RedVTask"),
	Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_HealthPackSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_HealthPackSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
