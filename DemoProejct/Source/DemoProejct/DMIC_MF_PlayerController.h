// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DemoProejct.h"
#include "GameFramework/PlayerController.h"
#include "DMIC_MF_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DEMOPROEJCT_API ADMIC_MF_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;
};
