// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "Networking.h"
#include "Networking/Public/Interfaces/IPv4/IPv4Address.h"

#include "Sockets.h"
#include "SocketSubsystem.h"

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UMySOCKETOBJECT")
	FString message;

	UFUNCTION(BlueprintCallable, Category = "UMySocketObject")
	void SetMessage(FString msg);

	UFUNCTION(BlueprintCallable, Category = Socket)
	bool ConnectToServer();

	FSocket* Socket;
};
