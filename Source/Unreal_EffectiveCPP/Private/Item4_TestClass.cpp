// Fill out your copyright notice in the Description page of Project Settings.


#include "Item4_TestClass.h"

Item4_TestClass::Item4_TestClass()
{
}

/*
* 복사 생성자, 대입 연산자 두 개가 호출되는 비효율적인 형태
Item4_TestClass::Item4_TestClass(int _a, float _b, double _c, Item4_TestClass2 _d)
{
	a = _a;
	b = _b;
	c = _c;
	d = _d;

	UE_LOG(LogTemp, Log, TEXT("Ctor Test"));
}
*/

Item4_TestClass::Item4_TestClass(int _a, float _b, double _c, Item4_TestClass2 _d):
	b(_b), a(_a), d(_d), c(_c)
{

	UE_LOG(LogTemp, Log, TEXT("Ctor Test"));
}

Item4_TestClass::~Item4_TestClass()
{
}
