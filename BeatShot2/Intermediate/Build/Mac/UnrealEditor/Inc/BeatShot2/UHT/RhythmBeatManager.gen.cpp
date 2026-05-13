// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeatShot2/RhythmBeatManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRhythmBeatManager() {}

// ********** Begin Cross Module References ********************************************************
BEATSHOT2_API UClass* Z_Construct_UClass_ARhythmBeatManager();
BEATSHOT2_API UClass* Z_Construct_UClass_ARhythmBeatManager_NoRegister();
BEATSHOT2_API UFunction* Z_Construct_UDelegateFunction_BeatShot2_OnBeat__DelegateSignature();
BEATSHOT2_API UScriptStruct* Z_Construct_UScriptStruct_FSongData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_BeatShot2();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnBeat ***************************************************************
struct Z_Construct_UDelegateFunction_BeatShot2_OnBeat__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnBeat constinit property declarations *******************************
// ********** End Delegate FOnBeat constinit property declarations *********************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BeatShot2_OnBeat__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BeatShot2, nullptr, "OnBeat__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeatShot2_OnBeat__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BeatShot2_OnBeat__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BeatShot2_OnBeat__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BeatShot2_OnBeat__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBeat_DelegateWrapper(const FMulticastScriptDelegate& OnBeat)
{
	OnBeat.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnBeat *****************************************************************

// ********** Begin ScriptStruct FSongData *********************************************************
struct Z_Construct_UScriptStruct_FSongData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSongData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSongData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SongName_MetaData[] = {
		{ "Category", "SongData" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BPM_MetaData[] = {
		{ "Category", "SongData" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SongAudio_MetaData[] = {
		{ "Category", "SongData" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSongData constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SongName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BPM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SongAudio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSongData constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSongData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSongData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSongData;
class UScriptStruct* FSongData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSongData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSongData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSongData, (UObject*)Z_Construct_UPackage__Script_BeatShot2(), TEXT("SongData"));
	}
	return Z_Registration_Info_UScriptStruct_FSongData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSongData Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSongData_Statics::NewProp_SongName = { "SongName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSongData, SongName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SongName_MetaData), NewProp_SongName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSongData_Statics::NewProp_BPM = { "BPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSongData, BPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BPM_MetaData), NewProp_BPM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSongData_Statics::NewProp_SongAudio = { "SongAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSongData, SongAudio), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SongAudio_MetaData), NewProp_SongAudio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSongData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSongData_Statics::NewProp_SongName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSongData_Statics::NewProp_BPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSongData_Statics::NewProp_SongAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSongData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSongData Property Definitions **************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSongData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BeatShot2,
	nullptr,
	&NewStructOps,
	"SongData",
	Z_Construct_UScriptStruct_FSongData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSongData_Statics::PropPointers),
	sizeof(FSongData),
	alignof(FSongData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSongData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSongData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSongData()
{
	if (!Z_Registration_Info_UScriptStruct_FSongData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSongData.InnerSingleton, Z_Construct_UScriptStruct_FSongData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSongData.InnerSingleton);
}
// ********** End ScriptStruct FSongData ***********************************************************

// ********** Begin Class ARhythmBeatManager Function CheckHitAccuracy *****************************
struct Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics
{
	struct RhythmBeatManager_eventCheckHitAccuracy_Parms
	{
		float DistanceFromVeil;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rhythm" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CheckHitAccuracy constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromVeil;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CheckHitAccuracy constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CheckHitAccuracy Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::NewProp_DistanceFromVeil = { "DistanceFromVeil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RhythmBeatManager_eventCheckHitAccuracy_Parms, DistanceFromVeil), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RhythmBeatManager_eventCheckHitAccuracy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::NewProp_DistanceFromVeil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::PropPointers) < 2048);
// ********** End Function CheckHitAccuracy Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARhythmBeatManager, nullptr, "CheckHitAccuracy", 	Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::RhythmBeatManager_eventCheckHitAccuracy_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::RhythmBeatManager_eventCheckHitAccuracy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARhythmBeatManager::execCheckHitAccuracy)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceFromVeil);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->CheckHitAccuracy(Z_Param_DistanceFromVeil);
	P_NATIVE_END;
}
// ********** End Class ARhythmBeatManager Function CheckHitAccuracy *******************************

// ********** Begin Class ARhythmBeatManager Function PauseBeat ************************************
struct Z_Construct_UFunction_ARhythmBeatManager_PauseBeat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rhythm" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PauseBeat constinit property declarations *****************************
// ********** End Function PauseBeat constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARhythmBeatManager_PauseBeat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARhythmBeatManager, nullptr, "PauseBeat", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARhythmBeatManager_PauseBeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARhythmBeatManager_PauseBeat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARhythmBeatManager_PauseBeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARhythmBeatManager_PauseBeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARhythmBeatManager::execPauseBeat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseBeat();
	P_NATIVE_END;
}
// ********** End Class ARhythmBeatManager Function PauseBeat **************************************

// ********** Begin Class ARhythmBeatManager Function ResumeBeat ***********************************
struct Z_Construct_UFunction_ARhythmBeatManager_ResumeBeat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rhythm" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResumeBeat constinit property declarations ****************************
// ********** End Function ResumeBeat constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARhythmBeatManager_ResumeBeat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARhythmBeatManager, nullptr, "ResumeBeat", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARhythmBeatManager_ResumeBeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARhythmBeatManager_ResumeBeat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARhythmBeatManager_ResumeBeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARhythmBeatManager_ResumeBeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARhythmBeatManager::execResumeBeat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeBeat();
	P_NATIVE_END;
}
// ********** End Class ARhythmBeatManager Function ResumeBeat *************************************

// ********** Begin Class ARhythmBeatManager Function StartBeat ************************************
struct Z_Construct_UFunction_ARhythmBeatManager_StartBeat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rhythm" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartBeat constinit property declarations *****************************
// ********** End Function StartBeat constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARhythmBeatManager_StartBeat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARhythmBeatManager, nullptr, "StartBeat", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARhythmBeatManager_StartBeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARhythmBeatManager_StartBeat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARhythmBeatManager_StartBeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARhythmBeatManager_StartBeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARhythmBeatManager::execStartBeat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBeat();
	P_NATIVE_END;
}
// ********** End Class ARhythmBeatManager Function StartBeat **************************************

// ********** Begin Class ARhythmBeatManager *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARhythmBeatManager;
UClass* ARhythmBeatManager::GetPrivateStaticClass()
{
	using TClass = ARhythmBeatManager;
	if (!Z_Registration_Info_UClass_ARhythmBeatManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RhythmBeatManager"),
			Z_Registration_Info_UClass_ARhythmBeatManager.InnerSingleton,
			StaticRegisterNativesARhythmBeatManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ARhythmBeatManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ARhythmBeatManager_NoRegister()
{
	return ARhythmBeatManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARhythmBeatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RhythmBeatManager.h" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSong_MetaData[] = {
		{ "Category", "Rhythm" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeat_MetaData[] = {
		{ "Category", "Rhythm" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RhythmBeatManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARhythmBeatManager constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentSong;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicAudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARhythmBeatManager constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CheckHitAccuracy"), .Pointer = &ARhythmBeatManager::execCheckHitAccuracy },
		{ .NameUTF8 = UTF8TEXT("PauseBeat"), .Pointer = &ARhythmBeatManager::execPauseBeat },
		{ .NameUTF8 = UTF8TEXT("ResumeBeat"), .Pointer = &ARhythmBeatManager::execResumeBeat },
		{ .NameUTF8 = UTF8TEXT("StartBeat"), .Pointer = &ARhythmBeatManager::execStartBeat },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARhythmBeatManager_CheckHitAccuracy, "CheckHitAccuracy" }, // 3794022162
		{ &Z_Construct_UFunction_ARhythmBeatManager_PauseBeat, "PauseBeat" }, // 2121654601
		{ &Z_Construct_UFunction_ARhythmBeatManager_ResumeBeat, "ResumeBeat" }, // 796426353
		{ &Z_Construct_UFunction_ARhythmBeatManager_StartBeat, "StartBeat" }, // 1269177567
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARhythmBeatManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARhythmBeatManager_Statics

// ********** Begin Class ARhythmBeatManager Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARhythmBeatManager_Statics::NewProp_CurrentSong = { "CurrentSong", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARhythmBeatManager, CurrentSong), Z_Construct_UScriptStruct_FSongData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSong_MetaData), NewProp_CurrentSong_MetaData) }; // 3966318763
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARhythmBeatManager_Statics::NewProp_OnBeat = { "OnBeat", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARhythmBeatManager, OnBeat), Z_Construct_UDelegateFunction_BeatShot2_OnBeat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeat_MetaData), NewProp_OnBeat_MetaData) }; // 3965909529
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARhythmBeatManager_Statics::NewProp_MusicAudioComponent = { "MusicAudioComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARhythmBeatManager, MusicAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicAudioComponent_MetaData), NewProp_MusicAudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARhythmBeatManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARhythmBeatManager_Statics::NewProp_CurrentSong,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARhythmBeatManager_Statics::NewProp_OnBeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARhythmBeatManager_Statics::NewProp_MusicAudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARhythmBeatManager_Statics::PropPointers) < 2048);
// ********** End Class ARhythmBeatManager Property Definitions ************************************
UObject* (*const Z_Construct_UClass_ARhythmBeatManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BeatShot2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARhythmBeatManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARhythmBeatManager_Statics::ClassParams = {
	&ARhythmBeatManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARhythmBeatManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARhythmBeatManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARhythmBeatManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ARhythmBeatManager_Statics::Class_MetaDataParams)
};
void ARhythmBeatManager::StaticRegisterNativesARhythmBeatManager()
{
	UClass* Class = ARhythmBeatManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ARhythmBeatManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_ARhythmBeatManager()
{
	if (!Z_Registration_Info_UClass_ARhythmBeatManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARhythmBeatManager.OuterSingleton, Z_Construct_UClass_ARhythmBeatManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARhythmBeatManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARhythmBeatManager);
ARhythmBeatManager::~ARhythmBeatManager() {}
// ********** End Class ARhythmBeatManager *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h__Script_BeatShot2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSongData::StaticStruct, Z_Construct_UScriptStruct_FSongData_Statics::NewStructOps, TEXT("SongData"),&Z_Registration_Info_UScriptStruct_FSongData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSongData), 3966318763U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARhythmBeatManager, ARhythmBeatManager::StaticClass, TEXT("ARhythmBeatManager"), &Z_Registration_Info_UClass_ARhythmBeatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARhythmBeatManager), 3177988851U) },
	};
}; // Z_CompiledInDeferFile_FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h__Script_BeatShot2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h__Script_BeatShot2_1758695174{
	TEXT("/Script/BeatShot2"),
	Z_CompiledInDeferFile_FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h__Script_BeatShot2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h__Script_BeatShot2_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h__Script_BeatShot2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hemishah_Desktop_git_BeatShot2_BeatShot2_Source_BeatShot2_RhythmBeatManager_h__Script_BeatShot2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
