// Copyright Epic Games, Inc. All Rights Reserved.

#include "DungeonDevGameMode.h"
#include "DungeonDevCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonDevGameMode::ADungeonDevGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
