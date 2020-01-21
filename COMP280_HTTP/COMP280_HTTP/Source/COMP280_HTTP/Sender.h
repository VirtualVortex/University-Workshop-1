// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sender.generated.h"

// This is required elemetn for the project
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTimerComplete);

UCLASS()
class COMP280_HTTP_API ASender : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASender();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// This is a required element for the project
	UPROPERTY(BlueprintAssignable, Category = "MyTimer")
		FTimerComplete OnTimerComplete;

	void TimerComplete();

	FTimerHandle TimerHandle;

};
