// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_Practice_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE_Practice;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE_Practice()
	{
		if (!Z_Registration_Info_UPackage__Script_UE_Practice.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE_Practice",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xCB984C1E,
				0x6E92B0DD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE_Practice.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE_Practice.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE_Practice(Z_Construct_UPackage__Script_UE_Practice, TEXT("/Script/UE_Practice"), Z_Registration_Info_UPackage__Script_UE_Practice, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCB984C1E, 0x6E92B0DD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
