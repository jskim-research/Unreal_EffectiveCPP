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

	// UObject �迭�� ���縦 ������� �ʱ� ������ UHT ���� private ���� ��ó���ع���
	// �׷��� �ذ� ���� ���� ������ ��� Item5.generated.h �� �̹� private ���� �����ڰ� �ֱ� ������ �� ���� �����Ѵٰ� ���� ��
	// AItem5(const AItem5& Rhs); 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
