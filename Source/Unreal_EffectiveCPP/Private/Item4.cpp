// Fill out your copyright notice in the Description page of Project Settings.


#include "Item4.h"
#include "Item4_TestClass.h"

AItem4::AItem4()
{
}

// Called when the game starts or when spawned
void AItem4::BeginPlay()
{
	Super::BeginPlay();

	// 1. �⺻ Ÿ�� ������ ���� �ʱ�ȭ�϶�!
	// �� �ڵ�� �ʱ�ȭ ���� ���¿��� ������ ������ �߻������� (�����Ϸ� ����)
	// int x;
	// UE_LOG(LogTemp, Log, TEXT("Test: %d"), x);

	Item4_TestClass2 Test2;
	Item4_TestClass Test(0, 1, 2, Test2);
}

// Called every frame
void AItem4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

