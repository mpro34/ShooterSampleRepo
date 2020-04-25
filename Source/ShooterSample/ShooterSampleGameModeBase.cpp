// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterSampleGameModeBase.h"
#include "ShooterSample.h"

void AShooterSampleGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Starting up shooter sampler"));
	}
}
