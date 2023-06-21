// Copyright Epic Games, Inc. All Rights Reserved.


#include "MonhunLikeGameModeBase.h"
#include "MainPlayer.h"

AMonhunLikeGameModeBase::AMonhunLikeGameModeBase()
{
	DefaultPawnClass = AMainPlayer::StaticClass();
}
