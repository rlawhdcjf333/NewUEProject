// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewProject/MyUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget() {}
// Cross Module References
	NEWPROJECT_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
	NEWPROJECT_API UClass* Z_Construct_UClass_UMyUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NewProject();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyUserWidget::execA4CountUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->A4CountUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execA3CountUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->A3CountUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execA2CountUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->A2CountUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execA1CountUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->A1CountUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execResetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCount();
		P_NATIVE_END;
	}
	void UMyUserWidget::StaticRegisterNativesUMyUserWidget()
	{
		UClass* Class = UMyUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "A1CountUp", &UMyUserWidget::execA1CountUp },
			{ "A2CountUp", &UMyUserWidget::execA2CountUp },
			{ "A3CountUp", &UMyUserWidget::execA3CountUp },
			{ "A4CountUp", &UMyUserWidget::execA4CountUp },
			{ "ResetCount", &UMyUserWidget::execResetCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyUserWidget_A1CountUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_A1CountUp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//=======================Projectile Counting Functionality====================================\n" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
		{ "ToolTip", "=======================Projectile Counting Functionality====================================" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_A1CountUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "A1CountUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_A1CountUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_A1CountUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_A1CountUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_A1CountUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_A2CountUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_A2CountUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_A2CountUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "A2CountUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_A2CountUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_A2CountUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_A2CountUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_A2CountUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_A3CountUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_A3CountUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_A3CountUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "A3CountUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_A3CountUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_A3CountUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_A3CountUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_A3CountUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_A4CountUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_A4CountUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_A4CountUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "A4CountUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_A4CountUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_A4CountUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_A4CountUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_A4CountUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_ResetCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_ResetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_ResetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "ResetCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_ResetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_ResetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_ResetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_ResetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyUserWidget_NoRegister()
	{
		return UMyUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBarforA2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBarforA2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResetButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A1Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A1Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A2Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A2Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A3Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A3Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A4Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A4Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NewProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyUserWidget_A1CountUp, "A1CountUp" }, // 3142723987
		{ &Z_Construct_UFunction_UMyUserWidget_A2CountUp, "A2CountUp" }, // 1269324971
		{ &Z_Construct_UFunction_UMyUserWidget_A3CountUp, "A3CountUp" }, // 792843838
		{ &Z_Construct_UFunction_UMyUserWidget_A4CountUp, "A4CountUp" }, // 1626760345
		{ &Z_Construct_UFunction_UMyUserWidget_ResetCount, "ResetCount" }, // 4140409672
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyUserWidget.h" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ProgressBarforA2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "Comment", "// UI ???? ???\xce\xb5?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
		{ "ToolTip", "UI ???? ???\xce\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ProgressBarforA2 = { "ProgressBarforA2", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, ProgressBarforA2), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ProgressBarforA2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ProgressBarforA2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ResetButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ResetButton = { "ResetButton", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, ResetButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ResetButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ResetButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A1Count_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A1Count = { "A1Count", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, A1Count), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A1Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A1Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A2Count_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A2Count = { "A2Count", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, A2Count), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A2Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A2Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A3Count_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A3Count = { "A3Count", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, A3Count), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A3Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A3Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A4Count_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A4Count = { "A4Count", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, A4Count), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A4Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A4Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ProgressBarforA2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ResetButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A1Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A2Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A3Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_A4Count,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget_Statics::ClassParams = {
		&UMyUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyUserWidget, 1506566141);
	template<> NEWPROJECT_API UClass* StaticClass<UMyUserWidget>()
	{
		return UMyUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyUserWidget(Z_Construct_UClass_UMyUserWidget, &UMyUserWidget::StaticClass, TEXT("/Script/NewProject"), TEXT("UMyUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
