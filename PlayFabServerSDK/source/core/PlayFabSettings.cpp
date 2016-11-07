#include "playfab/PlayFabSettings.h"
#include <string>

namespace PlayFab
{
    const std::string PlayFabSettings::sdkVersion = "0.41.161107";
    const std::string PlayFabSettings::buildIdentifier = "jbuild_windowssdk_1";
    const std::string PlayFabSettings::versionString = "WindowsSDK-0.41.161107";

    bool PlayFabSettings::useDevelopmentEnvironment = false;
    std::string PlayFabSettings::serverURL;
    std::string PlayFabSettings::developmentEnvironmentURL = ".playfabsandbox.com";
    std::string PlayFabSettings::productionEnvironmentURL = ".playfabapi.com";
    std::string PlayFabSettings::titleId;
    ErrorCallback PlayFabSettings::globalErrorHandler = nullptr;
    std::string PlayFabSettings::developerSecretKey;
}
