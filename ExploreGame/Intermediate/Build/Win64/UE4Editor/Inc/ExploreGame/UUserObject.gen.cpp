// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExploreGame/UUserObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUUserObject() {}
// Cross Module References
	EXPLOREGAME_API UClass* Z_Construct_UClass_UUUserObject_NoRegister();
	EXPLOREGAME_API UClass* Z_Construct_UClass_UUUserObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ExploreGame();
// End Cross Module References
	void UUUserObject::StaticRegisterNativesUUUserObject()
	{
	}
	UClass* Z_Construct_UClass_UUUserObject_NoRegister()
	{
		return UUUserObject::StaticClass();
	}
	struct Z_Construct_UClass_UUUserObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUUserObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ExploreGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUUserObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UUserObject.h" },
		{ "ModuleRelativePath", "UUserObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUUserObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUUserObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUUserObject_Statics::ClassParams = {
		&UUUserObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUUserObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUUserObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUUserObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUUserObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUUserObject, 3087470675);
	template<> EXPLOREGAME_API UClass* StaticClass<UUUserObject>()
	{
		return UUUserObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUUserObject(Z_Construct_UClass_UUUserObject, &UUUserObject::StaticClass, TEXT("/Script/ExploreGame"), TEXT("UUUserObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUUserObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
