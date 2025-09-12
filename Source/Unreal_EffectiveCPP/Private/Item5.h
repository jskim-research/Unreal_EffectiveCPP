// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item5.generated.h"

UCLASS()
class AItem5 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem5();

	// UObject 계열은 복사를 허용하지 않기 때문에 UHT 에서 private 으로 전처리해버림
	// 그래서 밑과 같이 새로 정의할 경우 Item5.generated.h 에 이미 private 복사 생성자가 있기 때문에 두 개가 존재한다고 에러 냄
	// AItem5(const AItem5& Rhs); 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
