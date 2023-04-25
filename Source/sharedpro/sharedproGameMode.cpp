// Copyright Epic Games, Inc. All Rights Reserved.

#include "sharedproGameMode.h"
#include "sharedproCharacter.h"
#include "UObject/ConstructorHelpers.h"

AsharedproGameMode::AsharedproGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
