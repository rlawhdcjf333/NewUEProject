// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWPROJECT_NewProjectGameMode_generated_h
#error "NewProjectGameMode.generated.h already included, missing '#pragma once' in NewProjectGameMode.h"
#endif
#define NEWPROJECT_NewProjectGameMode_generated_h

#define NewProject_Source_NewProject_NewProjectGameMode_h_15_SPARSE_DATA
#define NewProject_Source_NewProject_NewProjectGameMode_h_15_RPC_WRAPPERS
#define NewProject_Source_NewProject_NewProjectGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define NewProject_Source_NewProject_NewProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewProjectGameMode(); \
	friend struct Z_Construct_UClass_ANewProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(ANewProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewProject"), NEWPROJECT_API) \
	DECLARE_SERIALIZER(ANewProjectGameMode)


#define NewProject_Source_NewProject_NewProjectGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANewProjectGameMode(); \
	friend struct Z_Construct_UClass_ANewProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(ANewProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewProject"), NEWPROJECT_API) \
	DECLARE_SERIALIZER(ANewProjectGameMode)


#define NewProject_Source_NewProject_NewProjectGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NEWPROJECT_API ANewProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANewProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEWPROJECT_API, ANewProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewProjectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NEWPROJECT_API ANewProjectGameMode(ANewProjectGameMode&&); \
	NEWPROJECT_API ANewProjectGameMode(const ANewProjectGameMode&); \
public:


#define NewProject_Source_NewProject_NewProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NEWPROJECT_API ANewProjectGameMode(ANewProjectGameMode&&); \
	NEWPROJECT_API ANewProjectGameMode(const ANewProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEWPROJECT_API, ANewProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANewProjectGameMode)


#define NewProject_Source_NewProject_NewProjectGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WidgetClass() { return STRUCT_OFFSET(ANewProjectGameMode, WidgetClass); } \
	FORCEINLINE static uint32 __PPO__MyUI() { return STRUCT_OFFSET(ANewProjectGameMode, MyUI); }


#define NewProject_Source_NewProject_NewProjectGameMode_h_12_PROLOG
#define NewProject_Source_NewProject_NewProjectGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_NewProjectGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_NewProjectGameMode_h_15_SPARSE_DATA \
	NewProject_Source_NewProject_NewProjectGameMode_h_15_RPC_WRAPPERS \
	NewProject_Source_NewProject_NewProjectGameMode_h_15_INCLASS \
	NewProject_Source_NewProject_NewProjectGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewProject_Source_NewProject_NewProjectGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_NewProjectGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_NewProjectGameMode_h_15_SPARSE_DATA \
	NewProject_Source_NewProject_NewProjectGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NewProject_Source_NewProject_NewProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
	NewProject_Source_NewProject_NewProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWPROJECT_API UClass* StaticClass<class ANewProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewProject_Source_NewProject_NewProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
