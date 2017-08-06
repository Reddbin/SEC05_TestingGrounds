// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SEC05_TestingGroundsHUD.generated.h"

UCLASS()
class ASEC05_TestingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASEC05_TestingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

