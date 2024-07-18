// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedVTask/Public/AmmoPackSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoPackSpawner() {}

// Begin Cross Module References
REDVTASK_API UClass* Z_Construct_UClass_AAmmoPackSpawner();
REDVTASK_API UClass* Z_Construct_UClass_AAmmoPackSpawner_NoRegister();
REDVTASK_API UClass* Z_Construct_UClass_ASpawner();
UPackage* Z_Construct_UPackage__Script_RedVTask();
// End Cross Module References

// Begin Class AAmmoPackSpawner
void AAmmoPackSpawner::StaticRegisterNativesAAmmoPackSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmoPackSpawner);
UClass* Z_Construct_UClass_AAmmoPackSpawner_NoRegister()
{
	return AAmmoPackSpawner::StaticClass();
}
struct Z_Construct_UClass_AAmmoPackSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AmmoPackSpawner.h" },
		{ "ModuleRelativePath", "Public/AmmoPackSpawner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPackSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAmmoPackSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_RedVTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPackSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPackSpawner_Statics::ClassParams = {
	&AAmmoPackSpawner::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPackSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmmoPackSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAmmoPackSpawner()
{
	if (!Z_Registration_Info_UClass_AAmmoPackSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmoPackSpawner.OuterSingleton, Z_Construct_UClass_AAmmoPackSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAmmoPackSpawner.OuterSingleton;
}
template<> REDVTASK_API UClass* StaticClass<AAmmoPackSpawner>()
{
	return AAmmoPackSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPackSpawner);
AAmmoPackSpawner::~AAmmoPackSpawner() {}
// End Class AAmmoPackSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_AmmoPackSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAmmoPackSpawner, AAmmoPackSpawner::StaticClass, TEXT("AAmmoPackSpawner"), &Z_Registration_Info_UClass_AAmmoPackSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmoPackSpawner), 1812057477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_AmmoPackSpawner_h_3841086606(TEXT("/Script/RedVTask"),
	Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_AmmoPackSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_AmmoPackSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
