// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurrelHealthBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REDVTASK_TurrelHealthBar_generated_h
#error "TurrelHealthBar.generated.h already included, missing '#pragma once' in TurrelHealthBar.h"
#endif
#define REDVTASK_TurrelHealthBar_generated_h

#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execonHealthChanged);


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurrelHealthBar(); \
	friend struct Z_Construct_UClass_UTurrelHealthBar_Statics; \
public: \
	DECLARE_CLASS(UTurrelHealthBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RedVTask"), NO_API) \
	DECLARE_SERIALIZER(UTurrelHealthBar)


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurrelHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTurrelHealthBar(UTurrelHealthBar&&); \
	UTurrelHealthBar(const UTurrelHealthBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurrelHealthBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurrelHealthBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurrelHealthBar) \
	NO_API virtual ~UTurrelHealthBar();


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_10_PROLOG
#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_13_INCLASS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REDVTASK_API UClass* StaticClass<class UTurrelHealthBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealProject_RedVTask_Source_RedVTask_Public_TurrelHealthBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
