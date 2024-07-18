// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedVTask/Public/AmmoPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoPack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
REDVTASK_API UClass* Z_Construct_UClass_AAmmoPack();
REDVTASK_API UClass* Z_Construct_UClass_AAmmoPack_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RedVTask();
// End Cross Module References

// Begin Class AAmmoPack
void AAmmoPack::StaticRegisterNativesAAmmoPack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmoPack);
UClass* Z_Construct_UClass_AAmmoPack_NoRegister()
{
	return AAmmoPack::StaticClass();
}
struct Z_Construct_UClass_AAmmoPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AmmoPack.h" },
		{ "ModuleRelativePath", "Public/AmmoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
		{ "Category", "AmmoPack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmmoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widgetComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmmoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmmoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "AmmoPack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// material\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmmoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialToApply_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/AmmoPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widgetComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_widgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialToApply;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoPack_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPack, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mesh_MetaData), NewProp_mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoPack_Statics::NewProp_widgetComponent = { "widgetComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPack, widgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widgetComponent_MetaData), NewProp_widgetComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAmmoPack_Statics::NewProp_widgetClass = { "widgetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPack, widgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widgetClass_MetaData), NewProp_widgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoPack_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPack, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoPack_Statics::NewProp_MaterialToApply = { "MaterialToApply", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPack, MaterialToApply), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialToApply_MetaData), NewProp_MaterialToApply_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPack_Statics::NewProp_mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPack_Statics::NewProp_widgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPack_Statics::NewProp_widgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPack_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPack_Statics::NewProp_MaterialToApply,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAmmoPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RedVTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPack_Statics::ClassParams = {
	&AAmmoPack::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAmmoPack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPack_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPack_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmmoPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAmmoPack()
{
	if (!Z_Registration_Info_UClass_AAmmoPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmoPack.OuterSingleton, Z_Construct_UClass_AAmmoPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAmmoPack.OuterSingleton;
}
template<> REDVTASK_API UClass* StaticClass<AAmmoPack>()
{
	return AAmmoPack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPack);
AAmmoPack::~AAmmoPack() {}
// End Class AAmmoPack

// Begin Registration
struct Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_AmmoPack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAmmoPack, AAmmoPack::StaticClass, TEXT("AAmmoPack"), &Z_Registration_Info_UClass_AAmmoPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmoPack), 3940784495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_AmmoPack_h_2456206819(TEXT("/Script/RedVTask"),
	Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_AmmoPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_AmmoPack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
