// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item2.generated.h"

#define TEST_CONSTANT 0.000  // �ּ� X, ���� ���� X

#define MAX(a, b) (a) > (b)? (a) : (b)

UCLASS()
class AItem2 : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem2();

protected:
	virtual void BeginPlay() override;

public:	
	static const int ITEM2_CONSTANT = 0;  // �ּ� O, ���� ���� O
	enum {ITEM2_ENUM_CONSTANT = 0};  // �ּ� X, ���� ���� O (enum hack)

	int Max(int a, int b);

	// #define �Լ��� inline + template ���� ��ü�� �� ����
	template <typename T>
	inline int MaxInline(T a, T b)
	{
		return a > b ? a : b;
	}


private:
};
