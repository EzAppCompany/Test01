// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Project01.h"
#include "Project01GameMode.h"
#include "Project01HUD.h"
#include "Project01Character.h"

AProject01GameMode::AProject01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProject01HUD::StaticClass();
}
