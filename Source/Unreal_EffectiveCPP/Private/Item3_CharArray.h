// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class Item3_CharArray
{
public:
	Item3_CharArray();
	~Item3_CharArray();

	FORCEINLINE TCHAR& operator[](int idx);
	FORCEINLINE const TCHAR& operator[](int idx) const;

private:
	TCHAR Array[100];
};

FORCEINLINE TCHAR& Item3_CharArray::operator[](int idx)
{
	// 비상수 멤버함수에서 상수 멤버함수를 호출함으로써
	// 코드의 중복이나 유지보수 관련 향상
	return const_cast<TCHAR&>(static_cast<const Item3_CharArray>(*this)[idx]);
}

FORCEINLINE const TCHAR& Item3_CharArray::operator[](int idx) const
{
	if (idx >= 100)
	{
		// 경계 검사
		// 여기선 테스트를 위해 최대 배열 길이를 100으로 임의로 지정했음
		// 그리고 에러에 대한 처리보다는 그냥 log + 첫 번째 값 반환으로 대충 처리

		UE_LOG(LogTemp, Error, TEXT("인덱스가 배열 길이를 초과합니다."));
		return Array[0];
	}

	return Array[idx];
}