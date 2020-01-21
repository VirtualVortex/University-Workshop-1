// Fill out your copyright notice in the Description page of Project Settings.
//The code used here is from Gareth's workshop and has been modified.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "HTTP_Request.generated.h"

USTRUCT()
struct FRequest_ScoreDetails{ 
	GENERATED_BODY()
	UPROPERTY() FString name;
	UPROPERTY() int phone;

	FRequest_ScoreDetails() {}
};

USTRUCT()
struct FResponse_ScoreDetails{
	GENERATED_BODY()
	UPROPERTY() TArray< FRequest_ScoreDetails > details;

	FResponse_ScoreDetails() {}
};

//Create multicast delegate
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRequestComplete);

UCLASS(Blueprintable, hideCategories = (Rendering, Replication, Input, Actor, "Actor Tick"))
class COMP280_HTTP_API AHTTP_Request : public AActor
{
	GENERATED_BODY()


private:
	// Sets default values for this actor's properties
	// Set Server address
	FHttpModule* Http;
	FString data;
	FString ApiBaseUrl = "http://localhost:8000/";

	FString AuthorizationHeader = TEXT("Authorization");
	void SetAuthorizationHash(FString Hash, TSharedRef<IHttpRequest>& Request);

	TSharedRef<IHttpRequest> RequestWithRoute(FString Subroute);
	void SetRequestHeaders(TSharedRef<IHttpRequest>& Request);

	TSharedRef<IHttpRequest> GetRequest(FString Subroute);
	TSharedRef<IHttpRequest> PostRequest(FString Subroute, FString ContentJsonString);
	void Send(TSharedRef<IHttpRequest>& Request);

	bool ResponseIsValid(FHttpResponsePtr Response, bool bWasSuccessful);

	template <typename StructType>
	void GetJsonStringFromStruct(StructType FilledStruct, FString& StringOutput);
	template <typename StructType>
	void GetStructFromJsonString(FHttpResponsePtr Response, StructType& StructOutput);


public:
	AHTTP_Request();

	//The UFUNCTIONS and UPROPERTIES are used to make requests and send and revice data
	UFUNCTION(BlueprintCallable, Category = "AHTTP_Request")
	void OnAddButtonPress();

	UFUNCTION(BlueprintCallable, Category = "AHTTP_Request")
	void OnGetAllScoresButtonPress();

	UFUNCTION(BlueprintCallable, Category = "AHTTP_Request")
	void OnGetSpecificScoresButtonPress();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString postName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 postNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString getName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString getNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MultiLine = true))
	FString dataToDisplay;

	UPROPERTY(BlueprintAssignable, Category = "AHTTP_Request")
		FRequestComplete OnRequestComplete;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//The functions below will run the requests
	void PostScoreDetails_Response(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void GetScores_Response(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void GetSpecificScores_Response(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	void RequestComplete();
};

template <typename StructType>
void AHTTP_Request::GetJsonStringFromStruct(StructType FilledStruct, FString& StringOutput) {
	FJsonObjectConverter::UStructToJsonObjectString(StructType::StaticStruct(), &FilledStruct, StringOutput, 0, 0);
}

template <typename StructType>
void AHTTP_Request::GetStructFromJsonString(FHttpResponsePtr Response, StructType& StructOutput) {
	StructType StructData;
	FString JsonString = Response->GetContentAsString();
	FJsonObjectConverter::JsonObjectStringToUStruct<StructType>(JsonString, &StructOutput, 0, 0);
}

