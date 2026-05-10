// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RhythmBeatManager.h"

#ifdef BEATSHOT2_RhythmBeatManager_generated_h
#error "RhythmBeatManager.generated.h already included, missing '#pragma once' in RhythmBeatManager.h"
#endif
#define BEATSHOT2_RhythmBeatManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnBeat ***************************************************************
#define FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h_10_DELEGATE \
BEATSHOT2_API void FOnBeat_DelegateWrapper(const FMulticastScriptDelegate& OnBeat);


// ********** End Delegate FOnBeat *****************************************************************

// ********** Begin ScriptStruct FSongData *********************************************************
struct Z_Construct_UScriptStruct_FSongData_Statics;
#define FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSongData_Statics; \
	BEATSHOT2_API static class UScriptStruct* StaticStruct();


struct FSongData;
// ********** End ScriptStruct FSongData ***********************************************************

// ********** Begin Class ARhythmBeatManager *******************************************************
#define FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckHitAccuracy); \
	DECLARE_FUNCTION(execStartBeat);


struct Z_Construct_UClass_ARhythmBeatManager_Statics;
BEATSHOT2_API UClass* Z_Construct_UClass_ARhythmBeatManager_NoRegister();

#define FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARhythmBeatManager(); \
	friend struct ::Z_Construct_UClass_ARhythmBeatManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEATSHOT2_API UClass* ::Z_Construct_UClass_ARhythmBeatManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ARhythmBeatManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BeatShot2"), Z_Construct_UClass_ARhythmBeatManager_NoRegister) \
	DECLARE_SERIALIZER(ARhythmBeatManager)


#define FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARhythmBeatManager(ARhythmBeatManager&&) = delete; \
	ARhythmBeatManager(const ARhythmBeatManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARhythmBeatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARhythmBeatManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARhythmBeatManager) \
	NO_API virtual ~ARhythmBeatManager();


#define FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h_27_PROLOG
#define FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h_30_INCLASS_NO_PURE_DECLS \
	FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARhythmBeatManager;

// ********** End Class ARhythmBeatManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
