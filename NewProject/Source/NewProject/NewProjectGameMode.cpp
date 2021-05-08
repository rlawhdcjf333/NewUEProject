// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewProjectGameMode.h"
#include "NewProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANewProjectGameMode::ANewProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ANewProjectGameMode::BeginPlay()
{
	//Ŭ���� ������ �˻�
	if (IsValid(WidgetClass))
	{
		MyUI = Cast<UMyUserWidget>(CreateWidget(GetWorld(), WidgetClass));
		if (MyUI != nullptr)
		{
			//����Ʈ�� �߰�
			MyUI->AddToViewport();
		}
	}

}
