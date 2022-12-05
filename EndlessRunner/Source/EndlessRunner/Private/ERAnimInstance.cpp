// Fill out your copyright notice in the Description page of Project Settings.


#include "ERAnimInstance.h"
#include "GameFramework/PawnMovementComponent.h"

void UERAnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}

	if (IsValid(Pawn))
	{
		MovementComponent = Pawn->GetMovementComponent();
	}
}

void UERAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	if (Pawn && MovementComponent)
	{
		bIsInAir = MovementComponent->IsFalling();
		Speed = Pawn->GetVelocity().Size();
	}
}
