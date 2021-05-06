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
#ifdef NEWPROJECT_ProjectileA3_generated_h
#error "ProjectileA3.generated.h already included, missing '#pragma once' in ProjectileA3.h"
#endif
#define NEWPROJECT_ProjectileA3_generated_h

#define NewProject_Source_NewProject_ProjectileA3_h_16_SPARSE_DATA
#define NewProject_Source_NewProject_ProjectileA3_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSeperation); \
	DECLARE_FUNCTION(execOnHit);


#define NewProject_Source_NewProject_ProjectileA3_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSeperation); \
	DECLARE_FUNCTION(execOnHit);


#define NewProject_Source_NewProject_ProjectileA3_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileA3(); \
	friend struct Z_Construct_UClass_AProjectileA3_Statics; \
public: \
	DECLARE_CLASS(AProjectileA3, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(AProjectileA3)


#define NewProject_Source_NewProject_ProjectileA3_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileA3(); \
	friend struct Z_Construct_UClass_AProjectileA3_Statics; \
public: \
	DECLARE_CLASS(AProjectileA3, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(AProjectileA3)


#define NewProject_Source_NewProject_ProjectileA3_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileA3(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileA3) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileA3); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileA3); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileA3(AProjectileA3&&); \
	NO_API AProjectileA3(const AProjectileA3&); \
public:


#define NewProject_Source_NewProject_ProjectileA3_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileA3(AProjectileA3&&); \
	NO_API AProjectileA3(const AProjectileA3&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileA3); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileA3); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileA3)


#define NewProject_Source_NewProject_ProjectileA3_h_16_PRIVATE_PROPERTY_OFFSET
#define NewProject_Source_NewProject_ProjectileA3_h_13_PROLOG
#define NewProject_Source_NewProject_ProjectileA3_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_ProjectileA3_h_16_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_ProjectileA3_h_16_SPARSE_DATA \
	NewProject_Source_NewProject_ProjectileA3_h_16_RPC_WRAPPERS \
	NewProject_Source_NewProject_ProjectileA3_h_16_INCLASS \
	NewProject_Source_NewProject_ProjectileA3_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewProject_Source_NewProject_ProjectileA3_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewProject_Source_NewProject_ProjectileA3_h_16_PRIVATE_PROPERTY_OFFSET \
	NewProject_Source_NewProject_ProjectileA3_h_16_SPARSE_DATA \
	NewProject_Source_NewProject_ProjectileA3_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NewProject_Source_NewProject_ProjectileA3_h_16_INCLASS_NO_PURE_DECLS \
	NewProject_Source_NewProject_ProjectileA3_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWPROJECT_API UClass* StaticClass<class AProjectileA3>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewProject_Source_NewProject_ProjectileA3_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
