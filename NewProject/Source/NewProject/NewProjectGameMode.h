// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NewProjectCharacter.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.h"
#include "NewProjectGameMode.generated.h"

UCLASS(minimalapi)
class ANewProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()


public:
	ANewProjectGameMode();

	
protected:
	 

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> WidgetClass;

	UPROPERTY(VisibleInstanceOnly)
	UMyUserWidget* MyUI;

	virtual void BeginPlay() override;


public:

	//이 함수를 통해 현재 UI를 끌어갑니다
	UMyUserWidget* const GetUI() { return MyUI; }

};	