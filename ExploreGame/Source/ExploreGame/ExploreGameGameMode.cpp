// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExploreGameGameMode.h"
#include "ExploreGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExploreGameGameMode::AExploreGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
