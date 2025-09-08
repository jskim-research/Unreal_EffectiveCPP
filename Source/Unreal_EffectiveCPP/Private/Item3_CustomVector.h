// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item3_CustomVector.generated.h"

/*
�𸮾� USTRUCT �ۼ� ��Ģ

1. �⺻ �����ڰ� �ݵ�� �ʿ�

�𸮾� ���÷���/����ȭ �ý����� �ν��Ͻ��� ���� �� �⺻ �����ڸ� ȣ���մϴ�.
���� �ٸ� �����ڸ� �����ϸ�, �ݵ�� �⺻ �����ڵ� �������� �մϴ�.

2. ������/�Ҹ���

���� �Ҹ��ڴ� �ʿ� �����ϴ� (USTRUCT�� ���� POD ����).
Ư���� �ڿ� ������ ���ٸ� ~FItem3_CustomVector()�� �����ص� �˴ϴ�.

3. ������ �����ε�

������ ������ FORCEINLINE���� const�� �ٿ��ִ� �� ���ƿ� (���� �� ������ �� �ٲٴϱ�).
��ȯ���� const FItem3_CustomVector ��� �׳� FItem3_CustomVector�� �δ� �� Unreal ��Ÿ��.

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

	inline int GetX() const;  // �Լ� �������� ���� ����� ������ � ������ ����� �ǵ帮�� ������ ����
	inline int GetX();

	// �� �Լ��� �����Ϸ����� ������ �����
	// ������ ����� �Ӹ� �ƴ϶� ���� ��������� üũ���ִ� �����Ϸ�
	// inline int& GetX_NotLogicallyConst() const;

	inline int GetX_LogicallyConst() const;

private:
	int x;
	int y;
	int z;
	mutable int last_get_x;
};

// �𸮾� FVector �� �̷� ������ ���� ������Ͽ��� �ؿ��ٰ� ���Ǹ� ������
// �ñ״��ĸ� ���� �κ��̶� �����θ� ������ �ڵ带 �ľ��ϱ� ���� �ѵ�
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
		// ������ ���� �ó�����
		// Get �� �� ���� �޶��� ���¶�� �߰� �۾��Ѵٴ� �ó�����
		last_get_x = x;  // last_get_x ������Ʈ

		// const �Լ��ӿ��� last_get_x �� ���� ������Ʈ�� ������ ���� mutable �̱� ����
		// ���� last_get_x �� ������ ���������θ� ���̴� �������
		// �������� const ��� �Ǵ��� �� ����
		// �׷��� mutable �� �� �ʿ��� ������ �������. ������ ���� ���� ����������, �� ���ο� ������ �ʿ䰡 �ִ� ������ �Ǵ� �ʿ�.
	}
	return x;
}
