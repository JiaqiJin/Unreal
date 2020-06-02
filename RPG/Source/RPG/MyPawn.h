// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class RPG_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
		class UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
		class USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
		class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
		class USpringArmComponent* SpringArm; //help control camera motion

	UPROPERTY(VisibleAnywhere, Category = "Movement")
	class UColliderMovementComponent* OurMovementComponent;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	//getter
	FORCEINLINE UStaticMeshComponent* GetMeshComponent() { return MeshComponent; }
	FORCEINLINE USphereComponent* GetSphereComponent() { return SphereComponent; }
	FORCEINLINE UCameraComponent* GetCameraComponenet() { return Camera; }
	FORCEINLINE USpringArmComponent* GetSpringArmComponent() { return SpringArm; }
	//setter
	FORCEINLINE void SetMeshComponent(UStaticMeshComponent* mesh) { MeshComponent = mesh; }
	FORCEINLINE void SetSphereComponent(USphereComponent* sphere) { SphereComponent = sphere; }
	FORCEINLINE void SetCameraComponenet(UCameraComponent* camera) { Camera = camera; }
	FORCEINLINE void SetSpringArmComponent(USpringArmComponent* sprinArm) { SpringArm = sprinArm; }

private:
	void MoveForward(float input);
	void MoveRight(float input);
	void YawCamera(float axis);
	void PitchCamera(float axis);
};
