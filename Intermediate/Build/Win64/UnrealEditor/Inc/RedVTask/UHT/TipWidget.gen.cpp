// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedVTask/Public/TipWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipWidget() {}

// Begin Cross Module References
REDVTASK_API UClass* Z_Construct_UClass_UTipWidget();
REDVTASK_API UClass* Z_Construct_UClass_UTipWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RedVTask();
// End Cross Module References

// Begin Class UTipWidget
void UTipWidget::StaticRegisterNativesUTipWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTipWidget);
UClass* Z_Construct_UClass_UTipWidget_NoRegister()
{
	return UTipWidget::StaticClass();
}
struct Z_Construct_UClass_UTipWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TipWidget.h" },
		{ "ModuleRelativePath", "Public/TipWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_txtBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TipWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_txtBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTipWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTipWidget_Statics::NewProp_txtBlock = { "txtBlock", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTipWidget, txtBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_txtBlock_MetaData), NewProp_txtBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTipWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTipWidget_Statics::NewProp_txtBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTipWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTipWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RedVTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTipWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTipWidget_Statics::ClassParams = {
	&UTipWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTipWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTipWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTipWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTipWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTipWidget()
{
	if (!Z_Registration_Info_UClass_UTipWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTipWidget.OuterSingleton, Z_Construct_UClass_UTipWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTipWidget.OuterSingleton;
}
template<> REDVTASK_API UClass* StaticClass<UTipWidget>()
{
	return UTipWidget::StaticClass();
}
UTipWidget::UTipWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTipWidget);
UTipWidget::~UTipWidget() {}
// End Class UTipWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTipWidget, UTipWidget::StaticClass, TEXT("UTipWidget"), &Z_Registration_Info_UClass_UTipWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTipWidget), 650388836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h_741693148(TEXT("/Script/RedVTask"),
	Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
