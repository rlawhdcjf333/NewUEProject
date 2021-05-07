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

	//분열체 들
	UPROPERTY(EditAnywhere, Category = Projectile)
		TSubclassOf<class AProjectileA1> ProjectileA1Class;


	//화살표 컴포넌트 <== 이 친구는 인덱스가 대략 0이라고 생각하자
	UPROPERTY(VisibleAnywhere, Category = ArrowComponent)
		UArrowComponent* ArrowComponent;
	//화살표 컴포넌트1
	UPROPERTY(VisibleAnywhere, Category = ArrowComponent)
		UArrowComponent* ArrowComponent1;
	//화살표 컴포넌트2
	UPROPERTY(VisibleAnywhere, Category = ArrowComponent)
		UArrowComponent* ArrowComponent2;

	//충돌체 컴포넌트
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		USphereComponent* CollisionComponent;

	//투사체 이동 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Movement)
		UProjectileMovementComponent* ProjectileMovementComponent;

	//메쉬 컴포넌트
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		UStaticMeshComponent* ProjectileMeshComponent;

	//머티리얼
	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
		UMaterialInstanceDynamic* ProjectileMaterialInstance;

	//발사함수
	void Fire(const FVector& ShootingDir);

	//충돌 이벤트 콜백
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	//분열 이벤트
	UFUNCTION()
		void Separation();
};
