// Fill out your copyright notice in the Description page of Project Settings.


#include "Item5.h"
#include "Item5_TestClass.h"

// Sets default values
AItem5::AItem5()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AItem5::BeginPlay()
{
	Super::BeginPlay();
	
	// UObject �迭�� ���� �����ڿ� ���������� ���� ���� �����ڵ� ������� �ʴ´�.
	// �̰� UHT ó�� UCLASS ����� class ���� �ƴ϶� UObject �� ����ϴ� ��� class �� ����ȴ�.
	// UObject a, b;
	// a = b;

	Item5_TestClass a;
	Item5_TestClass b;

	a = b;
}

// Called every frame
void AItem5::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

