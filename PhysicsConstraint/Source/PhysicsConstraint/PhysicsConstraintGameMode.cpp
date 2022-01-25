// Copyright Epic Games, Inc. All Rights Reserved.

#include "PhysicsConstraintGameMode.h"
#include "PhysicsConstraintCharacter.h"
#include "UObject/ConstructorHelpers.h"

APhysicsConstraintGameMode::APhysicsConstraintGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
