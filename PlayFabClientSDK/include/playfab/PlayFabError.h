#ifndef PLAYFAB_PLAYFABERROR_H_
#define PLAYFAB_PLAYFABERROR_H_

#include <string>
#include <map>

namespace PlayFab
{

    enum PlayFabErrorCode
    {
        PlayFabErrorHostnameNotFound=1,
        PlayFabErrorConnectionTimeout,
        PlayFabErrorConnectionRefused,
        PlayFabErrorSocketError,
		PlayFabErrorSuccess = 0,
		PlayFabErrorInvalidParams = 1000,
		PlayFabErrorAccountNotFound = 1001,
		PlayFabErrorAccountBanned = 1002,
		PlayFabErrorInvalidUsernameOrPassword = 1003,
		PlayFabErrorInvalidTitleId = 1004,
		PlayFabErrorInvalidEmailAddress = 1005,
		PlayFabErrorEmailAddressNotAvailable = 1006,
		PlayFabErrorInvalidUsername = 1007,
		PlayFabErrorInvalidPassword = 1008,
		PlayFabErrorUsernameNotAvailable = 1009,
		PlayFabErrorInvalidSteamTicket = 1010,
		PlayFabErrorAccountAlreadyLinked = 1011,
		PlayFabErrorLinkedAccountAlreadyClaimed = 1012,
		PlayFabErrorInvalidFacebookToken = 1013,
		PlayFabErrorAccountNotLinked = 1014,
		PlayFabErrorFailedByPaymentProvider = 1015,
		PlayFabErrorCouponCodeNotFound = 1016,
		PlayFabErrorInvalidContainerItem = 1017,
		PlayFabErrorContainerNotOwned = 1018,
		PlayFabErrorKeyNotOwned = 1019,
		PlayFabErrorInvalidItemIdInTable = 1020,
		PlayFabErrorInvalidReceipt = 1021,
		PlayFabErrorReceiptAlreadyUsed = 1022,
		PlayFabErrorReceiptCancelled = 1023,
		PlayFabErrorGameNotFound = 1024,
		PlayFabErrorGameModeNotFound = 1025,
		PlayFabErrorInvalidGoogleToken = 1026,
		PlayFabErrorUserIsNotPartOfDeveloper = 1027,
		PlayFabErrorInvalidTitleForDeveloper = 1028,
		PlayFabErrorTitleNameConflicts = 1029,
		PlayFabErrorUserisNotValid = 1030,
		PlayFabErrorValueAlreadyExists = 1031,
		PlayFabErrorBuildNotFound = 1032,
		PlayFabErrorPlayerNotInGame = 1033,
		PlayFabErrorInvalidTicket = 1034,
		PlayFabErrorInvalidDeveloper = 1035,
		PlayFabErrorInvalidOrderInfo = 1036,
		PlayFabErrorRegistrationIncomplete = 1037,
		PlayFabErrorInvalidPlatform = 1038,
		PlayFabErrorUnknownError = 1039,
		PlayFabErrorSteamApplicationNotOwned = 1040,
		PlayFabErrorWrongSteamAccount = 1041,
		PlayFabErrorTitleNotActivated = 1042,
		PlayFabErrorRegistrationSessionNotFound = 1043,
		PlayFabErrorNoSuchMod = 1044,
		PlayFabErrorFileNotFound = 1045,
		PlayFabErrorDuplicateEmail = 1046,
		PlayFabErrorItemNotFound = 1047,
		PlayFabErrorItemNotOwned = 1048,
		PlayFabErrorItemNotRecycleable = 1049,
		PlayFabErrorItemNotAffordable = 1050,
		PlayFabErrorInvalidVirtualCurrency = 1051,
		PlayFabErrorWrongVirtualCurrency = 1052,
		PlayFabErrorWrongPrice = 1053,
		PlayFabErrorNonPositiveValue = 1054,
		PlayFabErrorInvalidRegion = 1055,
		PlayFabErrorRegionAtCapacity = 1056,
		PlayFabErrorServerFailedToStart = 1057,
		PlayFabErrorNameNotAvailable = 1058,
		PlayFabErrorInsufficientFunds = 1059,
		PlayFabErrorInvalidDeviceID = 1060,
		PlayFabErrorInvalidPushNotificationToken = 1061,
		PlayFabErrorNoRemainingUses = 1062,
		PlayFabErrorInvalidPaymentProvider = 1063,
		PlayFabErrorPurchaseInitializationFailure = 1064,
		PlayFabErrorDuplicateUsername = 1065,
		PlayFabErrorInvalidBuyerInfo = 1066,
		PlayFabErrorNoGameModeParamsSet = 1067,
		PlayFabErrorBodyTooLarge = 1068,
		PlayFabErrorReservedWordInBody = 1069,
		PlayFabErrorInvalidTypeInBody = 1070,
		PlayFabErrorInvalidRequest = 1071,
		PlayFabErrorReservedEventName = 1072,
		PlayFabErrorInvalidUserStatistics = 1073,
		PlayFabErrorNotAuthenticated = 1074,
		PlayFabErrorStreamAlreadyExists = 1075,
		PlayFabErrorErrorCreatingStream = 1076,
		PlayFabErrorStreamNotFound = 1077,
		PlayFabErrorInvalidAccount = 1078,
		PlayFabErrorPurchaseDoesNotExist = 1080,
		PlayFabErrorInvalidPurchaseTransactionStatus = 1081,
		PlayFabErrorAPINotEnabledForGameClientAccess = 1082,
		PlayFabErrorNoPushNotificationARNForTitle = 1083,
		PlayFabErrorBuildAlreadyExists = 1084,
		PlayFabErrorBuildPackageDoesNotExist = 1085,
		PlayFabErrorCustomAnalyticsEventsNotEnabledForTitle = 1087,
		PlayFabErrorInvalidSharedGroupId = 1088,
		PlayFabErrorNotAuthorized = 1089,
		PlayFabErrorMissingTitleGoogleProperties = 1090,
		PlayFabErrorInvalidItemProperties = 1091,
		PlayFabErrorInvalidPSNAuthCode = 1092,
		PlayFabErrorInvalidItemId = 1093,
		PlayFabErrorPushNotEnabledForAccount = 1094,
		PlayFabErrorPushServiceError = 1095,
		PlayFabErrorReceiptDoesNotContainInAppItems = 1096,
		PlayFabErrorReceiptContainsMultipleInAppItems = 1097,
		PlayFabErrorInvalidBundleID = 1098,
		PlayFabErrorJavascriptException = 1099,
		PlayFabErrorInvalidSessionTicket = 1100,
		PlayFabErrorUnableToConnectToDatabase = 1101,
		PlayFabErrorInternalServerError = 1110,
		PlayFabErrorInvalidReportDate = 1111,
		PlayFabErrorReportNotAvailable = 1112,
		PlayFabErrorDatabaseThroughputExceeded = 1113,
		PlayFabErrorInvalidGameTicket = 1115,
		PlayFabErrorExpiredGameTicket = 1116,
		PlayFabErrorGameTicketDoesNotMatchLobby = 1117,
		PlayFabErrorLinkedDeviceAlreadyClaimed = 1118,
		PlayFabErrorDeviceAlreadyLinked = 1119,
		PlayFabErrorDeviceNotLinked = 1120,
		PlayFabErrorPartialFailure = 1121,
		PlayFabErrorPublisherNotSet = 1122,
		PlayFabErrorServiceUnavailable = 1123,
		PlayFabErrorVersionNotFound = 1124,
		PlayFabErrorRevisionNotFound = 1125,
		PlayFabErrorInvalidPublisherId = 1126,
		PlayFabErrorDownstreamServiceUnavailable = 1127,
		PlayFabErrorAPINotIncludedInTitleUsageTier = 1128,
		PlayFabErrorDAULimitExceeded = 1129,
		PlayFabErrorAPIRequestLimitExceeded = 1130,
		PlayFabErrorInvalidAPIEndpoint = 1131,
		PlayFabErrorBuildNotAvailable = 1132,
		PlayFabErrorConcurrentEditError = 1133,
		PlayFabErrorContentNotFound = 1134,
		PlayFabErrorCharacterNotFound = 1135,
		PlayFabErrorCloudScriptNotFound = 1136,
		PlayFabErrorContentQuotaExceeded = 1137,
		PlayFabErrorInvalidCharacterStatistics = 1138,
		PlayFabErrorPhotonNotEnabledForTitle = 1139,
		PlayFabErrorPhotonApplicationNotFound = 1140,
		PlayFabErrorPhotonApplicationNotAssociatedWithTitle = 1141,
		PlayFabErrorInvalidEmailOrPassword = 1142,
		PlayFabErrorFacebookAPIError = 1143,
		PlayFabErrorInvalidContentType = 1144,
		PlayFabErrorKeyLengthExceeded = 1145,
		PlayFabErrorDataLengthExceeded = 1146,
		PlayFabErrorTooManyKeys = 1147,
		PlayFabErrorFreeTierCannotHaveVirtualCurrency = 1148,
		PlayFabErrorMissingAmazonSharedKey = 1149,
		PlayFabErrorAmazonValidationError = 1150,
		PlayFabErrorInvalidPSNIssuerId = 1151,
		PlayFabErrorPSNInaccessible = 1152,
		PlayFabErrorExpiredAuthToken = 1153,
		PlayFabErrorFailedToGetEntitlements = 1154,
		PlayFabErrorFailedToConsumeEntitlement = 1155,
		PlayFabErrorTradeAcceptingUserNotAllowed = 1156,
		PlayFabErrorTradeInventoryItemIsAssignedToCharacter = 1157,
		PlayFabErrorTradeInventoryItemIsBundle = 1158,
		PlayFabErrorTradeStatusNotValidForCancelling = 1159,
		PlayFabErrorTradeStatusNotValidForAccepting = 1160,
		PlayFabErrorTradeDoesNotExist = 1161,
		PlayFabErrorTradeCancelled = 1162,
		PlayFabErrorTradeAlreadyFilled = 1163,
		PlayFabErrorTradeWaitForStatusTimeout = 1164,
		PlayFabErrorTradeInventoryItemExpired = 1165,
		PlayFabErrorTradeMissingOfferedAndAcceptedItems = 1166,
		PlayFabErrorTradeAcceptedItemIsBundle = 1167,
		PlayFabErrorTradeAcceptedItemIsStackable = 1168,
		PlayFabErrorTradeInventoryItemInvalidStatus = 1169,
		PlayFabErrorTradeAcceptedCatalogItemInvalid = 1170,
		PlayFabErrorTradeAllowedUsersInvalid = 1171,
		PlayFabErrorTradeInventoryItemDoesNotExist = 1172,
		PlayFabErrorTradeInventoryItemIsConsumed = 1173,
		PlayFabErrorTradeInventoryItemIsStackable = 1174,
		PlayFabErrorTradeAcceptedItemsMismatch = 1175,
		PlayFabErrorInvalidKongregateToken = 1176,
		PlayFabErrorFeatureNotConfiguredForTitle = 1177,
		PlayFabErrorNoMatchingCatalogItemForReceipt = 1178,
		PlayFabErrorInvalidCurrencyCode = 1179,
		PlayFabErrorNoRealMoneyPriceForCatalogItem = 1180,
		PlayFabErrorTradeInventoryItemIsNotTradable = 1181,
		PlayFabErrorTradeAcceptedCatalogItemIsNotTradable = 1182,
		PlayFabErrorUsersAlreadyFriends = 1183,
		PlayFabErrorLinkedIdentifierAlreadyClaimed = 1184,
		PlayFabErrorCustomIdNotLinked = 1185,
		PlayFabErrorTotalDataSizeExceeded = 1186,
		PlayFabErrorDeleteKeyConflict = 1187,
		PlayFabErrorInvalidXboxLiveToken = 1188,
		PlayFabErrorExpiredXboxLiveToken = 1189,
		PlayFabErrorResettableStatisticVersionRequired = 1190,
		PlayFabErrorNotAuthorizedByTitle = 1191,
		PlayFabErrorNoPartnerEnabled = 1192,
		PlayFabErrorInvalidPartnerResponse = 1193,
		PlayFabErrorAPINotEnabledForGameServerAccess = 1194,
		PlayFabErrorStatisticNotFound = 1195,
		PlayFabErrorStatisticNameConflict = 1196,
		PlayFabErrorStatisticVersionClosedForWrites = 1197,
		PlayFabErrorStatisticVersionInvalid = 1198,
		PlayFabErrorAPIClientRequestRateLimitExceeded = 1199,
		PlayFabErrorInvalidJSONContent = 1200,
		PlayFabErrorInvalidDropTable = 1201,
		PlayFabErrorStatisticVersionAlreadyIncrementedForScheduledInterval = 1202,
		PlayFabErrorStatisticCountLimitExceeded = 1203,
		PlayFabErrorStatisticVersionIncrementRateExceeded = 1204,
		PlayFabErrorContainerKeyInvalid = 1205,
		PlayFabErrorCloudScriptExecutionTimeLimitExceeded = 1206,
		PlayFabErrorNoWritePermissionsForEvent = 1207,
		PlayFabErrorCloudScriptFunctionArgumentSizeExceeded = 1208,
		PlayFabErrorCloudScriptAPIRequestCountExceeded = 1209,
		PlayFabErrorCloudScriptAPIRequestError = 1210,
		PlayFabErrorCloudScriptHTTPRequestError = 1211,
		PlayFabErrorInsufficientGuildRole = 1212,
		PlayFabErrorGuildNotFound = 1213,
		PlayFabErrorOverLimit = 1214,
		PlayFabErrorEventNotFound = 1215,
		PlayFabErrorInvalidEventField = 1216,
		PlayFabErrorInvalidEventName = 1217,
		PlayFabErrorCatalogNotConfigured = 1218,
		PlayFabErrorOperationNotSupportedForPlatform = 1219,
		PlayFabErrorSegmentNotFound = 1220,
		PlayFabErrorStoreNotFound = 1221,
		PlayFabErrorInvalidStatisticName = 1222,
		PlayFabErrorTitleNotQualifiedForLimit = 1223,
		PlayFabErrorInvalidServiceLimitLevel = 1224,
		PlayFabErrorServiceLimitLevelInTransition = 1225,
		PlayFabErrorCouponAlreadyRedeemed = 1226,
		PlayFabErrorGameServerBuildSizeLimitExceeded = 1227,
		PlayFabErrorGameServerBuildCountLimitExceeded = 1228,
		PlayFabErrorVirtualCurrencyCountLimitExceeded = 1229,
		PlayFabErrorVirtualCurrencyCodeExists = 1230,
		PlayFabErrorTitleNewsItemCountLimitExceeded = 1231,
		PlayFabErrorInvalidTwitchToken = 1232,
		PlayFabErrorTwitchResponseError = 1233,
		PlayFabErrorProfaneDisplayName = 1234,
		PlayFabErrorUserAlreadyAdded = 1235,
		PlayFabErrorInvalidVirtualCurrencyCode = 1236,
		PlayFabErrorVirtualCurrencyCannotBeDeleted = 1237,
		PlayFabErrorIdentifierAlreadyClaimed = 1238,
		PlayFabErrorIdentifierNotLinked = 1239,
		PlayFabErrorInvalidContinuationToken = 1240,
		PlayFabErrorExpiredContinuationToken = 1241,
		PlayFabErrorInvalidSegment = 1242,
		PlayFabErrorInvalidSessionId = 1243,
		PlayFabErrorSessionLogNotFound = 1244
    };

    struct PlayFabError
    {
        int HttpCode;
        std::string HttpStatus;
        int ErrorCode;
        std::string ErrorName;
        std::string ErrorMessage;
        std::multimap< std::string, std::string > ErrorDetails;
    };


    typedef void(*ErrorCallback)(PlayFabError& error, void* userData);
}
#endif