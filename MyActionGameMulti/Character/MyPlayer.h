// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "MyPlayer.generated.h"

/**
 * 
 */
UCLASS()
class MYACTIONGAMEMULTI_API AMyPlayer : public ACharacterBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<class UMyInputSettings> InputSettings;
};
