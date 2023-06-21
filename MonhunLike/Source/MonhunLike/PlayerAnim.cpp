// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnim.h"
#include "MainPlayer.h"
#include <GameFramework/CharacterMovementComponent.h>

void UPlayerAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	auto ownerPawn = TryGetPawnOwner();
	auto player = Cast<AMainPlayer>(ownerPawn);
	if (player)
	{
		FVector velocity = player->GetVelocity();
		speed = velocity.Size();
	}
}