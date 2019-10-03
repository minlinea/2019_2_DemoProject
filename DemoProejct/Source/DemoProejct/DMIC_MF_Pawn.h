// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DemoProejct.h"
#include "GameFramework/Pawn.h"
#include "DMIC_MF_Pawn.generated.h"

UCLASS()
class DEMOPROEJCT_API ADMIC_MF_Pawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADMIC_MF_Pawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	virtual void PossessedBy(AController* NewController) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
