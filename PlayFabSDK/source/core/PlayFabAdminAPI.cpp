#include "playfab/PlayFabAdminAPI.h"
#include "playfab/HttpRequest.h"
#include "playfab/PlayFabSettings.h"
#include "playfab/PlayFabResultHandler.h"
#include "playfab/HttpRequesterCURL.h"
#include "playfab/PlayFabVersion.h"

#include <string>


using namespace PlayFab;
using namespace PlayFab::AdminModels;

PlayFabAdminAPI::PlayFabAdminAPI()
    : PlayFabAdminAPI(NULL, false)
{
   
}

PlayFabAdminAPI::PlayFabAdminAPI(IHttpRequester* requester, bool ownRequester)
    : mHttpRequester(requester), mOwnsRequester(ownRequester)
{
    if(mHttpRequester == NULL)
    {
        mOwnsRequester = true;
        mHttpRequester = new HttpRequesterCURL();
    }

}



PlayFabAdminAPI::~PlayFabAdminAPI()
{
    if(mOwnsRequester && mHttpRequester != NULL)
    {
        delete mHttpRequester;
        mOwnsRequester = false;
        mHttpRequester = NULL;
    }
}



IHttpRequester* PlayFabAdminAPI::GetRequester(bool relinquishOwnership /* = false*/)
{
    if(relinquishOwnership)
    {
        mOwnsRequester = false;
    }
    return mHttpRequester;
}

void PlayFabAdminAPI::Update()
{
    if(mHttpRequester != NULL)
    {
        mHttpRequester->UpdateRequests();
    }
}


void PlayFabAdminAPI::GetUserAccountInfo(
    LookupUserAccountInfoRequest& request,
    GetUserAccountInfoCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetUserAccountInfo"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserAccountInfoResult, this);
}

void PlayFabAdminAPI::OnGetUserAccountInfoResult(int httpStatus, HttpRequest* request, void* userData)
{
    LookupUserAccountInfoResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserAccountInfoCallback successCallback = (GetUserAccountInfoCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::SendAccountRecoveryEmail(
    SendAccountRecoveryEmailRequest& request,
    SendAccountRecoveryEmailCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/SendAccountRecoveryEmail"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSendAccountRecoveryEmailResult, this);
}

void PlayFabAdminAPI::OnSendAccountRecoveryEmailResult(int httpStatus, HttpRequest* request, void* userData)
{
    SendAccountRecoveryEmailResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SendAccountRecoveryEmailCallback successCallback = (SendAccountRecoveryEmailCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::UpdateUserTitleDisplayName(
    UpdateUserTitleDisplayNameRequest& request,
    UpdateUserTitleDisplayNameCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/UpdateUserTitleDisplayName"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserTitleDisplayNameResult, this);
}

void PlayFabAdminAPI::OnUpdateUserTitleDisplayNameResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserTitleDisplayNameResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserTitleDisplayNameCallback successCallback = (UpdateUserTitleDisplayNameCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GetUserData(
    GetUserDataRequest& request,
    GetUserDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetUserData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserDataResult, this);
}

void PlayFabAdminAPI::OnGetUserDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserDataCallback successCallback = (GetUserDataCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GetUserInternalData(
    GetUserDataRequest& request,
    GetUserInternalDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetUserInternalData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserInternalDataResult, this);
}

void PlayFabAdminAPI::OnGetUserInternalDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserInternalDataCallback successCallback = (GetUserInternalDataCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GetUserReadOnlyData(
    GetUserDataRequest& request,
    GetUserReadOnlyDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetUserReadOnlyData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserReadOnlyDataResult, this);
}

void PlayFabAdminAPI::OnGetUserReadOnlyDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserReadOnlyDataCallback successCallback = (GetUserReadOnlyDataCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::ResetUserStatistics(
    ResetUserStatisticsRequest& request,
    ResetUserStatisticsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/ResetUserStatistics"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnResetUserStatisticsResult, this);
}

void PlayFabAdminAPI::OnResetUserStatisticsResult(int httpStatus, HttpRequest* request, void* userData)
{
    ResetUserStatisticsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            ResetUserStatisticsCallback successCallback = (ResetUserStatisticsCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::UpdateUserData(
    UpdateUserDataRequest& request,
    UpdateUserDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/UpdateUserData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserDataResult, this);
}

void PlayFabAdminAPI::OnUpdateUserDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserDataCallback successCallback = (UpdateUserDataCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::UpdateUserInternalData(
    UpdateUserInternalDataRequest& request,
    UpdateUserInternalDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/UpdateUserInternalData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserInternalDataResult, this);
}

void PlayFabAdminAPI::OnUpdateUserInternalDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserInternalDataCallback successCallback = (UpdateUserInternalDataCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::UpdateUserReadOnlyData(
    UpdateUserDataRequest& request,
    UpdateUserReadOnlyDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/UpdateUserReadOnlyData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateUserReadOnlyDataResult, this);
}

void PlayFabAdminAPI::OnUpdateUserReadOnlyDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateUserDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateUserReadOnlyDataCallback successCallback = (UpdateUserReadOnlyDataCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::AddNews(
    AddNewsRequest& request,
    AddNewsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/AddNews"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAddNewsResult, this);
}

void PlayFabAdminAPI::OnAddNewsResult(int httpStatus, HttpRequest* request, void* userData)
{
    AddNewsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AddNewsCallback successCallback = (AddNewsCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::AddVirtualCurrencyTypes(
    AddVirtualCurrencyTypesRequest& request,
    AddVirtualCurrencyTypesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/AddVirtualCurrencyTypes"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAddVirtualCurrencyTypesResult, this);
}

void PlayFabAdminAPI::OnAddVirtualCurrencyTypesResult(int httpStatus, HttpRequest* request, void* userData)
{
    BlankResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AddVirtualCurrencyTypesCallback successCallback = (AddVirtualCurrencyTypesCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GetCatalogItems(
    GetCatalogItemsRequest& request,
    GetCatalogItemsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetCatalogItems"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetCatalogItemsResult, this);
}

void PlayFabAdminAPI::OnGetCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetCatalogItemsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetCatalogItemsCallback successCallback = (GetCatalogItemsCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GetRandomResultTables(
    
    GetRandomResultTablesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetRandomResultTables"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody("{}");
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetRandomResultTablesResult, this);
}

void PlayFabAdminAPI::OnGetRandomResultTablesResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetRandomResultTablesResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetRandomResultTablesCallback successCallback = (GetRandomResultTablesCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GetTitleData(
    GetTitleDataRequest& request,
    GetTitleDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetTitleData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetTitleDataResult, this);
}

void PlayFabAdminAPI::OnGetTitleDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetTitleDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetTitleDataCallback successCallback = (GetTitleDataCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::ListVirualCurrencyTypes(
    
    ListVirualCurrencyTypesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/ListVirualCurrencyTypes"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody("{}");
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnListVirualCurrencyTypesResult, this);
}

void PlayFabAdminAPI::OnListVirualCurrencyTypesResult(int httpStatus, HttpRequest* request, void* userData)
{
    ListVirtualCurrencyTypesResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            ListVirualCurrencyTypesCallback successCallback = (ListVirualCurrencyTypesCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::SetCatalogItems(
    UpdateCatalogItemsRequest& request,
    SetCatalogItemsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/SetCatalogItems"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSetCatalogItemsResult, this);
}

void PlayFabAdminAPI::OnSetCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateCatalogItemsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SetCatalogItemsCallback successCallback = (SetCatalogItemsCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::SetTitleData(
    SetTitleDataRequest& request,
    SetTitleDataCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/SetTitleData"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSetTitleDataResult, this);
}

void PlayFabAdminAPI::OnSetTitleDataResult(int httpStatus, HttpRequest* request, void* userData)
{
    SetTitleDataResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SetTitleDataCallback successCallback = (SetTitleDataCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::UpdateCatalogItems(
    UpdateCatalogItemsRequest& request,
    UpdateCatalogItemsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/UpdateCatalogItems"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateCatalogItemsResult, this);
}

void PlayFabAdminAPI::OnUpdateCatalogItemsResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateCatalogItemsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateCatalogItemsCallback successCallback = (UpdateCatalogItemsCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::UpdateRandomResultTables(
    UpdateRandomResultTablesRequest& request,
    UpdateRandomResultTablesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/UpdateRandomResultTables"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnUpdateRandomResultTablesResult, this);
}

void PlayFabAdminAPI::OnUpdateRandomResultTablesResult(int httpStatus, HttpRequest* request, void* userData)
{
    UpdateRandomResultTablesResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            UpdateRandomResultTablesCallback successCallback = (UpdateRandomResultTablesCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::AddUserVirtualCurrency(
    AddUserVirtualCurrencyRequest& request,
    AddUserVirtualCurrencyCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/AddUserVirtualCurrency"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAddUserVirtualCurrencyResult, this);
}

void PlayFabAdminAPI::OnAddUserVirtualCurrencyResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyUserVirtualCurrencyResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AddUserVirtualCurrencyCallback successCallback = (AddUserVirtualCurrencyCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GetUserInventory(
    GetUserInventoryRequest& request,
    GetUserInventoryCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetUserInventory"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetUserInventoryResult, this);
}

void PlayFabAdminAPI::OnGetUserInventoryResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetUserInventoryResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetUserInventoryCallback successCallback = (GetUserInventoryCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GrantItemsToUsers(
    GrantItemsToUsersRequest& request,
    GrantItemsToUsersCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GrantItemsToUsers"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGrantItemsToUsersResult, this);
}

void PlayFabAdminAPI::OnGrantItemsToUsersResult(int httpStatus, HttpRequest* request, void* userData)
{
    GrantItemsToUsersResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GrantItemsToUsersCallback successCallback = (GrantItemsToUsersCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::RevokeInventoryItem(
    RevokeInventoryItemRequest& request,
    RevokeInventoryItemCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/RevokeInventoryItem"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnRevokeInventoryItemResult, this);
}

void PlayFabAdminAPI::OnRevokeInventoryItemResult(int httpStatus, HttpRequest* request, void* userData)
{
    RevokeInventoryResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            RevokeInventoryItemCallback successCallback = (RevokeInventoryItemCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::SubtractUserVirtualCurrency(
    SubtractUserVirtualCurrencyRequest& request,
    SubtractUserVirtualCurrencyCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/SubtractUserVirtualCurrency"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnSubtractUserVirtualCurrencyResult, this);
}

void PlayFabAdminAPI::OnSubtractUserVirtualCurrencyResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyUserVirtualCurrencyResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            SubtractUserVirtualCurrencyCallback successCallback = (SubtractUserVirtualCurrencyCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GetMatchmakerGameInfo(
    GetMatchmakerGameInfoRequest& request,
    GetMatchmakerGameInfoCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetMatchmakerGameInfo"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetMatchmakerGameInfoResult, this);
}

void PlayFabAdminAPI::OnGetMatchmakerGameInfoResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetMatchmakerGameInfoResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetMatchmakerGameInfoCallback successCallback = (GetMatchmakerGameInfoCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GetMatchmakerGameModes(
    GetMatchmakerGameModesRequest& request,
    GetMatchmakerGameModesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetMatchmakerGameModes"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetMatchmakerGameModesResult, this);
}

void PlayFabAdminAPI::OnGetMatchmakerGameModesResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetMatchmakerGameModesResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetMatchmakerGameModesCallback successCallback = (GetMatchmakerGameModesCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::ModifyMatchmakerGameModes(
    ModifyMatchmakerGameModesRequest& request,
    ModifyMatchmakerGameModesCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/ModifyMatchmakerGameModes"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnModifyMatchmakerGameModesResult, this);
}

void PlayFabAdminAPI::OnModifyMatchmakerGameModesResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyMatchmakerGameModesResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            ModifyMatchmakerGameModesCallback successCallback = (ModifyMatchmakerGameModesCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::AddServerBuild(
    AddServerBuildRequest& request,
    AddServerBuildCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/AddServerBuild"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnAddServerBuildResult, this);
}

void PlayFabAdminAPI::OnAddServerBuildResult(int httpStatus, HttpRequest* request, void* userData)
{
    AddServerBuildResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            AddServerBuildCallback successCallback = (AddServerBuildCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::GetServerBuildInfo(
    GetServerBuildInfoRequest& request,
    GetServerBuildInfoCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/GetServerBuildInfo"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnGetServerBuildInfoResult, this);
}

void PlayFabAdminAPI::OnGetServerBuildInfoResult(int httpStatus, HttpRequest* request, void* userData)
{
    GetServerBuildInfoResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            GetServerBuildInfoCallback successCallback = (GetServerBuildInfoCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::ListServerBuilds(
    
    ListServerBuildsCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/ListServerBuilds"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody("{}");
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnListServerBuildsResult, this);
}

void PlayFabAdminAPI::OnListServerBuildsResult(int httpStatus, HttpRequest* request, void* userData)
{
    ListBuildsResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            ListServerBuildsCallback successCallback = (ListServerBuildsCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::ModifyServerBuild(
    ModifyServerBuildRequest& request,
    ModifyServerBuildCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/ModifyServerBuild"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnModifyServerBuildResult, this);
}

void PlayFabAdminAPI::OnModifyServerBuildResult(int httpStatus, HttpRequest* request, void* userData)
{
    ModifyServerBuildResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            ModifyServerBuildCallback successCallback = (ModifyServerBuildCallback)(request->GetResultCallback());
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


void PlayFabAdminAPI::RemoveServerBuild(
    RemoveServerBuildRequest& request,
    RemoveServerBuildCallback callback,
    ErrorCallback errorCallback,
    void* userData
    )
{
    
    HttpRequest* httpRequest = new HttpRequest("POST", PlayFabSettings::getURL("/Admin/RemoveServerBuild"));
    httpRequest->SetHeader("Content-Type", "application/json");
	httpRequest->SetHeader("X-PlayFabSDK", PlayFabVersionString);
	httpRequest->SetHeader("X-SecretKey", PlayFabSettings::developerSecretKey);
	
    httpRequest->SetResultCallback((void*)callback);
    httpRequest->SetErrorCallback(errorCallback);
    httpRequest->SetUserData(userData);

    httpRequest->SetBody(request.toJSONString());
    httpRequest->CompressBody();

    mHttpRequester->AddRequest(httpRequest, OnRemoveServerBuildResult, this);
}

void PlayFabAdminAPI::OnRemoveServerBuildResult(int httpStatus, HttpRequest* request, void* userData)
{
    RemoveServerBuildResult outResult;
    PlayFabError errorResult;

    bool success = PlayFabRequestHandler::DecodeRequest(httpStatus, request, userData, outResult, errorResult);

    if (success)
    {
        

        if (request->GetResultCallback() != NULL)
        {
            RemoveServerBuildCallback successCallback = (RemoveServerBuildCallback)(request->GetResultCallback());
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



