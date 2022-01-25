// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsConstraint/PhysicsConstraintGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsConstraintGameMode() {}
// Cross Module References
	PHYSICSCONSTRAINT_API UClass* Z_Construct_UClass_APhysicsConstraintGameMode_NoRegister();
	PHYSICSCONSTRAINT_API UClass* Z_Construct_UClass_APhysicsConstraintGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PhysicsConstraint();
// End Cross Module References
	void APhysicsConstraintGameMode::StaticRegisterNativesAPhysicsConstraintGameMode()
	{
	}
	UClass* Z_Construct_UClass_APhysicsConstraintGameMode_NoRegister()
	{
		return APhysicsConstraintGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsConstraintGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsConstraintGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsConstraint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PhysicsConstraintGameMode.h" },
		{ "ModuleRelativePath", "PhysicsConstraintGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsConstraintGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsConstraintGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhysicsConstraintGameMode_Statics::ClassParams = {
		&APhysicsConstraintGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsConstraintGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhysicsConstraintGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhysicsConstraintGameMode, 2286206609);
	template<> PHYSICSCONSTRAINT_API UClass* StaticClass<APhysicsConstraintGameMode>()
	{
		return APhysicsConstraintGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsConstraintGameMode(Z_Construct_UClass_APhysicsConstraintGameMode, &APhysicsConstraintGameMode::StaticClass, TEXT("/Script/PhysicsConstraint"), TEXT("APhysicsConstraintGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsConstraintGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
