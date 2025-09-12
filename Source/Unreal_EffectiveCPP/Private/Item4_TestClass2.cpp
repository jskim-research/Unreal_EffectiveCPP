// Fill out your copyright notice in the Description page of Project Settings.


#include "Item4_TestClass2.h"

Item4_TestClass2::Item4_TestClass2()
{
	UE_LOG(LogTemp, Log, TEXT("TestClass2 Ctor"));
}

Item4_TestClass2::~Item4_TestClass2()
{
}

Item4_TestClass2::Item4_TestClass2(const Item4_TestClass2& Rhs)
{
	UE_LOG(LogTemp, Log, TEXT("Copy Ctor"));

	// 복사할 변수가 딱히 없음
}

const Item4_TestClass2& Item4_TestClass2::operator=(const Item4_TestClass2& Rhs)
{
	UE_LOG(LogTemp, Log, TEXT("Assignment"));

	// 대입할 변수가 딱히 없음
	return *this;
}
