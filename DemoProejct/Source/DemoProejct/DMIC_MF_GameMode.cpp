// Fill out your copyright notice in the Description page of Project Settings.


#include "DMIC_MF_GameMode.h"
#include "DMIC_MF_Pawn.h"
#include "DMIC_MF_PlayerController.h"

ADMIC_MF_GameMode::ADMIC_MF_GameMode()
{
	DefaultPawnClass = ADMIC_MF_Pawn::StaticClass();
	PlayerControllerClass = ADMIC_MF_PlayerController::StaticClass();
}

void ADMIC_MF_GameMode::PostLogin(APlayerController * NewPlayer)
{
	Super::PostLogin(NewPlayer);
}


