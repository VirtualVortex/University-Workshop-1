// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP280_HTTP/COMP280_HTTPGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOMP280_HTTPGameModeBase() {}
// Cross Module References
	COMP280_HTTP_API UClass* Z_Construct_UClass_ACOMP280_HTTPGameModeBase_NoRegister();
	COMP280_HTTP_API UClass* Z_Construct_UClass_ACOMP280_HTTPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_COMP280_HTTP();
// End Cross Module References
	void ACOMP280_HTTPGameModeBase::StaticRegisterNativesACOMP280_HTTPGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACOMP280_HTTPGameModeBase_NoRegister()
	{
		return ACOMP280_HTTPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACOMP280_HTTPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACOMP280_HTTPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP280_HTTP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACOMP280_HTTPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "COMP280_HTTPGameModeBase.h" },
		{ "ModuleRelativePath", "COMP280_HTTPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACOMP280_HTTPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOMP280_HTTPGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACOMP280_HTTPGameModeBase_Statics::ClassParams = {
		&ACOMP280_HTTPGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACOMP280_HTTPGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACOMP280_HTTPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACOMP280_HTTPGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACOMP280_HTTPGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACOMP280_HTTPGameModeBase, 2787144427);
	template<> COMP280_HTTP_API UClass* StaticClass<ACOMP280_HTTPGameModeBase>()
	{
		return ACOMP280_HTTPGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACOMP280_HTTPGameModeBase(Z_Construct_UClass_ACOMP280_HTTPGameModeBase, &ACOMP280_HTTPGameModeBase::StaticClass, TEXT("/Script/COMP280_HTTP"), TEXT("ACOMP280_HTTPGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACOMP280_HTTPGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
