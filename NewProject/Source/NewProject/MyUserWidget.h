// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class NEWPROJECT_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()

private:

	int A1Counts = 0;
	int A2Counts = 0;
	int A3Counts = 0;
	int A4Counts = 0;

protected:
	// UI À§Á¬ ¹ÙÀÎµù
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* ProgressBarforA2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ResetButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* A1Count;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* A2Count;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* A3Count;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* A4Count;

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION()
	void ResetCount();
	

public:

	//=======================Projectile Counting Functionality====================================
	UFUNCTION()
	void A1CountUp();
	
	UFUNCTION()
	void A2CountUp();
	
	UFUNCTION()
	void A3CountUp();

	UFUNCTION()
	void A4CountUp();


	//===========================ProgressBar Functionality ==================================
	void EnableProgressBar();

	void ChargeProgressBar(float val);

	void DisableProgressBar();
};
