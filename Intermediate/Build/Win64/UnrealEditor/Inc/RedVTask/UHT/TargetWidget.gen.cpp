// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedVTask/Public/TargetWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetWidget() {}

// Begin Cross Module References
REDVTASK_API UClass* Z_Construct_UClass_UTargetWidget();
REDVTASK_API UClass* Z_Construct_UClass_UTargetWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RedVTask();
// End Cross Module References

// Begin Class UTargetWidget Function onFire
struct Z_Construct_UFunction_UTargetWidget_onFire_Statics
{
	struct TargetWidget_eventonFire_Parms
	{
		float newCartridgeCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_newCartridgeCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newCartridgeCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetWidget_onFire_Statics::NewProp_newCartridgeCount = { "newCartridgeCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetWidget_eventonFire_Parms, newCartridgeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_newCartridgeCount_MetaData), NewProp_newCartridgeCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetWidget_onFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetWidget_onFire_Statics::NewProp_newCartridgeCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetWidget_onFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetWidget_onFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetWidget, nullptr, "onFire", nullptr, nullptr, Z_Construct_UFunction_UTargetWidget_onFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetWidget_onFire_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetWidget_onFire_Statics::TargetWidget_eventonFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetWidget_onFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetWidget_onFire_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTargetWidget_onFire_Statics::TargetWidget_eventonFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetWidget_onFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetWidget_onFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetWidget::execonFire)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newCartridgeCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->onFire(Z_Param_newCartridgeCount);
	P_NATIVE_END;
}
// End Class UTargetWidget Function onFire

// Begin Class UTargetWidget Function onHealthChanged
struct Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics
{
	struct TargetWidget_eventonHealthChanged_Parms
	{
		float newHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_newHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::NewProp_newHealth = { "newHealth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetWidget_eventonHealthChanged_Parms, newHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_newHealth_MetaData), NewProp_newHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::NewProp_newHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetWidget, nullptr, "onHealthChanged", nullptr, nullptr, Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::TargetWidget_eventonHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::TargetWidget_eventonHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetWidget_onHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetWidget_onHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetWidget::execonHealthChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->onHealthChanged(Z_Param_newHealth);
	P_NATIVE_END;
}
// End Class UTargetWidget Function onHealthChanged

// Begin Class UTargetWidget
void UTargetWidget::StaticRegisterNativesUTargetWidget()
{
	UClass* Class = UTargetWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "onFire", &UTargetWidget::execonFire },
		{ "onHealthChanged", &UTargetWidget::execonHealthChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetWidget);
UClass* Z_Construct_UClass_UTargetWidget_NoRegister()
{
	return UTargetWidget::StaticClass();
}
struct Z_Construct_UClass_UTargetWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TargetWidget.h" },
		{ "ModuleRelativePath", "Public/TargetWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_healthTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cartridgeTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_healthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cartridgeBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gameOverTxt_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_healthTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cartridgeTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_healthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cartridgeBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_gameOverTxt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetWidget_onFire, "onFire" }, // 1937030476
		{ &Z_Construct_UFunction_UTargetWidget_onHealthChanged, "onHealthChanged" }, // 229154897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetWidget_Statics::NewProp_healthTextBlock = { "healthTextBlock", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetWidget, healthTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_healthTextBlock_MetaData), NewProp_healthTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetWidget_Statics::NewProp_cartridgeTextBlock = { "cartridgeTextBlock", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetWidget, cartridgeTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cartridgeTextBlock_MetaData), NewProp_cartridgeTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetWidget_Statics::NewProp_healthBar = { "healthBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetWidget, healthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_healthBar_MetaData), NewProp_healthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetWidget_Statics::NewProp_cartridgeBar = { "cartridgeBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetWidget, cartridgeBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cartridgeBar_MetaData), NewProp_cartridgeBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetWidget_Statics::NewProp_gameOverTxt = { "gameOverTxt", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetWidget, gameOverTxt), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gameOverTxt_MetaData), NewProp_gameOverTxt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetWidget_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetWidget, Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetWidget_Statics::NewProp_healthTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetWidget_Statics::NewProp_cartridgeTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetWidget_Statics::NewProp_healthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetWidget_Statics::NewProp_cartridgeBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetWidget_Statics::NewProp_gameOverTxt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetWidget_Statics::NewProp_Image,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RedVTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetWidget_Statics::ClassParams = {
	&UTargetWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTargetWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetWidget()
{
	if (!Z_Registration_Info_UClass_UTargetWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetWidget.OuterSingleton, Z_Construct_UClass_UTargetWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetWidget.OuterSingleton;
}
template<> REDVTASK_API UClass* StaticClass<UTargetWidget>()
{
	return UTargetWidget::StaticClass();
}
UTargetWidget::UTargetWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetWidget);
UTargetWidget::~UTargetWidget() {}
// End Class UTargetWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetWidget, UTargetWidget::StaticClass, TEXT("UTargetWidget"), &Z_Registration_Info_UClass_UTargetWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetWidget), 1250790032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_1158528729(TEXT("/Script/RedVTask"),
	Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
