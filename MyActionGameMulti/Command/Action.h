// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Command.h"
#include "Action.generated.h"

UCLASS(Blueprintable, HideDropdown)
class MYACTIONGAMEMULTI_API UAction : public UObject, public ICommand
{
	GENERATED_BODY()
public:
	virtual void DoAction() override;
};
