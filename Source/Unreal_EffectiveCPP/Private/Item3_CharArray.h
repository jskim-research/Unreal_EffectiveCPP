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
	// ���� ����Լ����� ��� ����Լ��� ȣ�������ν�
	// �ڵ��� �ߺ��̳� �������� ���� ���
	return const_cast<TCHAR&>(static_cast<const Item3_CharArray>(*this)[idx]);
}

FORCEINLINE const TCHAR& Item3_CharArray::operator[](int idx) const
{
	if (idx >= 100)
	{
		// ��� �˻�
		// ���⼱ �׽�Ʈ�� ���� �ִ� �迭 ���̸� 100���� ���Ƿ� ��������
		// �׸��� ������ ���� ó�����ٴ� �׳� log + ù ��° �� ��ȯ���� ���� ó��

		UE_LOG(LogTemp, Error, TEXT("�ε����� �迭 ���̸� �ʰ��մϴ�."));
		return Array[0];
	}

	return Array[idx];
}