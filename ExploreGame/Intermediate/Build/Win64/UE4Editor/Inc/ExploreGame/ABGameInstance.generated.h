// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXPLOREGAME_ABGameInstance_generated_h
#error "ABGameInstance.generated.h already included, missing '#pragma once' in ABGameInstance.h"
#endif
#define EXPLOREGAME_ABGameInstance_generated_h

#define ExploreGame_Source_ExploreGame_ABGameInstance_h_15_SPARSE_DATA
#define ExploreGame_Source_ExploreGame_ABGameInstance_h_15_RPC_WRAPPERS
#define ExploreGame_Source_ExploreGame_ABGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ExploreGame_Source_ExploreGame_ABGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABGameInstance(); \
	friend struct Z_Construct_UClass_UABGameInstance_Statics; \
public: \
	DECLARE_CLASS(UABGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ExploreGame"), NO_API) \
	DECLARE_SERIALIZER(UABGameInstance)


#define ExploreGame_Source_ExploreGame_ABGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUABGameInstance(); \
	friend struct Z_Construct_UClass_UABGameInstance_Statics; \
public: \
	DECLARE_CLASS(UABGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ExploreGame"), NO_API) \
	DECLARE_SERIALIZER(UABGameInstance)


#define ExploreGame_Source_ExploreGame_ABGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameInstance(UABGameInstance&&); \
	NO_API UABGameInstance(const UABGameInstance&); \
public:


#define ExploreGame_Source_ExploreGame_ABGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameInstance(UABGameInstance&&); \
	NO_API UABGameInstance(const UABGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameInstance)


#define ExploreGame_Source_ExploreGame_ABGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define ExploreGame_Source_ExploreGame_ABGameInstance_h_12_PROLOG
#define ExploreGame_Source_ExploreGame_ABGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreGame_Source_ExploreGame_ABGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	ExploreGame_Source_ExploreGame_ABGameInstance_h_15_SPARSE_DATA \
	ExploreGame_Source_ExploreGame_ABGameInstance_h_15_RPC_WRAPPERS \
	ExploreGame_Source_ExploreGame_ABGameInstance_h_15_INCLASS \
	ExploreGame_Source_ExploreGame_ABGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ExploreGame_Source_ExploreGame_ABGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreGame_Source_ExploreGame_ABGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	ExploreGame_Source_ExploreGame_ABGameInstance_h_15_SPARSE_DATA \
	ExploreGame_Source_ExploreGame_ABGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ExploreGame_Source_ExploreGame_ABGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	ExploreGame_Source_ExploreGame_ABGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPLOREGAME_API UClass* StaticClass<class UABGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ExploreGame_Source_ExploreGame_ABGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
