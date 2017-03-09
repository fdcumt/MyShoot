// Fill out your copyright notice in the Description page of Project Settings.

#include "MyShoot.h"
#include "MyShootGameModeBase.h"

void AMyShootGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
	}
}
