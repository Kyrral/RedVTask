// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedVTask/Public/TurrelSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurrelSpawner() {}

// Begin Cross Module References
REDVTASK_API UClass* Z_Construct_UClass_ASpawner();
REDVTASK_API UClass* Z_Construct_UClass_ATurrelSpawner();
REDVTASK_API UClass* Z_Construct_UClass_ATurrelSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_RedVTask();
// End Cross Module References

// Begin Class ATurrelSpawner
void ATurrelSpawner::StaticRegisterNativesATurrelSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurrelSpawner);
UClass* Z_Construct_UClass_ATurrelSpawner_NoRegister()
{
	return ATurrelSpawner::StaticClass();
}
struct Z_Construct_UClass_ATurrelSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TurrelSpawner.h" },
		{ "ModuleRelativePath", "Public/TurrelSpawner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurrelSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATurrelSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_RedVTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurrelSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurrelSpawner_Statics::ClassParams = {
	&ATurrelSpawner::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurrelSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurrelSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATurrelSpawner()
{
	if (!Z_Registration_Info_UClass_ATurrelSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurrelSpawner.OuterSingleton, Z_Construct_UClass_ATurrelSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATurrelSpawner.OuterSingleton;
}
template<> REDVTASK_API UClass* StaticClass<ATurrelSpawner>()
{
	return ATurrelSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATurrelSpawner);
ATurrelSpawner::~ATurrelSpawner() {}
// End Class ATurrelSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATurrelSpawner, ATurrelSpawner::StaticClass, TEXT("ATurrelSpawner"), &Z_Registration_Info_UClass_ATurrelSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurrelSpawner), 2769619788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelSpawner_h_721935559(TEXT("/Script/RedVTask"),
	Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
