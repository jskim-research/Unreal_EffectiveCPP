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
	��� ������ ���� �� �ʱⰪ�� �ָ� *�⺻ ��� �ʱ�ȭ(default member initializer)*��� ��.

	������ �ʱ�ȭ ����Ʈ�� ���� ����� ������ �� ������ �ʱ�ȭ ����Ʈ�� �켱.

	������ �ʱ�ȭ ����Ʈ���� ����, ��� ����ο��� ������ �� �⺻ �ʱ�ȭ �� �� (�⺻�� Ÿ���� ������ ��).
	*/
	int a = 1;
	float b;
	double c;
	Item4_TestClass2 d;
};
