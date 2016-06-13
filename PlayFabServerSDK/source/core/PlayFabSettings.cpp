#include "playfab/PlayFabSettings.h"
#include <string>

namespace PlayFab
{
    const std::string PlayFabSettings::sdkVersion = "0.28.160613";
    const std::string PlayFabSettings::buildIdentifier = "jbuild_0";
    const std::string PlayFabSettings::versionString = "WindowsSDK-0.28.160613";

    bool PlayFabSettings::useDevelopmentEnvironment = false;
    std::string PlayFabSettings::serverURL;
    std::string PlayFabSettings::developmentEnvironmentURL = ".playfabsandbox.com";
    std::string PlayFabSettings::productionEnvironmentURL = ".playfabapi.com";
    std::string PlayFabSettings::titleId;
    ErrorCallback PlayFabSettings::globalErrorHandler = nullptr;
    std::string PlayFabSettings::developerSecretKey;
}
