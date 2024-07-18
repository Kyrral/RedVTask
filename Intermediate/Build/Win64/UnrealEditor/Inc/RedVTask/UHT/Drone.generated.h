// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef REDVTASK_Drone_generated_h
#error "Drone.generated.h already included, missing '#pragma once' in Drone.h"
#endif
#define REDVTASK_Drone_generated_h

#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h_20_DELEGATE \
REDVTASK_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealth);


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h_21_DELEGATE \
REDVTASK_API void FOnFire_DelegateWrapper(const FMulticastScriptDelegate& OnFire, float NewCartridgeCount);


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execonFireZoneColliderEndOverlap); \
	DECLARE_FUNCTION(execonItemColliderEndOverlap); \
	DECLARE_FUNCTION(execonItemColliderBeginOverlap); \
	DECLARE_FUNCTION(execonColliderBeginOverlap);


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrone(); \
	friend struct Z_Construct_UClass_ADrone_Statics; \
public: \
	DECLARE_CLASS(ADrone, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RedVTask"), NO_API) \
	DECLARE_SERIALIZER(ADrone)


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADrone(ADrone&&); \
	ADrone(const ADrone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrone) \
	NO_API virtual ~ADrone();


#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h_23_PROLOG
#define FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h_26_INCLASS_NO_PURE_DECLS \
	FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REDVTASK_API UClass* StaticClass<class ADrone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealProject_RedVTask_Source_RedVTask_Public_Drone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
