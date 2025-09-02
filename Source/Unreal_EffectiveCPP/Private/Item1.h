// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item1.generated.h"

UCLASS()
class AItem1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

private:
	UPROPERTY(EditAnywhere)
	int ma;

};