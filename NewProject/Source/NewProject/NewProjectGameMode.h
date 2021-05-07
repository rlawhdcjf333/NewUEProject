// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NewProjectCharacter.h"
#include "Blueprint/UserWidget.h"
#include "NewProjectGameMode.generated.h"

UCLASS(minimalapi)
class ANewProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()


public:
	ANewProjectGameMode();

	UFUNCTION(BlueprintCallable, Category = "UMG Game")
		void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
		TSubclassOf<UUserWidget> StartingWidgetClass;

	UPROPERTY()
		UUserWidget* CurrentWidget;

};	



