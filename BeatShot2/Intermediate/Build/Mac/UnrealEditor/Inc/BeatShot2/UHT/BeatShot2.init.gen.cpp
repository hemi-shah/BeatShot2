// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeatShot2_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	BEATSHOT2_API UFunction* Z_Construct_UDelegateFunction_BeatShot2_OnBeat__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BeatShot2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BeatShot2()
	{
		if (!Z_Registration_Info_UPackage__Script_BeatShot2.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_BeatShot2_OnBeat__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/BeatShot2",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xF3288932,
			0xA0D4415D,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BeatShot2.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_BeatShot2.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BeatShot2(Z_Construct_UPackage__Script_BeatShot2, TEXT("/Script/BeatShot2"), Z_Registration_Info_UPackage__Script_BeatShot2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF3288932, 0xA0D4415D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
