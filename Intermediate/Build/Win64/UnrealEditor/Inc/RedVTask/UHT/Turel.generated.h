// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Turel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef REDVTASK_Turel_generated_h
#error "Turel.generated.h already included, missing '#pragma once' in Turel.h"
#endif
#define REDVTASK_Turel_generated_h

#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Turel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execonColliderBeginOverlap); \
	DECLARE_FUNCTION(execonFireZoneEndOverlap); \
	DECLARE_FUNCTION(execonFireZoneBeginOverlap); \
	DECLARE_FUNCTION(execCheckTargetInRange);


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Turel_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurel(); \
	friend struct Z_Construct_UClass_ATurel_Statics; \
public: \
	DECLARE_CLASS(ATurel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RedVTask"), NO_API) \
	DECLARE_SERIALIZER(ATurel)


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Turel_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATurel(ATurel&&); \
	ATurel(const ATurel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurel) \
	NO_API virtual ~ATurel();


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Turel_h_19_PROLOG
#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Turel_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_Turel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_Turel_h_22_INCLASS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_Turel_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REDVTASK_API UClass* StaticClass<class ATurel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealProject_RedVTask_Source_RedVTask_Public_Turel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
