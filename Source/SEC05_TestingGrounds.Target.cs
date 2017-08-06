// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SEC05_TestingGroundsTarget : TargetRules
{
	public SEC05_TestingGroundsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("SEC05_TestingGrounds");
	}
}
