// Fill out your copyright notice in the Description page of Project Settings.


#include "DMIC_MF_Pawn.h"

// Sets default values
ADMIC_MF_Pawn::ADMIC_MF_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADMIC_MF_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADMIC_MF_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADMIC_MF_Pawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}
void ADMIC_MF_Pawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

// Called to bind functionality to input
void ADMIC_MF_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

