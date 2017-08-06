// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SEC05_TestingGroundsEditorTarget : TargetRules
{
	public SEC05_TestingGroundsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("SEC05_TestingGrounds");
	}
}
