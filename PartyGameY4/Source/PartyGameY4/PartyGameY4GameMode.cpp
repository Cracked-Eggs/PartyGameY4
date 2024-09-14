// Copyright Epic Games, Inc. All Rights Reserved.

#include "PartyGameY4GameMode.h"
#include "PartyGameY4Character.h"
#include "UObject/ConstructorHelpers.h"

APartyGameY4GameMode::APartyGameY4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
