// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

#include "MyActionGameMulti/Global/MyInputSettings.h"

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();


}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if(InputSettings.IsValid())
	{
	}

}
