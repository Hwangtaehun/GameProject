// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EPGPlayer.generated.h"

UCLASS()
class EXPLOREGAMEPROJECT_API AEPGPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEPGPlayer();
	~AEPGPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(VisibleAnywhere, Category = Camera)
		class USpringArmComponent* springArmComp;
	UPROPERTY(VisibleAnywhere, Category = Camera)
		class UCameraComponent* tpsCamComp;

	void Turn(float value);
	void LookUp(float value);

	UPROPERTY(EditAnywhere, Category = PlayerSetting)
		float walkSpeed = 600;
	FVector direction;

	void InputHorizontal(float value);
	void InputVertical(float value);
	void InputJump();
	void Move();

	UPROPERTY(EditAnywhere)
		class UArrowComponent* fireComp;
	UPROPERTY(EditDefaultsOnly, Category = BulletFactor)
		TSubclassOf<class AFireball> bulletFactory;

	void InputFire();
};
