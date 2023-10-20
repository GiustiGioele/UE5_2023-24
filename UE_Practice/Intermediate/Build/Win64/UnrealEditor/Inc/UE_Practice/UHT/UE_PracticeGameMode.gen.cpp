// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Practice/UE_PracticeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_PracticeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UE_PRACTICE_API UClass* Z_Construct_UClass_AUE_PracticeGameMode();
	UE_PRACTICE_API UClass* Z_Construct_UClass_AUE_PracticeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE_Practice();
// End Cross Module References
	void AUE_PracticeGameMode::StaticRegisterNativesAUE_PracticeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE_PracticeGameMode);
	UClass* Z_Construct_UClass_AUE_PracticeGameMode_NoRegister()
	{
		return AUE_PracticeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE_PracticeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE_PracticeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Practice,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE_PracticeGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE_PracticeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE_PracticeGameMode.h" },
		{ "ModuleRelativePath", "UE_PracticeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE_PracticeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE_PracticeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE_PracticeGameMode_Statics::ClassParams = {
		&AUE_PracticeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE_PracticeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE_PracticeGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUE_PracticeGameMode()
	{
		if (!Z_Registration_Info_UClass_AUE_PracticeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE_PracticeGameMode.OuterSingleton, Z_Construct_UClass_AUE_PracticeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE_PracticeGameMode.OuterSingleton;
	}
	template<> UE_PRACTICE_API UClass* StaticClass<AUE_PracticeGameMode>()
	{
		return AUE_PracticeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_PracticeGameMode);
	AUE_PracticeGameMode::~AUE_PracticeGameMode() {}
	struct Z_CompiledInDeferFile_FID_UE5_2023_24_UE_Practice_Source_UE_Practice_UE_PracticeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2023_24_UE_Practice_Source_UE_Practice_UE_PracticeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE_PracticeGameMode, AUE_PracticeGameMode::StaticClass, TEXT("AUE_PracticeGameMode"), &Z_Registration_Info_UClass_AUE_PracticeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE_PracticeGameMode), 1374523761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2023_24_UE_Practice_Source_UE_Practice_UE_PracticeGameMode_h_1477199764(TEXT("/Script/UE_Practice"),
		Z_CompiledInDeferFile_FID_UE5_2023_24_UE_Practice_Source_UE_Practice_UE_PracticeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_2023_24_UE_Practice_Source_UE_Practice_UE_PracticeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
