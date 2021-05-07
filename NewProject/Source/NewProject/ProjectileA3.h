// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ProjectileA1.h"
#include "ProjectileA3.generated.h"

UCLASS()
class NEWPROJECT_API AProjectileA3 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileA3();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//�п�ü ��
	UPROPERTY(EditAnywhere, Category = Projectile)
		TSubclassOf<class AProjectileA1> ProjectileA1Class;


	//ȭ��ǥ ������Ʈ <== �� ģ���� �ε����� �뷫 0�̶�� ��������
	UPROPERTY(VisibleAnywhere, Category = ArrowComponent)
		UArrowComponent* ArrowComponent;
	//ȭ��ǥ ������Ʈ1
	UPROPERTY(VisibleAnywhere, Category = ArrowComponent)
		UArrowComponent* ArrowComponent1;
	//ȭ��ǥ ������Ʈ2
	UPROPERTY(VisibleAnywhere, Category = ArrowComponent)
		UArrowComponent* ArrowComponent2;

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

	//�浹 �̺�Ʈ �ݹ�
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	//�п� �̺�Ʈ
	UFUNCTION()
		void Separation();
};
