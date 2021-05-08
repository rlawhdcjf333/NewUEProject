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

	//Q �Է� ����
	bool IsQDown = false;
	//Q Ȧ�� �ð�
	float QHoldingTime = 0.0f;
	//A3 �߻� ����
	bool IsA3Launched = false;

	//W �Է� ����
	bool IsWDown = false;
	//W Ȧ�� �ð�
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
	//����üA1 
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AProjectileA1> ProjectileA1Class;
	
	//����üA2
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AProjectileA2> ProjectileA2Class;

	//����üA3
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AProjectileA3> ProjectileA3Class;

	//����üA4
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AProjectileA4> ProjectileA4Class;

	//=========================================================================================
	//���� UI Ŭ����
	UPROPERTY(VisibleAnywhere)
	class UMyUserWidget* PlayerUI;

public:
	ANewProjectCharacter();

	virtual void Tick(float DeltaTime) override;

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }


	//Q Ű�Է� üĿ
	void QPress();
	void QRelease();

	//W Ű�Է� üĿ
	void WPress();
	void WRelease();

	//A-1 �߻� �Լ�
	UFUNCTION()
	void FireA1();

	//A-2 �߻� �Լ�
	UFUNCTION()
	void FireA2();

	//A-3 �߻� �Լ�
	UFUNCTION()
	void FireA3();

	//A-4 �߻� �Լ�
	UFUNCTION()
	void FireA4();

};
