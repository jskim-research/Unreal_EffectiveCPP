// Fill out your copyright notice in the Description page of Project Settings.


#include "Item3_CustomVector.h"

FItem3_CustomVector::FItem3_CustomVector(): x(0), y(0), z(0)
{
	last_get_x = x;
}

FItem3_CustomVector::FItem3_CustomVector(int _x, int _y, int _z):
	x(_x), y(_y), z(_z)
{
	last_get_x = x;
}

FItem3_CustomVector::~FItem3_CustomVector()
{
}


