// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MySocketObject.generated.h"

/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class FIRSTPROJECT_API UMySocketObject : public UObject
{
	GENERATED_BODY()

public:
	UMySocketObject() {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UMySocketObject")
	FString message;

	UFUNCTION(BlueprintCallable, Category = "UMySocketObject")
	void SetMessage(FString msg);

	UFUNCTION(BlueprintCallable, Category = UMySocketObject)
	void ConnectToServer();

private:
	// FSocket* Socket;
};
