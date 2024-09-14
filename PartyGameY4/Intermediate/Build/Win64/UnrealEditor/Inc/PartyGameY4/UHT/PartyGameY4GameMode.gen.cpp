// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyGameY4/PartyGameY4GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyGameY4GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PARTYGAMEY4_API UClass* Z_Construct_UClass_APartyGameY4GameMode();
PARTYGAMEY4_API UClass* Z_Construct_UClass_APartyGameY4GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyGameY4();
// End Cross Module References

// Begin Class APartyGameY4GameMode
void APartyGameY4GameMode::StaticRegisterNativesAPartyGameY4GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APartyGameY4GameMode);
UClass* Z_Construct_UClass_APartyGameY4GameMode_NoRegister()
{
	return APartyGameY4GameMode::StaticClass();
}
struct Z_Construct_UClass_APartyGameY4GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PartyGameY4GameMode.h" },
		{ "ModuleRelativePath", "PartyGameY4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartyGameY4GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APartyGameY4GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyGameY4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartyGameY4GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APartyGameY4GameMode_Statics::ClassParams = {
	&APartyGameY4GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APartyGameY4GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APartyGameY4GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APartyGameY4GameMode()
{
	if (!Z_Registration_Info_UClass_APartyGameY4GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APartyGameY4GameMode.OuterSingleton, Z_Construct_UClass_APartyGameY4GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APartyGameY4GameMode.OuterSingleton;
}
template<> PARTYGAMEY4_API UClass* StaticClass<APartyGameY4GameMode>()
{
	return APartyGameY4GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APartyGameY4GameMode);
APartyGameY4GameMode::~APartyGameY4GameMode() {}
// End Class APartyGameY4GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TheRe_OneDrive_Documents_PartyGameY4_PartyGameY4_PartyGameY4_Source_PartyGameY4_PartyGameY4GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APartyGameY4GameMode, APartyGameY4GameMode::StaticClass, TEXT("APartyGameY4GameMode"), &Z_Registration_Info_UClass_APartyGameY4GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APartyGameY4GameMode), 293498178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TheRe_OneDrive_Documents_PartyGameY4_PartyGameY4_PartyGameY4_Source_PartyGameY4_PartyGameY4GameMode_h_3390168714(TEXT("/Script/PartyGameY4"),
	Z_CompiledInDeferFile_FID_Users_TheRe_OneDrive_Documents_PartyGameY4_PartyGameY4_PartyGameY4_Source_PartyGameY4_PartyGameY4GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TheRe_OneDrive_Documents_PartyGameY4_PartyGameY4_PartyGameY4_Source_PartyGameY4_PartyGameY4GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
