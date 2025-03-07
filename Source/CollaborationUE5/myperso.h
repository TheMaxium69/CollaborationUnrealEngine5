// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "myperso.generated.h"


UCLASS()
class COLLABORATIONUE5_API Amyperso : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Amyperso();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	void FunctionMoveY(float value);
	void FunctionToRun();
	void FunctionNotToRun();
	void FunctionToJump();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MyCamera")
		USpringArmComponent* mySpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MyCamera")
		UCameraComponent* myCamera;

};
