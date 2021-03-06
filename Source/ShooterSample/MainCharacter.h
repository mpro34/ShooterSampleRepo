// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS()
class SHOOTERSAMPLE_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Handles input moving forwards and backwards
	UFUNCTION()

	void MoveForward(float Value);

	// Handles input moving right and left
	UFUNCTION()

	void MoveRight(float Value);

	// Sets the jump flag for if a character wants to jump
	UFUNCTION()

	void StartJump();

	// Unsets the jump flag when wanting to stop jumping
	UFUNCTION()

	void StopJump();

	// TODO: Adding this FPS camera causes a strange build error
//	UPROPERTY(VisibleAnywhere)

//	UCameraComponent* MainCameraComponent;

};
