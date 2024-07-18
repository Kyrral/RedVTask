// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedVTask/Public/Missile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
REDVTASK_API UClass* Z_Construct_UClass_AMissile();
REDVTASK_API UClass* Z_Construct_UClass_AMissile_NoRegister();
UPackage* Z_Construct_UPackage__Script_RedVTask();
// End Cross Module References

// Begin Class AMissile
void AMissile::StaticRegisterNativesAMissile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMissile);
UClass* Z_Construct_UClass_AMissile_NoRegister()
{
	return AMissile::StaticClass();
}
struct Z_Construct_UClass_AMissile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Missile.h" },
		{ "ModuleRelativePath", "Public/Missile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enemy_MetaData[] = {
		{ "Category", "Missile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/Missile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
		{ "Category", "Missile" },
		{ "ModuleRelativePath", "Public/Missile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
		{ "Category", "Missile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Missile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Missile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_enemy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enemy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMissile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AMissile_Statics::NewProp_enemy_SetBit(void* Obj)
{
	((AMissile*)Obj)->enemy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMissile_Statics::NewProp_enemy = { "enemy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMissile), &Z_Construct_UClass_AMissile_Statics::NewProp_enemy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enemy_MetaData), NewProp_enemy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMissile_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissile, damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_MetaData), NewProp_damage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMissile_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissile, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mesh_MetaData), NewProp_mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMissile_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissile, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMissile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissile_Statics::NewProp_enemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissile_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissile_Statics::NewProp_mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissile_Statics::NewProp_target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMissile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMissile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RedVTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMissile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMissile_Statics::ClassParams = {
	&AMissile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMissile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMissile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMissile_Statics::Class_MetaDataParams), Z_Construct_UClass_AMissile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMissile()
{
	if (!Z_Registration_Info_UClass_AMissile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMissile.OuterSingleton, Z_Construct_UClass_AMissile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMissile.OuterSingleton;
}
template<> REDVTASK_API UClass* StaticClass<AMissile>()
{
	return AMissile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMissile);
AMissile::~AMissile() {}
// End Class AMissile

// Begin Registration
struct Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMissile, AMissile::StaticClass, TEXT("AMissile"), &Z_Registration_Info_UClass_AMissile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMissile), 3468777977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h_1184557048(TEXT("/Script/RedVTask"),
	Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealProject_RedVTask_Source_RedVTask_Public_Missile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
