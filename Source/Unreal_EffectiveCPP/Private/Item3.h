// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item3.generated.h"

UCLASS()
class AItem3 : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem3();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

public:
	FVector GetVector1(int x, int y, int z) const;
	const FVector GetVector2(int x, int y, int z) const;

};
