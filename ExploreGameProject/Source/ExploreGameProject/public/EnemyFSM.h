// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyFSM.generated.h"

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Idle,
	Move,
	Attack,
	Damage,
	Die,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXPLOREGAMEPROJECT_API UEnemyFSM : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyFSM();
	~UEnemyFSM();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = FSM)
		EEnemyState mState = EEnemyState::Idle;

	void IdleState();
	void MoveState();
	void AttackState();
	void DamageState();
	void DieState();
	
	UPROPERTY(EditDefaultsOnly, Category = FSM)
		float idleDelayTime = 2;
	float currentTime = 0;

	UPROPERTY(VisibleAnywhere, Category = FSM)
		class AEPGPlayer* target;
	UPROPERTY()
		class AEnemy* me;
	UPROPERTY(EditAnywhere, Category = FSM)
		float attackRange = 150.0f;
	UPROPERTY(EditAnywhere, Category = FSM)
		float attackDelayTime = 2.0f;

	void OnDamageProcess();
};
