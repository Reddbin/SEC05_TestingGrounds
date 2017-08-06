// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SEC05_TestingGroundsGameMode.h"
#include "SEC05_TestingGroundsHUD.h"
#include "SEC05_TestingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASEC05_TestingGroundsGameMode::ASEC05_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASEC05_TestingGroundsHUD::StaticClass();
}
