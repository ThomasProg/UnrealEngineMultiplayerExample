// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MultiplayerTestGameMode.h"
#include "MultiplayerTestCharacter.h"

AMultiplayerTestGameMode::AMultiplayerTestGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AMultiplayerTestCharacter::StaticClass();	
}
