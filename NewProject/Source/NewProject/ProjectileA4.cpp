// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileA4.h"

// Sets default values
AProjectileA4::AProjectileA4()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//루트 컴포넌트 자동 생성
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
	}
	//충돌 컴포넌트 생성
	if (!CollisionComponent)
	{
		CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));

		//대강 이 프로필(Projectile)대로 충돌반응
		CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));

		//콜라이더 크기
		CollisionComponent->InitSphereRadius(15.0f);

		//루트에 장착
		RootComponent = CollisionComponent;
	}

	//투사체 운동 컴포넌트
	if (!ProjectileMovementComponent)
	{
		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
		//업데이트 컴포넌트 == 충돌체
		ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
		//시작 속도 100, 최대 속도 100
		ProjectileMovementComponent->InitialSpeed = 100.0f;
		ProjectileMovementComponent->MaxSpeed = 100.0f;
		//날아가는 방향으로 회전
		ProjectileMovementComponent->bRotationFollowsVelocity = true;
		//무중력 == 직선운동
		ProjectileMovementComponent->ProjectileGravityScale = 0.0f;

		//탄성 주겠음. 1 == 완전 탄성 운동 == 진행방향과 정확하게 반대 방향으로 에너지손실 epsilon도 없이 튕겨나감
		ProjectileMovementComponent->bShouldBounce = true;
		ProjectileMovementComponent->Bounciness = 1.0f;

	}
	//화살표 컴포넌트
	if (!ArrowComponent)
	{
		ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
		//1배의 상대 스케일링 사이즈
		ArrowComponent->ArrowSize = 1.0f;
		//루트에 장착
		ArrowComponent->SetupAttachment(RootComponent);
		//히든 여부 비활성 == 게임화면에서 보이게 설정
		ArrowComponent->SetHiddenInGame(false);

		//색깔 파란색
		ArrowComponent->SetArrowColor(FLinearColor(0, 0, 255,255));
	}
	//메시 컴포넌트
	if (!ProjectileMeshComponent)
	{
		ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("'/Game/Sphere.Sphere'"));
		if (Mesh.Succeeded())
		{
			ProjectileMeshComponent->SetStaticMesh(Mesh.Object);
			ProjectileMeshComponent->SetCollisionProfileName("Projectile");
		}
	}
	//머테리얼 (컬러 정보는 블프에서 컨트롤)
	static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("'/Game/NewMaterial4.NewMaterial4'"));
	if (Material.Succeeded())
	{
		ProjectileMaterialInstance = UMaterialInstanceDynamic::Create(Material.Object, ProjectileMeshComponent);
	}
	ProjectileMeshComponent->SetMaterial(0, ProjectileMaterialInstance);
	ProjectileMeshComponent->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
	ProjectileMeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AProjectileA4::BeginPlay()
{
	Super::BeginPlay();

	//수명 3초
	SetLifeSpan(3);
	
}

// Called every frame
void AProjectileA4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProjectileA4::Fire(const FVector& ShootingDir)
{
	ProjectileMovementComponent->Velocity = ShootingDir * ProjectileMovementComponent->InitialSpeed;
}

