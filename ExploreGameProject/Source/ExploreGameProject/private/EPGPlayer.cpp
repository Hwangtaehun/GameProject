// Fill out your copyright notice in the Description page of Project Settings.


#include "EPGPlayer.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include "Fireball.h"
#include "Components/ArrowComponent.h"

// Sets default values
AEPGPlayer::AEPGPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<USkeletalMesh>TempMesh(TEXT("SkeletalMesh'/Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin'"));
	if (TempMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(TempMesh.Object);
		GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -90), FRotator(0, -90, 0));
	}

	springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	springArmComp->SetupAttachment(RootComponent);
	springArmComp->SetRelativeLocation(FVector(0, 70, 90));
	springArmComp->TargetArmLength = 400;
	springArmComp->bUsePawnControlRotation = true;

	tpsCamComp = CreateDefaultSubobject<UCameraComponent>(TEXT("TpsCamComp"));
	tpsCamComp->SetupAttachment(springArmComp);
	tpsCamComp->bUsePawnControlRotation = false;

	bUseControllerRotationYaw = true;
	JumpMaxCount = 2;

	fireComp = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Position"));
	fireComp->SetupAttachment(RootComponent);
	fireComp->SetRelativeLocation(FVector(70, 0, 50));
}

AEPGPlayer::~AEPGPlayer(){}

// Called when the game starts or when spawned
void AEPGPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEPGPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Move();
}

// Called to bind functionality to input
void AEPGPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AEPGPlayer::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AEPGPlayer::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Horizontal"), this, &AEPGPlayer::InputHorizontal);
	PlayerInputComponent->BindAxis(TEXT("Vertical"), this, &AEPGPlayer::InputVertical);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AEPGPlayer::InputJump);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AEPGPlayer::InputFire);
}

void AEPGPlayer::Turn(float value)
{
	AddControllerYawInput(value);
}

void AEPGPlayer::LookUp(float value)
{
	AddControllerPitchInput(value);
}

void AEPGPlayer::InputHorizontal(float value)
{
	direction.Y = value;
}

void AEPGPlayer::InputVertical(float value)
{
	direction.X = value;
}

void AEPGPlayer::InputJump()
{
	Jump();
}

void AEPGPlayer::Move()
{
	direction = FTransform(GetControlRotation()).TransformVector(direction);
	AddMovementInput(direction);
	direction = FVector::ZeroVector;
}

void AEPGPlayer::InputFire()
{
	FTransform  firePosition = fireComp->GetSocketTransform(TEXT("Fire Position"));
	GetWorld()->SpawnActor<AFireball>(bulletFactory, firePosition);
}

