// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PartyGameY4 : ModuleRules
{
	public PartyGameY4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
