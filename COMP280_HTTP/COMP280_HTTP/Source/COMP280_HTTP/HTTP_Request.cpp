// Fill out your copyright notice in the Description page of Project Settings.
//The code used here is from Gareth's workshop and has been modified.

#include "HTTP_Request.h"
#include "Engine/Engine.h"
#include "Templates/Tuple.h"
#include <iostream>
#include <string>

using namespace std;

// Sets default values
AHTTP_Request::AHTTP_Request()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//Call function to add data to database
void AHTTP_Request::OnAddButtonPress()
{

	//create a json object and set values in scoreDetails to input values
	FString ContentJsonString;
	FRequest_ScoreDetails score;
	score.name = postName;
	score.phone = postNum;

	GetJsonStringFromStruct<FRequest_ScoreDetails>(score, ContentJsonString);

	TSharedRef<IHttpRequest> Request = PostRequest("phone", ContentJsonString);
	Request->OnProcessRequestComplete().BindUObject(this, &AHTTP_Request::PostScoreDetails_Response);
	Send(Request);
}

//Called to get specific data from database
void AHTTP_Request::PostScoreDetails_Response(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    //Check if the send was successfully sent
	if (!ResponseIsValid(Response, bWasSuccessful))
	{
		GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("PostScoreDetails_Response-FAIL"));

		return;
	}

	GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::White, TEXT("PostScoreDetails_Response-SUCCESS"));
}

//Call function to get all the data from the database
void AHTTP_Request::OnGetAllScoresButtonPress()
{
	FString ContentJsonString;
	FRequest_ScoreDetails score;
	score.name = getName;
	//conver getNum to int do that 
	score.phone =  FCString::Atoi(*getNum);

	GetJsonStringFromStruct<FRequest_ScoreDetails>(score, ContentJsonString);

	//Send request to subroute get_all_records
	TSharedRef<IHttpRequest> getRequest = GetRequest("get_all_records");
	getRequest->OnProcessRequestComplete().BindUObject(this, &AHTTP_Request::GetScores_Response);
	Send(getRequest);
}

//Call function to get specific data from the database
void AHTTP_Request::OnGetSpecificScoresButtonPress()
{
	FString ContentJsonString;
	FRequest_ScoreDetails score;
	score.name = getName;
	//conver getNum to int so that it can be displayed in the UI 
	score.phone = FCString::Atoi(*getNum);

	GetJsonStringFromStruct<FRequest_ScoreDetails>(score, ContentJsonString);

	//Send request to subroute get_all_records
	TSharedRef<IHttpRequest> getRequest = GetRequest("get_all_records");
	getRequest->OnProcessRequestComplete().BindUObject(this, &AHTTP_Request::GetSpecificScores_Response);
	Send(getRequest);
}

//Convert Json to string and then store data into UProperty
void AHTTP_Request::GetScores_Response(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!ResponseIsValid(Response, bWasSuccessful))
	{
		GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("PostScoreDetails_Response-FAIL"));

		return;
	}

	GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::White, TEXT("PostScoreDetails_Response-SUCCESS"));

	FString rawJson = Response->GetContentAsString();

	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	//Store each row from the database in dataToDisplay
	if (FJsonSerializer::Deserialize(Reader, JsonObject)) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("Deserialize works"));

		TArray<TSharedPtr<FJsonValue>> arr = JsonObject->GetArrayField("Data");
		for (int32 index = 0; index < arr.Num(); index++)
		{
			TSharedPtr<FJsonObject> obj = arr[index]->AsObject();
			
			FString name = obj->GetStringField("name");
			FString number = obj->GetStringField("number");
			FString data = name + " : " + number;
			dataToDisplay = dataToDisplay + data + "\n";
			RequestComplete();
		}

	}
	else
		GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("Deserialize didn't works"));
}

//Call to get specific data from the database
void AHTTP_Request::GetSpecificScores_Response(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	//If the response didn't work then the request will stop
	if (!ResponseIsValid(Response, bWasSuccessful))
	{
		GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("PostScoreDetails_Response-FAIL"));

		return;
	}

	GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::White, TEXT("PostScoreDetails_Response-SUCCESS"));

	//Convert to string
	FString rawJson = Response->GetContentAsString();

	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	//Find the specific data in the object and then store it in dataToDisplay
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("Deserialize works"));

		TArray<TSharedPtr<FJsonValue>> arr = JsonObject->GetArrayField("Data");
		for (int32 index = 0; index < arr.Num(); index++)
		{
			TSharedPtr<FJsonObject> obj = arr[index]->AsObject();

			FString name = obj->GetStringField("name");
			FString number = obj->GetStringField("number");
			data = name + " : " + number;
			
			if (name == getName)
			{
				if (number == getNum)
				{
					dataToDisplay = data;
					RequestComplete();
				}
			}
		}
	}
	else
		GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("Deserialize didn't works"));
}

void AHTTP_Request::RequestComplete()
{
	//Call all Delegate functions
	OnRequestComplete.Broadcast();
}

// Called when the game starts or when spawned
void AHTTP_Request::BeginPlay()
{
	Super::BeginPlay();

	Http = &FHttpModule::Get();
}

// Called every frame
void AHTTP_Request::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


//Creates an instance of IHttpRequest so that RequestWithRoute can be called
TSharedRef<IHttpRequest> AHTTP_Request::RequestWithRoute(FString Subroute)
{
	TSharedRef<IHttpRequest> Request = Http->CreateRequest();
	GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, ApiBaseUrl);
	Request->SetURL(ApiBaseUrl + Subroute);
	SetRequestHeaders(Request);
	return Request;
}

//Set headers for POST and GET request
void AHTTP_Request::SetRequestHeaders(TSharedRef<IHttpRequest>& Request)
{
	Request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("Accepts"), TEXT("application/json"));
}

//Send get request to server
TSharedRef<IHttpRequest> AHTTP_Request::GetRequest(FString Subroute)
{
	TSharedRef<IHttpRequest> Request = RequestWithRoute(Subroute);
	Request->SetVerb("GET");
	return Request;
}

//Start POST request when called
TSharedRef<IHttpRequest> AHTTP_Request::PostRequest(FString Subroute, FString ContentJsonString)
{
	TSharedRef<IHttpRequest> Request = RequestWithRoute(Subroute);

	//Send Post request with data to add to database
	GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("POSTing"));
	Request->SetVerb("POST");
	Request->SetContentAsString(ContentJsonString);
	return Request;
}

void AHTTP_Request::Send(TSharedRef<IHttpRequest>& Request)
{
	//Send request to server
	Request->ProcessRequest();
}

// Called to check if response was returned
bool AHTTP_Request::ResponseIsValid(FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful || !Response.IsValid())
	{
		if (bWasSuccessful == false)	GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("bWasSuccessful - false"));
		if (Response.IsValid() == false)	GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("Response.isValid() - false"));

		return false;
	}

	if (EHttpResponseCodes::IsOk(Response->GetResponseCode())) return true;

	UE_LOG(LogTemp, Warning, TEXT("Http Response returned error code: %d"), Response->GetResponseCode());

	GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, TEXT("Http Response returned error code: %d"), Response->GetResponseCode());

	return false;
}

void AHTTP_Request::SetAuthorizationHash(FString Hash, TSharedRef<IHttpRequest>& Request) {
	Request->SetHeader(AuthorizationHeader, Hash);
}

