// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item4.generated.h"

UCLASS()
class AItem4 : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem4();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

public:	


private:
};
