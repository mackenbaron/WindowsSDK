
#ifdef ENABLE_PLAYFABSERVER_API

#include "playfab/PlayFabServerApi.h"
#include "playfab/PlayFabHttp.h"
#include "playfab/PlayFabSettings.h"

namespace PlayFab
{
    using namespace ServerModels;

    size_t PlayFabServerAPI::Update()
    {
        return PlayFabHttp::Get().Update();
    }

    // PlayFabServer APIs

    void PlayFabServerAPI::AuthenticateSessionTicket(
        AuthenticateSessionTicketRequest& request,
        ProcessApiCallback<AuthenticateSessionTicketResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/AuthenticateSessionTicket"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAuthenticateSessionTicketResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AuthenticateSessionTicketResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnAuthenticateSessionTicketResult(CallRequestContainer& request)
    {
        AuthenticateSessionTicketResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AuthenticateSessionTicketResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::BanUsers(
        BanUsersRequest& request,
        ProcessApiCallback<BanUsersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/BanUsers"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnBanUsersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<BanUsersResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnBanUsersResult(CallRequestContainer& request)
    {
        BanUsersResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<BanUsersResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetPlayFabIDsFromFacebookIDs(
        GetPlayFabIDsFromFacebookIDsRequest& request,
        ProcessApiCallback<GetPlayFabIDsFromFacebookIDsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetPlayFabIDsFromFacebookIDs"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayFabIDsFromFacebookIDsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayFabIDsFromFacebookIDsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetPlayFabIDsFromFacebookIDsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetPlayFabIDsFromSteamIDs(
        GetPlayFabIDsFromSteamIDsRequest& request,
        ProcessApiCallback<GetPlayFabIDsFromSteamIDsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetPlayFabIDsFromSteamIDs"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayFabIDsFromSteamIDsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayFabIDsFromSteamIDsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetPlayFabIDsFromSteamIDsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetUserAccountInfo(
        GetUserAccountInfoRequest& request,
        ProcessApiCallback<GetUserAccountInfoResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetUserAccountInfo"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserAccountInfoResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserAccountInfoResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetUserAccountInfoResult(CallRequestContainer& request)
    {
        GetUserAccountInfoResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetUserAccountInfoResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetUserBans(
        GetUserBansRequest& request,
        ProcessApiCallback<GetUserBansResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetUserBans"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserBansResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserBansResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetUserBansResult(CallRequestContainer& request)
    {
        GetUserBansResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetUserBansResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::RevokeAllBansForUser(
        RevokeAllBansForUserRequest& request,
        ProcessApiCallback<RevokeAllBansForUserResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/RevokeAllBansForUser"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRevokeAllBansForUserResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RevokeAllBansForUserResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnRevokeAllBansForUserResult(CallRequestContainer& request)
    {
        RevokeAllBansForUserResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RevokeAllBansForUserResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::RevokeBans(
        RevokeBansRequest& request,
        ProcessApiCallback<RevokeBansResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/RevokeBans"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRevokeBansResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RevokeBansResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnRevokeBansResult(CallRequestContainer& request)
    {
        RevokeBansResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RevokeBansResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::SendPushNotification(
        SendPushNotificationRequest& request,
        ProcessApiCallback<SendPushNotificationResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/SendPushNotification"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSendPushNotificationResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SendPushNotificationResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnSendPushNotificationResult(CallRequestContainer& request)
    {
        SendPushNotificationResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SendPushNotificationResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::UpdateBans(
        UpdateBansRequest& request,
        ProcessApiCallback<UpdateBansResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateBans"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateBansResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateBansResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateBansResult(CallRequestContainer& request)
    {
        UpdateBansResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateBansResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::DeleteUsers(
        DeleteUsersRequest& request,
        ProcessApiCallback<DeleteUsersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/DeleteUsers"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnDeleteUsersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<DeleteUsersResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnDeleteUsersResult(CallRequestContainer& request)
    {
        DeleteUsersResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<DeleteUsersResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetFriendLeaderboard(
        GetFriendLeaderboardRequest& request,
        ProcessApiCallback<GetLeaderboardResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetFriendLeaderboard"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetFriendLeaderboardResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetLeaderboardResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetFriendLeaderboardResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetLeaderboard(
        GetLeaderboardRequest& request,
        ProcessApiCallback<GetLeaderboardResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetLeaderboard"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetLeaderboardResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetLeaderboardResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetLeaderboardResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetLeaderboardAroundUser(
        GetLeaderboardAroundUserRequest& request,
        ProcessApiCallback<GetLeaderboardAroundUserResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetLeaderboardAroundUser"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetLeaderboardAroundUserResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetLeaderboardAroundUserResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetLeaderboardAroundUserResult(CallRequestContainer& request)
    {
        GetLeaderboardAroundUserResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetLeaderboardAroundUserResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetPlayerCombinedInfo(
        GetPlayerCombinedInfoRequest& request,
        ProcessApiCallback<GetPlayerCombinedInfoResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetPlayerCombinedInfo"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayerCombinedInfoResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerCombinedInfoResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetPlayerCombinedInfoResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetPlayerStatistics(
        GetPlayerStatisticsRequest& request,
        ProcessApiCallback<GetPlayerStatisticsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetPlayerStatistics"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayerStatisticsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerStatisticsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetPlayerStatisticsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetPlayerStatisticVersions(
        GetPlayerStatisticVersionsRequest& request,
        ProcessApiCallback<GetPlayerStatisticVersionsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetPlayerStatisticVersions"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayerStatisticVersionsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerStatisticVersionsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetPlayerStatisticVersionsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetUserData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetUserData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetUserDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetUserInternalData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetUserInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetUserInternalDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetUserPublisherData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetUserPublisherData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetUserPublisherDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetUserPublisherInternalData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetUserPublisherInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserPublisherInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetUserPublisherInternalDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetUserPublisherReadOnlyData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetUserPublisherReadOnlyData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserPublisherReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetUserPublisherReadOnlyDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetUserReadOnlyData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetUserReadOnlyData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetUserReadOnlyDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdatePlayerStatistics(
        UpdatePlayerStatisticsRequest& request,
        ProcessApiCallback<UpdatePlayerStatisticsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdatePlayerStatistics"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdatePlayerStatisticsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdatePlayerStatisticsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdatePlayerStatisticsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateUserData(
        UpdateUserDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateUserData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateUserDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateUserInternalData(
        UpdateUserInternalDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateUserInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateUserInternalDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateUserPublisherData(
        UpdateUserDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateUserPublisherData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateUserPublisherDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateUserPublisherInternalData(
        UpdateUserInternalDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateUserPublisherInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserPublisherInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateUserPublisherInternalDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateUserPublisherReadOnlyData(
        UpdateUserDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateUserPublisherReadOnlyData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserPublisherReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateUserPublisherReadOnlyDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateUserReadOnlyData(
        UpdateUserDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateUserReadOnlyData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateUserReadOnlyDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetCatalogItems(
        GetCatalogItemsRequest& request,
        ProcessApiCallback<GetCatalogItemsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetCatalogItems"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCatalogItemsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCatalogItemsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetCatalogItemsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetPublisherData(
        GetPublisherDataRequest& request,
        ProcessApiCallback<GetPublisherDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetPublisherData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPublisherDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetPublisherDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetTime(
        GetTimeRequest& request,
        ProcessApiCallback<GetTimeResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetTime"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetTimeResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTimeResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetTimeResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetTitleData(
        GetTitleDataRequest& request,
        ProcessApiCallback<GetTitleDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetTitleData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetTitleDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTitleDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetTitleDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetTitleInternalData(
        GetTitleDataRequest& request,
        ProcessApiCallback<GetTitleDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetTitleInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetTitleInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTitleDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetTitleInternalDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetTitleNews(
        GetTitleNewsRequest& request,
        ProcessApiCallback<GetTitleNewsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetTitleNews"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetTitleNewsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTitleNewsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetTitleNewsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::SetPublisherData(
        SetPublisherDataRequest& request,
        ProcessApiCallback<SetPublisherDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/SetPublisherData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetPublisherDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnSetPublisherDataResult(CallRequestContainer& request)
    {
        SetPublisherDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SetPublisherDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::SetTitleData(
        SetTitleDataRequest& request,
        ProcessApiCallback<SetTitleDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/SetTitleData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetTitleDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetTitleDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnSetTitleDataResult(CallRequestContainer& request)
    {
        SetTitleDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SetTitleDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::SetTitleInternalData(
        SetTitleDataRequest& request,
        ProcessApiCallback<SetTitleDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/SetTitleInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetTitleInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetTitleDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnSetTitleInternalDataResult(CallRequestContainer& request)
    {
        SetTitleDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SetTitleDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::AddCharacterVirtualCurrency(
        AddCharacterVirtualCurrencyRequest& request,
        ProcessApiCallback<ModifyCharacterVirtualCurrencyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/AddCharacterVirtualCurrency"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAddCharacterVirtualCurrencyResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyCharacterVirtualCurrencyResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnAddCharacterVirtualCurrencyResult(CallRequestContainer& request)
    {
        ModifyCharacterVirtualCurrencyResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ModifyCharacterVirtualCurrencyResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::AddUserVirtualCurrency(
        AddUserVirtualCurrencyRequest& request,
        ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/AddUserVirtualCurrency"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAddUserVirtualCurrencyResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyUserVirtualCurrencyResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnAddUserVirtualCurrencyResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::ConsumeItem(
        ConsumeItemRequest& request,
        ProcessApiCallback<ConsumeItemResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/ConsumeItem"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnConsumeItemResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ConsumeItemResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnConsumeItemResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::EvaluateRandomResultTable(
        EvaluateRandomResultTableRequest& request,
        ProcessApiCallback<EvaluateRandomResultTableResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/EvaluateRandomResultTable"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnEvaluateRandomResultTableResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<EvaluateRandomResultTableResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnEvaluateRandomResultTableResult(CallRequestContainer& request)
    {
        EvaluateRandomResultTableResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<EvaluateRandomResultTableResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetCharacterInventory(
        GetCharacterInventoryRequest& request,
        ProcessApiCallback<GetCharacterInventoryResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetCharacterInventory"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCharacterInventoryResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterInventoryResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetCharacterInventoryResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetRandomResultTables(
        GetRandomResultTablesRequest& request,
        ProcessApiCallback<GetRandomResultTablesResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetRandomResultTables"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetRandomResultTablesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetRandomResultTablesResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetRandomResultTablesResult(CallRequestContainer& request)
    {
        GetRandomResultTablesResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetRandomResultTablesResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetUserInventory(
        GetUserInventoryRequest& request,
        ProcessApiCallback<GetUserInventoryResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetUserInventory"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserInventoryResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserInventoryResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetUserInventoryResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GrantItemsToCharacter(
        GrantItemsToCharacterRequest& request,
        ProcessApiCallback<GrantItemsToCharacterResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GrantItemsToCharacter"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGrantItemsToCharacterResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GrantItemsToCharacterResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGrantItemsToCharacterResult(CallRequestContainer& request)
    {
        GrantItemsToCharacterResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GrantItemsToCharacterResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GrantItemsToUser(
        GrantItemsToUserRequest& request,
        ProcessApiCallback<GrantItemsToUserResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GrantItemsToUser"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGrantItemsToUserResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GrantItemsToUserResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGrantItemsToUserResult(CallRequestContainer& request)
    {
        GrantItemsToUserResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GrantItemsToUserResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GrantItemsToUsers(
        GrantItemsToUsersRequest& request,
        ProcessApiCallback<GrantItemsToUsersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GrantItemsToUsers"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGrantItemsToUsersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GrantItemsToUsersResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGrantItemsToUsersResult(CallRequestContainer& request)
    {
        GrantItemsToUsersResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GrantItemsToUsersResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::ModifyItemUses(
        ModifyItemUsesRequest& request,
        ProcessApiCallback<ModifyItemUsesResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/ModifyItemUses"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnModifyItemUsesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyItemUsesResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnModifyItemUsesResult(CallRequestContainer& request)
    {
        ModifyItemUsesResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ModifyItemUsesResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::MoveItemToCharacterFromCharacter(
        MoveItemToCharacterFromCharacterRequest& request,
        ProcessApiCallback<MoveItemToCharacterFromCharacterResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/MoveItemToCharacterFromCharacter"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnMoveItemToCharacterFromCharacterResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<MoveItemToCharacterFromCharacterResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnMoveItemToCharacterFromCharacterResult(CallRequestContainer& request)
    {
        MoveItemToCharacterFromCharacterResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<MoveItemToCharacterFromCharacterResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::MoveItemToCharacterFromUser(
        MoveItemToCharacterFromUserRequest& request,
        ProcessApiCallback<MoveItemToCharacterFromUserResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/MoveItemToCharacterFromUser"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnMoveItemToCharacterFromUserResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<MoveItemToCharacterFromUserResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnMoveItemToCharacterFromUserResult(CallRequestContainer& request)
    {
        MoveItemToCharacterFromUserResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<MoveItemToCharacterFromUserResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::MoveItemToUserFromCharacter(
        MoveItemToUserFromCharacterRequest& request,
        ProcessApiCallback<MoveItemToUserFromCharacterResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/MoveItemToUserFromCharacter"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnMoveItemToUserFromCharacterResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<MoveItemToUserFromCharacterResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnMoveItemToUserFromCharacterResult(CallRequestContainer& request)
    {
        MoveItemToUserFromCharacterResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<MoveItemToUserFromCharacterResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::RedeemCoupon(
        RedeemCouponRequest& request,
        ProcessApiCallback<RedeemCouponResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/RedeemCoupon"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRedeemCouponResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RedeemCouponResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnRedeemCouponResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::ReportPlayer(
        ReportPlayerServerRequest& request,
        ProcessApiCallback<ReportPlayerServerResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/ReportPlayer"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnReportPlayerResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ReportPlayerServerResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnReportPlayerResult(CallRequestContainer& request)
    {
        ReportPlayerServerResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ReportPlayerServerResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::RevokeInventoryItem(
        RevokeInventoryItemRequest& request,
        ProcessApiCallback<RevokeInventoryResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/RevokeInventoryItem"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRevokeInventoryItemResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RevokeInventoryResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnRevokeInventoryItemResult(CallRequestContainer& request)
    {
        RevokeInventoryResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RevokeInventoryResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::SubtractCharacterVirtualCurrency(
        SubtractCharacterVirtualCurrencyRequest& request,
        ProcessApiCallback<ModifyCharacterVirtualCurrencyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/SubtractCharacterVirtualCurrency"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSubtractCharacterVirtualCurrencyResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyCharacterVirtualCurrencyResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnSubtractCharacterVirtualCurrencyResult(CallRequestContainer& request)
    {
        ModifyCharacterVirtualCurrencyResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ModifyCharacterVirtualCurrencyResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::SubtractUserVirtualCurrency(
        SubtractUserVirtualCurrencyRequest& request,
        ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/SubtractUserVirtualCurrency"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSubtractUserVirtualCurrencyResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyUserVirtualCurrencyResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnSubtractUserVirtualCurrencyResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UnlockContainerInstance(
        UnlockContainerInstanceRequest& request,
        ProcessApiCallback<UnlockContainerItemResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UnlockContainerInstance"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUnlockContainerInstanceResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlockContainerItemResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUnlockContainerInstanceResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UnlockContainerItem(
        UnlockContainerItemRequest& request,
        ProcessApiCallback<UnlockContainerItemResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UnlockContainerItem"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUnlockContainerItemResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UnlockContainerItemResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUnlockContainerItemResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateUserInventoryItemCustomData(
        UpdateUserInventoryItemDataRequest& request,
        ProcessApiCallback<EmptyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateUserInventoryItemCustomData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserInventoryItemCustomDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<EmptyResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateUserInventoryItemCustomDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::AddFriend(
        AddFriendRequest& request,
        ProcessApiCallback<EmptyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/AddFriend"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAddFriendResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<EmptyResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnAddFriendResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetFriendsList(
        GetFriendsListRequest& request,
        ProcessApiCallback<GetFriendsListResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetFriendsList"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetFriendsListResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetFriendsListResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetFriendsListResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::RemoveFriend(
        RemoveFriendRequest& request,
        ProcessApiCallback<EmptyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/RemoveFriend"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRemoveFriendResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<EmptyResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnRemoveFriendResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::DeregisterGame(
        DeregisterGameRequest& request,
        ProcessApiCallback<DeregisterGameResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/DeregisterGame"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnDeregisterGameResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<DeregisterGameResponse>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnDeregisterGameResult(CallRequestContainer& request)
    {
        DeregisterGameResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<DeregisterGameResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::NotifyMatchmakerPlayerLeft(
        NotifyMatchmakerPlayerLeftRequest& request,
        ProcessApiCallback<NotifyMatchmakerPlayerLeftResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/NotifyMatchmakerPlayerLeft"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnNotifyMatchmakerPlayerLeftResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<NotifyMatchmakerPlayerLeftResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnNotifyMatchmakerPlayerLeftResult(CallRequestContainer& request)
    {
        NotifyMatchmakerPlayerLeftResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<NotifyMatchmakerPlayerLeftResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::RedeemMatchmakerTicket(
        RedeemMatchmakerTicketRequest& request,
        ProcessApiCallback<RedeemMatchmakerTicketResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/RedeemMatchmakerTicket"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRedeemMatchmakerTicketResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RedeemMatchmakerTicketResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnRedeemMatchmakerTicketResult(CallRequestContainer& request)
    {
        RedeemMatchmakerTicketResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RedeemMatchmakerTicketResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::RefreshGameServerInstanceHeartbeat(
        RefreshGameServerInstanceHeartbeatRequest& request,
        ProcessApiCallback<RefreshGameServerInstanceHeartbeatResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/RefreshGameServerInstanceHeartbeat"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRefreshGameServerInstanceHeartbeatResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RefreshGameServerInstanceHeartbeatResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnRefreshGameServerInstanceHeartbeatResult(CallRequestContainer& request)
    {
        RefreshGameServerInstanceHeartbeatResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RefreshGameServerInstanceHeartbeatResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::RegisterGame(
        RegisterGameRequest& request,
        ProcessApiCallback<RegisterGameResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/RegisterGame"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRegisterGameResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RegisterGameResponse>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnRegisterGameResult(CallRequestContainer& request)
    {
        RegisterGameResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RegisterGameResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::SetGameServerInstanceData(
        SetGameServerInstanceDataRequest& request,
        ProcessApiCallback<SetGameServerInstanceDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/SetGameServerInstanceData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetGameServerInstanceDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetGameServerInstanceDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnSetGameServerInstanceDataResult(CallRequestContainer& request)
    {
        SetGameServerInstanceDataResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SetGameServerInstanceDataResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::SetGameServerInstanceState(
        SetGameServerInstanceStateRequest& request,
        ProcessApiCallback<SetGameServerInstanceStateResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/SetGameServerInstanceState"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetGameServerInstanceStateResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetGameServerInstanceStateResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnSetGameServerInstanceStateResult(CallRequestContainer& request)
    {
        SetGameServerInstanceStateResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SetGameServerInstanceStateResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::SetGameServerInstanceTags(
        SetGameServerInstanceTagsRequest& request,
        ProcessApiCallback<SetGameServerInstanceTagsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/SetGameServerInstanceTags"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetGameServerInstanceTagsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetGameServerInstanceTagsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnSetGameServerInstanceTagsResult(CallRequestContainer& request)
    {
        SetGameServerInstanceTagsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SetGameServerInstanceTagsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::AwardSteamAchievement(
        AwardSteamAchievementRequest& request,
        ProcessApiCallback<AwardSteamAchievementResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/AwardSteamAchievement"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAwardSteamAchievementResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AwardSteamAchievementResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnAwardSteamAchievementResult(CallRequestContainer& request)
    {
        AwardSteamAchievementResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AwardSteamAchievementResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::WriteCharacterEvent(
        WriteServerCharacterEventRequest& request,
        ProcessApiCallback<WriteEventResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/WriteCharacterEvent"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnWriteCharacterEventResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<WriteEventResponse>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnWriteCharacterEventResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::WritePlayerEvent(
        WriteServerPlayerEventRequest& request,
        ProcessApiCallback<WriteEventResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/WritePlayerEvent"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnWritePlayerEventResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<WriteEventResponse>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnWritePlayerEventResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::WriteTitleEvent(
        WriteTitleEventRequest& request,
        ProcessApiCallback<WriteEventResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/WriteTitleEvent"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnWriteTitleEventResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<WriteEventResponse>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnWriteTitleEventResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::AddSharedGroupMembers(
        AddSharedGroupMembersRequest& request,
        ProcessApiCallback<AddSharedGroupMembersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/AddSharedGroupMembers"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAddSharedGroupMembersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AddSharedGroupMembersResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnAddSharedGroupMembersResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::CreateSharedGroup(
        CreateSharedGroupRequest& request,
        ProcessApiCallback<CreateSharedGroupResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/CreateSharedGroup"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnCreateSharedGroupResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<CreateSharedGroupResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnCreateSharedGroupResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::DeleteSharedGroup(
        DeleteSharedGroupRequest& request,
        ProcessApiCallback<EmptyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/DeleteSharedGroup"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnDeleteSharedGroupResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<EmptyResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnDeleteSharedGroupResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetSharedGroupData(
        GetSharedGroupDataRequest& request,
        ProcessApiCallback<GetSharedGroupDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetSharedGroupData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetSharedGroupDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetSharedGroupDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetSharedGroupDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::RemoveSharedGroupMembers(
        RemoveSharedGroupMembersRequest& request,
        ProcessApiCallback<RemoveSharedGroupMembersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/RemoveSharedGroupMembers"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRemoveSharedGroupMembersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RemoveSharedGroupMembersResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnRemoveSharedGroupMembersResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateSharedGroupData(
        UpdateSharedGroupDataRequest& request,
        ProcessApiCallback<UpdateSharedGroupDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateSharedGroupData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateSharedGroupDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateSharedGroupDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateSharedGroupDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::ExecuteCloudScript(
        ExecuteCloudScriptServerRequest& request,
        ProcessApiCallback<ExecuteCloudScriptResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/ExecuteCloudScript"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnExecuteCloudScriptResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ExecuteCloudScriptResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnExecuteCloudScriptResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetContentDownloadUrl(
        GetContentDownloadUrlRequest& request,
        ProcessApiCallback<GetContentDownloadUrlResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetContentDownloadUrl"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetContentDownloadUrlResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetContentDownloadUrlResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetContentDownloadUrlResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::DeleteCharacterFromUser(
        DeleteCharacterFromUserRequest& request,
        ProcessApiCallback<DeleteCharacterFromUserResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/DeleteCharacterFromUser"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnDeleteCharacterFromUserResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<DeleteCharacterFromUserResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnDeleteCharacterFromUserResult(CallRequestContainer& request)
    {
        DeleteCharacterFromUserResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<DeleteCharacterFromUserResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetAllUsersCharacters(
        ListUsersCharactersRequest& request,
        ProcessApiCallback<ListUsersCharactersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetAllUsersCharacters"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetAllUsersCharactersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ListUsersCharactersResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetAllUsersCharactersResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetCharacterLeaderboard(
        GetCharacterLeaderboardRequest& request,
        ProcessApiCallback<GetCharacterLeaderboardResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetCharacterLeaderboard"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCharacterLeaderboardResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterLeaderboardResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetCharacterLeaderboardResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetCharacterStatistics(
        GetCharacterStatisticsRequest& request,
        ProcessApiCallback<GetCharacterStatisticsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetCharacterStatistics"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCharacterStatisticsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterStatisticsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetCharacterStatisticsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetLeaderboardAroundCharacter(
        GetLeaderboardAroundCharacterRequest& request,
        ProcessApiCallback<GetLeaderboardAroundCharacterResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetLeaderboardAroundCharacter"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetLeaderboardAroundCharacterResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetLeaderboardAroundCharacterResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetLeaderboardAroundCharacterResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetLeaderboardForUserCharacters(
        GetLeaderboardForUsersCharactersRequest& request,
        ProcessApiCallback<GetLeaderboardForUsersCharactersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetLeaderboardForUserCharacters"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetLeaderboardForUserCharactersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetLeaderboardForUsersCharactersResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetLeaderboardForUserCharactersResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GrantCharacterToUser(
        GrantCharacterToUserRequest& request,
        ProcessApiCallback<GrantCharacterToUserResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GrantCharacterToUser"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGrantCharacterToUserResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GrantCharacterToUserResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGrantCharacterToUserResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateCharacterStatistics(
        UpdateCharacterStatisticsRequest& request,
        ProcessApiCallback<UpdateCharacterStatisticsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateCharacterStatistics"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateCharacterStatisticsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateCharacterStatisticsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateCharacterStatisticsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetCharacterData(
        GetCharacterDataRequest& request,
        ProcessApiCallback<GetCharacterDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetCharacterData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCharacterDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetCharacterDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetCharacterInternalData(
        GetCharacterDataRequest& request,
        ProcessApiCallback<GetCharacterDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetCharacterInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCharacterInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetCharacterInternalDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetCharacterReadOnlyData(
        GetCharacterDataRequest& request,
        ProcessApiCallback<GetCharacterDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetCharacterReadOnlyData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCharacterReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCharacterDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetCharacterReadOnlyDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateCharacterData(
        UpdateCharacterDataRequest& request,
        ProcessApiCallback<UpdateCharacterDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateCharacterData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateCharacterDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateCharacterDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateCharacterDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateCharacterInternalData(
        UpdateCharacterDataRequest& request,
        ProcessApiCallback<UpdateCharacterDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateCharacterInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateCharacterInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateCharacterDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateCharacterInternalDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::UpdateCharacterReadOnlyData(
        UpdateCharacterDataRequest& request,
        ProcessApiCallback<UpdateCharacterDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/UpdateCharacterReadOnlyData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateCharacterReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateCharacterDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnUpdateCharacterReadOnlyDataResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::AddPlayerTag(
        AddPlayerTagRequest& request,
        ProcessApiCallback<AddPlayerTagResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/AddPlayerTag"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAddPlayerTagResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AddPlayerTagResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnAddPlayerTagResult(CallRequestContainer& request)
    {
        AddPlayerTagResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AddPlayerTagResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetAllActionGroups(
        GetAllActionGroupsRequest& request,
        ProcessApiCallback<GetAllActionGroupsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetAllActionGroups"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetAllActionGroupsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetAllActionGroupsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetAllActionGroupsResult(CallRequestContainer& request)
    {
        GetAllActionGroupsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetAllActionGroupsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetAllSegments(
        GetAllSegmentsRequest& request,
        ProcessApiCallback<GetAllSegmentsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetAllSegments"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetAllSegmentsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetAllSegmentsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetAllSegmentsResult(CallRequestContainer& request)
    {
        GetAllSegmentsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetAllSegmentsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetPlayerSegments(
        GetPlayersSegmentsRequest& request,
        ProcessApiCallback<GetPlayerSegmentsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetPlayerSegments"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayerSegmentsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerSegmentsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetPlayerSegmentsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::GetPlayersInSegment(
        GetPlayersInSegmentRequest& request,
        ProcessApiCallback<GetPlayersInSegmentResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetPlayersInSegment"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayersInSegmentResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayersInSegmentResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetPlayersInSegmentResult(CallRequestContainer& request)
    {
        GetPlayersInSegmentResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayersInSegmentResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabServerAPI::GetPlayerTags(
        GetPlayerTagsRequest& request,
        ProcessApiCallback<GetPlayerTagsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/GetPlayerTags"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayerTagsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerTagsResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnGetPlayerTagsResult(CallRequestContainer& request)
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

    void PlayFabServerAPI::RemovePlayerTag(
        RemovePlayerTagRequest& request,
        ProcessApiCallback<RemovePlayerTagResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Server/RemovePlayerTag"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRemovePlayerTagResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RemovePlayerTagResult>(callback)), errorCallback, customData);
    }

    void PlayFabServerAPI::OnRemovePlayerTagResult(CallRequestContainer& request)
    {
        RemovePlayerTagResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RemovePlayerTagResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }
}

#endif
