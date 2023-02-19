// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExploreGameProject/public/EPGPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPGPlayer() {}
// Cross Module References
	EXPLOREGAMEPROJECT_API UClass* Z_Construct_UClass_AEPGPlayer_NoRegister();
	EXPLOREGAMEPROJECT_API UClass* Z_Construct_UClass_AEPGPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ExploreGameProject();
// End Cross Module References
	void AEPGPlayer::StaticRegisterNativesAEPGPlayer()
	{
	}
	UClass* Z_Construct_UClass_AEPGPlayer_NoRegister()
	{
		return AEPGPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AEPGPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEPGPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ExploreGameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEPGPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EPGPlayer.h" },
		{ "ModuleRelativePath", "public/EPGPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEPGPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEPGPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEPGPlayer_Statics::ClassParams = {
		&AEPGPlayer::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEPGPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEPGPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEPGPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEPGPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEPGPlayer, 2920102056);
	template<> EXPLOREGAMEPROJECT_API UClass* StaticClass<AEPGPlayer>()
	{
		return AEPGPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEPGPlayer(Z_Construct_UClass_AEPGPlayer, &AEPGPlayer::StaticClass, TEXT("/Script/ExploreGameProject"), TEXT("AEPGPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEPGPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
