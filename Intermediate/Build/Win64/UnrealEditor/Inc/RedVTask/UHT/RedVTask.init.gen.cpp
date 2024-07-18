// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedVTask_init() {}
	REDVTASK_API UFunction* Z_Construct_UDelegateFunction_RedVTask_OnFire__DelegateSignature();
	REDVTASK_API UFunction* Z_Construct_UDelegateFunction_RedVTask_OnHealthChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RedVTask;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RedVTask()
	{
		if (!Z_Registration_Info_UPackage__Script_RedVTask.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RedVTask_OnFire__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RedVTask_OnHealthChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RedVTask",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFB9C35AA,
				0xACBCA543,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RedVTask.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RedVTask.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RedVTask(Z_Construct_UPackage__Script_RedVTask, TEXT("/Script/RedVTask"), Z_Registration_Info_UPackage__Script_RedVTask, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFB9C35AA, 0xACBCA543));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
