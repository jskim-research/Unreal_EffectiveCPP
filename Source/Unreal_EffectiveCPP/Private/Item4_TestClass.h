// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item4_TestClass2.h"

/**
 * 
 */
class Item4_TestClass
{
public:
	Item4_TestClass();
	Item4_TestClass(int _a, float _b, double _c, Item4_TestClass2 _d);
	~Item4_TestClass();

private:
	/*
	멤버 변수에 선언 시 초기값을 주면 *기본 멤버 초기화(default member initializer)*라고 함.

	생성자 초기화 리스트에 같은 멤버가 있으면 → 생성자 초기화 리스트가 우선.

	생성자 초기화 리스트에도 없고, 멤버 선언부에도 없으면 → 기본 초기화 안 됨 (기본형 타입은 쓰레기 값).
	*/
	int a = 1;
	float b;
	double c;
	Item4_TestClass2 d;
};
