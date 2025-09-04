// Fill out your copyright notice in the Description page of Project Settings.


#include "Item2.h"

// Sets default values
AItem2::AItem2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AItem2::BeginPlay()
{
	Super::BeginPlay();

	// #define ��� vs const ���
	// const ����� �ڵ� ũ��, Ÿ�� üũ, ����� ���Ǽ� ���鿡�� ���������� �켼


	// #define �Լ� vs inline �Լ�
	int a = 1;
	int b = 0;

	UE_LOG(LogTemp, Log, TEXT("First a: %d"), a);
	MAX(++a, b);
	UE_LOG(LogTemp, Log, TEXT("Second a: %d"), a);
	MAX(++a, b + 10);
	UE_LOG(LogTemp, Log, TEXT("Third a: %d"), a);
	
	a = 1;
	b = 0;

	UE_LOG(LogTemp, Log, TEXT("First a: %d"), a);
	MaxInline(++a, b);
	UE_LOG(LogTemp, Log, TEXT("Second a: %d"), a);
	MaxInline(++a, b + 10);
	UE_LOG(LogTemp, Log, TEXT("Third a: %d"), a);
}

int AItem2::Max(int a, int b)
{
	return a > b ? a : b;
}


