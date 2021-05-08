// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileA4.h"

// Sets default values
AProjectileA4::AProjectileA4()
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

		//�浹 ���ε�
		CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectileA4::OnHit);

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

		//ź�� �ְ���. 1 == ���� ź�� � // ź���� ���� ������ ����ü�� Blocker�� ��� �浹�ϰ� �ִ� �����簡 �߻���
		ProjectileMovementComponent->bShouldBounce = true;
		ProjectileMovementComponent->Bounciness = 1.0f;

	}
	//ȭ��ǥ ������Ʈ
	if (!ArrowComponent)
	{
		ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
		//1���� ��� �����ϸ� ������
		ArrowComponent->ArrowSize = 1.0f;
		//��Ʈ�� ����
		ArrowComponent->SetupAttachment(RootComponent);
		//���� ���� ��Ȱ�� == ����ȭ�鿡�� ���̰� ����
		ArrowComponent->SetHiddenInGame(false);

		//���� �Ķ���
		ArrowComponent->SetArrowColor(FLinearColor(0, 0, 255,255));
	}
	//�޽� ������Ʈ
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
	//���׸��� (�÷� ������ �������� ��Ʈ��)
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

	//���� 3��
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

void AProjectileA4::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	//�ݴ�������� ����. ź���� ���� ������ '�ݻ�'�������� ƨ�ܳ������� �̸� ���� ��Ȯ�� '�ݴ�'�������θ� ������ �� �ִ�.
	ProjectileMovementComponent->Velocity = ProjectileMovementComponent->Velocity * -1;
}