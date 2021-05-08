// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewProject/NewProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewProjectGameMode() {}
// Cross Module References
	NEWPROJECT_API UClass* Z_Construct_UClass_ANewProjectGameMode_NoRegister();
	NEWPROJECT_API UClass* Z_Construct_UClass_ANewProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NewProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	NEWPROJECT_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
// End Cross Module References
	void ANewProjectGameMode::StaticRegisterNativesANewProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANewProjectGameMode_NoRegister()
	{
		return ANewProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANewProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NewProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NewProjectGameMode.h" },
		{ "ModuleRelativePath", "NewProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectGameMode_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "NewProjectGameMode" },
		{ "ModuleRelativePath", "NewProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANewProjectGameMode_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewProjectGameMode, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANewProjectGameMode_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectGameMode_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProjectGameMode_Statics::NewProp_MyUI_MetaData[] = {
		{ "Category", "NewProjectGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewProjectGameMode_Statics::NewProp_MyUI = { "MyUI", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewProjectGameMode, MyUI), Z_Construct_UClass_UMyUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewProjectGameMode_Statics::NewProp_MyUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectGameMode_Statics::NewProp_MyUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewProjectGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectGameMode_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProjectGameMode_Statics::NewProp_MyUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewProjectGameMode_Statics::ClassParams = {
		&ANewProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANewProjectGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANewProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewProjectGameMode, 3941267786);
	template<> NEWPROJECT_API UClass* StaticClass<ANewProjectGameMode>()
	{
		return ANewProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewProjectGameMode(Z_Construct_UClass_ANewProjectGameMode, &ANewProjectGameMode::StaticClass, TEXT("/Script/NewProject"), TEXT("ANewProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
