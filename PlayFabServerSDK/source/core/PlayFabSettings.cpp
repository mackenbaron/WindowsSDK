#include "playfab/PlayFabSettings.h"
#include <string>

namespace PlayFab
{
    const std::string PlayFabSettings::sdkVersion = "0.31.160711";
    const std::string PlayFabSettings::buildIdentifier = "jbuild_windowssdk_0";
    const std::string PlayFabSettings::versionString = "WindowsSDK-0.31.160711";

    bool PlayFabSettings::useDevelopmentEnvironment = false;
    std::string PlayFabSettings::serverURL;
    std::string PlayFabSettings::developmentEnvironmentURL = ".playfabsandbox.com";
    std::string PlayFabSettings::productionEnvironmentURL = ".playfabapi.com";
    std::string PlayFabSettings::titleId;
    ErrorCallback PlayFabSettings::globalErrorHandler = nullptr;
    std::string PlayFabSettings::developerSecretKey;
}
