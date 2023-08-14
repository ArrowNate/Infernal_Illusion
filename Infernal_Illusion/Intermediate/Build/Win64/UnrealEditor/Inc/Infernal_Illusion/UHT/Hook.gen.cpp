// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Infernal_Illusion/Hook.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHook() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	INFERNAL_ILLUSION_API UClass* Z_Construct_UClass_UHook();
	INFERNAL_ILLUSION_API UClass* Z_Construct_UClass_UHook_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Infernal_Illusion();
// End Cross Module References
	void UHook::StaticRegisterNativesUHook()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHook);
	UClass* Z_Construct_UClass_UHook_NoRegister()
	{
		return UHook::StaticClass();
	}
	struct Z_Construct_UClass_UHook_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Infernal_Illusion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHook_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Hook.h" },
		{ "ModuleRelativePath", "Hook.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHook>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHook_Statics::ClassParams = {
		&UHook::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHook()
	{
		if (!Z_Registration_Info_UClass_UHook.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHook.OuterSingleton, Z_Construct_UClass_UHook_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHook.OuterSingleton;
	}
	template<> INFERNAL_ILLUSION_API UClass* StaticClass<UHook>()
	{
		return UHook::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHook);
	UHook::~UHook() {}
	struct Z_CompiledInDeferFile_FID_Users_George_Edmon_Documents_Unreal_Projects_Infernal_Illusion_Infernal_Illusion_Source_Infernal_Illusion_Hook_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_George_Edmon_Documents_Unreal_Projects_Infernal_Illusion_Infernal_Illusion_Source_Infernal_Illusion_Hook_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHook, UHook::StaticClass, TEXT("UHook"), &Z_Registration_Info_UClass_UHook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHook), 2966276376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_George_Edmon_Documents_Unreal_Projects_Infernal_Illusion_Infernal_Illusion_Source_Infernal_Illusion_Hook_h_1844026914(TEXT("/Script/Infernal_Illusion"),
		Z_CompiledInDeferFile_FID_Users_George_Edmon_Documents_Unreal_Projects_Infernal_Illusion_Infernal_Illusion_Source_Infernal_Illusion_Hook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_George_Edmon_Documents_Unreal_Projects_Infernal_Illusion_Infernal_Illusion_Source_Infernal_Illusion_Hook_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
