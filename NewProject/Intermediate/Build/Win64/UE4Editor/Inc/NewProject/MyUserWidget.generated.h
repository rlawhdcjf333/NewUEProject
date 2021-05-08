// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWPROJECT_MyUserWidget_generated_h
#error "MyUserWidget.generated.h already included, missing '#pragma once' in MyUserWidget.h"
#endif
#define NEWPROJECT_MyUserWidget_generated_h

#define NewProject_Source_NewProject_MyUserWidget_h_15_SPARSE_DATA
#define NewProject_Source_NewProject_MyUserWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execA4CountUp); \
	DECLARE_FUNCTION(execA3CountUp); \
	DECLARE_FUNCTION(execA2CountUp); \
	DECLARE_FUNCTION(execA1CountUp); \
	DECLARE_FUNCTION(execResetCount);


#define NewProject_Source_NewProject_MyUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execA4CountUp); \
	DECLARE_FUNCTION(execA3CountUp); \
	DECLARE_FUNCTION(execA2CountUp); \
	DECLARE_FUNCTION(execA1CountUp); \
	DECLARE_FUNCTION(execResetCount);


#define NewProject_Source_NewProject_MyUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyUserWidget(); \
	friend struct Z_Construct_UClass_UMyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UMyUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(UMyUserWidget)


#define NewProject_Source_NewProject_MyUserWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyUserWidget(); \
	friend struct Z_Construct_UClass_UMyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UMyUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(UMyUserWidget)


#define NewProject_Source_NewProject_MyUserWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyUserWidget(UMyUserWidget&&); \
	NO_API UMyUserWidget(const UMyUserWidget&); \
public:


#define NewProject_Source_NewProject_MyUserWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyUserWidget(UMyUserWidget&&); \
	NO_API UMyUserWidget(const UMyUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserWidget)


#define NewProject_Source_NewProject_MyUserWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProgressBarforA2() { return STRUCT_OFFSET(UMyUserWidget, ProgressBarforA2); } \
	FORCEINLINE static uint32 __PPO__ResetButton() { return STRUCT_OFFSET(UMyUserWidget, ResetButton); } \
	FORCEINLINE static uint32 __PPO__A1Count() { return STRUCT_OFFSET(UMyUserWidget, A1Count); } \
	FORCEINLINE static uint32 __PPO__A2Count() { return STRUCT_OFFSET(UMyUserWidget, A2Count); } \
	FORCEINLINE static uint32 __PPO__A3Count() { return STRUCT_OFFSET(UMyUserWidget, A3Count); } \
	FORCEINLINE static uint32 __PPO__A4Count() { return STRUCT_OFFSET(UMyUserWidget, A4Count); }


#define NewProject_Source_NewProject_MyUserWidget_h_12_PROLOG
#define NewProject_Source_NewProject_MyUserWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_MyUserWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_MyUserWidget_h_15_SPARSE_DATA \
	NewProject_Source_NewProject_MyUserWidget_h_15_RPC_WRAPPERS \
	NewProject_Source_NewProject_MyUserWidget_h_15_INCLASS \
	NewProject_Source_NewProject_MyUserWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewProject_Source_NewProject_MyUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_MyUserWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_MyUserWidget_h_15_SPARSE_DATA \
	NewProject_Source_NewProject_MyUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NewProject_Source_NewProject_MyUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	NewProject_Source_NewProject_MyUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWPROJECT_API UClass* StaticClass<class UMyUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewProject_Source_NewProject_MyUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
