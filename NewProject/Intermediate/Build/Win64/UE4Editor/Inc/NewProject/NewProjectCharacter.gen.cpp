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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NEWPROJECT_API UClass* Z_Construct_UClass_AProjectileA1_NoRegister();
	NEWPROJECT_API UClass* Z_Construct_UClass_AProjectileA2_NoRegister();
	NEWPROJECT_API UClass* Z_Construct_UClass_AProjectileA3_NoRegister();
	NEWPROJECT_API UClass* Z_Construct_UClass_AProjectileA4_NoRegister();
	NEWPROJECT_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANewProjectCharacter::execFireA4)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireA4();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewProjectCharacter::execFireA3)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireA3();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewProjectCharacter::execFireA2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireA2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewProjectCharacter::execFireA1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireA1();
		P_NATIVE_END;
	}
	void ANewProjectCharacter::StaticRegisterNativesANewProjectCharacter()
	{
		UClass* Class = ANewProjectCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireA1", &ANewProjectCharacter::execFireA1 },
			{ "FireA2", &ANewProjectCharacter::execFireA2 },
			{ "FireA3", &ANewProjectCharacter::execFireA3 },
			{ "FireA4", &ANewProjectCharacter::execFireA4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANewProjectCharacter_FireA1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewProjectCharacter_FireA1_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//A-1 ?\xdf\xbb? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "A-1 ?\xdf\xbb? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewProjectCharacter_FireA1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewProjectCharacter, nullptr, "FireA1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewProjectCharacter_FireA1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewProjectCharacter_FireA1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewProjectCharacter_FireA1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewProjectCharacter_FireA1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewProjectCharacter_FireA2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewProjectCharacter_FireA2_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//A-2 ?\xdf\xbb? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "A-2 ?\xdf\xbb? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewProjectCharacter_FireA2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewProjectCharacter, nullptr, "FireA2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewProjectCharacter_FireA2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewProjectCharacter_FireA2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewProjectCharacter_FireA2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewProjectCharacter_FireA2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewProjectCharacter_FireA3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewProjectCharacter_FireA3_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//A-3 ?\xdf\xbb? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "A-3 ?\xdf\xbb? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewProjectCharacter_FireA3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewProjectCharacter, nullptr, "FireA3", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewProjectCharacter_FireA3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewProjectCharacter_FireA3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewProjectCharacter_FireA3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewProjectCharacter_FireA3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewProjectCharacter_FireA4_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewProjectCharacter_FireA4_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//A-4 ?\xdf\xbb? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "A-4 ?\xdf\xbb? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewProjectCharacter_FireA4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewProjectCharacter, nullptr, "FireA4", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewProjectCharacter_FireA4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewProjectCharacter_FireA4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewProjectCharacter_FireA4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewProjectCharacter_FireA4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANewProjectCharacter_NoRegister()
	{
		return ANewProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANewProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileA1Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileA1Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileA2Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileA2Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileA3Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileA3Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileA4Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileA4Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NewProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANewProjectCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANewProjectCharacter_FireA1, "FireA1" }, // 4212477324
		{ &Z_Construct_UFunction_ANewProjectCharacter_FireA2, "FireA2" }, // 10772184
		{ &Z_Construct_UFunction_ANewProjectCharacter_FireA3, "FireA3" }, // 2023484769
		{ &Z_Construct_UFunction_ANewProjectCharacter_FireA4, "FireA4" }, // 1652788672
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA1Class_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//=========================================================================================\n//????\xc3\xbc""A1 \n" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "????\xc3\xbc""A1" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA1Class = { "ProjectileA1Class", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewProjectCharacter, ProjectileA1Class), Z_Construct_UClass_AProjectileA1_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA1Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA1Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA2Class_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//????\xc3\xbc""A2\n" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "????\xc3\xbc""A2" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA2Class = { "ProjectileA2Class", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewProjectCharacter, ProjectileA2Class), Z_Construct_UClass_AProjectileA2_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA2Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA2Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA3Class_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//????\xc3\xbc""A3\n" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "????\xc3\xbc""A3" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA3Class = { "ProjectileA3Class", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewProjectCharacter, ProjectileA3Class), Z_Construct_UClass_AProjectileA3_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA3Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA3Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA4Class_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//????\xc3\xbc""A4\n" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "????\xc3\xbc""A4" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA4Class = { "ProjectileA4Class", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewProjectCharacter, ProjectileA4Class), Z_Construct_UClass_AProjectileA4_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA4Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA4Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_PlayerUI_MetaData[] = {
		{ "Category", "NewProjectCharacter" },
		{ "Comment", "//=========================================================================================\n//???? UI \xc5\xac????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewProjectCharacter.h" },
		{ "ToolTip", "???? UI \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_PlayerUI = { "PlayerUI", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewProjectCharacter, PlayerUI), Z_Construct_UClass_UMyUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_PlayerUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_PlayerUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewProjectCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA1Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA2Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA3Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_ProjectileA4Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectCharacter_Statics::NewProp_PlayerUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewProjectCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewProjectCharacter_Statics::ClassParams = {
		&ANewProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANewProjectCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ANewProjectCharacter, 2771167133);
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
