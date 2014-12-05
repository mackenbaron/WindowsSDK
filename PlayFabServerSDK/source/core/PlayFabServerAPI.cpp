#include "playfab/PlayFabServerAPI.h"
#include "playfab/HttpRequest.h"
#include "playfab/PlayFabSettings.h"
#include "playfab/PlayFabResultHandler.h"
#include "playfab/HttpRequesterCURL.h"
#include "playfab/PlayFabVersion.h"

#include <string>


using namespace PlayFab;
using namespace PlayFab::ServerModels;

PlayFabServerAPI::PlayFabServerAPI()
    : PlayFabServerAPI(NULL, false)
{
   
}

PlayFabServerAPI::PlayFabServerAPI(IHttpRequester* requester, bool ownRequester)
    : mHttpRequester(requester), mOwnsRequester(ownRequester)
{
    if(mHttpRequester == NULL)
    {
        mOwnsRequester = true;
        mHttpRequester = new HttpRequesterCURL();
    }

}



PlayFabServerAPI::~PlayFabServerAPI()
{
    if(mOwnsRequester && mHttpRequester != NULL)
    {
        delete mHttpRequester;
        mOwnsRequester = false;
        mHttpRequester = NULL;
    }
}



IHttpRequester* PlayFabServerAPI::GetRequester(bool relinquishOwnership /* = false*/)
{
    if(relinquishOwnership)
    {
        mOwnsRequester = false;
    }
    return mHttpRequester;
}

void PlayFabServerAPI::Update()
{
    if(mHttpRequester != NULL)
    {
        mHttpRequester->UpdateRequests();
    }
}


void PlayFabServerAPI::AuthenticateSessionTicket(
    AuthenticateSessionTicketRequest& request,
    AuthenticateSessionTicketCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/AuthenticateSessionTicket"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAuthenticateSessionTicketResult, this);
}

void PlayFabServerAPI::OnAuthenticateSessionTicketResult(int httpStatus, HttpRequest* request, void* userData)
{
    AuthenticateSessionTicketResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AuthenticateSessionTicketCallback successCallback = static_cast<AuthenticateSessionTicketCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetUserAccountInfo(
    GetUserAccountInfoRequest& request,
    GetUserAccountInfoCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserAccountInfo"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserAccountInfoResult, this);
}

void PlayFabServerAPI::OnGetUserAccountInfoResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserAccountInfoResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserAccountInfoCallback successCallback = static_cast<GetUserAccountInfoCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::SendPushNotification(
    SendPushNotificationRequest& request,
    SendPushNotificationCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/SendPushNotification"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSendPushNotificationResult, this);
}

void PlayFabServerAPI::OnSendPushNotificationResult(int httpStatus, HttpRequest* request, void* userData)
{
    SendPushNotificationResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SendPushNotificationCallback successCallback = static_cast<SendPushNotificationCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetLeaderboard(
    GetLeaderboardRequest& request,
    GetLeaderboardCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetLeaderboard"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetLeaderboardResult, this);
}

void PlayFabServerAPI::OnGetLeaderboardResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetLeaderboardResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetLeaderboardCallback successCallback = static_cast<GetLeaderboardCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetLeaderboardAroundUser(
    GetLeaderboardAroundUserRequest& request,
    GetLeaderboardAroundUserCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetLeaderboardAroundUser"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetLeaderboardAroundUserResult, this);
}

void PlayFabServerAPI::OnGetLeaderboardAroundUserResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetLeaderboardAroundUserResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetLeaderboardAroundUserCallback successCallback = static_cast<GetLeaderboardAroundUserCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetUserData(
    GetUserDataRequest& request,
    GetUserDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserDataResult, this);
}

void PlayFabServerAPI::OnGetUserDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserDataCallback successCallback = static_cast<GetUserDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetUserInternalData(
    GetUserDataRequest& request,
    GetUserInternalDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserInternalData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserInternalDataResult, this);
}

void PlayFabServerAPI::OnGetUserInternalDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserInternalDataCallback successCallback = static_cast<GetUserInternalDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetUserReadOnlyData(
    GetUserDataRequest& request,
    GetUserReadOnlyDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserReadOnlyData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserReadOnlyDataResult, this);
}

void PlayFabServerAPI::OnGetUserReadOnlyDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserReadOnlyDataCallback successCallback = static_cast<GetUserReadOnlyDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetUserStatistics(
    GetUserStatisticsRequest& request,
    GetUserStatisticsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserStatistics"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserStatisticsResult, this);
}

void PlayFabServerAPI::OnGetUserStatisticsResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserStatisticsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserStatisticsCallback successCallback = static_cast<GetUserStatisticsCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::UpdateUserData(
    UpdateUserDataRequest& request,
    UpdateUserDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/UpdateUserData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserDataResult, this);
}

void PlayFabServerAPI::OnUpdateUserDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserDataCallback successCallback = static_cast<UpdateUserDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::UpdateUserInternalData(
    UpdateUserInternalDataRequest& request,
    UpdateUserInternalDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/UpdateUserInternalData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserInternalDataResult, this);
}

void PlayFabServerAPI::OnUpdateUserInternalDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserInternalDataCallback successCallback = static_cast<UpdateUserInternalDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::UpdateUserReadOnlyData(
    UpdateUserDataRequest& request,
    UpdateUserReadOnlyDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/UpdateUserReadOnlyData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserReadOnlyDataResult, this);
}

void PlayFabServerAPI::OnUpdateUserReadOnlyDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserReadOnlyDataCallback successCallback = static_cast<UpdateUserReadOnlyDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::UpdateUserStatistics(
    UpdateUserStatisticsRequest& request,
    UpdateUserStatisticsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/UpdateUserStatistics"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserStatisticsResult, this);
}

void PlayFabServerAPI::OnUpdateUserStatisticsResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserStatisticsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserStatisticsCallback successCallback = static_cast<UpdateUserStatisticsCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetCatalogItems(
    GetCatalogItemsRequest& request,
    GetCatalogItemsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetCatalogItems"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetCatalogItemsResult, this);
}

void PlayFabServerAPI::OnGetCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetCatalogItemsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetCatalogItemsCallback successCallback = static_cast<GetCatalogItemsCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetTitleData(
    GetTitleDataRequest& request,
    GetTitleDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetTitleData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetTitleDataResult, this);
}

void PlayFabServerAPI::OnGetTitleDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetTitleDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetTitleDataCallback successCallback = static_cast<GetTitleDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::SetTitleData(
    SetTitleDataRequest& request,
    SetTitleDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/SetTitleData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSetTitleDataResult, this);
}

void PlayFabServerAPI::OnSetTitleDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    SetTitleDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SetTitleDataCallback successCallback = static_cast<SetTitleDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::AddUserVirtualCurrency(
    AddUserVirtualCurrencyRequest& request,
    AddUserVirtualCurrencyCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/AddUserVirtualCurrency"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAddUserVirtualCurrencyResult, this);
}

void PlayFabServerAPI::OnAddUserVirtualCurrencyResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyUserVirtualCurrencyResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AddUserVirtualCurrencyCallback successCallback = static_cast<AddUserVirtualCurrencyCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetUserInventory(
    GetUserInventoryRequest& request,
    GetUserInventoryCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetUserInventory"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserInventoryResult, this);
}

void PlayFabServerAPI::OnGetUserInventoryResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserInventoryResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserInventoryCallback successCallback = static_cast<GetUserInventoryCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GrantItemsToUsers(
    GrantItemsToUsersRequest& request,
    GrantItemsToUsersCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GrantItemsToUsers"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGrantItemsToUsersResult, this);
}

void PlayFabServerAPI::OnGrantItemsToUsersResult(int httpStatus, HttpRequest* request, void* userData)
{
    GrantItemsToUsersResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GrantItemsToUsersCallback successCallback = static_cast<GrantItemsToUsersCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::ModifyItemUses(
    ModifyItemUsesRequest& request,
    ModifyItemUsesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/ModifyItemUses"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnModifyItemUsesResult, this);
}

void PlayFabServerAPI::OnModifyItemUsesResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyItemUsesResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            ModifyItemUsesCallback successCallback = static_cast<ModifyItemUsesCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::SubtractUserVirtualCurrency(
    SubtractUserVirtualCurrencyRequest& request,
    SubtractUserVirtualCurrencyCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/SubtractUserVirtualCurrency"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSubtractUserVirtualCurrencyResult, this);
}

void PlayFabServerAPI::OnSubtractUserVirtualCurrencyResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyUserVirtualCurrencyResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SubtractUserVirtualCurrencyCallback successCallback = static_cast<SubtractUserVirtualCurrencyCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::NotifyMatchmakerPlayerLeft(
    NotifyMatchmakerPlayerLeftRequest& request,
    NotifyMatchmakerPlayerLeftCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/NotifyMatchmakerPlayerLeft"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnNotifyMatchmakerPlayerLeftResult, this);
}

void PlayFabServerAPI::OnNotifyMatchmakerPlayerLeftResult(int httpStatus, HttpRequest* request, void* userData)
{
    NotifyMatchmakerPlayerLeftResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            NotifyMatchmakerPlayerLeftCallback successCallback = static_cast<NotifyMatchmakerPlayerLeftCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::RedeemMatchmakerTicket(
    RedeemMatchmakerTicketRequest& request,
    RedeemMatchmakerTicketCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/RedeemMatchmakerTicket"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnRedeemMatchmakerTicketResult, this);
}

void PlayFabServerAPI::OnRedeemMatchmakerTicketResult(int httpStatus, HttpRequest* request, void* userData)
{
    RedeemMatchmakerTicketResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            RedeemMatchmakerTicketCallback successCallback = static_cast<RedeemMatchmakerTicketCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::AwardSteamAchievement(
    AwardSteamAchievementRequest& request,
    AwardSteamAchievementCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/AwardSteamAchievement"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAwardSteamAchievementResult, this);
}

void PlayFabServerAPI::OnAwardSteamAchievementResult(int httpStatus, HttpRequest* request, void* userData)
{
    AwardSteamAchievementResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AwardSteamAchievementCallback successCallback = static_cast<AwardSteamAchievementCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::AddSharedGroupMembers(
    AddSharedGroupMembersRequest& request,
    AddSharedGroupMembersCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/AddSharedGroupMembers"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAddSharedGroupMembersResult, this);
}

void PlayFabServerAPI::OnAddSharedGroupMembersResult(int httpStatus, HttpRequest* request, void* userData)
{
    AddSharedGroupMembersResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AddSharedGroupMembersCallback successCallback = static_cast<AddSharedGroupMembersCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::CreateSharedGroup(
    CreateSharedGroupRequest& request,
    CreateSharedGroupCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/CreateSharedGroup"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnCreateSharedGroupResult, this);
}

void PlayFabServerAPI::OnCreateSharedGroupResult(int httpStatus, HttpRequest* request, void* userData)
{
    CreateSharedGroupResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            CreateSharedGroupCallback successCallback = static_cast<CreateSharedGroupCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::DeleteSharedGroup(
    DeleteSharedGroupRequest& request,
    DeleteSharedGroupCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/DeleteSharedGroup"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnDeleteSharedGroupResult, this);
}

void PlayFabServerAPI::OnDeleteSharedGroupResult(int httpStatus, HttpRequest* request, void* userData)
{
    EmptyResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            DeleteSharedGroupCallback successCallback = static_cast<DeleteSharedGroupCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::GetSharedGroupData(
    GetSharedGroupDataRequest& request,
    GetSharedGroupDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/GetSharedGroupData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetSharedGroupDataResult, this);
}

void PlayFabServerAPI::OnGetSharedGroupDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetSharedGroupDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetSharedGroupDataCallback successCallback = static_cast<GetSharedGroupDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::RemoveSharedGroupMembers(
    RemoveSharedGroupMembersRequest& request,
    RemoveSharedGroupMembersCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/RemoveSharedGroupMembers"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnRemoveSharedGroupMembersResult, this);
}

void PlayFabServerAPI::OnRemoveSharedGroupMembersResult(int httpStatus, HttpRequest* request, void* userData)
{
    RemoveSharedGroupMembersResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            RemoveSharedGroupMembersCallback successCallback = static_cast<RemoveSharedGroupMembersCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}


void PlayFabServerAPI::UpdateSharedGroupData(
    UpdateSharedGroupDataRequest& request,
    UpdateSharedGroupDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Server/UpdateSharedGroupData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback(callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateSharedGroupDataResult, this);
}

void PlayFabServerAPI::OnUpdateSharedGroupDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateSharedGroupDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateSharedGroupDataCallback successCallback = static_cast<UpdateSharedGroupDataCallback>(request->GetResultCallback());
            successCallback(outResult, request->GetUserData());
        }
    }
    else
    {
        if (PlayFabSettings::globalErrorHandler != NULL)
        {
            PlayFabSettings::globalErrorHandler(errorResult, request->GetUserData());
        }

        if (request->GetErrorCallback() != NULL)
        {
            request->GetErrorCallback()(errorResult, request->GetUserData());
        }
    }

    delete request;
}




