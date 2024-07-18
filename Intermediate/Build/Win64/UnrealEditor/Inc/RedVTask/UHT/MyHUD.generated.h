// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REDVTASK_MyHUD_generated_h
#error "MyHUD.generated.h already included, missing '#pragma once' in MyHUD.h"
#endif
#define REDVTASK_MyHUD_generated_h

#define FID_unrealProject_RedVTask_Source_RedVTask_Public_MyHUD_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend struct Z_Construct_UClass_AMyHUD_Statics; \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RedVTask"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD)


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_MyHUD_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyHUD(AMyHUD&&); \
	AMyHUD(const AMyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyHUD) \
	NO_API virtual ~AMyHUD();


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_MyHUD_h_10_PROLOG
#define FID_unrealProject_RedVTask_Source_RedVTask_Public_MyHUD_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_MyHUD_h_13_INCLASS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_MyHUD_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REDVTASK_API UClass* StaticClass<class AMyHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealProject_RedVTask_Source_RedVTask_Public_MyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
