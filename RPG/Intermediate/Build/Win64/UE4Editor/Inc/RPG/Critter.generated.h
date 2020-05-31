// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_Critter_generated_h
#error "Critter.generated.h already included, missing '#pragma once' in Critter.h"
#endif
#define RPG_Critter_generated_h

#define RPG_Source_RPG_Critter_h_12_SPARSE_DATA
#define RPG_Source_RPG_Critter_h_12_RPC_WRAPPERS
#define RPG_Source_RPG_Critter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_Source_RPG_Critter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACritter(); \
	friend struct Z_Construct_UClass_ACritter_Statics; \
public: \
	DECLARE_CLASS(ACritter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ACritter)


#define RPG_Source_RPG_Critter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACritter(); \
	friend struct Z_Construct_UClass_ACritter_Statics; \
public: \
	DECLARE_CLASS(ACritter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ACritter)


#define RPG_Source_RPG_Critter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACritter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACritter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACritter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACritter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACritter(ACritter&&); \
	NO_API ACritter(const ACritter&); \
public:


#define RPG_Source_RPG_Critter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACritter(ACritter&&); \
	NO_API ACritter(const ACritter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACritter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACritter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACritter)


#define RPG_Source_RPG_Critter_h_12_PRIVATE_PROPERTY_OFFSET
#define RPG_Source_RPG_Critter_h_9_PROLOG
#define RPG_Source_RPG_Critter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_Critter_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_Critter_h_12_SPARSE_DATA \
	RPG_Source_RPG_Critter_h_12_RPC_WRAPPERS \
	RPG_Source_RPG_Critter_h_12_INCLASS \
	RPG_Source_RPG_Critter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_Critter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_Critter_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_Critter_h_12_SPARSE_DATA \
	RPG_Source_RPG_Critter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_Critter_h_12_INCLASS_NO_PURE_DECLS \
	RPG_Source_RPG_Critter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class ACritter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_Critter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
