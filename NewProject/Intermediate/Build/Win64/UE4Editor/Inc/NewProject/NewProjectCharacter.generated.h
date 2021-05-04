// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWPROJECT_NewProjectCharacter_generated_h
#error "NewProjectCharacter.generated.h already included, missing '#pragma once' in NewProjectCharacter.h"
#endif
#define NEWPROJECT_NewProjectCharacter_generated_h

#define NewProject_Source_NewProject_NewProjectCharacter_h_13_SPARSE_DATA
#define NewProject_Source_NewProject_NewProjectCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireA1);


#define NewProject_Source_NewProject_NewProjectCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireA1);


#define NewProject_Source_NewProject_NewProjectCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewProjectCharacter(); \
	friend struct Z_Construct_UClass_ANewProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ANewProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(ANewProjectCharacter)


#define NewProject_Source_NewProject_NewProjectCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesANewProjectCharacter(); \
	friend struct Z_Construct_UClass_ANewProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ANewProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(ANewProjectCharacter)


#define NewProject_Source_NewProject_NewProjectCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANewProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANewProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewProjectCharacter(ANewProjectCharacter&&); \
	NO_API ANewProjectCharacter(const ANewProjectCharacter&); \
public:


#define NewProject_Source_NewProject_NewProjectCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewProjectCharacter(ANewProjectCharacter&&); \
	NO_API ANewProjectCharacter(const ANewProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANewProjectCharacter)


#define NewProject_Source_NewProject_NewProjectCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ANewProjectCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ANewProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__ProjectileA1Class() { return STRUCT_OFFSET(ANewProjectCharacter, ProjectileA1Class); }


#define NewProject_Source_NewProject_NewProjectCharacter_h_10_PROLOG
#define NewProject_Source_NewProject_NewProjectCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_NewProjectCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_NewProjectCharacter_h_13_SPARSE_DATA \
	NewProject_Source_NewProject_NewProjectCharacter_h_13_RPC_WRAPPERS \
	NewProject_Source_NewProject_NewProjectCharacter_h_13_INCLASS \
	NewProject_Source_NewProject_NewProjectCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewProject_Source_NewProject_NewProjectCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_NewProjectCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_NewProjectCharacter_h_13_SPARSE_DATA \
	NewProject_Source_NewProject_NewProjectCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NewProject_Source_NewProject_NewProjectCharacter_h_13_INCLASS_NO_PURE_DECLS \
	NewProject_Source_NewProject_NewProjectCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWPROJECT_API UClass* StaticClass<class ANewProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewProject_Source_NewProject_NewProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
