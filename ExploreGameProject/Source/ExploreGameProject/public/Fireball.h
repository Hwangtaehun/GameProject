// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fireball.generated.h"

UCLASS()
class EXPLOREGAMEPROJECT_API AFireball : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireball();
	~AFireball();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		class UProjectileMovementComponent* movementComp;
	UPROPERTY(VisibleAnywhere, Category = Collision)
		class USphereComponent* collisionComp;
	UPROPERTY(VisibleAnywhere, Category = BodyMesh)
		class UStaticMeshComponent* bodyMeshComp;

	void Die();
};
