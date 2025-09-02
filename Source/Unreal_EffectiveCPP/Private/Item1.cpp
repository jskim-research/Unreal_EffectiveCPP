// Fill out your copyright notice in the Description page of Project Settings.


#include "Item1.h"
#include "Item1_UserDefineClass1.h"

AItem1::AItem1()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AItem1::BeginPlay()
{
	Super::BeginPlay();

	int a = 0;
	double b = 0;

	int* pa = nullptr;
	double* pb = nullptr;

	int& ra = a;
	double& rb = b;

	// 기본 제공 타입 및 포인터 크기 확인
	// 64 bit OS 기준 포인터는 타입과 상관없이 8 Byte 임
	UE_LOG(LogTemp, Log, TEXT("%d %d"), static_cast<int32>(sizeof(a)), static_cast<int32>(sizeof(b)));
	UE_LOG(LogTemp, Log, TEXT("%d %d"), static_cast<int32>(sizeof(pa)), static_cast<int32>(sizeof(pb)));

	int d = ma;
	int& e = ma;  // 컴파일러가 알아서 주소가 아닌 값을 register 에 넣어버렸다.

	// LOG 를 해서 실제로 값을 써야 컴파일러에서 skip 을 안함
	UE_LOG(LogTemp, Log, TEXT("d = %d, e = %d"), d, e);  

	// 객체의 내부 변수의 크기가 24 byte 이므로 하나의 register 에 못 넣고
	// 매번 주소를 바탕으로 메모리에서 값을 가져옴 확인
	UItem1_UserDefineClass1* udt1 = NewObject<UItem1_UserDefineClass1>();
	UItem1_UserDefineClass1& udt2 = *udt1;

	UE_LOG(LogTemp, Log, TEXT("udt2: %f"), udt2.GetSum());
}
