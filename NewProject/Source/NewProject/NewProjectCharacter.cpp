// Copyright Epic Games, Inc. All Rights Reserved.

#include <string.h>
#include "NewProjectCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


ANewProjectCharacter::ANewProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f, 0.f, 75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f, 180.f, 0.f));
	
	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera
	
	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;
	
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ANewProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	//�׼� ���ε�

	//«Ǫ
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	//�߻�Ű ���ε�
	PlayerInputComponent->BindAction("ActionQ", IE_Pressed, this, &ANewProjectCharacter::FireA1);


	//Ⱦ��ũ�� �̵� ���ε� (��/��)
	PlayerInputComponent->BindAxis("MoveRight", this, &ANewProjectCharacter::MoveRight);

	//��ġ Ÿ�̹� ���ε�
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ANewProjectCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ANewProjectCharacter::TouchStopped);

}

void ANewProjectCharacter::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f, -1.f, 0.f), Value);
}


void ANewProjectCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void ANewProjectCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

//===========================================================================================================
//A1 �߻�ü 

void ANewProjectCharacter::FireA1()
{
	if (ProjectileA1Class)
	{

		//�߹� ���� == �׳� ��Ʈ(== ĸ�� ����)���� ĸ�� ���� ������ ����
		FVector MyLocation = GetActorLocation() - (0,0,1)*GetDefaultHalfHeight();

		//���� ����
		FRotator MuzzleRotation = GetActorRotation();

		//���� ��ġ ==  �߹ؿ��� ���� �������� (ĳ�� ����) ���õ� ���� ����ŭ �̵�
		FVector MuzzleLocation = MyLocation + Muzzle;

		UWorld* World = GetWorld();
		if (World)
		{
			//������ �Ķ���� ����
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this; // ���� ��
			SpawnParams.Instigator = GetInstigator(); // �� ��

			AProjectileA1* Projectile = World->SpawnActor<AProjectileA1>(ProjectileA1Class, MuzzleLocation, MuzzleRotation, SpawnParams);

			if (Projectile)
			{
				FVector LaunchDir = MuzzleRotation.Vector();
				Projectile->Fire(LaunchDir);
			}
		}
	}


	

}

