// Fill out your copyright notice in the Description page of Project Settings.


#include "Item3.h"
#include "Item3_CustomVector.h"

// Sets default values
AItem3::AItem3()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AItem3::BeginPlay()
{
	Super::BeginPlay();

	char t1[10]{ "test" };
	TCHAR t2[10]{ TEXT("test")};

	// * �տ� const �� ������ ����Ű�� ����� ���� �����Ű�� �� ����
	// * �ڿ� const �� ������ ����Ű�� ����� �����Ű�� �� ����
	const char* a = t1;
	char const* b = t1;
	char* const c = t1;
	const char* const d = t1;

	const TCHAR* e = t2;
	TCHAR const* f = t2;
	TCHAR* const g = t2;
	const TCHAR* const h = t2;

	// TEXT ��ũ���� %s �� TCHAR* �� ����ϹǷ� char* �� ����� ��� �ȵ�
	UE_LOG(LogTemp, Log, TEXT("%s"), a);
	UE_LOG(LogTemp, Log, TEXT("%s"), b);
	UE_LOG(LogTemp, Log, TEXT("%s"), c);
	UE_LOG(LogTemp, Log, TEXT("%s"), d);


	UE_LOG(LogTemp, Log, TEXT("%s"), e);
	UE_LOG(LogTemp, Log, TEXT("%s"), f);
	UE_LOG(LogTemp, Log, TEXT("%s"), g);
	UE_LOG(LogTemp, Log, TEXT("%s"), h);
	
	FVector v1 = GetVector2(0, 0, 0);
	FVector v2 = GetVector2(1, 1, 1);
	FVector v3 = GetVector2(1, 1, 1);

	// FORCEINLINE TVector<T> operator+(const TVector<T>& V) const;
	// ���ʿ� �ӽð�ü�� const �� �ƴ϶� ���� ���� ����
	// �ٸ� ������ �Ͻ��� bool ��ȯ�� �Ұ����� Ÿ���̶� �̷��� �����.
	(v1 + v2) = v3;
	(v1 + v2) == v3;

	FItem3_CustomVector cv1(0, 0, 0);
	FItem3_CustomVector cv2(1, 1, 1);
	FItem3_CustomVector cv3(1, 1, 1);

	// operator+ �� const �� �ӽð�ü�� ��ȯ���� �� �ش� �ӽð�ü�� ���� ������ ������ ����
	// �Ͻ������� bool ��ȯ�� ������ Ÿ�Կ� ���ؼ� �̷� ������ ó���ϴ� ���� if �� ���� ����
	// (cv1 + cv2) = cv3;

	// �翬������ const ��ü������ const �Լ��� �ҷ��� �� �ִ�.
	FItem3_CustomVector cv(0, 0, 0);
	const FItem3_CustomVector ccv(0, 0, 0);

	cv.GetX();
	ccv.GetX();
}

FVector AItem3::GetVector1(int x, int y, int z) const
{
	return FVector(x, y, z);
}

const FVector AItem3::GetVector2(int x, int y, int z) const
{
	return FVector(x, y, z);
}

// Called every frame
void AItem3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

