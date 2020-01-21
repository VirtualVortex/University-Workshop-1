// Fill out your copyright notice in the Description page of Project Settings.


#include "Sender.h"
#include "TimerManager.h"

// Sets default values
ASender::ASender()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASender::BeginPlay()
{
	Super::BeginPlay();

	//After one second call TimerComplete
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ASender::TimerComplete, 1.0f, false);
	
}

// Called every frame
void ASender::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASender::TimerComplete()
{
	//This is required for the project
	//Call all Delegate functions
	OnTimerComplete.Broadcast();
}


