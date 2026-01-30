// Fill out your copyright notice in the Description page of Project Settings.


#include "MaskJamBlueprintFunctionLibrary.h"

int32 UMaskJamBlueprintFunctionLibrary::EnumToBitmask(int32 EnumAsInteger)
{
  return 1 << (EnumAsInteger);
}