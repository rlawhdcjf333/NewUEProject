// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef NEWPROJECT_ProjectileA2_generated_h
#error "ProjectileA2.generated.h already included, missing '#pragma once' in ProjectileA2.h"
#endif
#define NEWPROJECT_ProjectileA2_generated_h

#define NewProject_Source_NewProject_ProjectileA2_h_13_SPARSE_DATA
#define NewProject_Source_NewProject_ProjectileA2_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define NewProject_Source_NewProject_ProjectileA2_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define NewProject_Source_NewProject_ProjectileA2_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileA2(); \
	friend struct Z_Construct_UClass_AProjectileA2_Statics; \
public: \
	DECLARE_CLASS(AProjectileA2, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(AProjectileA2)


#define NewProject_Source_NewProject_ProjectileA2_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileA2(); \
	friend struct Z_Construct_UClass_AProjectileA2_Statics; \
public: \
	DECLARE_CLASS(AProjectileA2, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(AProjectileA2)


#define NewProject_Source_NewProject_ProjectileA2_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileA2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileA2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileA2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileA2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileA2(AProjectileA2&&); \
	NO_API AProjectileA2(const AProjectileA2&); \
public:


#define NewProject_Source_NewProject_ProjectileA2_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileA2(AProjectileA2&&); \
	NO_API AProjectileA2(const AProjectileA2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileA2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileA2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileA2)


#define NewProject_Source_NewProject_ProjectileA2_h_13_PRIVATE_PROPERTY_OFFSET
#define NewProject_Source_NewProject_ProjectileA2_h_10_PROLOG
#define NewProject_Source_NewProject_ProjectileA2_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_ProjectileA2_h_13_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_ProjectileA2_h_13_SPARSE_DATA \
	NewProject_Source_NewProject_ProjectileA2_h_13_RPC_WRAPPERS \
	NewProject_Source_NewProject_ProjectileA2_h_13_INCLASS \
	NewProject_Source_NewProject_ProjectileA2_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewProject_Source_NewProject_ProjectileA2_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_ProjectileA2_h_13_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_ProjectileA2_h_13_SPARSE_DATA \
	NewProject_Source_NewProject_ProjectileA2_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NewProject_Source_NewProject_ProjectileA2_h_13_INCLASS_NO_PURE_DECLS \
	NewProject_Source_NewProject_ProjectileA2_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWPROJECT_API UClass* StaticClass<class AProjectileA2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewProject_Source_NewProject_ProjectileA2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
