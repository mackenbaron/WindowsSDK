#ifndef PLAYFAB_PLAYFABSETTINGS_H_
#define PLAYFAB_PLAYFABSETTINGS_H_

#include <string>
#include "playfab/PlayFabError.h"

namespace PlayFab
{
    class PlayFabSettings
    {
    public:
        static const std::string sdkVersion;
        static const std::string buildIdentifier;
        static const std::string versionString;

        static bool useDevelopmentEnvironment;
        static std::string serverURL;
        static std::string developmentEnvironmentURL;
        static std::string productionEnvironmentURL;
        static std::string titleId; // You must set this value for PlayFabSdk to work properly (Found in the Game Manager for your title, at the PlayFab Website)
        static ErrorCallback globalErrorHandler;
        static std::string developerSecretKey; // You must set this value for PlayFabSdk to work properly (Found in the Game Manager for your title, at the PlayFab Website)
        static std::string advertisingIdType; // Set this to the appropriate AD_TYPE_X constant below
        static std::string advertisingIdValue; // Set this to corresponding device value

        // DisableAdvertising is provided for completeness, but changing it is not suggested
        // Disabling this may prevent your advertising-related PlayFab marketplace partners from working correctly
        static bool disableAdvertising;
        static const std::string AD_TYPE_IDFA;
        static const std::string AD_TYPE_ANDROID_ID;

        static std::string getURL(const std::string& callPath)
        {
            if (serverURL.length() == 0)
                serverURL = "https://"+titleId+(useDevelopmentEnvironment ? developmentEnvironmentURL : productionEnvironmentURL);
            return serverURL + callPath;
        }
    };
}
#endif
