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

	// * 앞에 const 가 붙으면 가리키는 대상의 값을 변경시키는 것 방지
	// * 뒤에 const 가 붙으면 가리키는 대상을 변경시키는 것 방지
	const char* a = t1;
	char const* b = t1;
	char* const c = t1;
	const char* const d = t1;

	const TCHAR* e = t2;
	TCHAR const* f = t2;
	TCHAR* const g = t2;
	const TCHAR* const h = t2;

	// TEXT 매크로의 %s 는 TCHAR* 를 기대하므로 char* 는 제대로 출력 안됨
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
	// 애초에 임시객체가 const 가 아니라서 대입 문제 없음
	// 다만 어차피 암시적 bool 변환이 불가능한 타입이라 이렇게 만든듯.
	(v1 + v2) = v3;
	(v1 + v2) == v3;

	FItem3_CustomVector cv1(0, 0, 0);
	FItem3_CustomVector cv2(1, 1, 1);
	FItem3_CustomVector cv3(1, 1, 1);

	// operator+ 가 const 로 임시객체를 반환했을 때 해당 임시객체에 대한 대입은 컴파일 에러
	// 암시적으로 bool 변환이 가능한 타입에 대해서 이런 식으로 처리하는 것이 if 문 오류 감소
	// (cv1 + cv2) = cv3;

	// 당연하지만 const 객체에서는 const 함수만 불러올 수 있다.
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

