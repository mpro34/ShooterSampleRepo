// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShooterSampleGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERSAMPLE_API AShooterSampleGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	virtual void StartPlay() override;
	
};
