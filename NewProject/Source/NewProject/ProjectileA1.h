#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ProjectileA1.generated.h"

UCLASS()
class NEWPROJECT_API AProjectileA1 : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	AProjectileA1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//ȭ��ǥ ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = ArrowComponent)
	UArrowComponent* ArrowComponent;

	//�浹ü ������Ʈ
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	USphereComponent* CollisionComponent;

	//����ü �̵� ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Movement)
	UProjectileMovementComponent* ProjectileMovementComponent;

	//�޽� ������Ʈ
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		UStaticMeshComponent* ProjectileMeshComponent;

	//��Ƽ����
	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
		UMaterialInstanceDynamic* ProjectileMaterialInstance;

	//�߻��Լ�
	void Fire(const FVector& ShootingDir);
	
	//�̺�Ʈ ��������Ʈ ���ε� �ҰŴϱ� �Ű����ڸ� ���� ���� �ϴ� �� �޾��ش�
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
};
