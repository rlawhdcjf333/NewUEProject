// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileA1.h"

// Sets default values
AProjectileA1::AProjectileA1()
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
		//��Ʈ�� ����
		ArrowComponent->SetupAttachment(RootComponent);
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
	//���׸���
	static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("'/Game/NewMaterial.NewMaterial'"));
	if (Material.Succeeded())
	{
		ProjectileMaterialInstance = UMaterialInstanceDynamic::Create(Material.Object, ProjectileMeshComponent);
	}
	ProjectileMeshComponent->SetMaterial(0, ProjectileMaterialInstance);
	ProjectileMeshComponent->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
	ProjectileMeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AProjectileA1::BeginPlay()
{
	Super::BeginPlay();

	//���� 3��
	SetLifeSpan(3);
	
}

// Called every frame
void AProjectileA1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

void AProjectileA1::Fire(const FVector& ShootingDir)
{
	ProjectileMovementComponent->Velocity = ShootingDir * ProjectileMovementComponent->InitialSpeed;
}
