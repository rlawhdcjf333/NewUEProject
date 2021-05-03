// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewProject/NewProjectCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewProjectCharacter() {}
// Cross Module References
	NEWPROJECT_API UClass* Z_Construct_UClass_ANewProjectCharacter_NoRegister();
	NEWPROJECT_API UClass* Z_Construct_UClass_ANewProjectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NewProject();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ANewProjectCharacter::StaticRegisterNativesANewProjectCharacter()
	{
	}
	UClass* Z_Construct_UClass_ANewProjectCharacter_NoRegister()
	{
		return ANewProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANewProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NewProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NewProjectCharacter.h" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Side view camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewProjectCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera beside the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera beside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewProjectCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewProjectCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewProjectCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewProjectCharacter_Statics::ClassParams = {
		&ANewProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANewProjectCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANewProjectCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewProjectCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewProjectCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewProjectCharacter, 560838838);
	template<> NEWPROJECT_API UClass* StaticClass<ANewProjectCharacter>()
	{
		return ANewProjectCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewProjectCharacter(Z_Construct_UClass_ANewProjectCharacter, &ANewProjectCharacter::StaticClass, TEXT("/Script/NewProject"), TEXT("ANewProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewProjectCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
