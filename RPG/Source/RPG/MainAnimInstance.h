// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MainAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UMainAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	virtual void NativeInitializeAnimation() override;

	UFUNCTION(BlueprintCallable, Category = AnimationProperty)
	void updateAnimationProperties();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement);
	float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement);
	bool bIsAir;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement);
	class APawn* Pawn;
};
