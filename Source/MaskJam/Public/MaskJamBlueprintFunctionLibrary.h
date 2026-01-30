// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MaskJamBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MASKJAM_API UMaskJamBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "MaskJam|Enum")	
	static int32 EnumToBitmask(int32 EnumAsInteger);
};
