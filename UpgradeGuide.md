PlayFab WindowsSdk v0.x -> v1.x Upgrade guide
====

PlayFabSettings fields use wide-unicode strings
----

  * All of the PlayFabSettings strings also now use wide-unicode strings
  
  ```C++
  // Accessing settings in the old SDK...
  PlayFabSettings::titleId = "1234";
  // ==== becomes ====
  // WidenString() is a new utility provided within PlayFab
  PlayFabSettings::titleId = WidenString("1234");
  ```

The following functions was never meant to be public, and has been made private:
----

  * PlayFabClientApi::MultiStepClientLogin()

Optional data classes change from pointers to Boxed&lt;>
----

  * Accessing these objects should not change (Added a -> operator to Boxed&lt;>)
  * Memory management should be a little safer, if less efficient...
  * If you find any issues with your usage of pointers or Boxed objects, let us know

ExecuteCloudScriptResult.FunctionResult (and other arbitrary return values) now work(s)
----

  * Formerly, FunctionResult was a MultiTypeVar, which could only de-serialize a primitive
  * Arbitrary returns like this have been converted to web::json::value objects, which can be accessed like this:
  
    ```C++
    static void CloudHelloWorldCallback(const ExecuteCloudScriptResult& constResult, void* customData)
    {
        ExecuteCloudScriptResult result = constResult; // Some web::json::value syntax is unavailable for const objects, and there's just no way around it
        if (result.FunctionResult.is_null())
            testMessageReturn = "Cloud Decode Failure";
        else if (!result.Error.isNull())
            testMessageReturn = result.Error.mValue.Message;
        else
            testMessageReturn = ShortenString(result.FunctionResult[U("messageValue")].as_string());
    }
    ```
    
  * Note, any strings in these objects cannot be converted automatically to std::string, like other models, so you will need to use the ShortenString utility function
  * You can interact similarly with APIs with arbitrary inputs
  
    ```C++
    WriteClientPlayerEventRequest request;
    request.EventName = "ForumPostEvent";
    request.Timestamp = time(nullptr);
    request.Body[U("Subject")] = web::json::value::string(WidenString("My First Post"));
    request.Body[U("Body")] = web::json::value::string(WidenString("My awesome post."));
    client->WritePlayerEvent(request, &OnWritePlayerEvent, &SharedFailedCallback, nullptr);
    ```
    
  * Note the use of WidenString utility to place std::string into a web::json::value object

Conditional Compilation Symbols
----

* There are no longer 3 separate sdks for client, server, and admin
* They are all now combined into a single Sdk, and availability of features are controlled by the following #define symbols
  * DISABLE_PLAYFABCLIENT_API
    * Enabled by default, set this value in your project to disable client APIs
  * ENABLE_PLAYFABSERVER_API
    * Disabled by default, set this value in your project to enable server and matchmaker APIs
  * ENABLE_PLAYFABADMIN_API
    * Disabled by default, set this value in your project to enable admin APIs

New and former Dependencies
----

* If you were using RapidJson
  * You should convert to web::json::value, from the CppRestSdk.  It is fairly similar, and you can find documentation [here](https://microsoft.github.io/cpprestsdk/classweb_1_1json_1_1value.html)
* If you were using the zlib compression library
  * You will probably have to re-integrate zlib directly into your project for yourself, as our SDK no longer includes it
* If you were using CURL and/or OpenSSL
  * Just like Json, your best bet is to use web::http::client::http_client, from the CppRestSdk.  Usage is quite different, but it has all the same capabilities.
  * Otherwise, you can re-integrate CURL and OpenSSL directly into your project yourself
