#pragma once

#include "CoreMinimal.h"
#include "MyInputSettings.generated.h"

UCLASS(Blueprintable, config = Input)
class MYACTIONGAMEMULTI_API UMyInputSettings : public UObject
{
	GENERATED_BODY()

protected:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
	UPROPERTY(config, EditDefaultsOnly)
	TMap<FInputChord, TSubclassOf<class ICommand>> InputMap;
};