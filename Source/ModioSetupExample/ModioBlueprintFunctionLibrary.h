// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModioSetupExample.h"
#include "ModioBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MODIOSETUPEXAMPLE_API UModioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Modio")
	static void modioGetMods();

	UFUNCTION(BlueprintCallable, Category = "Modio")
	static void modioTick();
	
};
