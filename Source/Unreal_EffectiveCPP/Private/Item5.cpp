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
	
	// UObject 계열은 복사 생성자와 마찬가지로 복사 대입 연산자도 허용하지 않는다.
	// 이건 UHT 처럼 UCLASS 선언된 class 만이 아니라 UObject 를 상속하는 모든 class 에 적용된다.
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

