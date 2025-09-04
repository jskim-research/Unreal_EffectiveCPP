// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item2.generated.h"

#define TEST_CONSTANT 0.000  // 주소 X, 지역 한정 X

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
	static const int ITEM2_CONSTANT = 0;  // 주소 O, 지역 한정 O
	enum {ITEM2_ENUM_CONSTANT = 0};  // 주소 X, 지역 한정 O (enum hack)

	int Max(int a, int b);

	// #define 함수는 inline + template 으로 교체될 수 있음
	template <typename T>
	inline int MaxInline(T a, T b)
	{
		return a > b ? a : b;
	}


private:
};
