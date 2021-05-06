// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileA2.h"

// Sets default values
AProjectileA2::AProjectileA2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//��Ʈ ������Ʈ �ڵ� ����
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
	}
	//�浹 ������Ʈ ����
	if (!CollisionComponent)
	{
		CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
		//�밭 �� ������(Projectile)��� �浹����
		CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
		//�浹 �̺�Ʈ ���ε�
		CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectileA2::OnHit);
		//�ݶ��̴� ũ��
		CollisionComponent->InitSphereRadius(15.0f);
		//��Ʈ�� ����
		RootComponent = CollisionComponent;
	}

	//����ü � ������Ʈ
	if (!ProjectileMovementComponent)
	{
		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
		//������Ʈ ������Ʈ == �浹ü
		ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
		//���� �ӵ� 100, �ִ� �ӵ� 100
		ProjectileMovementComponent->InitialSpeed = 100.0f;
		ProjectileMovementComponent->MaxSpeed = 100.0f;
		//���ư��� �������� ȸ��
		ProjectileMovementComponent->bRotationFollowsVelocity = true;
		//���߷� == �����
		ProjectileMovementComponent->ProjectileGravityScale = 0.0f;

	}
	//ȭ��ǥ ������Ʈ
	if (!ArrowComponent)
	{
		ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));

		//3���� ��� �����ϸ� ������
		ArrowComponent->ArrowSize = 3.0f;
		//��Ʈ�� ����
		ArrowComponent->SetupAttachment(RootComponent);
		//���� ���� ��Ȱ�� == ����ȭ�鿡�� ���̰� ����
		ArrowComponent->SetHiddenInGame(false);
	}
	//�޽� ������Ʈ
	if (!ProjectileMeshComponent)
	{
		ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("'/Game/Sphere.Sphere'"));
		if (Mesh.Succeeded())
		{
			ProjectileMeshComponent->SetStaticMesh(Mesh.Object);
		}
	}
	//���׸��� (�÷� ������ �������� ��Ʈ��)
	static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("'/Game/NewMaterial2.NewMaterial2'"));
	if (Material.Succeeded())
	{
		ProjectileMaterialInstance = UMaterialInstanceDynamic::Create(Material.Object, ProjectileMeshComponent);
	}
	ProjectileMeshComponent->SetMaterial(0, ProjectileMaterialInstance);
	ProjectileMeshComponent->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
	ProjectileMeshComponent->SetupAttachment(RootComponent);



}

// Called when the game starts or when spawned
void AProjectileA2::BeginPlay()
{
	Super::BeginPlay();

	//���� 5��
	SetLifeSpan(5);
}

// Called every frame
void AProjectileA2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProjectileA2::Fire(const FVector& ShootingDir)
{
	ProjectileMovementComponent->Velocity = ShootingDir * ProjectileMovementComponent->InitialSpeed;
}

void AProjectileA2::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	Destroy();
}