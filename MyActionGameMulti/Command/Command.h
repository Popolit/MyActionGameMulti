// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Command.generated.h"

UINTERFACE(MinimalAPI)
class UCommand : public UInterface
{
	GENERATED_BODY()
};

class MYACTIONGAMEMULTI_API ICommand
{
	GENERATED_BODY()

public:
	virtual void DoAction() = 0;
};
