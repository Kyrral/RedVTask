// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedVTask/Public/HealthPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
REDVTASK_API UClass* Z_Construct_UClass_AHealthPack();
REDVTASK_API UClass* Z_Construct_UClass_AHealthPack_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RedVTask();
// End Cross Module References

// Begin Class AHealthPack
void AHealthPack::StaticRegisterNativesAHealthPack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthPack);
UClass* Z_Construct_UClass_AHealthPack_NoRegister()
{
	return AHealthPack::StaticClass();
}
struct Z_Construct_UClass_AHealthPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HealthPack.h" },
		{ "ModuleRelativePath", "Public/HealthPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "HealthPack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HealthPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialToApply_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/HealthPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
		{ "Category", "HealthPack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HealthPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widgetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HealthPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/HealthPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialToApply;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widgetComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_widgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthPack_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPack, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthPack_Statics::NewProp_MaterialToApply = { "MaterialToApply", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPack, MaterialToApply), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialToApply_MetaData), NewProp_MaterialToApply_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthPack_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPack, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mesh_MetaData), NewProp_mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthPack_Statics::NewProp_widgetComponent = { "widgetComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPack, widgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widgetComponent_MetaData), NewProp_widgetComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHealthPack_Statics::NewProp_widgetClass = { "widgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPack, widgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widgetClass_MetaData), NewProp_widgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPack_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPack_Statics::NewProp_MaterialToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPack_Statics::NewProp_mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPack_Statics::NewProp_widgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPack_Statics::NewProp_widgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHealthPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RedVTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthPack_Statics::ClassParams = {
	&AHealthPack::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHealthPack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealthPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHealthPack()
{
	if (!Z_Registration_Info_UClass_AHealthPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthPack.OuterSingleton, Z_Construct_UClass_AHealthPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHealthPack.OuterSingleton;
}
template<> REDVTASK_API UClass* StaticClass<AHealthPack>()
{
	return AHealthPack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPack);
AHealthPack::~AHealthPack() {}
// End Class AHealthPack

// Begin Registration
struct Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_HealthPack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHealthPack, AHealthPack::StaticClass, TEXT("AHealthPack"), &Z_Registration_Info_UClass_AHealthPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthPack), 3972457122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_HealthPack_h_4174075718(TEXT("/Script/RedVTask"),
	Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_HealthPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_HealthPack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
