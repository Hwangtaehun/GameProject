// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExploreGameProject/ExploreGameProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExploreGameProjectGameModeBase() {}
// Cross Module References
	EXPLOREGAMEPROJECT_API UClass* Z_Construct_UClass_AExploreGameProjectGameModeBase_NoRegister();
	EXPLOREGAMEPROJECT_API UClass* Z_Construct_UClass_AExploreGameProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ExploreGameProject();
// End Cross Module References
	void AExploreGameProjectGameModeBase::StaticRegisterNativesAExploreGameProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AExploreGameProjectGameModeBase_NoRegister()
	{
		return AExploreGameProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AExploreGameProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExploreGameProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ExploreGameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExploreGameProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ExploreGameProjectGameModeBase.h" },
		{ "ModuleRelativePath", "ExploreGameProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExploreGameProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExploreGameProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExploreGameProjectGameModeBase_Statics::ClassParams = {
		&AExploreGameProjectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExploreGameProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExploreGameProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExploreGameProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExploreGameProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExploreGameProjectGameModeBase, 2591118988);
	template<> EXPLOREGAMEPROJECT_API UClass* StaticClass<AExploreGameProjectGameModeBase>()
	{
		return AExploreGameProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExploreGameProjectGameModeBase(Z_Construct_UClass_AExploreGameProjectGameModeBase, &AExploreGameProjectGameModeBase::StaticClass, TEXT("/Script/ExploreGameProject"), TEXT("AExploreGameProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExploreGameProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
