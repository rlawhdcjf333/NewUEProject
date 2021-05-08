// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "NewProjectCharacter.h"


void UMyUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// ��ư Ŭ�� �̺�Ʈ ���ε�
	ResetButton->OnClicked.AddDynamic(this, &UMyUserWidget::ResetCount);
	// ���α׷����� ������
	ProgressBarforA2->SetVisibility(ESlateVisibility::Hidden);
	ProgressBarforA2->SetPercent(0.0f);

}

//=========================================================================================
//�� ������ ����ü ī��Ʈ ������Ʈ
void UMyUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	A1Count->SetText(FText::AsNumber(A1Counts));
	A2Count->SetText(FText::AsNumber(A2Counts));
	A3Count->SetText(FText::AsNumber(A3Counts));
	A4Count->SetText(FText::AsNumber(A4Counts));
}

//=========================================================================================
//����
void UMyUserWidget::ResetCount()
{
	A1Counts = 0;
	A2Counts = 0;	
	A3Counts = 0;
	A4Counts = 0;
}

//=========================================================================================
//����ü�� ī��Ʈ
void UMyUserWidget::A1CountUp()
{
	A1Counts++;
}

void UMyUserWidget::A2CountUp()
{
	A2Counts++;
}

void UMyUserWidget::A3CountUp()
{
	A3Counts++;
}

void UMyUserWidget::A4CountUp()
{
	A4Counts++;
}

//=========================================================================================
//ProgressBar control

void UMyUserWidget::EnableProgressBar()
{
	//ProgressBar becomes visible!
	ProgressBarforA2->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}

void UMyUserWidget::ChargeProgressBar(float val)
{
	//set percentage of progressbar to show
	ProgressBarforA2->SetPercent(val);
}

void UMyUserWidget::DisableProgressBar()
{
	//ProgressBar becomes invisible!
	ProgressBarforA2->SetVisibility(ESlateVisibility::Hidden);
	//�ۼ�Ʈ �ʱ�ȭ
	ProgressBarforA2->SetPercent(0.0f);
}

