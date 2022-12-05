// Fill out your copyright notice in the Description page of Project Settings.


#include "ERCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AERCharacter::AERCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	CameraArm->TargetArmLength = 350.f;
	CameraArm->SocketOffset = FVector(0.0f, 0.0f, 100.0f);
	CameraArm->bUsePawnControlRotation = true;
	CameraArm->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->bUsePawnControlRotation = false;
	Camera->SetupAttachment(CameraArm, USpringArmComponent::SocketName);
}

// Called when the game starts or when spawned
void AERCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AERCharacter::MoveLeft()
{
	UE_LOG(LogTemp, Warning, TEXT("Move Left was pressed"));
}

void AERCharacter::MoveRight()
{
	UE_LOG(LogTemp, Warning, TEXT("Move Right was pressed"));
}

void AERCharacter::MoveDown()
{
	UE_LOG(LogTemp, Warning, TEXT("Move Down was pressed"));
}

// Called every frame
void AERCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator ControlRot = GetControlRotation();
	ControlRot.Roll = 0.0f;
	ControlRot.Pitch = 0.0f;

	AddMovementInput(ControlRot.Vector());
}

// Called to bind functionality to input
void AERCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AERCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AERCharacter::StopJumping);

	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &AERCharacter::MoveLeft);
	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &AERCharacter::MoveRight);
	PlayerInputComponent->BindAction("MoveDown", IE_Pressed, this, &AERCharacter::MoveDown);
}

