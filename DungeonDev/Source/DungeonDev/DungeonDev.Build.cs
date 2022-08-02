// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DungeonDev : ModuleRules
{
	public DungeonDev(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
