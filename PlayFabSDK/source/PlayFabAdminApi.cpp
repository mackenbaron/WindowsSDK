
#ifdef ENABLE_PLAYFABADMIN_API

#include "playfab/PlayFabAdminApi.h"
#include "playfab/PlayFabHttp.h"
#include "playfab/PlayFabSettings.h"

namespace PlayFab
{
    using namespace AdminModels;

    size_t PlayFabAdminAPI::Update()
    {
        return PlayFabHttp::Get().Update();
    }

    // PlayFabAdmin APIs

    void PlayFabAdminAPI::GetPolicy(
        GetPolicyRequest& request,
        ProcessApiCallback<GetPolicyResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetPolicy"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPolicyResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPolicyResponse>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetPolicyResult(CallRequestContainer& request)
    {
        GetPolicyResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPolicyResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::UpdatePolicy(
        UpdatePolicyRequest& request,
        ProcessApiCallback<UpdatePolicyResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdatePolicy"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdatePolicyResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdatePolicyResponse>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdatePolicyResult(CallRequestContainer& request)
    {
        UpdatePolicyResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdatePolicyResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::BanUsers(
        BanUsersRequest& request,
        ProcessApiCallback<BanUsersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/BanUsers"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnBanUsersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<BanUsersResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnBanUsersResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetUserAccountInfo(
        LookupUserAccountInfoRequest& request,
        ProcessApiCallback<LookupUserAccountInfoResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetUserAccountInfo"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserAccountInfoResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<LookupUserAccountInfoResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetUserAccountInfoResult(CallRequestContainer& request)
    {
        LookupUserAccountInfoResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<LookupUserAccountInfoResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetUserBans(
        GetUserBansRequest& request,
        ProcessApiCallback<GetUserBansResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetUserBans"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserBansResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserBansResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetUserBansResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::ResetUsers(
        ResetUsersRequest& request,
        ProcessApiCallback<BlankResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/ResetUsers"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnResetUsersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<BlankResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnResetUsersResult(CallRequestContainer& request)
    {
        BlankResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<BlankResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::RevokeAllBansForUser(
        RevokeAllBansForUserRequest& request,
        ProcessApiCallback<RevokeAllBansForUserResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/RevokeAllBansForUser"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRevokeAllBansForUserResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RevokeAllBansForUserResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnRevokeAllBansForUserResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::RevokeBans(
        RevokeBansRequest& request,
        ProcessApiCallback<RevokeBansResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/RevokeBans"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRevokeBansResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RevokeBansResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnRevokeBansResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::SendAccountRecoveryEmail(
        SendAccountRecoveryEmailRequest& request,
        ProcessApiCallback<SendAccountRecoveryEmailResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/SendAccountRecoveryEmail"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSendAccountRecoveryEmailResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SendAccountRecoveryEmailResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnSendAccountRecoveryEmailResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::UpdateBans(
        UpdateBansRequest& request,
        ProcessApiCallback<UpdateBansResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateBans"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateBansResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateBansResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateBansResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::UpdateUserTitleDisplayName(
        UpdateUserTitleDisplayNameRequest& request,
        ProcessApiCallback<UpdateUserTitleDisplayNameResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateUserTitleDisplayName"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserTitleDisplayNameResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserTitleDisplayNameResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateUserTitleDisplayNameResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::CreatePlayerStatisticDefinition(
        CreatePlayerStatisticDefinitionRequest& request,
        ProcessApiCallback<CreatePlayerStatisticDefinitionResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/CreatePlayerStatisticDefinition"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnCreatePlayerStatisticDefinitionResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<CreatePlayerStatisticDefinitionResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnCreatePlayerStatisticDefinitionResult(CallRequestContainer& request)
    {
        CreatePlayerStatisticDefinitionResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<CreatePlayerStatisticDefinitionResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::DeleteUsers(
        DeleteUsersRequest& request,
        ProcessApiCallback<DeleteUsersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/DeleteUsers"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnDeleteUsersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<DeleteUsersResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnDeleteUsersResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetDataReport(
        GetDataReportRequest& request,
        ProcessApiCallback<GetDataReportResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetDataReport"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetDataReportResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetDataReportResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetDataReportResult(CallRequestContainer& request)
    {
        GetDataReportResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetDataReportResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetPlayerStatisticDefinitions(
        GetPlayerStatisticDefinitionsRequest& request,
        ProcessApiCallback<GetPlayerStatisticDefinitionsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetPlayerStatisticDefinitions"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayerStatisticDefinitionsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerStatisticDefinitionsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetPlayerStatisticDefinitionsResult(CallRequestContainer& request)
    {
        GetPlayerStatisticDefinitionsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetPlayerStatisticDefinitionsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetPlayerStatisticVersions(
        GetPlayerStatisticVersionsRequest& request,
        ProcessApiCallback<GetPlayerStatisticVersionsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetPlayerStatisticVersions"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayerStatisticVersionsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerStatisticVersionsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetPlayerStatisticVersionsResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetUserData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetUserData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetUserDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetUserInternalData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetUserInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetUserInternalDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetUserPublisherData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetUserPublisherData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetUserPublisherDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetUserPublisherInternalData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetUserPublisherInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserPublisherInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetUserPublisherInternalDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetUserPublisherReadOnlyData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetUserPublisherReadOnlyData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserPublisherReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetUserPublisherReadOnlyDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetUserReadOnlyData(
        GetUserDataRequest& request,
        ProcessApiCallback<GetUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetUserReadOnlyData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetUserReadOnlyDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::IncrementPlayerStatisticVersion(
        IncrementPlayerStatisticVersionRequest& request,
        ProcessApiCallback<IncrementPlayerStatisticVersionResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/IncrementPlayerStatisticVersion"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnIncrementPlayerStatisticVersionResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<IncrementPlayerStatisticVersionResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnIncrementPlayerStatisticVersionResult(CallRequestContainer& request)
    {
        IncrementPlayerStatisticVersionResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<IncrementPlayerStatisticVersionResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::RefundPurchase(
        RefundPurchaseRequest& request,
        ProcessApiCallback<RefundPurchaseResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/RefundPurchase"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRefundPurchaseResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RefundPurchaseResponse>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnRefundPurchaseResult(CallRequestContainer& request)
    {
        RefundPurchaseResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RefundPurchaseResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::ResetUserStatistics(
        ResetUserStatisticsRequest& request,
        ProcessApiCallback<ResetUserStatisticsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/ResetUserStatistics"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnResetUserStatisticsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ResetUserStatisticsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnResetUserStatisticsResult(CallRequestContainer& request)
    {
        ResetUserStatisticsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ResetUserStatisticsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::ResolvePurchaseDispute(
        ResolvePurchaseDisputeRequest& request,
        ProcessApiCallback<ResolvePurchaseDisputeResponse> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/ResolvePurchaseDispute"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnResolvePurchaseDisputeResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ResolvePurchaseDisputeResponse>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnResolvePurchaseDisputeResult(CallRequestContainer& request)
    {
        ResolvePurchaseDisputeResponse outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ResolvePurchaseDisputeResponse> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::UpdatePlayerStatisticDefinition(
        UpdatePlayerStatisticDefinitionRequest& request,
        ProcessApiCallback<UpdatePlayerStatisticDefinitionResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdatePlayerStatisticDefinition"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdatePlayerStatisticDefinitionResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdatePlayerStatisticDefinitionResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdatePlayerStatisticDefinitionResult(CallRequestContainer& request)
    {
        UpdatePlayerStatisticDefinitionResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdatePlayerStatisticDefinitionResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::UpdateUserData(
        UpdateUserDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateUserData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateUserDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::UpdateUserInternalData(
        UpdateUserInternalDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateUserInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateUserInternalDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::UpdateUserPublisherData(
        UpdateUserDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateUserPublisherData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateUserPublisherDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::UpdateUserPublisherInternalData(
        UpdateUserInternalDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateUserPublisherInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserPublisherInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateUserPublisherInternalDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::UpdateUserPublisherReadOnlyData(
        UpdateUserDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateUserPublisherReadOnlyData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserPublisherReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateUserPublisherReadOnlyDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::UpdateUserReadOnlyData(
        UpdateUserDataRequest& request,
        ProcessApiCallback<UpdateUserDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateUserReadOnlyData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateUserReadOnlyDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateUserDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateUserReadOnlyDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::AddNews(
        AddNewsRequest& request,
        ProcessApiCallback<AddNewsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/AddNews"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAddNewsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AddNewsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnAddNewsResult(CallRequestContainer& request)
    {
        AddNewsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AddNewsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::AddVirtualCurrencyTypes(
        AddVirtualCurrencyTypesRequest& request,
        ProcessApiCallback<BlankResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/AddVirtualCurrencyTypes"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAddVirtualCurrencyTypesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<BlankResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnAddVirtualCurrencyTypesResult(CallRequestContainer& request)
    {
        BlankResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<BlankResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::DeleteStore(
        DeleteStoreRequest& request,
        ProcessApiCallback<DeleteStoreResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/DeleteStore"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnDeleteStoreResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<DeleteStoreResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnDeleteStoreResult(CallRequestContainer& request)
    {
        DeleteStoreResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<DeleteStoreResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetCatalogItems(
        GetCatalogItemsRequest& request,
        ProcessApiCallback<GetCatalogItemsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetCatalogItems"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCatalogItemsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCatalogItemsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetCatalogItemsResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetPublisherData(
        GetPublisherDataRequest& request,
        ProcessApiCallback<GetPublisherDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetPublisherData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPublisherDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetPublisherDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetRandomResultTables(
        GetRandomResultTablesRequest& request,
        ProcessApiCallback<GetRandomResultTablesResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetRandomResultTables"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetRandomResultTablesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetRandomResultTablesResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetRandomResultTablesResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetStoreItems(
        GetStoreItemsRequest& request,
        ProcessApiCallback<GetStoreItemsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetStoreItems"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetStoreItemsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetStoreItemsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetStoreItemsResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetTitleData(
        GetTitleDataRequest& request,
        ProcessApiCallback<GetTitleDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetTitleData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetTitleDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTitleDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetTitleDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetTitleInternalData(
        GetTitleDataRequest& request,
        ProcessApiCallback<GetTitleDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetTitleInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetTitleInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTitleDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetTitleInternalDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::ListVirtualCurrencyTypes(
        ListVirtualCurrencyTypesRequest& request,
        ProcessApiCallback<ListVirtualCurrencyTypesResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/ListVirtualCurrencyTypes"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnListVirtualCurrencyTypesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ListVirtualCurrencyTypesResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnListVirtualCurrencyTypesResult(CallRequestContainer& request)
    {
        ListVirtualCurrencyTypesResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ListVirtualCurrencyTypesResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::RemoveVirtualCurrencyTypes(
        RemoveVirtualCurrencyTypesRequest& request,
        ProcessApiCallback<BlankResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/RemoveVirtualCurrencyTypes"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRemoveVirtualCurrencyTypesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<BlankResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnRemoveVirtualCurrencyTypesResult(CallRequestContainer& request)
    {
        BlankResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<BlankResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::SetCatalogItems(
        UpdateCatalogItemsRequest& request,
        ProcessApiCallback<UpdateCatalogItemsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/SetCatalogItems"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetCatalogItemsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateCatalogItemsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnSetCatalogItemsResult(CallRequestContainer& request)
    {
        UpdateCatalogItemsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateCatalogItemsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::SetStoreItems(
        UpdateStoreItemsRequest& request,
        ProcessApiCallback<UpdateStoreItemsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/SetStoreItems"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetStoreItemsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateStoreItemsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnSetStoreItemsResult(CallRequestContainer& request)
    {
        UpdateStoreItemsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateStoreItemsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::SetTitleData(
        SetTitleDataRequest& request,
        ProcessApiCallback<SetTitleDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/SetTitleData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetTitleDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetTitleDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnSetTitleDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::SetTitleInternalData(
        SetTitleDataRequest& request,
        ProcessApiCallback<SetTitleDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/SetTitleInternalData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetTitleInternalDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetTitleDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnSetTitleInternalDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::SetupPushNotification(
        SetupPushNotificationRequest& request,
        ProcessApiCallback<SetupPushNotificationResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/SetupPushNotification"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetupPushNotificationResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetupPushNotificationResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnSetupPushNotificationResult(CallRequestContainer& request)
    {
        SetupPushNotificationResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SetupPushNotificationResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::UpdateCatalogItems(
        UpdateCatalogItemsRequest& request,
        ProcessApiCallback<UpdateCatalogItemsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateCatalogItems"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateCatalogItemsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateCatalogItemsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateCatalogItemsResult(CallRequestContainer& request)
    {
        UpdateCatalogItemsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateCatalogItemsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::UpdateRandomResultTables(
        UpdateRandomResultTablesRequest& request,
        ProcessApiCallback<UpdateRandomResultTablesResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateRandomResultTables"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateRandomResultTablesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateRandomResultTablesResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateRandomResultTablesResult(CallRequestContainer& request)
    {
        UpdateRandomResultTablesResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateRandomResultTablesResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::UpdateStoreItems(
        UpdateStoreItemsRequest& request,
        ProcessApiCallback<UpdateStoreItemsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateStoreItems"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateStoreItemsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateStoreItemsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateStoreItemsResult(CallRequestContainer& request)
    {
        UpdateStoreItemsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateStoreItemsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::AddUserVirtualCurrency(
        AddUserVirtualCurrencyRequest& request,
        ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/AddUserVirtualCurrency"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAddUserVirtualCurrencyResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyUserVirtualCurrencyResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnAddUserVirtualCurrencyResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetUserInventory(
        GetUserInventoryRequest& request,
        ProcessApiCallback<GetUserInventoryResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetUserInventory"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetUserInventoryResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetUserInventoryResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetUserInventoryResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GrantItemsToUsers(
        GrantItemsToUsersRequest& request,
        ProcessApiCallback<GrantItemsToUsersResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GrantItemsToUsers"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGrantItemsToUsersResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GrantItemsToUsersResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGrantItemsToUsersResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::RevokeInventoryItem(
        RevokeInventoryItemRequest& request,
        ProcessApiCallback<RevokeInventoryResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/RevokeInventoryItem"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRevokeInventoryItemResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RevokeInventoryResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnRevokeInventoryItemResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::SubtractUserVirtualCurrency(
        SubtractUserVirtualCurrencyRequest& request,
        ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/SubtractUserVirtualCurrency"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSubtractUserVirtualCurrencyResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyUserVirtualCurrencyResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnSubtractUserVirtualCurrencyResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetMatchmakerGameInfo(
        GetMatchmakerGameInfoRequest& request,
        ProcessApiCallback<GetMatchmakerGameInfoResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetMatchmakerGameInfo"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetMatchmakerGameInfoResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetMatchmakerGameInfoResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetMatchmakerGameInfoResult(CallRequestContainer& request)
    {
        GetMatchmakerGameInfoResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetMatchmakerGameInfoResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetMatchmakerGameModes(
        GetMatchmakerGameModesRequest& request,
        ProcessApiCallback<GetMatchmakerGameModesResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetMatchmakerGameModes"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetMatchmakerGameModesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetMatchmakerGameModesResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetMatchmakerGameModesResult(CallRequestContainer& request)
    {
        GetMatchmakerGameModesResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetMatchmakerGameModesResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::ModifyMatchmakerGameModes(
        ModifyMatchmakerGameModesRequest& request,
        ProcessApiCallback<ModifyMatchmakerGameModesResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/ModifyMatchmakerGameModes"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnModifyMatchmakerGameModesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyMatchmakerGameModesResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnModifyMatchmakerGameModesResult(CallRequestContainer& request)
    {
        ModifyMatchmakerGameModesResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ModifyMatchmakerGameModesResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::AddServerBuild(
        AddServerBuildRequest& request,
        ProcessApiCallback<AddServerBuildResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/AddServerBuild"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAddServerBuildResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AddServerBuildResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnAddServerBuildResult(CallRequestContainer& request)
    {
        AddServerBuildResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<AddServerBuildResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetServerBuildInfo(
        GetServerBuildInfoRequest& request,
        ProcessApiCallback<GetServerBuildInfoResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetServerBuildInfo"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetServerBuildInfoResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetServerBuildInfoResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetServerBuildInfoResult(CallRequestContainer& request)
    {
        GetServerBuildInfoResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetServerBuildInfoResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetServerBuildUploadUrl(
        GetServerBuildUploadURLRequest& request,
        ProcessApiCallback<GetServerBuildUploadURLResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetServerBuildUploadUrl"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetServerBuildUploadUrlResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetServerBuildUploadURLResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetServerBuildUploadUrlResult(CallRequestContainer& request)
    {
        GetServerBuildUploadURLResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetServerBuildUploadURLResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::ListServerBuilds(
        ListBuildsRequest& request,
        ProcessApiCallback<ListBuildsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/ListServerBuilds"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnListServerBuildsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ListBuildsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnListServerBuildsResult(CallRequestContainer& request)
    {
        ListBuildsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ListBuildsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::ModifyServerBuild(
        ModifyServerBuildRequest& request,
        ProcessApiCallback<ModifyServerBuildResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/ModifyServerBuild"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnModifyServerBuildResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ModifyServerBuildResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnModifyServerBuildResult(CallRequestContainer& request)
    {
        ModifyServerBuildResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ModifyServerBuildResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::RemoveServerBuild(
        RemoveServerBuildRequest& request,
        ProcessApiCallback<RemoveServerBuildResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/RemoveServerBuild"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRemoveServerBuildResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RemoveServerBuildResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnRemoveServerBuildResult(CallRequestContainer& request)
    {
        RemoveServerBuildResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RemoveServerBuildResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::SetPublisherData(
        SetPublisherDataRequest& request,
        ProcessApiCallback<SetPublisherDataResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/SetPublisherData"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetPublisherDataResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetPublisherDataResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnSetPublisherDataResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetCloudScriptRevision(
        GetCloudScriptRevisionRequest& request,
        ProcessApiCallback<GetCloudScriptRevisionResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetCloudScriptRevision"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCloudScriptRevisionResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCloudScriptRevisionResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetCloudScriptRevisionResult(CallRequestContainer& request)
    {
        GetCloudScriptRevisionResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetCloudScriptRevisionResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetCloudScriptVersions(
        GetCloudScriptVersionsRequest& request,
        ProcessApiCallback<GetCloudScriptVersionsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetCloudScriptVersions"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCloudScriptVersionsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCloudScriptVersionsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetCloudScriptVersionsResult(CallRequestContainer& request)
    {
        GetCloudScriptVersionsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetCloudScriptVersionsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::SetPublishedRevision(
        SetPublishedRevisionRequest& request,
        ProcessApiCallback<SetPublishedRevisionResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/SetPublishedRevision"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnSetPublishedRevisionResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<SetPublishedRevisionResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnSetPublishedRevisionResult(CallRequestContainer& request)
    {
        SetPublishedRevisionResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<SetPublishedRevisionResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::UpdateCloudScript(
        UpdateCloudScriptRequest& request,
        ProcessApiCallback<UpdateCloudScriptResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateCloudScript"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateCloudScriptResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<UpdateCloudScriptResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateCloudScriptResult(CallRequestContainer& request)
    {
        UpdateCloudScriptResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<UpdateCloudScriptResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::DeleteContent(
        DeleteContentRequest& request,
        ProcessApiCallback<BlankResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/DeleteContent"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnDeleteContentResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<BlankResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnDeleteContentResult(CallRequestContainer& request)
    {
        BlankResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<BlankResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetContentList(
        GetContentListRequest& request,
        ProcessApiCallback<GetContentListResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetContentList"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetContentListResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetContentListResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetContentListResult(CallRequestContainer& request)
    {
        GetContentListResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetContentListResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetContentUploadUrl(
        GetContentUploadUrlRequest& request,
        ProcessApiCallback<GetContentUploadUrlResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetContentUploadUrl"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetContentUploadUrlResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetContentUploadUrlResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetContentUploadUrlResult(CallRequestContainer& request)
    {
        GetContentUploadUrlResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetContentUploadUrlResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::ResetCharacterStatistics(
        ResetCharacterStatisticsRequest& request,
        ProcessApiCallback<ResetCharacterStatisticsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/ResetCharacterStatistics"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnResetCharacterStatisticsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<ResetCharacterStatisticsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnResetCharacterStatisticsResult(CallRequestContainer& request)
    {
        ResetCharacterStatisticsResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<ResetCharacterStatisticsResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::AddPlayerTag(
        AddPlayerTagRequest& request,
        ProcessApiCallback<AddPlayerTagResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/AddPlayerTag"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAddPlayerTagResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<AddPlayerTagResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnAddPlayerTagResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetAllActionGroups(
        GetAllActionGroupsRequest& request,
        ProcessApiCallback<GetAllActionGroupsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetAllActionGroups"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetAllActionGroupsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetAllActionGroupsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetAllActionGroupsResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetAllSegments(
        GetAllSegmentsRequest& request,
        ProcessApiCallback<GetAllSegmentsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetAllSegments"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetAllSegmentsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetAllSegmentsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetAllSegmentsResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetPlayerSegments(
        GetPlayersSegmentsRequest& request,
        ProcessApiCallback<GetPlayerSegmentsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetPlayerSegments"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayerSegmentsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerSegmentsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetPlayerSegmentsResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetPlayersInSegment(
        GetPlayersInSegmentRequest& request,
        ProcessApiCallback<GetPlayersInSegmentResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetPlayersInSegment"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayersInSegmentResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayersInSegmentResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetPlayersInSegmentResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetPlayerTags(
        GetPlayerTagsRequest& request,
        ProcessApiCallback<GetPlayerTagsResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetPlayerTags"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetPlayerTagsResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetPlayerTagsResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetPlayerTagsResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::RemovePlayerTag(
        RemovePlayerTagRequest& request,
        ProcessApiCallback<RemovePlayerTagResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/RemovePlayerTag"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRemovePlayerTagResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RemovePlayerTagResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnRemovePlayerTagResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::AbortTaskInstance(
        AbortTaskInstanceRequest& request,
        ProcessApiCallback<EmptyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/AbortTaskInstance"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnAbortTaskInstanceResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<EmptyResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnAbortTaskInstanceResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::CreateActionsOnPlayersInSegmentTask(
        CreateActionsOnPlayerSegmentTaskRequest& request,
        ProcessApiCallback<CreateTaskResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/CreateActionsOnPlayersInSegmentTask"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnCreateActionsOnPlayersInSegmentTaskResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<CreateTaskResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnCreateActionsOnPlayersInSegmentTaskResult(CallRequestContainer& request)
    {
        CreateTaskResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<CreateTaskResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::CreateCloudScriptTask(
        CreateCloudScriptTaskRequest& request,
        ProcessApiCallback<CreateTaskResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/CreateCloudScriptTask"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnCreateCloudScriptTaskResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<CreateTaskResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnCreateCloudScriptTaskResult(CallRequestContainer& request)
    {
        CreateTaskResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<CreateTaskResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::DeleteTask(
        DeleteTaskRequest& request,
        ProcessApiCallback<EmptyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/DeleteTask"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnDeleteTaskResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<EmptyResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnDeleteTaskResult(CallRequestContainer& request)
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

    void PlayFabAdminAPI::GetActionsOnPlayersInSegmentTaskInstance(
        GetTaskInstanceRequest& request,
        ProcessApiCallback<GetActionsOnPlayersInSegmentTaskInstanceResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetActionsOnPlayersInSegmentTaskInstance"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetActionsOnPlayersInSegmentTaskInstanceResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetActionsOnPlayersInSegmentTaskInstanceResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetActionsOnPlayersInSegmentTaskInstanceResult(CallRequestContainer& request)
    {
        GetActionsOnPlayersInSegmentTaskInstanceResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetActionsOnPlayersInSegmentTaskInstanceResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetCloudScriptTaskInstance(
        GetTaskInstanceRequest& request,
        ProcessApiCallback<GetCloudScriptTaskInstanceResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetCloudScriptTaskInstance"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetCloudScriptTaskInstanceResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetCloudScriptTaskInstanceResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetCloudScriptTaskInstanceResult(CallRequestContainer& request)
    {
        GetCloudScriptTaskInstanceResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetCloudScriptTaskInstanceResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetTaskInstances(
        GetTaskInstancesRequest& request,
        ProcessApiCallback<GetTaskInstancesResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetTaskInstances"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetTaskInstancesResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTaskInstancesResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetTaskInstancesResult(CallRequestContainer& request)
    {
        GetTaskInstancesResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetTaskInstancesResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::GetTasks(
        GetTasksRequest& request,
        ProcessApiCallback<GetTasksResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/GetTasks"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnGetTasksResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<GetTasksResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnGetTasksResult(CallRequestContainer& request)
    {
        GetTasksResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<GetTasksResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::RunTask(
        RunTaskRequest& request,
        ProcessApiCallback<RunTaskResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/RunTask"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnRunTaskResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<RunTaskResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnRunTaskResult(CallRequestContainer& request)
    {
        RunTaskResult outResult;
        outResult.FromJson(request.errorWrapper.Data);

        auto internalPtr = request.successCallback.get();
        if (internalPtr != nullptr)
        {
            auto callback = (*static_cast<ProcessApiCallback<RunTaskResult> *>(internalPtr));
            callback(outResult, request.customData);
        }
    }

    void PlayFabAdminAPI::UpdateTask(
        UpdateTaskRequest& request,
        ProcessApiCallback<EmptyResult> callback,
        ErrorCallback errorCallback,
        void* customData
    )
    {

        IPlayFabHttp& http = IPlayFabHttp::Get();
        auto requestJson = request.ToJson();
        http.AddRequest(U("/Admin/UpdateTask"), U("X-SecretKey"), PlayFabSettings::developerSecretKey, requestJson, OnUpdateTaskResult, SharedVoidPointer((callback == nullptr) ? nullptr : new ProcessApiCallback<EmptyResult>(callback)), errorCallback, customData);
    }

    void PlayFabAdminAPI::OnUpdateTaskResult(CallRequestContainer& request)
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
}

#endif
