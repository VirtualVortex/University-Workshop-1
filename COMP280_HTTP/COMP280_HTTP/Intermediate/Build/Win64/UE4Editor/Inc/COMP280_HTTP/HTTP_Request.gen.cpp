// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP280_HTTP/HTTP_Request.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTTP_Request() {}
// Cross Module References
	COMP280_HTTP_API UFunction* Z_Construct_UDelegateFunction_COMP280_HTTP_RequestComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_COMP280_HTTP();
	COMP280_HTTP_API UScriptStruct* Z_Construct_UScriptStruct_FResponse_ScoreDetails();
	COMP280_HTTP_API UScriptStruct* Z_Construct_UScriptStruct_FRequest_ScoreDetails();
	COMP280_HTTP_API UClass* Z_Construct_UClass_AHTTP_Request_NoRegister();
	COMP280_HTTP_API UClass* Z_Construct_UClass_AHTTP_Request();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COMP280_HTTP_API UFunction* Z_Construct_UFunction_AHTTP_Request_OnAddButtonPress();
	COMP280_HTTP_API UFunction* Z_Construct_UFunction_AHTTP_Request_OnGetAllScoresButtonPress();
	COMP280_HTTP_API UFunction* Z_Construct_UFunction_AHTTP_Request_OnGetSpecificScoresButtonPress();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_COMP280_HTTP_RequestComplete__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_COMP280_HTTP_RequestComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HTTP_Request.h" },
		{ "ToolTip", "Create multicast delegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_COMP280_HTTP_RequestComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_COMP280_HTTP, nullptr, "RequestComplete__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_COMP280_HTTP_RequestComplete__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_COMP280_HTTP_RequestComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_COMP280_HTTP_RequestComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_COMP280_HTTP_RequestComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FResponse_ScoreDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMP280_HTTP_API uint32 Get_Z_Construct_UScriptStruct_FResponse_ScoreDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResponse_ScoreDetails, Z_Construct_UPackage__Script_COMP280_HTTP(), TEXT("Response_ScoreDetails"), sizeof(FResponse_ScoreDetails), Get_Z_Construct_UScriptStruct_FResponse_ScoreDetails_Hash());
	}
	return Singleton;
}
template<> COMP280_HTTP_API UScriptStruct* StaticStruct<FResponse_ScoreDetails>()
{
	return FResponse_ScoreDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResponse_ScoreDetails(FResponse_ScoreDetails::StaticStruct, TEXT("/Script/COMP280_HTTP"), TEXT("Response_ScoreDetails"), false, nullptr, nullptr);
static struct FScriptStruct_COMP280_HTTP_StaticRegisterNativesFResponse_ScoreDetails
{
	FScriptStruct_COMP280_HTTP_StaticRegisterNativesFResponse_ScoreDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Response_ScoreDetails")),new UScriptStruct::TCppStructOps<FResponse_ScoreDetails>);
	}
} ScriptStruct_COMP280_HTTP_StaticRegisterNativesFResponse_ScoreDetails;
	struct Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_details_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_details;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_details_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResponse_ScoreDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::NewProp_details_MetaData[] = {
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponse_ScoreDetails, details), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::NewProp_details_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::NewProp_details_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::NewProp_details_Inner = { "details", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRequest_ScoreDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::NewProp_details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::NewProp_details_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_COMP280_HTTP,
		nullptr,
		&NewStructOps,
		"Response_ScoreDetails",
		sizeof(FResponse_ScoreDetails),
		alignof(FResponse_ScoreDetails),
		Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResponse_ScoreDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResponse_ScoreDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_COMP280_HTTP();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Response_ScoreDetails"), sizeof(FResponse_ScoreDetails), Get_Z_Construct_UScriptStruct_FResponse_ScoreDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResponse_ScoreDetails_Hash() { return 533270319U; }
class UScriptStruct* FRequest_ScoreDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMP280_HTTP_API uint32 Get_Z_Construct_UScriptStruct_FRequest_ScoreDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequest_ScoreDetails, Z_Construct_UPackage__Script_COMP280_HTTP(), TEXT("Request_ScoreDetails"), sizeof(FRequest_ScoreDetails), Get_Z_Construct_UScriptStruct_FRequest_ScoreDetails_Hash());
	}
	return Singleton;
}
template<> COMP280_HTTP_API UScriptStruct* StaticStruct<FRequest_ScoreDetails>()
{
	return FRequest_ScoreDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRequest_ScoreDetails(FRequest_ScoreDetails::StaticStruct, TEXT("/Script/COMP280_HTTP"), TEXT("Request_ScoreDetails"), false, nullptr, nullptr);
static struct FScriptStruct_COMP280_HTTP_StaticRegisterNativesFRequest_ScoreDetails
{
	FScriptStruct_COMP280_HTTP_StaticRegisterNativesFRequest_ScoreDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Request_ScoreDetails")),new UScriptStruct::TCppStructOps<FRequest_ScoreDetails>);
	}
} ScriptStruct_COMP280_HTTP_StaticRegisterNativesFRequest_ScoreDetails;
	struct Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phone_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_phone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequest_ScoreDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewProp_phone_MetaData[] = {
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewProp_phone = { "phone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequest_ScoreDetails, phone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewProp_phone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewProp_phone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequest_ScoreDetails, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewProp_phone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::NewProp_name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_COMP280_HTTP,
		nullptr,
		&NewStructOps,
		"Request_ScoreDetails",
		sizeof(FRequest_ScoreDetails),
		alignof(FRequest_ScoreDetails),
		Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequest_ScoreDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRequest_ScoreDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_COMP280_HTTP();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Request_ScoreDetails"), sizeof(FRequest_ScoreDetails), Get_Z_Construct_UScriptStruct_FRequest_ScoreDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRequest_ScoreDetails_Hash() { return 2842657320U; }
	void AHTTP_Request::StaticRegisterNativesAHTTP_Request()
	{
		UClass* Class = AHTTP_Request::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAddButtonPress", &AHTTP_Request::execOnAddButtonPress },
			{ "OnGetAllScoresButtonPress", &AHTTP_Request::execOnGetAllScoresButtonPress },
			{ "OnGetSpecificScoresButtonPress", &AHTTP_Request::execOnGetSpecificScoresButtonPress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHTTP_Request_OnAddButtonPress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHTTP_Request_OnAddButtonPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "AHTTP_Request" },
		{ "ModuleRelativePath", "HTTP_Request.h" },
		{ "ToolTip", "The UFUNCTIONS and UPROPERTIES are used to make requests and send and revice data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHTTP_Request_OnAddButtonPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHTTP_Request, nullptr, "OnAddButtonPress", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHTTP_Request_OnAddButtonPress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHTTP_Request_OnAddButtonPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHTTP_Request_OnAddButtonPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHTTP_Request_OnAddButtonPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHTTP_Request_OnGetAllScoresButtonPress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHTTP_Request_OnGetAllScoresButtonPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "AHTTP_Request" },
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHTTP_Request_OnGetAllScoresButtonPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHTTP_Request, nullptr, "OnGetAllScoresButtonPress", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHTTP_Request_OnGetAllScoresButtonPress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHTTP_Request_OnGetAllScoresButtonPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHTTP_Request_OnGetAllScoresButtonPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHTTP_Request_OnGetAllScoresButtonPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHTTP_Request_OnGetSpecificScoresButtonPress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHTTP_Request_OnGetSpecificScoresButtonPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "AHTTP_Request" },
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHTTP_Request_OnGetSpecificScoresButtonPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHTTP_Request, nullptr, "OnGetSpecificScoresButtonPress", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHTTP_Request_OnGetSpecificScoresButtonPress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHTTP_Request_OnGetSpecificScoresButtonPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHTTP_Request_OnGetSpecificScoresButtonPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHTTP_Request_OnGetSpecificScoresButtonPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHTTP_Request_NoRegister()
	{
		return AHTTP_Request::StaticClass();
	}
	struct Z_Construct_UClass_AHTTP_Request_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataToDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dataToDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_getNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_getNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_getName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_getName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_postNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_postNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_postName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_postName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHTTP_Request_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP280_HTTP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHTTP_Request_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHTTP_Request_OnAddButtonPress, "OnAddButtonPress" }, // 4271035445
		{ &Z_Construct_UFunction_AHTTP_Request_OnGetAllScoresButtonPress, "OnGetAllScoresButtonPress" }, // 292849086
		{ &Z_Construct_UFunction_AHTTP_Request_OnGetSpecificScoresButtonPress, "OnGetSpecificScoresButtonPress" }, // 2591499279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHTTP_Request_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Replication Input Actor Actor Tick" },
		{ "IncludePath", "HTTP_Request.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHTTP_Request_Statics::NewProp_OnRequestComplete_MetaData[] = {
		{ "Category", "AHTTP_Request" },
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHTTP_Request_Statics::NewProp_OnRequestComplete = { "OnRequestComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHTTP_Request, OnRequestComplete), Z_Construct_UDelegateFunction_COMP280_HTTP_RequestComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_OnRequestComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_OnRequestComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHTTP_Request_Statics::NewProp_dataToDisplay_MetaData[] = {
		{ "Category", "HTTP_Request" },
		{ "ModuleRelativePath", "HTTP_Request.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHTTP_Request_Statics::NewProp_dataToDisplay = { "dataToDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHTTP_Request, dataToDisplay), METADATA_PARAMS(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_dataToDisplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_dataToDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHTTP_Request_Statics::NewProp_getNum_MetaData[] = {
		{ "Category", "HTTP_Request" },
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHTTP_Request_Statics::NewProp_getNum = { "getNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHTTP_Request, getNum), METADATA_PARAMS(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_getNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_getNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHTTP_Request_Statics::NewProp_getName_MetaData[] = {
		{ "Category", "HTTP_Request" },
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHTTP_Request_Statics::NewProp_getName = { "getName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHTTP_Request, getName), METADATA_PARAMS(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_getName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_getName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHTTP_Request_Statics::NewProp_postNum_MetaData[] = {
		{ "Category", "HTTP_Request" },
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHTTP_Request_Statics::NewProp_postNum = { "postNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHTTP_Request, postNum), METADATA_PARAMS(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_postNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_postNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHTTP_Request_Statics::NewProp_postName_MetaData[] = {
		{ "Category", "HTTP_Request" },
		{ "ModuleRelativePath", "HTTP_Request.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHTTP_Request_Statics::NewProp_postName = { "postName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHTTP_Request, postName), METADATA_PARAMS(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_postName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHTTP_Request_Statics::NewProp_postName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHTTP_Request_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHTTP_Request_Statics::NewProp_OnRequestComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHTTP_Request_Statics::NewProp_dataToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHTTP_Request_Statics::NewProp_getNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHTTP_Request_Statics::NewProp_getName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHTTP_Request_Statics::NewProp_postNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHTTP_Request_Statics::NewProp_postName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHTTP_Request_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHTTP_Request>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHTTP_Request_Statics::ClassParams = {
		&AHTTP_Request::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHTTP_Request_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AHTTP_Request_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHTTP_Request_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHTTP_Request_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHTTP_Request()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHTTP_Request_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHTTP_Request, 2222845970);
	template<> COMP280_HTTP_API UClass* StaticClass<AHTTP_Request>()
	{
		return AHTTP_Request::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHTTP_Request(Z_Construct_UClass_AHTTP_Request, &AHTTP_Request::StaticClass, TEXT("/Script/COMP280_HTTP"), TEXT("AHTTP_Request"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHTTP_Request);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
