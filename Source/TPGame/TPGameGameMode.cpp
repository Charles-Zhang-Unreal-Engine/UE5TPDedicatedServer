// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPGameGameMode.h"
#include "TPGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPGameGameMode::ATPGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
