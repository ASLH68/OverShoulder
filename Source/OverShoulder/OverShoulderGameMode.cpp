// Copyright Epic Games, Inc. All Rights Reserved.

#include "OverShoulderGameMode.h"
#include "OverShoulderCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOverShoulderGameMode::AOverShoulderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
