// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_Main_Character_generated_h
#error "Main_Character.generated.h already included, missing '#pragma once' in Main_Character.h"
#endif
#define RPG_Main_Character_generated_h

#define RPG_Source_RPG_Main_Character_h_12_SPARSE_DATA
#define RPG_Source_RPG_Main_Character_h_12_RPC_WRAPPERS
#define RPG_Source_RPG_Main_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_Source_RPG_Main_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMain_Character(); \
	friend struct Z_Construct_UClass_AMain_Character_Statics; \
public: \
	DECLARE_CLASS(AMain_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(AMain_Character)


#define RPG_Source_RPG_Main_Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMain_Character(); \
	friend struct Z_Construct_UClass_AMain_Character_Statics; \
public: \
	DECLARE_CLASS(AMain_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(AMain_Character)


#define RPG_Source_RPG_Main_Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMain_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMain_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMain_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMain_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMain_Character(AMain_Character&&); \
	NO_API AMain_Character(const AMain_Character&); \
public:


#define RPG_Source_RPG_Main_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMain_Character(AMain_Character&&); \
	NO_API AMain_Character(const AMain_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMain_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMain_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMain_Character)


#define RPG_Source_RPG_Main_Character_h_12_PRIVATE_PROPERTY_OFFSET
#define RPG_Source_RPG_Main_Character_h_9_PROLOG
#define RPG_Source_RPG_Main_Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_Main_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_Main_Character_h_12_SPARSE_DATA \
	RPG_Source_RPG_Main_Character_h_12_RPC_WRAPPERS \
	RPG_Source_RPG_Main_Character_h_12_INCLASS \
	RPG_Source_RPG_Main_Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_Main_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_Main_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_Main_Character_h_12_SPARSE_DATA \
	RPG_Source_RPG_Main_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_Main_Character_h_12_INCLASS_NO_PURE_DECLS \
	RPG_Source_RPG_Main_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class AMain_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_Main_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
