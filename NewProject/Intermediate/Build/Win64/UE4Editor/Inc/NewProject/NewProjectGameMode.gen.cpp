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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewProjectGameMode_Statics::ClassParams = {
		&ANewProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ANewProjectGameMode, 987484339);
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
