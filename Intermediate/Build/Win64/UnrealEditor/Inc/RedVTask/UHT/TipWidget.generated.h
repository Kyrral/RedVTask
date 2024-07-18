// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TipWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REDVTASK_TipWidget_generated_h
#error "TipWidget.generated.h already included, missing '#pragma once' in TipWidget.h"
#endif
#define REDVTASK_TipWidget_generated_h

#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTipWidget(); \
	friend struct Z_Construct_UClass_UTipWidget_Statics; \
public: \
	DECLARE_CLASS(UTipWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RedVTask"), NO_API) \
	DECLARE_SERIALIZER(UTipWidget)


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTipWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTipWidget(UTipWidget&&); \
	UTipWidget(const UTipWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTipWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTipWidget) \
	NO_API virtual ~UTipWidget();


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h_10_PROLOG
#define FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h_13_INCLASS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REDVTASK_API UClass* StaticClass<class UTipWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealProject_RedVTask_Source_RedVTask_Public_TipWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
