// Fill out your copyright notice in the Description page of Project Settings.


#include "Item3_CharArray.h"

Item3_CharArray::Item3_CharArray()
{
}

Item3_CharArray::Item3_CharArray(TCHAR InArray[100])
{
	for (int i = 0; i < 100; i++)
		Array[i] = InArray[i];
}

Item3_CharArray::~Item3_CharArray()
{
}
