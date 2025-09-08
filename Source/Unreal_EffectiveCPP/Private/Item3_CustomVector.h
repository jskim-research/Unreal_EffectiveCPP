// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item3_CustomVector.generated.h"

/*
언리얼 USTRUCT 작성 규칙

1. 기본 생성자가 반드시 필요

언리얼 리플렉션/직렬화 시스템이 인스턴스를 만들 때 기본 생성자를 호출합니다.
직접 다른 생성자를 정의하면, 반드시 기본 생성자도 명시해줘야 합니다.

2. 생성자/소멸자

보통 소멸자는 필요 없습니다 (USTRUCT는 보통 POD 성격).
특별한 자원 관리가 없다면 ~FItem3_CustomVector()는 제거해도 됩니다.

3. 연산자 오버로딩

가능은 하지만 FORCEINLINE에는 const를 붙여주는 게 좋아요 (연산 중 원본을 안 바꾸니까).
반환형도 const FItem3_CustomVector 대신 그냥 FItem3_CustomVector로 두는 게 Unreal 스타일.

*/

/**
 * 
 */
USTRUCT()
struct FItem3_CustomVector
{
	GENERATED_BODY()
public:
	FItem3_CustomVector();
	FItem3_CustomVector(int _x, int _y, int _z);
	~FItem3_CustomVector();

	FORCEINLINE const FItem3_CustomVector operator+(const FItem3_CustomVector& V);

	inline int GetX() const;  // 함수 내에서는 정적 멤버를 제외한 어떤 데이터 멤버도 건드리지 않음을 보장
	inline int GetX();

	// 밑 함수는 컴파일러에서 에러를 뱉어줌
	// 물리적 상수성 뿐만 아니라 논리적 상수성까지 체크해주는 컴파일러
	// inline int& GetX_NotLogicallyConst() const;

	inline int GetX_LogicallyConst() const;

private:
	int x;
	int y;
	int z;
	mutable int last_get_x;
};

// 언리얼 FVector 도 이런 식으로 같은 헤더파일에서 밑에다가 정의를 빼놓음
// 시그니쳐만 보는 부분이랑 구현부를 나눠서 코드를 파악하기 쉽게 한듯
FORCEINLINE const FItem3_CustomVector FItem3_CustomVector::operator+(const FItem3_CustomVector& V)
{
	return FItem3_CustomVector(x + V.x, y + V.y, z + V.z);
}

inline int FItem3_CustomVector::GetX() const
{
	UE_LOG(LogTemp, Log, TEXT("GetX const"));
	return x;
}

inline int FItem3_CustomVector::GetX()
{
	UE_LOG(LogTemp, Log, TEXT("GetX"));
	return x;
}

inline int FItem3_CustomVector::GetX_LogicallyConst() const
{
	if (last_get_x != x)
	{
		// 억지로 만든 시나리오
		// Get 할 때 값이 달라진 상태라면 추가 작업한다는 시나리오
		last_get_x = x;  // last_get_x 업데이트

		// const 함수임에도 last_get_x 에 대한 업데이트가 가능한 것은 mutable 이기 때문
		// 만약 last_get_x 가 오로지 내부적으로만 쓰이는 변수라면
		// 논리적으로 const 라고 판단할 수 있음
		// 그러나 mutable 은 꼭 필요할 때에만 사용하자. 정말로 내부 상태 관리용인지, 꼭 내부에 보관할 필요가 있는 값인지 판단 필요.
	}
	return x;
}
