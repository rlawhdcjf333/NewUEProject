// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileA3.h"

// Sets default values
AProjectileA3::AProjectileA3()
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
		CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectileA3::OnHit);
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

		//1���� ��� �����ϸ� ������
		ArrowComponent->ArrowSize = 1.0f;
		//��Ʈ�� ����
		ArrowComponent->SetupAttachment(RootComponent);
		//���� ���� ��Ȱ�� == ����ȭ�鿡�� ���̰� ����
		ArrowComponent->SetHiddenInGame(false);
	}
	//ȭ��ǥ ������Ʈ1
	if (!ArrowComponent1)
	{
		ArrowComponent1 = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent1"));

		//1���� ��� �����ϸ� ������
		ArrowComponent1->ArrowSize = 1.0f;
		//��Ʈ�� ����
		ArrowComponent1->SetupAttachment(RootComponent);
		//���� 45��
		ArrowComponent1->SetRelativeTransform(FTransform(FRotator(0,-45,0)));
		//���� ���� ��Ȱ�� == ����ȭ�鿡�� ���̰� ����
		ArrowComponent1->SetHiddenInGame(false);
	}
	//ȭ��ǥ ������Ʈ2
	if (!ArrowComponent2)
	{
		ArrowComponent2 = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent2"));

		//1���� ��� �����ϸ� ������
		ArrowComponent2->ArrowSize = 1.0f;
		//��Ʈ�� ����
		ArrowComponent2->SetupAttachment(RootComponent);
		//���� 45��
		ArrowComponent2->SetRelativeTransform(FTransform(FRotator(0,45,0)));
		//���� ���� ��Ȱ�� == ����ȭ�鿡�� ���̰� ����
		ArrowComponent2->SetHiddenInGame(false);
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
		//���� ��ġ
		FVector MyLocation = GetActorLocation();

		//ArrowComponent ����
		FRotator MyRotation = ArrowComponent->GetRelativeRotation();
		//ArrowComponent1 ����
		FRotator MyRotation1 = ArrowComponent1->GetRelativeRotation();
		//ArrowComponent2 ����
		FRotator MyRotation2 = ArrowComponent2->GetRelativeRotation();

		

		UWorld* World = GetWorld();
		if (World)
		{
			//������ �Ķ���� ����
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this; // ���� ��
			SpawnParams.Instigator = GetInstigator(); // �� ��

			//3���� ����
			AProjectileA1* Projectile = World->SpawnActor<AProjectileA1>(ProjectileA1Class, MyLocation, MyRotation, SpawnParams);
			AProjectileA1* Projectile1 = World->SpawnActor<AProjectileA1>(ProjectileA1Class, MyLocation, MyRotation1, SpawnParams);
			AProjectileA1* Projectile2 = World->SpawnActor<AProjectileA1>(ProjectileA1Class, MyLocation, MyRotation2, SpawnParams);
			//3���� �߻�
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