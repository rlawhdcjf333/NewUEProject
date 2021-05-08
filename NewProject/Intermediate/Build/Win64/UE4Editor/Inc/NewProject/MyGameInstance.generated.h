// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWPROJECT_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define NEWPROJECT_MyGameInstance_generated_h

#define NewProject_Source_NewProject_MyGameInstance_h_15_SPARSE_DATA
#define NewProject_Source_NewProject_MyGameInstance_h_15_RPC_WRAPPERS
#define NewProject_Source_NewProject_MyGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define NewProject_Source_NewProject_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define NewProject_Source_NewProject_MyGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define NewProject_Source_NewProject_MyGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define NewProject_Source_NewProject_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance)


#define NewProject_Source_NewProject_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define NewProject_Source_NewProject_MyGameInstance_h_12_PROLOG
#define NewProject_Source_NewProject_MyGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_MyGameInstance_h_15_SPARSE_DATA \
	NewProject_Source_NewProject_MyGameInstance_h_15_RPC_WRAPPERS \
	NewProject_Source_NewProject_MyGameInstance_h_15_INCLASS \
	NewProject_Source_NewProject_MyGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewProject_Source_NewProject_MyGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_MyGameInstance_h_15_SPARSE_DATA \
	NewProject_Source_NewProject_MyGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NewProject_Source_NewProject_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	NewProject_Source_NewProject_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWPROJECT_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewProject_Source_NewProject_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
