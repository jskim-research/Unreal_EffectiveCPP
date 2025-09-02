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

	// �⺻ ���� Ÿ�� �� ������ ũ�� Ȯ��
	// 64 bit OS ���� �����ʹ� Ÿ�԰� ������� 8 Byte ��
	UE_LOG(LogTemp, Log, TEXT("%d %d"), static_cast<int32>(sizeof(a)), static_cast<int32>(sizeof(b)));
	UE_LOG(LogTemp, Log, TEXT("%d %d"), static_cast<int32>(sizeof(pa)), static_cast<int32>(sizeof(pb)));

	int d = ma;
	int& e = ma;  // �����Ϸ��� �˾Ƽ� �ּҰ� �ƴ� ���� register �� �־���ȴ�.

	// LOG �� �ؼ� ������ ���� ��� �����Ϸ����� skip �� ����
	UE_LOG(LogTemp, Log, TEXT("d = %d, e = %d"), d, e);  

	// ��ü�� ���� ������ ũ�Ⱑ 24 byte �̹Ƿ� �ϳ��� register �� �� �ְ�
	// �Ź� �ּҸ� �������� �޸𸮿��� ���� ������ Ȯ��
	UItem1_UserDefineClass1* udt1 = NewObject<UItem1_UserDefineClass1>();
	UItem1_UserDefineClass1& udt2 = *udt1;

	UE_LOG(LogTemp, Log, TEXT("udt2: %f"), udt2.GetSum());
}
