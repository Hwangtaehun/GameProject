// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExploreGameProject/public/Fireball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireball() {}
// Cross Module References
	EXPLOREGAMEPROJECT_API UClass* Z_Construct_UClass_AFireball_NoRegister();
	EXPLOREGAMEPROJECT_API UClass* Z_Construct_UClass_AFireball();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ExploreGameProject();
// End Cross Module References
	void AFireball::StaticRegisterNativesAFireball()
	{
	}
	UClass* Z_Construct_UClass_AFireball_NoRegister()
	{
		return AFireball::StaticClass();
	}
	struct Z_Construct_UClass_AFireball_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ExploreGameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fireball.h" },
		{ "ModuleRelativePath", "public/Fireball.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireball>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFireball_Statics::ClassParams = {
		&AFireball::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFireball_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFireball()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFireball_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFireball, 2236146714);
	template<> EXPLOREGAMEPROJECT_API UClass* StaticClass<AFireball>()
	{
		return AFireball::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFireball(Z_Construct_UClass_AFireball, &AFireball::StaticClass, TEXT("/Script/ExploreGameProject"), TEXT("AFireball"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireball);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
