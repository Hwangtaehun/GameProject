// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExploreGame/ExploreGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExploreGameGameMode() {}
// Cross Module References
	EXPLOREGAME_API UClass* Z_Construct_UClass_AExploreGameGameMode_NoRegister();
	EXPLOREGAME_API UClass* Z_Construct_UClass_AExploreGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ExploreGame();
// End Cross Module References
	void AExploreGameGameMode::StaticRegisterNativesAExploreGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AExploreGameGameMode_NoRegister()
	{
		return AExploreGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExploreGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExploreGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ExploreGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExploreGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ExploreGameGameMode.h" },
		{ "ModuleRelativePath", "ExploreGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExploreGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExploreGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExploreGameGameMode_Statics::ClassParams = {
		&AExploreGameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AExploreGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExploreGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExploreGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExploreGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExploreGameGameMode, 4234178191);
	template<> EXPLOREGAME_API UClass* StaticClass<AExploreGameGameMode>()
	{
		return AExploreGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExploreGameGameMode(Z_Construct_UClass_AExploreGameGameMode, &AExploreGameGameMode::StaticClass, TEXT("/Script/ExploreGame"), TEXT("AExploreGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExploreGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
