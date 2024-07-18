// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Missile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REDVTASK_Missile_generated_h
#error "Missile.generated.h already included, missing '#pragma once' in Missile.h"
#endif
#define REDVTASK_Missile_generated_h

#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMissile(); \
	friend struct Z_Construct_UClass_AMissile_Statics; \
public: \
	DECLARE_CLASS(AMissile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RedVTask"), NO_API) \
	DECLARE_SERIALIZER(AMissile)


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMissile(AMissile&&); \
	AMissile(const AMissile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMissile) \
	NO_API virtual ~AMissile();


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h_10_PROLOG
#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h_13_INCLASS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REDVTASK_API UClass* StaticClass<class AMissile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
