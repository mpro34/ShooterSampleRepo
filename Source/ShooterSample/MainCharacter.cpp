// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "ShooterSample.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("We are using the MainCharacter"));
	}
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Setup the "movement" bindings
	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);

	// Setup the "look" bindings
	PlayerInputComponent->BindAxis("Turn", this, &AMainCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AMainCharacter::AddControllerPitchInput);

	// Setup the "action" bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMainCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMainCharacter::StopJump);

}

// Called when moving forwards or backwards
void AMainCharacter::MoveForward(float Value)
{
	// Find out which way is "forward" and orient the player towards that direction.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}


// Called when moving right or left
void AMainCharacter::MoveRight(float Value)
{
	// Find out which way is "right" and orient player towards that direction.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AMainCharacter::StartJump()
{
	bPressedJump = true;
}

void AMainCharacter::StopJump()
{
	bPressedJump = false;
}

