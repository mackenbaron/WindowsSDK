
#ifndef DISABLE_PLAYFABCLIENT_API

#include "playfab/PlayFabClientApi.h"
#include "playfab/PlayFabHttp.h"
#include "playfab/PlayFabSettings.h"

namespace PlayFab
{
    using namespace ClientModels;

    size_t PlayFabClientAPI::Update()
    {
        return PlayFabHttp::Get().Update();
    }

    // PlayFabClient APIs

    void PlayFabClientAPI::GetPhotonAuthenticationToken(
        GetPhotonAuthenticationTokenRequest& request,
        ProcessApiCallback<GetPhotonAuthenticationTokenResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPhotonAuthenticationToken"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPhotonAuthenticationTokenResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPhotonAuthenticationTokenResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPhotonAuthenticationTokenResult(CallRequestContainer& request)
    {
        GetPhotonAuthenticationTokenResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPhotonAuthenticationTokenResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetWindowsHelloChallenge(
        GetWindowsHelloChallengeRequest& request,
        ProcessApiCallback<GetWindowsHelloChallengeResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetWindowsHelloChallenge"), U(""), U(""), requestJson, OnGetWindowsHelloChallengeResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetWindowsHelloChallengeResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetWindowsHelloChallengeResult(CallRequestContainer& request)
    {
        GetWindowsHelloChallengeResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetWindowsHelloChallengeResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithAndroidDeviceID(
        LoginWithAndroidDeviceIDRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithAndroidDeviceID"), U(""), U(""), requestJson, OnLoginWithAndroidDeviceIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithAndroidDeviceIDResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithCustomID(
        LoginWithCustomIDRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithCustomID"), U(""), U(""), requestJson, OnLoginWithCustomIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithCustomIDResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithEmailAddress(
        LoginWithEmailAddressRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithEmailAddress"), U(""), U(""), requestJson, OnLoginWithEmailAddressResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithEmailAddressResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithFacebook(
        LoginWithFacebookRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithFacebook"), U(""), U(""), requestJson, OnLoginWithFacebookResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithFacebookResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithGameCenter(
        LoginWithGameCenterRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithGameCenter"), U(""), U(""), requestJson, OnLoginWithGameCenterResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithGameCenterResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithGoogleAccount(
        LoginWithGoogleAccountRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithGoogleAccount"), U(""), U(""), requestJson, OnLoginWithGoogleAccountResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithGoogleAccountResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithIOSDeviceID(
        LoginWithIOSDeviceIDRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithIOSDeviceID"), U(""), U(""), requestJson, OnLoginWithIOSDeviceIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithIOSDeviceIDResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithKongregate(
        LoginWithKongregateRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithKongregate"), U(""), U(""), requestJson, OnLoginWithKongregateResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithKongregateResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithPlayFab(
        LoginWithPlayFabRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithPlayFab"), U(""), U(""), requestJson, OnLoginWithPlayFabResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithPlayFabResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithSteam(
        LoginWithSteamRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithSteam"), U(""), U(""), requestJson, OnLoginWithSteamResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithSteamResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithTwitch(
        LoginWithTwitchRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithTwitch"), U(""), U(""), requestJson, OnLoginWithTwitchResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithTwitchResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LoginWithWindowsHello(
        LoginWithWindowsHelloRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LoginWithWindowsHello"), U(""), U(""), requestJson, OnLoginWithWindowsHelloResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLoginWithWindowsHelloResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::RegisterPlayFabUser(
        RegisterPlayFabUserRequest& request,
        ProcessApiCallback<RegisterPlayFabUserResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/RegisterPlayFabUser"), U(""), U(""), requestJson, OnRegisterPlayFabUserResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RegisterPlayFabUserResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnRegisterPlayFabUserResult(CallRequestContainer& request)
    {
        RegisterPlayFabUserResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RegisterPlayFabUserResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::RegisterWithWindowsHello(
        RegisterWithWindowsHelloRequest& request,
        ProcessApiCallback<LoginResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {
        if (PlayFabSettings::titleId.length() > 0) request.TitleId = ShortenString(PlayFabSettings::titleId);

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/RegisterWithWindowsHello"), U(""), U(""), requestJson, OnRegisterWithWindowsHelloResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LoginResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnRegisterWithWindowsHelloResult(CallRequestContainer& request)
    {
        LoginResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        if (outResult.SessionTicket.length() > 0)
        {
            mUserSessionTicket = WidenString(outResult.SessionTicket);
            MultiStepClientLogin(outResult.SettingsForUser->NeedsAttribution);
        }

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LoginResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::AddGenericID(
        AddGenericIDRequest& request,
        ProcessApiCallback<AddGenericIDResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/AddGenericID"), U("X-Authorization"), mUserSessionTicket, requestJson, OnAddGenericIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AddGenericIDResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnAddGenericIDResult(CallRequestContainer& request)
    {
        AddGenericIDResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AddGenericIDResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::AddUsernamePassword(
        AddUsernamePasswordRequest& request,
        ProcessApiCallback<AddUsernamePasswordResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/AddUsernamePassword"), U("X-Authorization"), mUserSessionTicket, requestJson, OnAddUsernamePasswordResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AddUsernamePasswordResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnAddUsernamePasswordResult(CallRequestContainer& request)
    {
        AddUsernamePasswordResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AddUsernamePasswordResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetAccountInfo(
        GetAccountInfoRequest& request,
        ProcessApiCallback<GetAccountInfoResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetAccountInfo"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetAccountInfoResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetAccountInfoResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetAccountInfoResult(CallRequestContainer& request)
    {
        GetAccountInfoResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetAccountInfoResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayerCombinedInfo(
        GetPlayerCombinedInfoRequest& request,
        ProcessApiCallback<GetPlayerCombinedInfoResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayerCombinedInfo"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayerCombinedInfoResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerCombinedInfoResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayerCombinedInfoResult(CallRequestContainer& request)
    {
        GetPlayerCombinedInfoResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayerCombinedInfoResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayFabIDsFromFacebookIDs(
        GetPlayFabIDsFromFacebookIDsRequest& request,
        ProcessApiCallback<GetPlayFabIDsFromFacebookIDsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayFabIDsFromFacebookIDs"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayFabIDsFromFacebookIDsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayFabIDsFromFacebookIDsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayFabIDsFromFacebookIDsResult(CallRequestContainer& request)
    {
        GetPlayFabIDsFromFacebookIDsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayFabIDsFromFacebookIDsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayFabIDsFromGameCenterIDs(
        GetPlayFabIDsFromGameCenterIDsRequest& request,
        ProcessApiCallback<GetPlayFabIDsFromGameCenterIDsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayFabIDsFromGameCenterIDs"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayFabIDsFromGameCenterIDsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayFabIDsFromGameCenterIDsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayFabIDsFromGameCenterIDsResult(CallRequestContainer& request)
    {
        GetPlayFabIDsFromGameCenterIDsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayFabIDsFromGameCenterIDsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayFabIDsFromGenericIDs(
        GetPlayFabIDsFromGenericIDsRequest& request,
        ProcessApiCallback<GetPlayFabIDsFromGenericIDsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayFabIDsFromGenericIDs"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayFabIDsFromGenericIDsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayFabIDsFromGenericIDsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayFabIDsFromGenericIDsResult(CallRequestContainer& request)
    {
        GetPlayFabIDsFromGenericIDsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayFabIDsFromGenericIDsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayFabIDsFromGoogleIDs(
        GetPlayFabIDsFromGoogleIDsRequest& request,
        ProcessApiCallback<GetPlayFabIDsFromGoogleIDsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayFabIDsFromGoogleIDs"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayFabIDsFromGoogleIDsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayFabIDsFromGoogleIDsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayFabIDsFromGoogleIDsResult(CallRequestContainer& request)
    {
        GetPlayFabIDsFromGoogleIDsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayFabIDsFromGoogleIDsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayFabIDsFromKongregateIDs(
        GetPlayFabIDsFromKongregateIDsRequest& request,
        ProcessApiCallback<GetPlayFabIDsFromKongregateIDsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayFabIDsFromKongregateIDs"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayFabIDsFromKongregateIDsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayFabIDsFromKongregateIDsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayFabIDsFromKongregateIDsResult(CallRequestContainer& request)
    {
        GetPlayFabIDsFromKongregateIDsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayFabIDsFromKongregateIDsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayFabIDsFromSteamIDs(
        GetPlayFabIDsFromSteamIDsRequest& request,
        ProcessApiCallback<GetPlayFabIDsFromSteamIDsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayFabIDsFromSteamIDs"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayFabIDsFromSteamIDsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayFabIDsFromSteamIDsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayFabIDsFromSteamIDsResult(CallRequestContainer& request)
    {
        GetPlayFabIDsFromSteamIDsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayFabIDsFromSteamIDsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayFabIDsFromTwitchIDs(
        GetPlayFabIDsFromTwitchIDsRequest& request,
        ProcessApiCallback<GetPlayFabIDsFromTwitchIDsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayFabIDsFromTwitchIDs"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayFabIDsFromTwitchIDsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayFabIDsFromTwitchIDsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayFabIDsFromTwitchIDsResult(CallRequestContainer& request)
    {
        GetPlayFabIDsFromTwitchIDsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayFabIDsFromTwitchIDsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LinkAndroidDeviceID(
        LinkAndroidDeviceIDRequest& request,
        ProcessApiCallback<LinkAndroidDeviceIDResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LinkAndroidDeviceID"), U("X-Authorization"), mUserSessionTicket, requestJson, OnLinkAndroidDeviceIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LinkAndroidDeviceIDResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLinkAndroidDeviceIDResult(CallRequestContainer& request)
    {
        LinkAndroidDeviceIDResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LinkAndroidDeviceIDResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LinkCustomID(
        LinkCustomIDRequest& request,
        ProcessApiCallback<LinkCustomIDResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LinkCustomID"), U("X-Authorization"), mUserSessionTicket, requestJson, OnLinkCustomIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LinkCustomIDResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLinkCustomIDResult(CallRequestContainer& request)
    {
        LinkCustomIDResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LinkCustomIDResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LinkFacebookAccount(
        LinkFacebookAccountRequest& request,
        ProcessApiCallback<LinkFacebookAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LinkFacebookAccount"), U("X-Authorization"), mUserSessionTicket, requestJson, OnLinkFacebookAccountResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LinkFacebookAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLinkFacebookAccountResult(CallRequestContainer& request)
    {
        LinkFacebookAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LinkFacebookAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LinkGameCenterAccount(
        LinkGameCenterAccountRequest& request,
        ProcessApiCallback<LinkGameCenterAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LinkGameCenterAccount"), U("X-Authorization"), mUserSessionTicket, requestJson, OnLinkGameCenterAccountResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LinkGameCenterAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLinkGameCenterAccountResult(CallRequestContainer& request)
    {
        LinkGameCenterAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LinkGameCenterAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LinkGoogleAccount(
        LinkGoogleAccountRequest& request,
        ProcessApiCallback<LinkGoogleAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LinkGoogleAccount"), U("X-Authorization"), mUserSessionTicket, requestJson, OnLinkGoogleAccountResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LinkGoogleAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLinkGoogleAccountResult(CallRequestContainer& request)
    {
        LinkGoogleAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LinkGoogleAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LinkIOSDeviceID(
        LinkIOSDeviceIDRequest& request,
        ProcessApiCallback<LinkIOSDeviceIDResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LinkIOSDeviceID"), U("X-Authorization"), mUserSessionTicket, requestJson, OnLinkIOSDeviceIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LinkIOSDeviceIDResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLinkIOSDeviceIDResult(CallRequestContainer& request)
    {
        LinkIOSDeviceIDResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LinkIOSDeviceIDResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LinkKongregate(
        LinkKongregateAccountRequest& request,
        ProcessApiCallback<LinkKongregateAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LinkKongregate"), U("X-Authorization"), mUserSessionTicket, requestJson, OnLinkKongregateResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LinkKongregateAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLinkKongregateResult(CallRequestContainer& request)
    {
        LinkKongregateAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LinkKongregateAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LinkSteamAccount(
        LinkSteamAccountRequest& request,
        ProcessApiCallback<LinkSteamAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LinkSteamAccount"), U("X-Authorization"), mUserSessionTicket, requestJson, OnLinkSteamAccountResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LinkSteamAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLinkSteamAccountResult(CallRequestContainer& request)
    {
        LinkSteamAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LinkSteamAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LinkTwitch(
        LinkTwitchAccountRequest& request,
        ProcessApiCallback<LinkTwitchAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LinkTwitch"), U("X-Authorization"), mUserSessionTicket, requestJson, OnLinkTwitchResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LinkTwitchAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLinkTwitchResult(CallRequestContainer& request)
    {
        LinkTwitchAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LinkTwitchAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::LinkWindowsHello(
        LinkWindowsHelloAccountRequest& request,
        ProcessApiCallback<LinkWindowsHelloAccountResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/LinkWindowsHello"), U(""), U(""), requestJson, OnLinkWindowsHelloResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LinkWindowsHelloAccountResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnLinkWindowsHelloResult(CallRequestContainer& request)
    {
        LinkWindowsHelloAccountResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LinkWindowsHelloAccountResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::RemoveGenericID(
        RemoveGenericIDRequest& request,
        ProcessApiCallback<RemoveGenericIDResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/RemoveGenericID"), U("X-Authorization"), mUserSessionTicket, requestJson, OnRemoveGenericIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RemoveGenericIDResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnRemoveGenericIDResult(CallRequestContainer& request)
    {
        RemoveGenericIDResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RemoveGenericIDResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::ReportPlayer(
        ReportPlayerClientRequest& request,
        ProcessApiCallback<ReportPlayerClientResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/ReportPlayer"), U("X-Authorization"), mUserSessionTicket, requestJson, OnReportPlayerResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ReportPlayerClientResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnReportPlayerResult(CallRequestContainer& request)
    {
        ReportPlayerClientResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ReportPlayerClientResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::SendAccountRecoveryEmail(
        SendAccountRecoveryEmailRequest& request,
        ProcessApiCallback<SendAccountRecoveryEmailResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/SendAccountRecoveryEmail"), U(""), U(""), requestJson, OnSendAccountRecoveryEmailResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SendAccountRecoveryEmailResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnSendAccountRecoveryEmailResult(CallRequestContainer& request)
    {
        SendAccountRecoveryEmailResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SendAccountRecoveryEmailResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlinkAndroidDeviceID(
        UnlinkAndroidDeviceIDRequest& request,
        ProcessApiCallback<UnlinkAndroidDeviceIDResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlinkAndroidDeviceID"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlinkAndroidDeviceIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlinkAndroidDeviceIDResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlinkAndroidDeviceIDResult(CallRequestContainer& request)
    {
        UnlinkAndroidDeviceIDResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlinkAndroidDeviceIDResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlinkCustomID(
        UnlinkCustomIDRequest& request,
        ProcessApiCallback<UnlinkCustomIDResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlinkCustomID"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlinkCustomIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlinkCustomIDResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlinkCustomIDResult(CallRequestContainer& request)
    {
        UnlinkCustomIDResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlinkCustomIDResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlinkFacebookAccount(
        UnlinkFacebookAccountRequest& request,
        ProcessApiCallback<UnlinkFacebookAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlinkFacebookAccount"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlinkFacebookAccountResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlinkFacebookAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlinkFacebookAccountResult(CallRequestContainer& request)
    {
        UnlinkFacebookAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlinkFacebookAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlinkGameCenterAccount(
        UnlinkGameCenterAccountRequest& request,
        ProcessApiCallback<UnlinkGameCenterAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlinkGameCenterAccount"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlinkGameCenterAccountResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlinkGameCenterAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlinkGameCenterAccountResult(CallRequestContainer& request)
    {
        UnlinkGameCenterAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlinkGameCenterAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlinkGoogleAccount(
        UnlinkGoogleAccountRequest& request,
        ProcessApiCallback<UnlinkGoogleAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlinkGoogleAccount"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlinkGoogleAccountResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlinkGoogleAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlinkGoogleAccountResult(CallRequestContainer& request)
    {
        UnlinkGoogleAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlinkGoogleAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlinkIOSDeviceID(
        UnlinkIOSDeviceIDRequest& request,
        ProcessApiCallback<UnlinkIOSDeviceIDResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlinkIOSDeviceID"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlinkIOSDeviceIDResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlinkIOSDeviceIDResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlinkIOSDeviceIDResult(CallRequestContainer& request)
    {
        UnlinkIOSDeviceIDResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlinkIOSDeviceIDResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlinkKongregate(
        UnlinkKongregateAccountRequest& request,
        ProcessApiCallback<UnlinkKongregateAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlinkKongregate"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlinkKongregateResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlinkKongregateAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlinkKongregateResult(CallRequestContainer& request)
    {
        UnlinkKongregateAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlinkKongregateAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlinkSteamAccount(
        UnlinkSteamAccountRequest& request,
        ProcessApiCallback<UnlinkSteamAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlinkSteamAccount"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlinkSteamAccountResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlinkSteamAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlinkSteamAccountResult(CallRequestContainer& request)
    {
        UnlinkSteamAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlinkSteamAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlinkTwitch(
        UnlinkTwitchAccountRequest& request,
        ProcessApiCallback<UnlinkTwitchAccountResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlinkTwitch"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlinkTwitchResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlinkTwitchAccountResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlinkTwitchResult(CallRequestContainer& request)
    {
        UnlinkTwitchAccountResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlinkTwitchAccountResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlinkWindowsHello(
        UnlinkWindowsHelloAccountRequest& request,
        ProcessApiCallback<UnlinkWindowsHelloAccountResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlinkWindowsHello"), U(""), U(""), requestJson, OnUnlinkWindowsHelloResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlinkWindowsHelloAccountResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlinkWindowsHelloResult(CallRequestContainer& request)
    {
        UnlinkWindowsHelloAccountResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlinkWindowsHelloAccountResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UpdateAvatarUrl(
        UpdateAvatarUrlRequest& request,
        ProcessApiCallback<EmptyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UpdateAvatarUrl"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUpdateAvatarUrlResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<EmptyResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUpdateAvatarUrlResult(CallRequestContainer& request)
    {
        EmptyResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<EmptyResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UpdateUserTitleDisplayName(
        UpdateUserTitleDisplayNameRequest& request,
        ProcessApiCallback<UpdateUserTitleDisplayNameResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UpdateUserTitleDisplayName"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUpdateUserTitleDisplayNameResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserTitleDisplayNameResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUpdateUserTitleDisplayNameResult(CallRequestContainer& request)
    {
        UpdateUserTitleDisplayNameResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateUserTitleDisplayNameResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetFriendLeaderboard(
        GetFriendLeaderboardRequest& request,
        ProcessApiCallback<GetLeaderboardResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetFriendLeaderboard"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetFriendLeaderboardResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetLeaderboardResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetFriendLeaderboardResult(CallRequestContainer& request)
    {
        GetLeaderboardResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetLeaderboardResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetFriendLeaderboardAroundPlayer(
        GetFriendLeaderboardAroundPlayerRequest& request,
        ProcessApiCallback<GetFriendLeaderboardAroundPlayerResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetFriendLeaderboardAroundPlayer"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetFriendLeaderboardAroundPlayerResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetFriendLeaderboardAroundPlayerResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetFriendLeaderboardAroundPlayerResult(CallRequestContainer& request)
    {
        GetFriendLeaderboardAroundPlayerResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetFriendLeaderboardAroundPlayerResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetLeaderboard(
        GetLeaderboardRequest& request,
        ProcessApiCallback<GetLeaderboardResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetLeaderboard"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetLeaderboardResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetLeaderboardResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetLeaderboardResult(CallRequestContainer& request)
    {
        GetLeaderboardResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetLeaderboardResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetLeaderboardAroundPlayer(
        GetLeaderboardAroundPlayerRequest& request,
        ProcessApiCallback<GetLeaderboardAroundPlayerResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetLeaderboardAroundPlayer"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetLeaderboardAroundPlayerResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetLeaderboardAroundPlayerResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetLeaderboardAroundPlayerResult(CallRequestContainer& request)
    {
        GetLeaderboardAroundPlayerResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetLeaderboardAroundPlayerResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayerStatistics(
        GetPlayerStatisticsRequest& request,
        ProcessApiCallback<GetPlayerStatisticsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayerStatistics"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayerStatisticsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerStatisticsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayerStatisticsResult(CallRequestContainer& request)
    {
        GetPlayerStatisticsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayerStatisticsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayerStatisticVersions(
        GetPlayerStatisticVersionsRequest& request,
        ProcessApiCallback<GetPlayerStatisticVersionsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayerStatisticVersions"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayerStatisticVersionsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerStatisticVersionsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayerStatisticVersionsResult(CallRequestContainer& request)
    {
        GetPlayerStatisticVersionsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayerStatisticVersionsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetUserData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetUserData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetUserDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetUserDataResult(CallRequestContainer& request)
    {
        GetUserDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetUserDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetUserPublisherData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetUserPublisherData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetUserPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetUserPublisherDataResult(CallRequestContainer& request)
    {
        GetUserDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetUserDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetUserPublisherReadOnlyData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetUserPublisherReadOnlyData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetUserPublisherReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetUserPublisherReadOnlyDataResult(CallRequestContainer& request)
    {
        GetUserDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetUserDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetUserReadOnlyData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetUserReadOnlyData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetUserReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetUserReadOnlyDataResult(CallRequestContainer& request)
    {
        GetUserDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetUserDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UpdatePlayerStatistics(
        UpdatePlayerStatisticsRequest& request,
        ProcessApiCallback<UpdatePlayerStatisticsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UpdatePlayerStatistics"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUpdatePlayerStatisticsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdatePlayerStatisticsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUpdatePlayerStatisticsResult(CallRequestContainer& request)
    {
        UpdatePlayerStatisticsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdatePlayerStatisticsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UpdateUserData(
        UpdateUserDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UpdateUserData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUpdateUserDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUpdateUserDataResult(CallRequestContainer& request)
    {
        UpdateUserDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateUserDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UpdateUserPublisherData(
        UpdateUserDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UpdateUserPublisherData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUpdateUserPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUpdateUserPublisherDataResult(CallRequestContainer& request)
    {
        UpdateUserDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateUserDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetCatalogItems(
        GetCatalogItemsRequest& request,
        ProcessApiCallback<GetCatalogItemsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetCatalogItems"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetCatalogItemsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCatalogItemsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetCatalogItemsResult(CallRequestContainer& request)
    {
        GetCatalogItemsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetCatalogItemsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPublisherData(
        GetPublisherDataRequest& request,
        ProcessApiCallback<GetPublisherDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPublisherData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPublisherDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPublisherDataResult(CallRequestContainer& request)
    {
        GetPublisherDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPublisherDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetStoreItems(
        GetStoreItemsRequest& request,
        ProcessApiCallback<GetStoreItemsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetStoreItems"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetStoreItemsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetStoreItemsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetStoreItemsResult(CallRequestContainer& request)
    {
        GetStoreItemsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetStoreItemsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetTime(
        GetTimeRequest& request,
        ProcessApiCallback<GetTimeResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetTime"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetTimeResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTimeResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetTimeResult(CallRequestContainer& request)
    {
        GetTimeResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetTimeResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetTitleData(
        GetTitleDataRequest& request,
        ProcessApiCallback<GetTitleDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetTitleData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetTitleDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTitleDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetTitleDataResult(CallRequestContainer& request)
    {
        GetTitleDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetTitleDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetTitleNews(
        GetTitleNewsRequest& request,
        ProcessApiCallback<GetTitleNewsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetTitleNews"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetTitleNewsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTitleNewsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetTitleNewsResult(CallRequestContainer& request)
    {
        GetTitleNewsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetTitleNewsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::AddUserVirtualCurrency(
        AddUserVirtualCurrencyRequest& request,
        ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/AddUserVirtualCurrency"), U("X-Authorization"), mUserSessionTicket, requestJson, OnAddUserVirtualCurrencyResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyUserVirtualCurrencyResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnAddUserVirtualCurrencyResult(CallRequestContainer& request)
    {
        ModifyUserVirtualCurrencyResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ModifyUserVirtualCurrencyResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::ConfirmPurchase(
        ConfirmPurchaseRequest& request,
        ProcessApiCallback<ConfirmPurchaseResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/ConfirmPurchase"), U("X-Authorization"), mUserSessionTicket, requestJson, OnConfirmPurchaseResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ConfirmPurchaseResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnConfirmPurchaseResult(CallRequestContainer& request)
    {
        ConfirmPurchaseResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ConfirmPurchaseResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::ConsumeItem(
        ConsumeItemRequest& request,
        ProcessApiCallback<ConsumeItemResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/ConsumeItem"), U("X-Authorization"), mUserSessionTicket, requestJson, OnConsumeItemResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ConsumeItemResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnConsumeItemResult(CallRequestContainer& request)
    {
        ConsumeItemResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ConsumeItemResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetCharacterInventory(
        GetCharacterInventoryRequest& request,
        ProcessApiCallback<GetCharacterInventoryResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetCharacterInventory"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetCharacterInventoryResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterInventoryResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetCharacterInventoryResult(CallRequestContainer& request)
    {
        GetCharacterInventoryResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetCharacterInventoryResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPurchase(
        GetPurchaseRequest& request,
        ProcessApiCallback<GetPurchaseResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPurchase"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPurchaseResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPurchaseResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPurchaseResult(CallRequestContainer& request)
    {
        GetPurchaseResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPurchaseResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetUserInventory(
        GetUserInventoryRequest& request,
        ProcessApiCallback<GetUserInventoryResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetUserInventory"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetUserInventoryResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserInventoryResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetUserInventoryResult(CallRequestContainer& request)
    {
        GetUserInventoryResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetUserInventoryResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::PayForPurchase(
        PayForPurchaseRequest& request,
        ProcessApiCallback<PayForPurchaseResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/PayForPurchase"), U("X-Authorization"), mUserSessionTicket, requestJson, OnPayForPurchaseResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<PayForPurchaseResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnPayForPurchaseResult(CallRequestContainer& request)
    {
        PayForPurchaseResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<PayForPurchaseResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::PurchaseItem(
        PurchaseItemRequest& request,
        ProcessApiCallback<PurchaseItemResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/PurchaseItem"), U("X-Authorization"), mUserSessionTicket, requestJson, OnPurchaseItemResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<PurchaseItemResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnPurchaseItemResult(CallRequestContainer& request)
    {
        PurchaseItemResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<PurchaseItemResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::RedeemCoupon(
        RedeemCouponRequest& request,
        ProcessApiCallback<RedeemCouponResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/RedeemCoupon"), U("X-Authorization"), mUserSessionTicket, requestJson, OnRedeemCouponResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RedeemCouponResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnRedeemCouponResult(CallRequestContainer& request)
    {
        RedeemCouponResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RedeemCouponResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::StartPurchase(
        StartPurchaseRequest& request,
        ProcessApiCallback<StartPurchaseResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/StartPurchase"), U("X-Authorization"), mUserSessionTicket, requestJson, OnStartPurchaseResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<StartPurchaseResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnStartPurchaseResult(CallRequestContainer& request)
    {
        StartPurchaseResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<StartPurchaseResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::SubtractUserVirtualCurrency(
        SubtractUserVirtualCurrencyRequest& request,
        ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/SubtractUserVirtualCurrency"), U("X-Authorization"), mUserSessionTicket, requestJson, OnSubtractUserVirtualCurrencyResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyUserVirtualCurrencyResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnSubtractUserVirtualCurrencyResult(CallRequestContainer& request)
    {
        ModifyUserVirtualCurrencyResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ModifyUserVirtualCurrencyResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlockContainerInstance(
        UnlockContainerInstanceRequest& request,
        ProcessApiCallback<UnlockContainerItemResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlockContainerInstance"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlockContainerInstanceResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlockContainerItemResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlockContainerInstanceResult(CallRequestContainer& request)
    {
        UnlockContainerItemResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlockContainerItemResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UnlockContainerItem(
        UnlockContainerItemRequest& request,
        ProcessApiCallback<UnlockContainerItemResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UnlockContainerItem"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUnlockContainerItemResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlockContainerItemResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUnlockContainerItemResult(CallRequestContainer& request)
    {
        UnlockContainerItemResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UnlockContainerItemResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::AddFriend(
        AddFriendRequest& request,
        ProcessApiCallback<AddFriendResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/AddFriend"), U("X-Authorization"), mUserSessionTicket, requestJson, OnAddFriendResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AddFriendResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnAddFriendResult(CallRequestContainer& request)
    {
        AddFriendResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AddFriendResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetFriendsList(
        GetFriendsListRequest& request,
        ProcessApiCallback<GetFriendsListResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetFriendsList"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetFriendsListResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetFriendsListResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetFriendsListResult(CallRequestContainer& request)
    {
        GetFriendsListResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetFriendsListResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::RemoveFriend(
        RemoveFriendRequest& request,
        ProcessApiCallback<RemoveFriendResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/RemoveFriend"), U("X-Authorization"), mUserSessionTicket, requestJson, OnRemoveFriendResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RemoveFriendResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnRemoveFriendResult(CallRequestContainer& request)
    {
        RemoveFriendResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RemoveFriendResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::SetFriendTags(
        SetFriendTagsRequest& request,
        ProcessApiCallback<SetFriendTagsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/SetFriendTags"), U("X-Authorization"), mUserSessionTicket, requestJson, OnSetFriendTagsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetFriendTagsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnSetFriendTagsResult(CallRequestContainer& request)
    {
        SetFriendTagsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SetFriendTagsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::RegisterForIOSPushNotification(
        RegisterForIOSPushNotificationRequest& request,
        ProcessApiCallback<RegisterForIOSPushNotificationResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/RegisterForIOSPushNotification"), U("X-Authorization"), mUserSessionTicket, requestJson, OnRegisterForIOSPushNotificationResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RegisterForIOSPushNotificationResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnRegisterForIOSPushNotificationResult(CallRequestContainer& request)
    {
        RegisterForIOSPushNotificationResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RegisterForIOSPushNotificationResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::RestoreIOSPurchases(
        RestoreIOSPurchasesRequest& request,
        ProcessApiCallback<RestoreIOSPurchasesResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/RestoreIOSPurchases"), U("X-Authorization"), mUserSessionTicket, requestJson, OnRestoreIOSPurchasesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RestoreIOSPurchasesResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnRestoreIOSPurchasesResult(CallRequestContainer& request)
    {
        RestoreIOSPurchasesResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RestoreIOSPurchasesResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::ValidateIOSReceipt(
        ValidateIOSReceiptRequest& request,
        ProcessApiCallback<ValidateIOSReceiptResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/ValidateIOSReceipt"), U("X-Authorization"), mUserSessionTicket, requestJson, OnValidateIOSReceiptResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ValidateIOSReceiptResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnValidateIOSReceiptResult(CallRequestContainer& request)
    {
        ValidateIOSReceiptResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ValidateIOSReceiptResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetCurrentGames(
        CurrentGamesRequest& request,
        ProcessApiCallback<CurrentGamesResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetCurrentGames"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetCurrentGamesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<CurrentGamesResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetCurrentGamesResult(CallRequestContainer& request)
    {
        CurrentGamesResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<CurrentGamesResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetGameServerRegions(
        GameServerRegionsRequest& request,
        ProcessApiCallback<GameServerRegionsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetGameServerRegions"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetGameServerRegionsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GameServerRegionsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetGameServerRegionsResult(CallRequestContainer& request)
    {
        GameServerRegionsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GameServerRegionsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::Matchmake(
        MatchmakeRequest& request,
        ProcessApiCallback<MatchmakeResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/Matchmake"), U("X-Authorization"), mUserSessionTicket, requestJson, OnMatchmakeResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<MatchmakeResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnMatchmakeResult(CallRequestContainer& request)
    {
        MatchmakeResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<MatchmakeResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::StartGame(
        StartGameRequest& request,
        ProcessApiCallback<StartGameResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/StartGame"), U("X-Authorization"), mUserSessionTicket, requestJson, OnStartGameResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<StartGameResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnStartGameResult(CallRequestContainer& request)
    {
        StartGameResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<StartGameResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::AndroidDevicePushNotificationRegistration(
        AndroidDevicePushNotificationRegistrationRequest& request,
        ProcessApiCallback<AndroidDevicePushNotificationRegistrationResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/AndroidDevicePushNotificationRegistration"), U("X-Authorization"), mUserSessionTicket, requestJson, OnAndroidDevicePushNotificationRegistrationResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AndroidDevicePushNotificationRegistrationResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnAndroidDevicePushNotificationRegistrationResult(CallRequestContainer& request)
    {
        AndroidDevicePushNotificationRegistrationResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AndroidDevicePushNotificationRegistrationResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::ValidateGooglePlayPurchase(
        ValidateGooglePlayPurchaseRequest& request,
        ProcessApiCallback<ValidateGooglePlayPurchaseResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/ValidateGooglePlayPurchase"), U("X-Authorization"), mUserSessionTicket, requestJson, OnValidateGooglePlayPurchaseResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ValidateGooglePlayPurchaseResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnValidateGooglePlayPurchaseResult(CallRequestContainer& request)
    {
        ValidateGooglePlayPurchaseResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ValidateGooglePlayPurchaseResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::WriteCharacterEvent(
        WriteClientCharacterEventRequest& request,
        ProcessApiCallback<WriteEventResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/WriteCharacterEvent"), U("X-Authorization"), mUserSessionTicket, requestJson, OnWriteCharacterEventResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<WriteEventResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnWriteCharacterEventResult(CallRequestContainer& request)
    {
        WriteEventResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<WriteEventResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::WritePlayerEvent(
        WriteClientPlayerEventRequest& request,
        ProcessApiCallback<WriteEventResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/WritePlayerEvent"), U("X-Authorization"), mUserSessionTicket, requestJson, OnWritePlayerEventResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<WriteEventResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnWritePlayerEventResult(CallRequestContainer& request)
    {
        WriteEventResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<WriteEventResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::WriteTitleEvent(
        WriteTitleEventRequest& request,
        ProcessApiCallback<WriteEventResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/WriteTitleEvent"), U("X-Authorization"), mUserSessionTicket, requestJson, OnWriteTitleEventResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<WriteEventResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnWriteTitleEventResult(CallRequestContainer& request)
    {
        WriteEventResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<WriteEventResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::AddSharedGroupMembers(
        AddSharedGroupMembersRequest& request,
        ProcessApiCallback<AddSharedGroupMembersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/AddSharedGroupMembers"), U("X-Authorization"), mUserSessionTicket, requestJson, OnAddSharedGroupMembersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AddSharedGroupMembersResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnAddSharedGroupMembersResult(CallRequestContainer& request)
    {
        AddSharedGroupMembersResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AddSharedGroupMembersResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::CreateSharedGroup(
        CreateSharedGroupRequest& request,
        ProcessApiCallback<CreateSharedGroupResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/CreateSharedGroup"), U("X-Authorization"), mUserSessionTicket, requestJson, OnCreateSharedGroupResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<CreateSharedGroupResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnCreateSharedGroupResult(CallRequestContainer& request)
    {
        CreateSharedGroupResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<CreateSharedGroupResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetSharedGroupData(
        GetSharedGroupDataRequest& request,
        ProcessApiCallback<GetSharedGroupDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetSharedGroupData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetSharedGroupDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetSharedGroupDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetSharedGroupDataResult(CallRequestContainer& request)
    {
        GetSharedGroupDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetSharedGroupDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::RemoveSharedGroupMembers(
        RemoveSharedGroupMembersRequest& request,
        ProcessApiCallback<RemoveSharedGroupMembersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/RemoveSharedGroupMembers"), U("X-Authorization"), mUserSessionTicket, requestJson, OnRemoveSharedGroupMembersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RemoveSharedGroupMembersResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnRemoveSharedGroupMembersResult(CallRequestContainer& request)
    {
        RemoveSharedGroupMembersResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RemoveSharedGroupMembersResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UpdateSharedGroupData(
        UpdateSharedGroupDataRequest& request,
        ProcessApiCallback<UpdateSharedGroupDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UpdateSharedGroupData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUpdateSharedGroupDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateSharedGroupDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUpdateSharedGroupDataResult(CallRequestContainer& request)
    {
        UpdateSharedGroupDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateSharedGroupDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::ExecuteCloudScript(
        ExecuteCloudScriptRequest& request,
        ProcessApiCallback<ExecuteCloudScriptResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/ExecuteCloudScript"), U("X-Authorization"), mUserSessionTicket, requestJson, OnExecuteCloudScriptResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ExecuteCloudScriptResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnExecuteCloudScriptResult(CallRequestContainer& request)
    {
        ExecuteCloudScriptResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ExecuteCloudScriptResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetContentDownloadUrl(
        GetContentDownloadUrlRequest& request,
        ProcessApiCallback<GetContentDownloadUrlResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetContentDownloadUrl"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetContentDownloadUrlResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetContentDownloadUrlResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetContentDownloadUrlResult(CallRequestContainer& request)
    {
        GetContentDownloadUrlResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetContentDownloadUrlResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetAllUsersCharacters(
        ListUsersCharactersRequest& request,
        ProcessApiCallback<ListUsersCharactersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetAllUsersCharacters"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetAllUsersCharactersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ListUsersCharactersResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetAllUsersCharactersResult(CallRequestContainer& request)
    {
        ListUsersCharactersResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ListUsersCharactersResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetCharacterLeaderboard(
        GetCharacterLeaderboardRequest& request,
        ProcessApiCallback<GetCharacterLeaderboardResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetCharacterLeaderboard"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetCharacterLeaderboardResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterLeaderboardResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetCharacterLeaderboardResult(CallRequestContainer& request)
    {
        GetCharacterLeaderboardResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetCharacterLeaderboardResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetCharacterStatistics(
        GetCharacterStatisticsRequest& request,
        ProcessApiCallback<GetCharacterStatisticsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetCharacterStatistics"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetCharacterStatisticsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterStatisticsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetCharacterStatisticsResult(CallRequestContainer& request)
    {
        GetCharacterStatisticsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetCharacterStatisticsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetLeaderboardAroundCharacter(
        GetLeaderboardAroundCharacterRequest& request,
        ProcessApiCallback<GetLeaderboardAroundCharacterResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetLeaderboardAroundCharacter"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetLeaderboardAroundCharacterResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetLeaderboardAroundCharacterResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetLeaderboardAroundCharacterResult(CallRequestContainer& request)
    {
        GetLeaderboardAroundCharacterResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetLeaderboardAroundCharacterResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetLeaderboardForUserCharacters(
        GetLeaderboardForUsersCharactersRequest& request,
        ProcessApiCallback<GetLeaderboardForUsersCharactersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetLeaderboardForUserCharacters"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetLeaderboardForUserCharactersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetLeaderboardForUsersCharactersResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetLeaderboardForUserCharactersResult(CallRequestContainer& request)
    {
        GetLeaderboardForUsersCharactersResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetLeaderboardForUsersCharactersResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GrantCharacterToUser(
        GrantCharacterToUserRequest& request,
        ProcessApiCallback<GrantCharacterToUserResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GrantCharacterToUser"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGrantCharacterToUserResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GrantCharacterToUserResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGrantCharacterToUserResult(CallRequestContainer& request)
    {
        GrantCharacterToUserResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GrantCharacterToUserResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UpdateCharacterStatistics(
        UpdateCharacterStatisticsRequest& request,
        ProcessApiCallback<UpdateCharacterStatisticsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UpdateCharacterStatistics"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUpdateCharacterStatisticsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateCharacterStatisticsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUpdateCharacterStatisticsResult(CallRequestContainer& request)
    {
        UpdateCharacterStatisticsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateCharacterStatisticsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetCharacterData(
        GetCharacterDataRequest& request,
        ProcessApiCallback<GetCharacterDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetCharacterData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetCharacterDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetCharacterDataResult(CallRequestContainer& request)
    {
        GetCharacterDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetCharacterDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetCharacterReadOnlyData(
        GetCharacterDataRequest& request,
        ProcessApiCallback<GetCharacterDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetCharacterReadOnlyData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetCharacterReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetCharacterReadOnlyDataResult(CallRequestContainer& request)
    {
        GetCharacterDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetCharacterDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::UpdateCharacterData(
        UpdateCharacterDataRequest& request,
        ProcessApiCallback<UpdateCharacterDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/UpdateCharacterData"), U("X-Authorization"), mUserSessionTicket, requestJson, OnUpdateCharacterDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateCharacterDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnUpdateCharacterDataResult(CallRequestContainer& request)
    {
        UpdateCharacterDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateCharacterDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::ValidateAmazonIAPReceipt(
        ValidateAmazonReceiptRequest& request,
        ProcessApiCallback<ValidateAmazonReceiptResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/ValidateAmazonIAPReceipt"), U("X-Authorization"), mUserSessionTicket, requestJson, OnValidateAmazonIAPReceiptResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ValidateAmazonReceiptResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnValidateAmazonIAPReceiptResult(CallRequestContainer& request)
    {
        ValidateAmazonReceiptResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ValidateAmazonReceiptResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::AcceptTrade(
        AcceptTradeRequest& request,
        ProcessApiCallback<AcceptTradeResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/AcceptTrade"), U("X-Authorization"), mUserSessionTicket, requestJson, OnAcceptTradeResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AcceptTradeResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnAcceptTradeResult(CallRequestContainer& request)
    {
        AcceptTradeResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AcceptTradeResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::CancelTrade(
        CancelTradeRequest& request,
        ProcessApiCallback<CancelTradeResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/CancelTrade"), U("X-Authorization"), mUserSessionTicket, requestJson, OnCancelTradeResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<CancelTradeResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnCancelTradeResult(CallRequestContainer& request)
    {
        CancelTradeResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<CancelTradeResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayerTrades(
        GetPlayerTradesRequest& request,
        ProcessApiCallback<GetPlayerTradesResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayerTrades"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayerTradesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerTradesResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayerTradesResult(CallRequestContainer& request)
    {
        GetPlayerTradesResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayerTradesResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetTradeStatus(
        GetTradeStatusRequest& request,
        ProcessApiCallback<GetTradeStatusResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetTradeStatus"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetTradeStatusResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTradeStatusResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetTradeStatusResult(CallRequestContainer& request)
    {
        GetTradeStatusResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetTradeStatusResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::OpenTrade(
        OpenTradeRequest& request,
        ProcessApiCallback<OpenTradeResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/OpenTrade"), U("X-Authorization"), mUserSessionTicket, requestJson, OnOpenTradeResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<OpenTradeResponse>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnOpenTradeResult(CallRequestContainer& request)
    {
        OpenTradeResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<OpenTradeResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::AttributeInstall(
        AttributeInstallRequest& request,
        ProcessApiCallback<AttributeInstallResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/AttributeInstall"), U("X-Authorization"), mUserSessionTicket, requestJson, OnAttributeInstallResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AttributeInstallResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnAttributeInstallResult(CallRequestContainer& request)
    {
        AttributeInstallResult outResult;
        outResult.FromJson(request.errorWrapper.Data);
        PlayFabSettings::advertisingIdType += U("_Successful");

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AttributeInstallResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayerSegments(
        GetPlayerSegmentsRequest& request,
        ProcessApiCallback<GetPlayerSegmentsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayerSegments"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayerSegmentsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerSegmentsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayerSegmentsResult(CallRequestContainer& request)
    {
        GetPlayerSegmentsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayerSegmentsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::GetPlayerTags(
        GetPlayerTagsRequest& request,
        ProcessApiCallback<GetPlayerTagsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/GetPlayerTags"), U("X-Authorization"), mUserSessionTicket, requestJson, OnGetPlayerTagsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerTagsResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnGetPlayerTagsResult(CallRequestContainer& request)
    {
        GetPlayerTagsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayerTagsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabClientAPI::ValidateWindowsStoreReceipt(
        ValidateWindowsReceiptRequest& request,
        ProcessApiCallback<ValidateWindowsReceiptResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Client/ValidateWindowsStoreReceipt"), U(""), U(""), requestJson, OnValidateWindowsStoreReceiptResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ValidateWindowsReceiptResult>(callback)), errorCallback, customData);
    }

    void PlayFabClientAPI::OnValidateWindowsStoreReceiptResult(CallRequestContainer& request)
    {
        ValidateWindowsReceiptResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ValidateWindowsReceiptResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    // Private PlayFabClientAPI specific

    utility::string_t PlayFabClientAPI::mUserSessionTicket;

    bool PlayFabClientAPI::IsClientLoggedIn()
    {
        return !mUserSessionTicket.empty();
    }

    void PlayFabClientAPI::MultiStepClientLogin(bool needsAttribution)
    {
        if (needsAttribution && !PlayFabSettings::disableAdvertising && PlayFabSettings::advertisingIdType.length() > 0 && PlayFabSettings::advertisingIdValue.length() > 0)
        {
            AttributeInstallRequest request;
            if (PlayFabSettings::advertisingIdType == PlayFabSettings::AD_TYPE_IDFA)
                request.Idfa = ShortenString(PlayFabSettings::advertisingIdValue);
            else if (PlayFabSettings::advertisingIdType == PlayFabSettings::AD_TYPE_ANDROID_ID)
                request.Adid = ShortenString(PlayFabSettings::advertisingIdValue);
            else
                return;
            AttributeInstall(request, nullptr, nullptr);
        }
    }
}

#endif
