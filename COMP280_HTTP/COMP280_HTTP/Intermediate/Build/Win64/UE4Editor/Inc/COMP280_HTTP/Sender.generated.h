// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMP280_HTTP_Sender_generated_h
#error "Sender.generated.h already included, missing '#pragma once' in Sender.h"
#endif
#define COMP280_HTTP_Sender_generated_h

#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_10_DELEGATE \
static inline void FTimerComplete_DelegateWrapper(const FMulticastScriptDelegate& TimerComplete) \
{ \
	TimerComplete.ProcessMulticastDelegate<UObject>(NULL); \
}


#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_RPC_WRAPPERS
#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASender(); \
	friend struct Z_Construct_UClass_ASender_Statics; \
public: \
	DECLARE_CLASS(ASender, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/COMP280_HTTP"), NO_API) \
	DECLARE_SERIALIZER(ASender)


#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASender(); \
	friend struct Z_Construct_UClass_ASender_Statics; \
public: \
	DECLARE_CLASS(ASender, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/COMP280_HTTP"), NO_API) \
	DECLARE_SERIALIZER(ASender)


#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASender(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASender) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASender); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASender); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASender(ASender&&); \
	NO_API ASender(const ASender&); \
public:


#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASender(ASender&&); \
	NO_API ASender(const ASender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASender); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASender); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASender)


#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_PRIVATE_PROPERTY_OFFSET
#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_12_PROLOG
#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_PRIVATE_PROPERTY_OFFSET \
	COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_RPC_WRAPPERS \
	COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_INCLASS \
	COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_PRIVATE_PROPERTY_OFFSET \
	COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_INCLASS_NO_PURE_DECLS \
	COMP280_HTTP_Source_COMP280_HTTP_Sender_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMP280_HTTP_API UClass* StaticClass<class ASender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID COMP280_HTTP_Source_COMP280_HTTP_Sender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
