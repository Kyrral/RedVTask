// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REDVTASK_TargetWidget_generated_h
#error "TargetWidget.generated.h already included, missing '#pragma once' in TargetWidget.h"
#endif
#define REDVTASK_TargetWidget_generated_h

#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execonFire); \
	DECLARE_FUNCTION(execonHealthChanged);


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetWidget(); \
	friend struct Z_Construct_UClass_UTargetWidget_Statics; \
public: \
	DECLARE_CLASS(UTargetWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RedVTask"), NO_API) \
	DECLARE_SERIALIZER(UTargetWidget)


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTargetWidget(UTargetWidget&&); \
	UTargetWidget(const UTargetWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetWidget) \
	NO_API virtual ~UTargetWidget();


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_13_PROLOG
#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REDVTASK_API UClass* StaticClass<class UTargetWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealProject_RedVTask_Source_RedVTask_Public_TargetWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
