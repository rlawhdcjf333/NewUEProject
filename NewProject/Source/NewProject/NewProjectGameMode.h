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

	//�� �Լ��� ���� ���� UI�� ����ϴ�
	UMyUserWidget* const GetUI() { return MyUI; }

};	