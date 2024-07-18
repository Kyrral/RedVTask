// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedVTask/Public/TurrelHealthBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurrelHealthBar() {}

// Begin Cross Module References
REDVTASK_API UClass* Z_Construct_UClass_UTurrelHealthBar();
REDVTASK_API UClass* Z_Construct_UClass_UTurrelHealthBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RedVTask();
// End Cross Module References

// Begin Class UTurrelHealthBar Function onHealthChanged
struct Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics
{
	struct TurrelHealthBar_eventonHealthChanged_Parms
	{
		float newTurelHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurrelHealthBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newTurelHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::NewProp_newTurelHealth = { "newTurelHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurrelHealthBar_eventonHealthChanged_Parms, newTurelHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::NewProp_newTurelHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurrelHealthBar, nullptr, "onHealthChanged", nullptr, nullptr, Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::TurrelHealthBar_eventonHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::TurrelHealthBar_eventonHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurrelHealthBar::execonHealthChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newTurelHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->onHealthChanged(Z_Param_newTurelHealth);
	P_NATIVE_END;
}
// End Class UTurrelHealthBar Function onHealthChanged

// Begin Class UTurrelHealthBar
void UTurrelHealthBar::StaticRegisterNativesUTurrelHealthBar()
{
	UClass* Class = UTurrelHealthBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "onHealthChanged", &UTurrelHealthBar::execonHealthChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurrelHealthBar);
UClass* Z_Construct_UClass_UTurrelHealthBar_NoRegister()
{
	return UTurrelHealthBar::StaticClass();
}
struct Z_Construct_UClass_UTurrelHealthBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TurrelHealthBar.h" },
		{ "ModuleRelativePath", "Public/TurrelHealthBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_progressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurrelHealthBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_progressBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurrelHealthBar_onHealthChanged, "onHealthChanged" }, // 3688667224
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurrelHealthBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurrelHealthBar_Statics::NewProp_progressBar = { "progressBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurrelHealthBar, progressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_progressBar_MetaData), NewProp_progressBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurrelHealthBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurrelHealthBar_Statics::NewProp_progressBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurrelHealthBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTurrelHealthBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RedVTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurrelHealthBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurrelHealthBar_Statics::ClassParams = {
	&UTurrelHealthBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTurrelHealthBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurrelHealthBar_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurrelHealthBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurrelHealthBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurrelHealthBar()
{
	if (!Z_Registration_Info_UClass_UTurrelHealthBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurrelHealthBar.OuterSingleton, Z_Construct_UClass_UTurrelHealthBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurrelHealthBar.OuterSingleton;
}
template<> REDVTASK_API UClass* StaticClass<UTurrelHealthBar>()
{
	return UTurrelHealthBar::StaticClass();
}
UTurrelHealthBar::UTurrelHealthBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurrelHealthBar);
UTurrelHealthBar::~UTurrelHealthBar() {}
// End Class UTurrelHealthBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurrelHealthBar, UTurrelHealthBar::StaticClass, TEXT("UTurrelHealthBar"), &Z_Registration_Info_UClass_UTurrelHealthBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurrelHealthBar), 2707237298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_2992023474(TEXT("/Script/RedVTask"),
	Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
