// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP280_HTTP/Sender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSender() {}
// Cross Module References
	COMP280_HTTP_API UFunction* Z_Construct_UDelegateFunction_COMP280_HTTP_TimerComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_COMP280_HTTP();
	COMP280_HTTP_API UClass* Z_Construct_UClass_ASender_NoRegister();
	COMP280_HTTP_API UClass* Z_Construct_UClass_ASender();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_COMP280_HTTP_TimerComplete__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_COMP280_HTTP_TimerComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Sender.h" },
		{ "ToolTip", "This is required elemetn for the project" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_COMP280_HTTP_TimerComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_COMP280_HTTP, nullptr, "TimerComplete__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_COMP280_HTTP_TimerComplete__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_COMP280_HTTP_TimerComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_COMP280_HTTP_TimerComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_COMP280_HTTP_TimerComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ASender::StaticRegisterNativesASender()
	{
	}
	UClass* Z_Construct_UClass_ASender_NoRegister()
	{
		return ASender::StaticClass();
	}
	struct Z_Construct_UClass_ASender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimerComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP280_HTTP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASender_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sender.h" },
		{ "ModuleRelativePath", "Sender.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASender_Statics::NewProp_OnTimerComplete_MetaData[] = {
		{ "Category", "MyTimer" },
		{ "ModuleRelativePath", "Sender.h" },
		{ "ToolTip", "This is a required element for the project" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASender_Statics::NewProp_OnTimerComplete = { "OnTimerComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASender, OnTimerComplete), Z_Construct_UDelegateFunction_COMP280_HTTP_TimerComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASender_Statics::NewProp_OnTimerComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASender_Statics::NewProp_OnTimerComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASender_Statics::NewProp_OnTimerComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASender_Statics::ClassParams = {
		&ASender::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASender_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASender_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASender_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASender, 2513902285);
	template<> COMP280_HTTP_API UClass* StaticClass<ASender>()
	{
		return ASender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASender(Z_Construct_UClass_ASender, &ASender::StaticClass, TEXT("/Script/COMP280_HTTP"), TEXT("ASender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
