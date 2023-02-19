// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXPLOREGAMEPROJECT_EnemyFSM_generated_h
#error "EnemyFSM.generated.h already included, missing '#pragma once' in EnemyFSM.h"
#endif
#define EXPLOREGAMEPROJECT_EnemyFSM_generated_h

#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_SPARSE_DATA
#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_RPC_WRAPPERS
#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyFSM(); \
	friend struct Z_Construct_UClass_UEnemyFSM_Statics; \
public: \
	DECLARE_CLASS(UEnemyFSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExploreGameProject"), NO_API) \
	DECLARE_SERIALIZER(UEnemyFSM)


#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUEnemyFSM(); \
	friend struct Z_Construct_UClass_UEnemyFSM_Statics; \
public: \
	DECLARE_CLASS(UEnemyFSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExploreGameProject"), NO_API) \
	DECLARE_SERIALIZER(UEnemyFSM)


#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyFSM(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyFSM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyFSM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyFSM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyFSM(UEnemyFSM&&); \
	NO_API UEnemyFSM(const UEnemyFSM&); \
public:


#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyFSM(UEnemyFSM&&); \
	NO_API UEnemyFSM(const UEnemyFSM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyFSM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyFSM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemyFSM)


#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_PRIVATE_PROPERTY_OFFSET
#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_19_PROLOG
#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_PRIVATE_PROPERTY_OFFSET \
	ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_SPARSE_DATA \
	ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_RPC_WRAPPERS \
	ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_INCLASS \
	ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_PRIVATE_PROPERTY_OFFSET \
	ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_SPARSE_DATA \
	ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_INCLASS_NO_PURE_DECLS \
	ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPLOREGAMEPROJECT_API UClass* StaticClass<class UEnemyFSM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ExploreGameProject_Source_ExploreGameProject_public_EnemyFSM_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Idle) \
	op(EEnemyState::Move) \
	op(EEnemyState::Attack) \
	op(EEnemyState::Damage) \
	op(EEnemyState::Die) 

enum class EEnemyState : uint8;
template<> EXPLOREGAMEPROJECT_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
