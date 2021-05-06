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

	//화살표 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = ArrowComponent)
	UArrowComponent* ArrowComponent;

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
	
	//이벤트 델러게이트 바인딩 할거니까 매개인자를 쓰든 말든 일단 다 달아준다
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
};
