// Fill out your copyright notice in the Description page of Project Settings.

#include "Solar.h"
#include "SolarPlayerController.h"


void ASolarPlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetInputMode(FInputModeGameAndUI());
}