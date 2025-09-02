// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item1_UserDefineClass1.generated.h"

/**
 * 
 */
UCLASS()
class UItem1_UserDefineClass1 : public UObject
{
	GENERATED_BODY()

public:
	double a;
	double b;
	double c;

	double GetSum() const;
};
