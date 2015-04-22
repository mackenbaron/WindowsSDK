Windows C++ SDK for PlayFab README
========
1. Overview:
----
This document describes the process of configuring and building the PlayFab C++ SDK.


2. Prerequisites:
----
* Users should be very familiar with the topics covered in our [getting started guide](https://playfab.com/getting-started).


3. Source Code & Key Repository Components:
----
This package contains three different versions of the PlayFab SDK. 

PlayFabClientSDK - This version contains only client libraries and is designed for integration with your game client
PlayFabServerSDK - Contains server and admin APIs designed to be called from your custom logic server or build process
PlayFabSDK - Contains all APIs in one SDK.


4. Installation & Configuration Instructions:
----
To integrate the PlayFab SDK into your Visual Studio project, follow these steps.

#### Linker Settings

1.

Under your project's Properties panel, open up "Configuration Properties\Linker". Add the following to the "Additional Linker Directories" line:

```
$(PlayFabRoot)\PlayFabSDK\lib\Win32;$(PlayFabRoot)\PlayFabSDK\dependencies\lib\Win32;
```
Substitute $(PlayFabRoot) for wherever you have the PlayFabSDK installed in your project. If you have a x64 target in your project, substitute x64 for Win32 in the above path.

2.

In the Properties panel, switch to "Configuration Properties\Linker\Input"

Add the following libraries to the "Additional Dependencies" line:
```
zlibd.lib;libeay32d.lib;ssleay32d.lib;libcurld.lib;PlayFabAPI.lib;ws2_32.lib;wldap32.lib;
```

#### Preprocessor settings

Open your project's Properties panel and switch to "Configuration Properties\C/C++".

Add the following paths to the line "Additional Include Directories":

```
$(PlayFabRoot)\PlayFabSDK\include;$(PlayFabRoot)\PlayFabSDK\dependencies\include;
```

Substitute $(PlayFabRoot) for wherever you have the PlayFabSDK installed in your project.

#### Done

Your project should now be ready to compile and link against the PlayFabSDK.

### Alternative approach

If you'd prefer, another approach is to add the PlayFabSDK's vcproj to your solution. This makes it easier to browse and debug the SDK's source code as you develop with it.

1. Right click your solution select "Add\Existing Project..."
2. Navigate to your PlayFabSDK location and choose PlayFabSDK\build\VC12\PlayFabAPI\PlayFabAPI.vcxproj
3. Add a dependency from your game project to the PlayFabAPI project.
4. On your project properties, make sure "Configuration Properties\Linker\Link Library Depndencies" is set to true.

You must then follow all the steps above to setup dependent libs and headers, but you would leave out "layFabAPI.lib" when you add the additional dependencies line.


5. Troubleshooting:
----
For a complete list of available APIs, check out the [online documentation](http://api.playfab.com/Documentation/).

#### Contact Us
We love to hear from our developer community! 
Do you have ideas on how we can make our products and services better? 

Our Developer Success Team can assist with answering any questions as well as process any feedback you have about PlayFab services.

[Forums, Support and Knowlage Base](https://support.playfab.com/support/home)


6. Copyright and Licensing Information:
----
  Apache License -- 
  Version 2.0, January 2004
  http://www.apache.org/licenses/

  Full details available within the LICENSE file.


7. Version History:
----
* (v1.2.4) --
