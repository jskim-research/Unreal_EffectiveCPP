// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class Item5_TestClass
{
public:
	Item5_TestClass();
	~Item5_TestClass();

private:
	// 참조자 매개변수가 있는 경우 c++ 컴파일러가 default 복사 대입 연산자를 삭제해버림 
	// 왜냐면 생성 때 참조자는 어떤 값을 가리켰을 텐데, 대입 시에는 다른 값을 가리키게 만들 수 없기 때문
	// int& a;

	// 위와 같은 케이스
	// const int b = 5;

};
