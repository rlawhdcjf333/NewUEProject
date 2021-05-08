// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NewProjectCharacter.generated.h"

UCLASS(config=Game)
class ANewProjectCharacter : public ACharacter
{
	GENERATED_BODY()

private:

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	//Q 입력 감지
	bool IsQDown = false;
	//Q 홀딩 시간
	float QHoldingTime = 0.0f;
	//A3 발사 여부
	bool IsA3Launched = false;

	//W 입력 감지
	bool IsWDown = false;
	//W 홀딩 시간
	float WHoldingTime = 0.0f;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	//=========================================================================================
	//투사체A1 
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AProjectileA1> ProjectileA1Class;
	
	//투사체A2
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AProjectileA2> ProjectileA2Class;

	//투사체A3
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AProjectileA3> ProjectileA3Class;

	//투사체A4
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AProjectileA4> ProjectileA4Class;

	//=========================================================================================
	//위젯 UI 클래스
	UPROPERTY(VisibleAnywhere)
	class UMyUserWidget* PlayerUI;

public:
	ANewProjectCharacter();

	virtual void Tick(float DeltaTime) override;

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }


	//Q 키입력 체커
	void QPress();
	void QRelease();

	//W 키입력 체커
	void WPress();
	void WRelease();

	//A-1 발사 함수
	UFUNCTION()
	void FireA1();

	//A-2 발사 함수
	UFUNCTION()
	void FireA2();

	//A-3 발사 함수
	UFUNCTION()
	void FireA3();

	//A-4 발사 함수
	UFUNCTION()
	void FireA4();

};
