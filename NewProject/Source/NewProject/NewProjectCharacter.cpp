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
	//액션 바인딩

	//짬푸
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	
	//키홀딩 바인딩
	PlayerInputComponent->BindAction("ActionQ", IE_Pressed, this, &ANewProjectCharacter::QPress);
	PlayerInputComponent->BindAction("ActionQ", IE_Released, this, &ANewProjectCharacter::QRelease);
	PlayerInputComponent->BindAction("ActionW", IE_Pressed, this, &ANewProjectCharacter::WPress);
	PlayerInputComponent->BindAction("ActionW", IE_Released, this, &ANewProjectCharacter::WRelease);

	
	
	//발사키 바인딩
	PlayerInputComponent->BindAction("ActionQ", IE_Released, this, &ANewProjectCharacter::FireA1);
	PlayerInputComponent->BindAction("ActionQ", IE_Released, this, &ANewProjectCharacter::FireA2);
	PlayerInputComponent->BindAction("ActionW", IE_Pressed, this, &ANewProjectCharacter::FireA3);
	PlayerInputComponent->BindAction("ActionW", IE_Released, this, &ANewProjectCharacter::FireA4);


	//횡스크롤 이동 바인딩 (좌/우)
	PlayerInputComponent->BindAxis("MoveRight", this, &ANewProjectCharacter::MoveRight);

	//터치 타이밍 바인딩 ,,, 근데  PC에서 이게 필요할까...? 어쨌거나
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
//키 홀딩 타임 매 프레임 업데이트
void ANewProjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsQDown == true)
	{
		QHoldingTime += DeltaTime;

		//충전량 % == 입력 지속시간 / 3
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
//Q 키 홀딩 체크
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
//W 키 홀딩 체크
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
//A1 발사체 

void ANewProjectCharacter::FireA1()
{
	//3초 + E 보다 길게 입력될 경우 리턴
	if (QHoldingTime >= 3.0f) return;

	//A3 발사체 트리거 초기화 및 여타 탄환 입력과 중복 방지
	if (IsA3Launched)
	{
		IsA3Launched = false; return;
	}

	if (ProjectileA1Class)
	{
		//캡슐 높이 절반
		FVector HeightVector(0, 0, GetDefaultHalfHeight());

		//발밑 벡터 == 그냥 루트(== 캡슐 센터)에서 캡슐 높이 절반을 뺀다
		FVector MyLocation = GetActorLocation() - HeightVector;

		//스폰 방향
		FRotator MyRotation = GetActorRotation();

		// 오프셋 벡터
		FVector Offset(20, 0, 50);

		//스폰 위치 ==  발밑에서 캐릭 정면(X)으로 20, 발밑으로부터 50
		FVector MuzzleLocation = MyLocation + FTransform(MyRotation).TransformVector(Offset);
		
		UWorld* World = GetWorld();
		if (World)
		{
			//스포닝 파라미터 세팅
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this; // 액터 콜
			SpawnParams.Instigator = GetInstigator(); // 폰 콜

			AProjectileA1* Projectile = World->SpawnActor<AProjectileA1>(ProjectileA1Class, MuzzleLocation, MyRotation, SpawnParams);

			if (Projectile)
			{
				FVector LaunchDir = MyRotation.Vector();
				Projectile->Fire(LaunchDir);

				//UI 콜
				GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->A1CountUp();

			}
		}
	}
}

//===========================================================================================================
//A2 발사체 
void ANewProjectCharacter::FireA2()
{
	//3초 + E 보다 짧게 입력될 경우 리턴
	if (QHoldingTime < 3.0f ) return;

	//A3 발사체 트리거 초기화 및 여타 탄환 입력과 중복 방지
	if (IsA3Launched)
	{
		IsA3Launched = false; return;
	}

	if (ProjectileA2Class)
	{
		//캡슐 높이 절반
		FVector HeightVector(0, 0, GetDefaultHalfHeight());

		//발밑 벡터 == 그냥 루트(== 캡슐 센터)에서 캡슐 높이 절반을 뺀다
		FVector MyLocation = GetActorLocation() - HeightVector;

		//스폰 방향
		FRotator MyRotation = GetActorRotation();

		// 오프셋 벡터
		FVector Offset(20, 0, 50);

		//스폰 위치 ==  발밑에서 캐릭 정면(X)으로 20, 발밑으로부터 50
		FVector MuzzleLocation = MyLocation + FTransform(MyRotation).TransformVector(Offset);

		UWorld* World = GetWorld();
		if (World)
		{
			//스포닝 파라미터 세팅
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this; // 액터
			SpawnParams.Instigator = GetInstigator(); // 폰

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
//A3 발사체
void ANewProjectCharacter::FireA3()
{
	//Q를 누른상태에서 홀딩 시간 1초 체크
	if (IsQDown == true && QHoldingTime <= 1.0f)
	{
		if (ProjectileA3Class)
		{
			//캡슐 높이 절반
			FVector HeightVector(0, 0, GetDefaultHalfHeight());

			//발밑 벡터 == 그냥 루트(== 캡슐 센터)에서 캡슐 높이 절반을 뺀다
			FVector MyLocation = GetActorLocation() - HeightVector;

			//스폰 방향
			FRotator MyRotation = GetActorRotation();

			// 오프셋 벡터
			FVector Offset(20, 0, 50);

			//스폰 위치 ==  발밑에서 캐릭 정면(X)으로 20, 발밑으로부터 50
			FVector MuzzleLocation = MyLocation + FTransform(MyRotation).TransformVector(Offset);

			UWorld* World = GetWorld();
			if (World)
			{
				//스포닝 파라미터 세팅
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this; // 액터
				SpawnParams.Instigator = GetInstigator(); // 폰

				AProjectileA3* Projectile = World->SpawnActor<AProjectileA3>(ProjectileA3Class, MuzzleLocation, MyRotation, SpawnParams);

				//이러면 발사성공
				if (Projectile)
				{
					FVector LaunchDir = MyRotation.Vector();
					Projectile->Fire(LaunchDir);
					
					//ui reference call
					GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->A3CountUp();
					GetWorld()->GetAuthGameMode<ANewProjectGameMode>()->GetUI()->DisableProgressBar();

					//A3 (분열탄) 발사 트리거 작동
					IsA3Launched = true;
				}
			}
		}
	}
}
//===========================================================================================================
//A4 발사체 :: 
void ANewProjectCharacter::FireA4()
{
	if (IsA3Launched)
	{
		return;
	}
	if (ProjectileA4Class)
	{
		//캡슐 높이 절반
		FVector HeightVector(0, 0, GetDefaultHalfHeight());

		//발밑 벡터 == 그냥 루트(== 캡슐 센터)에서 캡슐 높이 절반을 뺀다
		FVector MyLocation = GetActorLocation() - HeightVector;

		//스폰 방향
		FRotator MyRotation = GetActorRotation();

		// 오프셋 벡터
		FVector Offset(20, 0, 50);

		//스폰 위치 ==  발밑에서 캐릭 정면(X)으로 20, 발밑으로부터 50
		FVector MuzzleLocation = MyLocation + FTransform(MyRotation).TransformVector(Offset);

		UWorld* World = GetWorld();
		if (World)
		{
			//스포닝 파라미터 세팅
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this; // 액터
			SpawnParams.Instigator = GetInstigator(); // 폰

			AProjectileA4* Projectile = World->SpawnActor<AProjectileA4>(ProjectileA4Class, MuzzleLocation, MyRotation, SpawnParams);

			//이러면 발사성공
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
