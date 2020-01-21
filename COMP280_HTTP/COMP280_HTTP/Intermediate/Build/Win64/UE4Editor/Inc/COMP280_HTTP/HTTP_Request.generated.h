// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMP280_HTTP_HTTP_Request_generated_h
#error "HTTP_Request.generated.h already included, missing '#pragma once' in HTTP_Request.h"
#endif
#define COMP280_HTTP_HTTP_Request_generated_h

#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResponse_ScoreDetails_Statics; \
	COMP280_HTTP_API static class UScriptStruct* StaticStruct();


template<> COMP280_HTTP_API UScriptStruct* StaticStruct<struct FResponse_ScoreDetails>();

#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRequest_ScoreDetails_Statics; \
	COMP280_HTTP_API static class UScriptStruct* StaticStruct();


template<> COMP280_HTTP_API UScriptStruct* StaticStruct<struct FRequest_ScoreDetails>();

#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_31_DELEGATE \
static inline void FRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& RequestComplete) \
{ \
	RequestComplete.ProcessMulticastDelegate<UObject>(NULL); \
}


#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGetSpecificScoresButtonPress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGetSpecificScoresButtonPress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGetAllScoresButtonPress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGetAllScoresButtonPress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAddButtonPress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAddButtonPress(); \
		P_NATIVE_END; \
	}


#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGetSpecificScoresButtonPress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGetSpecificScoresButtonPress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGetAllScoresButtonPress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGetAllScoresButtonPress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAddButtonPress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAddButtonPress(); \
		P_NATIVE_END; \
	}


#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHTTP_Request(); \
	friend struct Z_Construct_UClass_AHTTP_Request_Statics; \
public: \
	DECLARE_CLASS(AHTTP_Request, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/COMP280_HTTP"), NO_API) \
	DECLARE_SERIALIZER(AHTTP_Request)


#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAHTTP_Request(); \
	friend struct Z_Construct_UClass_AHTTP_Request_Statics; \
public: \
	DECLARE_CLASS(AHTTP_Request, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/COMP280_HTTP"), NO_API) \
	DECLARE_SERIALIZER(AHTTP_Request)


#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHTTP_Request(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHTTP_Request) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHTTP_Request); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHTTP_Request); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHTTP_Request(AHTTP_Request&&); \
	NO_API AHTTP_Request(const AHTTP_Request&); \
public:


#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHTTP_Request(AHTTP_Request&&); \
	NO_API AHTTP_Request(const AHTTP_Request&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHTTP_Request); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHTTP_Request); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHTTP_Request)


#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_PRIVATE_PROPERTY_OFFSET
#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_33_PROLOG
#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_PRIVATE_PROPERTY_OFFSET \
	COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_RPC_WRAPPERS \
	COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_INCLASS \
	COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_PRIVATE_PROPERTY_OFFSET \
	COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_INCLASS_NO_PURE_DECLS \
	COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMP280_HTTP_API UClass* StaticClass<class AHTTP_Request>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID COMP280_HTTP_Source_COMP280_HTTP_HTTP_Request_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
