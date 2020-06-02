// Fill out your copyright notice in the Description page of Project Settings.


#include "ColliderMovementComponent.h"

void UColliderMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}
	// Take OurMovementComponent from MyPawn class and check input
	FVector DesireMovementThisFrame = ConsumeInputVector().GetClampedToMaxSize(1.0f);

	if (!DesireMovementThisFrame.IsNearlyZero())
	{
		FHitResult Hit;
		SafeMoveUpdatedComponent(DesireMovementThisFrame, UpdatedComponent->GetComponentRotation(),true, Hit);
		// if bump into something slide along the side of it
		if (Hit.IsValidBlockingHit())
		{
			//printf("Hisdsss");
			//UE_LOG(LogTemp, Warning, TEXT("Hellow"));
			SlideAlongSurface(DesireMovementThisFrame, 1.0f - Hit.Time, Hit.Normal, Hit);
		}
	}
}
