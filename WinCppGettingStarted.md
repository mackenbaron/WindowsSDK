Windows/C++ Getting Started Guide
----

This guide will help you make your first API call in C++.  A native C++ project can be used a few ways:

* Stand-alone console Admin tools for maintaining your game
  * WindowsSdk works great for a stand-alone C++ program
* Integration into an existing Visual Studio based C++ game
  * Follow the instructions below to integrate the NuGet Package into your Visual Studio Solution, and you're ready to go
* Integration into an existing C++ based game engine
  * The WindowsSdk should not be used if we provide a more specific SDK
    * [Cocos2d-x](https://github.com/PlayFab/Cocos2d-xSDK)
    * [Lumberyard](https://github.com/PlayFab/LumberyardSDK)
    * [Unreal](https://github.com/PlayFab/UnrealCppSdk)
  * Many C++ based engines also integrate Lua:
    * [LuaSdk](https://github.com/PlayFab/LuaSdk)
  * Finally, if none of these options work for you, follow the instructions below to integrate the NuGet Package into your Visual Studio Solution.  If you have any issues, let us know on the [Forums](https://community.playfab.com/index.html)

Windows/C++ Project Setup
----

* OS: This guide is written for Windows 10, using Visual Studio 2013 or 2015
* Installation
  * Download and install Visual Studio 2013 or 2015
  * Create a new C++ Console project
  * Right-click Manage NuGet packages, and search for "playfab"
    * You should see a small number of matches, and you're looking for: "PlayFab Windows C++ SDK For Visual Studio 20XX"
      * for vs2015, install the plugin with the id: com.playfab.windowssdk.v140
      * for vs2013, install the plugin with the id: com.playfab.windowssdk.v120
* Your project should now compile
* PlayFab Installation Complete!

Set up your first API call
----

This guide will provide the minimum steps to make your first PlayFab API call, without any GUI or on-screen feedback. Confirmation will be done with a console print statement.

* In Visual Studio, Solution Explorer (panel), find this file: Solution/GettingStartedXamarin/App.cs
  * Open up the main cpp document for this project (by default it would be ConsoleApplication1.cpp unless you renamed your project)
  * Replace the contents of that file with the following:
  
``` C++
// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "playfab/PlayFabClientDataModels.h"
#include "playfab/PlayFabClientApi.h"
#include "playfab/PlayFabSettings.h"
#include <windows.h>

using namespace PlayFab;
using namespace ClientModels;

bool finished = false;

void OnLoginSuccess(LoginResult& result, void* customData)
{
    printf("Congratulations, you made your first successful API call!\n");
    finished = true;
}

void OnLoginFail(const PlayFabError& error, void* customData)
{
    printf("Something went wrong with your first API call.\n");
    printf("Here's some debug information:\n");
    printf(error.GenerateReport().c_str());
    printf("\n");
    finished = true;
}

int main()
{
    PlayFabSettings::titleId = WidenString("144");

    LoginWithCustomIDRequest request;
    request.CreateAccount = true;
    request.CustomId = "GettingStartedGuide";

    PlayFabClientAPI::LoginWithCustomID(request, OnLoginSuccess, OnLoginFail);

    while (PlayFabClientAPI::Update() != 0)
        Sleep(1);

    printf("Press enter to exit\n");
    getchar();
    return 0;
}
```

Finish and Execute
----

* Run this project
  * Debug (dropdown) -> Start Debugging
* When it loads, you should see the following text:
  * "Congratulations, you made your first successful API call!"
* At this point, you can start making other API calls, and building your game
* For a list of all available client API calls, see our documentation:
  * https://api.playfab.com/
* Happy coding!

Deconstruct the code
----

This optional last section describes each part of ConsoleApplication1.cpp in detail.

* Includes
  * The PlayFab includes get you access to the the Client APIs.  In this example, Windows.h is only used for Sleep()
* using namespaces
  * PlayFab and PlayFab::ClientModels.  The first is for API methods and general PlayFab usage, and the latter is for the objects sent to and received by Client API calls
* OnLoginSuccess, OnLoginFailure are callback functions asynchronously invoked by PlayFabClientAPI.LoginWithCustomID 
* main()
  * PlayFabSettings::titleId = WidenString("144");
    * Every PlayFab developer creates a title in Game Manager. When you publish your game, you must code that titleId into your game. This lets the client know how to access the correct data within PlayFab. For most users, just consider it a mandatory step that makes PlayFab work
  * LoginWithCustomIDRequest request; (and field initialization)
    * Most PlayFab API methods require input parameters, and those input parameters are packed into a request object
    * Every API method requires a unique request object, with a mix of optional and mandatory parameters
      * For LoginWithCustomIDRequest, there is a mandatory parameter of CustomId, which uniquely identifies a player and CreateAccount, which allows the creation of a new account with this call.
    * For login, most developers will want to use a more appropriate login method
      * See the [PlayFab Login Documentation](https://api.playfab.com/Documentation/Client#Authentication) for a list of all login methods, and input parameters.  Common choices are:
        * [LoginWithAndroidDeviceID](https://api.playfab.com/Documentation/Client/method/LoginWithAndroidDeviceID)
        * [LoginWithIOSDeviceID](https://api.playfab.com/Documentation/Client/method/LoginWithIOSDeviceID)
        * [LoginWithEmailAddress](https://api.playfab.com/Documentation/Client/method/LoginWithEmailAddress)
  * PlayFabClientAPI::LoginWithCustomID(request, OnLoginSuccess, OnLoginFail);
    * Triggers the threaded API call.  When complete, OnLoginSuccess or OnLoginFail will be invoked appropriately
  * while (PlayFabClientAPI::Update() != 0) Sleep(1);
    * Update returns the number of API calls that are in-progress
    * Update also executes the actual calls the OnLoginSuccess or OnLoginFail, once the threaded API calls are complete
      * This allows your callbacks to execute in a thread-safe manner, when your program is inherently single-threaded
      * True multi-threaded options are also available, but not demonstrated here
  * Inside of OnLoginSuccess:
    * The result object of many API success callbacks will contain the requested information
    * LoginResult contains some basic information about the player, but for most users, login is simply a mandatory step before calling other APIs
  * Inside of OnLoginFailure:
    * API calls can fail for many reasons, and you should always attempt to handle failure
    * Why API calls fail (In order of likelihood)
      * PlayFabSettings.TitleId is not set.  If you forget to set titleId to your title, then nothing will work
      * Request parameters.  If you have not provided the correct or required information for a particular API call, then it will fail.  See error.errorMessage, error.errorDetails, or error.GenerateErrorReport() for more info
      * Device connectivity issue.  Cell-phones lose/regain connectivity constantly, and so any API call at any time can fail randomly, and then work immediately after.  Going into a tunnel can disconnect you completely
      * PlayFab server issue.  As with all software, there can be issues.  See our [release notes](https://api.playfab.com/releaseNotes/) for updates
      * The internet is not 100% reliable.  Sometimes the message is corrupted or fails to reach the PlayFab server.
    * If you are having difficulty debugging an issue, and the information within the error callback is not sufficient, please visit us on our [forums](https://community.playfab.com/index.html)
