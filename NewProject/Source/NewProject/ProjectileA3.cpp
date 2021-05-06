// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileA3.h"

// Sets default values
AProjectileA3::AProjectileA3()
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
		//충돌 이벤트 바인딩
		CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectileA3::OnHit);
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
	}
	//화살표 컴포넌트1
	if (!ArrowComponent1)
	{
		ArrowComponent1 = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent1"));

		//1배의 상대 스케일링 사이즈
		ArrowComponent1->ArrowSize = 1.0f;
		//루트에 장착
		ArrowComponent1->SetupAttachment(RootComponent);
		//좌향 45도
		ArrowComponent1->SetRelativeTransform(FTransform(FRotator(0,-45,0)));
		//히든 여부 비활성 == 게임화면에서 보이게 설정
		ArrowComponent1->SetHiddenInGame(false);
	}
	//화살표 컴포넌트2
	if (!ArrowComponent2)
	{
		ArrowComponent2 = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent2"));

		//1배의 상대 스케일링 사이즈
		ArrowComponent2->ArrowSize = 1.0f;
		//루트에 장착
		ArrowComponent2->SetupAttachment(RootComponent);
		//우향 45도
		ArrowComponent2->SetRelativeTransform(FTransform(FRotator(0,45,0)));
		//히든 여부 비활성 == 게임화면에서 보이게 설정
		ArrowComponent2->SetHiddenInGame(false);
	}
	//메시 컴포넌트
	if (!ProjectileMeshComponent)
	{
		ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("'/Game/Sphere.Sphere'"));
		if (Mesh.Succeeded())
		{
			ProjectileMeshComponent->SetStaticMesh(Mesh.Object);
		}
	}
	//머테리얼 (컬러 정보는 블프에서 컨트롤)
	static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("'/Game/NewMaterial3.NewMaterial3'"));
	if (Material.Succeeded())
	{
		ProjectileMaterialInstance = UMaterialInstanceDynamic::Create(Material.Object, ProjectileMeshComponent);
	}
	ProjectileMeshComponent->SetMaterial(0, ProjectileMaterialInstance);
	ProjectileMeshComponent->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
	ProjectileMeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AProjectileA3::BeginPlay()
{
	Super::BeginPlay();

	SetLifeSpan(3);
	
}

// Called every frame
void AProjectileA3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectileA3::BeginDestroy()
{
	Seperation();
}

void AProjectileA3::Fire(const FVector& ShootingDir)
{
	ProjectileMovementComponent->Velocity = ShootingDir * ProjectileMovementComponent->InitialSpeed;
}

void AProjectileA3::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	Destroy();
}

void AProjectileA3::Seperation()
{
	if (ProjectileA1Class)
	{
		//현재 위치
		FVector MyLocation = GetActorLocation();

		//ArrowComponent 방향
		FRotator MyRotation = ArrowComponent->GetRelativeRotation();
		//ArrowComponent1 방향
		FRotator MyRotation1 = ArrowComponent1->GetRelativeRotation();
		//ArrowComponent2 방향
		FRotator MyRotation2 = ArrowComponent2->GetRelativeRotation();

		

		UWorld* World = GetWorld();
		if (World)
		{
			//스포닝 파라미터 세팅
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this; // 액터 콜
			SpawnParams.Instigator = GetInstigator(); // 폰 콜

			//3방향 스폰
			AProjectileA1* Projectile = World->SpawnActor<AProjectileA1>(ProjectileA1Class, MyLocation, MyRotation, SpawnParams);
			AProjectileA1* Projectile1 = World->SpawnActor<AProjectileA1>(ProjectileA1Class, MyLocation, MyRotation1, SpawnParams);
			AProjectileA1* Projectile2 = World->SpawnActor<AProjectileA1>(ProjectileA1Class, MyLocation, MyRotation2, SpawnParams);
			//3방향 발사
			if (Projectile)
			{
				FVector LaunchDir = MyRotation.Vector();
				Projectile->Fire(LaunchDir);
			}
			if (Projectile1)
			{
				FVector LaunchDir = MyRotation1.Vector();
				Projectile1->Fire(LaunchDir);
			}
			if (Projectile2)
			{
				FVector LaunchDir = MyRotation2.Vector();
				Projectile2->Fire(LaunchDir);
			}
		}
	}
}