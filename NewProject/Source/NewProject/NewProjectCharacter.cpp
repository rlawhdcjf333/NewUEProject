// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewProjectCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "NewProjectGameMode.h"
#include "ProjectileA1.h"
#include "ProjectileA2.h"
#include "ProjectileA3.h"
#include "ProjectileA4.h"
#include "MyUserWidget.h"
#include "GameFramework/CharacterMovementComponent.h"



ANewProjectCharacter::ANewProjectCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

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

	
	
}

//============================================================================================================
// Input

void ANewProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	//�׼� ���ε�

	//«Ǫ
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	
	//ŰȦ�� ���ε�
	PlayerInputComponent->BindAction("ActionQ", IE_Pressed, this, &ANewProjectCharacter::QPress);
	PlayerInputComponent->BindAction("ActionQ", IE_Released, this, &ANewProjectCharacter::QRelease);
	PlayerInputComponent->BindAction("ActionW", IE_Pressed, this, &ANewProjectCharacter::WPress);
	PlayerInputComponent->BindAction("ActionW", IE_Released, this, &ANewProjectCharacter::WRelease);

	
	
	//�߻�Ű ���ε�
	PlayerInputComponent->BindAction("ActionQ", IE_Released, this, &ANewProjectCharacter::FireA1);
	PlayerInputComponent->BindAction("ActionQ", IE_Released, this, &ANewProjectCharacter::FireA2);
	PlayerInputComponent->BindAction("ActionW", IE_Pressed, this, &ANewProjectCharacter::FireA3);
	PlayerInputComponent->BindAction("ActionW", IE_Released, this, &ANewProjectCharacter::FireA4);


	//Ⱦ��ũ�� �̵� ���ε� (��/��)
	PlayerInputComponent->BindAxis("MoveRight", this, &ANewProjectCharacter::MoveRight);

	//��ġ Ÿ�̹� ���ε� ,,, �ٵ�  PC���� �̰� �ʿ��ұ�...? ��·�ų�
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
//Ű Ȧ�� Ÿ�� �� ������ ������Ʈ
void ANewProjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsQDown == true)
	{
		QHoldingTime += DeltaTime;

		//������ % == �Է� ���ӽð� / 3
		float val = QHoldingTime / 3;
		if (val >= 3.0f) val = 1;
		GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->ChargeProgressBar(val);
	}

	if (IsWDown == true)
	{
		WHoldingTime += DeltaTime;
	}
}
//===========================================================================================================
//Q Ű Ȧ�� üũ
void ANewProjectCharacter::QPress()
{
	QHoldingTime = 0.0f;
	IsQDown = true;

	//ui call
	GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->EnableProgressBar();
}
void ANewProjectCharacter::QRelease()
{
	IsQDown = false;

	//ui call
	GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->DisableProgressBar();
}

//===========================================================================================================
//W Ű Ȧ�� üũ
void ANewProjectCharacter::WPress()
{
	WHoldingTime = 0.0f;
	IsWDown = true;
}
void ANewProjectCharacter::WRelease()
{
	IsWDown = false;
}

//===========================================================================================================
//A1 �߻�ü 

void ANewProjectCharacter::FireA1()
{
	//3�� + E ���� ��� �Էµ� ��� ����
	if (QHoldingTime >= 3.0f) return;

	//A3 �߻�ü Ʈ���� �ʱ�ȭ �� ��Ÿ źȯ �Է°� �ߺ� ����
	if (IsA3Launched)
	{
		IsA3Launched = false; return;
	}

	if (ProjectileA1Class)
	{
		//ĸ�� ���� ����
		FVector HeightVector(0, 0, GetDefaultHalfHeight());

		//�߹� ���� == �׳� ��Ʈ(== ĸ�� ����)���� ĸ�� ���� ������ ����
		FVector MyLocation = GetActorLocation() - HeightVector;

		//���� ����
		FRotator MyRotation = GetActorRotation();

		// ������ ����
		FVector Offset(20, 0, 50);

		//���� ��ġ ==  �߹ؿ��� ĳ�� ����(X)���� 20, �߹����κ��� 50
		FVector MuzzleLocation = MyLocation + FTransform(MyRotation).TransformVector(Offset);
		
		UWorld* World = GetWorld();
		if (World)
		{
			//������ �Ķ���� ����
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this; // ���� ��
			SpawnParams.Instigator = GetInstigator(); // �� ��

			AProjectileA1* Projectile = World->SpawnActor<AProjectileA1>(ProjectileA1Class, MuzzleLocation, MyRotation, SpawnParams);

			if (Projectile)
			{
				FVector LaunchDir = MyRotation.Vector();
				Projectile->Fire(LaunchDir);

				//UI ��
				GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->A1CountUp();

			}
		}
	}
}

//===========================================================================================================
//A2 �߻�ü 
void ANewProjectCharacter::FireA2()
{
	//3�� + E ���� ª�� �Էµ� ��� ����
	if (QHoldingTime < 3.0f ) return;

	//A3 �߻�ü Ʈ���� �ʱ�ȭ �� ��Ÿ źȯ �Է°� �ߺ� ����
	if (IsA3Launched)
	{
		IsA3Launched = false; return;
	}

	if (ProjectileA2Class)
	{
		//ĸ�� ���� ����
		FVector HeightVector(0, 0, GetDefaultHalfHeight());

		//�߹� ���� == �׳� ��Ʈ(== ĸ�� ����)���� ĸ�� ���� ������ ����
		FVector MyLocation = GetActorLocation() - HeightVector;

		//���� ����
		FRotator MyRotation = GetActorRotation();

		// ������ ����
		FVector Offset(20, 0, 50);

		//���� ��ġ ==  �߹ؿ��� ĳ�� ����(X)���� 20, �߹����κ��� 50
		FVector MuzzleLocation = MyLocation + FTransform(MyRotation).TransformVector(Offset);

		UWorld* World = GetWorld();
		if (World)
		{
			//������ �Ķ���� ����
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this; // ����
			SpawnParams.Instigator = GetInstigator(); // ��

			AProjectileA2* Projectile = World->SpawnActor<AProjectileA2>(ProjectileA2Class, MuzzleLocation, MyRotation, SpawnParams);

			if (Projectile)
			{
				FVector LaunchDir = MyRotation.Vector();
				Projectile->Fire(LaunchDir);

				//ui call
				GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->A2CountUp();
			}
		}
	}
}

//===========================================================================================================
//A3 �߻�ü
void ANewProjectCharacter::FireA3()
{
	//Q�� �������¿��� Ȧ�� �ð� 1�� üũ
	if (IsQDown == true && QHoldingTime <= 1.0f)
	{
		if (ProjectileA3Class)
		{
			//ĸ�� ���� ����
			FVector HeightVector(0, 0, GetDefaultHalfHeight());

			//�߹� ���� == �׳� ��Ʈ(== ĸ�� ����)���� ĸ�� ���� ������ ����
			FVector MyLocation = GetActorLocation() - HeightVector;

			//���� ����
			FRotator MyRotation = GetActorRotation();

			// ������ ����
			FVector Offset(20, 0, 50);

			//���� ��ġ ==  �߹ؿ��� ĳ�� ����(X)���� 20, �߹����κ��� 50
			FVector MuzzleLocation = MyLocation + FTransform(MyRotation).TransformVector(Offset);

			UWorld* World = GetWorld();
			if (World)
			{
				//������ �Ķ���� ����
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this; // ����
				SpawnParams.Instigator = GetInstigator(); // ��

				AProjectileA3* Projectile = World->SpawnActor<AProjectileA3>(ProjectileA3Class, MuzzleLocation, MyRotation, SpawnParams);

				//�̷��� �߻缺��
				if (Projectile)
				{
					FVector LaunchDir = MyRotation.Vector();
					Projectile->Fire(LaunchDir);
					
					//ui reference call
					GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->A3CountUp();
					GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->DisableProgressBar();

					//A3 (�п�ź) �߻� Ʈ���� �۵�
					IsA3Launched = true;
				}
			}
		}
	}
}
//===========================================================================================================
//A4 �߻�ü :: 
void ANewProjectCharacter::FireA4()
{
	if (IsA3Launched)
	{
		return;
	}
	if (ProjectileA4Class)
	{
		//ĸ�� ���� ����
		FVector HeightVector(0, 0, GetDefaultHalfHeight());

		//�߹� ���� == �׳� ��Ʈ(== ĸ�� ����)���� ĸ�� ���� ������ ����
		FVector MyLocation = GetActorLocation() - HeightVector;

		//���� ����
		FRotator MyRotation = GetActorRotation();

		// ������ ����
		FVector Offset(20, 0, 50);

		//���� ��ġ ==  �߹ؿ��� ĳ�� ����(X)���� 20, �߹����κ��� 50
		FVector MuzzleLocation = MyLocation + FTransform(MyRotation).TransformVector(Offset);

		UWorld* World = GetWorld();
		if (World)
		{
			//������ �Ķ���� ����
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this; // ����
			SpawnParams.Instigator = GetInstigator(); // ��

			AProjectileA4* Projectile = World->SpawnActor<AProjectileA4>(ProjectileA4Class, MuzzleLocation, MyRotation, SpawnParams);

			//�̷��� �߻缺��
			if (Projectile)
			{
				FVector LaunchDir = MyRotation.Vector();
				Projectile->Fire(LaunchDir);

				//ui call
				GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->A4CountUp();
				GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->DisableProgressBar();

			}
		}
	}
}
