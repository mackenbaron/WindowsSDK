Windows C++ SDK for PlayFab README


## 1. Overview:

This document describes the process of configuring and building the PlayFab Windows/C++ SDK.

If you have any difficulties upgrading from the earlier V0.x version of this sdk, see our [Upgrade Guide](UpgradeGuide.md) for assistance, or [contact us](https://community.playfab.com/index.html).


## 2. Prerequisites:

* Visual Studio 2013 or 2015
* Users should be very familiar with the topics covered in our [getting started guide](https://playfab.com/docs/getting-started-with-playfab/).

To connect to the PlayFab service, your machine must be running TLS v1.2 or better.

* For Windows, this means Windows 7 and above
* [Official Microsoft Documentation](https://msdn.microsoft.com/en-us/library/windows/desktop/aa380516%28v=vs.85%29.aspx)
* [Support for SSL/TLS protocols on Windows](http://blogs.msdn.com/b/kaushal/archive/2011/10/02/support-for-ssl-tls-protocols-on-windows.aspx)


## 3. Installation & Configuration Instructions:

To install client APIs into your game client:

* Open your existing Visual Studio game project, or create a new one
* Open the "Manage NuGet packages..." window for your game project
  * Search "playfab", and install the C++ package that matches your Visual Studio version


## 4. Server & Admin APIs

To install server and admin APIs, follow the instructions above, with a few extra steps:

* Find the following Visual Studio option:
  * Project Settings -> C/C++ -> Preprocessor -> Preprocessor Definitions
* For server or matchmaker apis, add ENABLE_PLAYFABSERVER_API to this field
* For admin utility APIs, add ENABLE_PLAYFABADMIN_API to this field

These APIs are suitable for private game servers and internal admin tools which are not published to customers.


## 5. WindowsSDK includes an optional Testing project

This sdk includes an optional Visual Studio Test Project (Testing) that is used by PlayFab to verify sdk features are fully functional.

Please read about the testTitleData.json format, and purpose here:
* https://github.com/PlayFab/SDKGenerator/blob/master/JenkinsConsoleUtility/testTitleData.md
The file location is read from the hard-coded loction of: TEST_TITLE_DATA_LOC in PlayFabApiTest.cpp, you can redirect this to an input that matches your file location


## 6. Troubleshooting:

For a complete list of available APIs, check out the [online documentation](http://api.playfab.com/Documentation/).

#### Contact Us
We love to hear from our developer community!
Do you have ideas on how we can make our products and services better?

Our Developer Success Team can assist with answering any questions as well as process any feedback you have about PlayFab services.

[Forums, Support and Knowledge Base](https://community.playfab.com/index.html)


## 7. Copyright and Licensing Information:

Apache License --
  Version 2.0, January 2004
  http://www.apache.org/licenses/

  Full details available within the LICENSE file.

