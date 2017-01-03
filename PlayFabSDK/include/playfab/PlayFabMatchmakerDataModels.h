#pragma once

#ifdef ENABLE_PLAYFABSERVER_API

#include "playfab/PlayFabBaseModel.h"

namespace PlayFab
{
    namespace MatchmakerModels
    {
        // Matchmaker Enums
        enum Region
        {
            RegionUSCentral,
            RegionUSEast,
            RegionEUWest,
            RegionSingapore,
            RegionJapan,
            RegionBrazil,
            RegionAustralia
        };

        inline void ToJsonEnum(const Region input, web::json::value& output)
        {
            if (input == RegionUSCentral) output = web::json::value(U("USCentral"));
            if (input == RegionUSEast) output = web::json::value(U("USEast"));
            if (input == RegionEUWest) output = web::json::value(U("EUWest"));
            if (input == RegionSingapore) output = web::json::value(U("Singapore"));
            if (input == RegionJapan) output = web::json::value(U("Japan"));
            if (input == RegionBrazil) output = web::json::value(U("Brazil"));
            if (input == RegionAustralia) output = web::json::value(U("Australia"));
        }
        inline void FromJsonEnum(const web::json::value& input, Region& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("USCentral")) output = RegionUSCentral;
            if (inputStr == U("USEast")) output = RegionUSEast;
            if (inputStr == U("EUWest")) output = RegionEUWest;
            if (inputStr == U("Singapore")) output = RegionSingapore;
            if (inputStr == U("Japan")) output = RegionJapan;
            if (inputStr == U("Brazil")) output = RegionBrazil;
            if (inputStr == U("Australia")) output = RegionAustralia;
        }

        // Matchmaker Classes
        struct AuthUserRequest : public PlayFabRequestCommon
        {
            std::string AuthorizationTicket;

            AuthUserRequest() :
                PlayFabRequestCommon(),
                AuthorizationTicket()
            {}

            AuthUserRequest(const AuthUserRequest& src) :
                PlayFabRequestCommon(),
                AuthorizationTicket(src.AuthorizationTicket)
            {}

            ~AuthUserRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("AuthorizationTicket")], AuthorizationTicket);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_AuthorizationTicket; ToJsonUtilS(AuthorizationTicket, each_AuthorizationTicket); output[U("AuthorizationTicket")] = each_AuthorizationTicket;
                return output;
            }
        };

        struct AuthUserResponse : public PlayFabRequestCommon
        {
            bool Authorized;
            std::string PlayFabId;

            AuthUserResponse() :
                PlayFabRequestCommon(),
                Authorized(),
                PlayFabId()
            {}

            AuthUserResponse(const AuthUserResponse& src) :
                PlayFabRequestCommon(),
                Authorized(src.Authorized),
                PlayFabId(src.PlayFabId)
            {}

            ~AuthUserResponse() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("Authorized")], Authorized);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Authorized; ToJsonUtilP(Authorized, each_Authorized); output[U("Authorized")] = each_Authorized;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct DeregisterGameRequest : public PlayFabRequestCommon
        {
            std::string LobbyId;

            DeregisterGameRequest() :
                PlayFabRequestCommon(),
                LobbyId()
            {}

            DeregisterGameRequest(const DeregisterGameRequest& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId)
            {}

            ~DeregisterGameRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("LobbyId")], LobbyId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_LobbyId; ToJsonUtilS(LobbyId, each_LobbyId); output[U("LobbyId")] = each_LobbyId;
                return output;
            }
        };

        struct DeregisterGameResponse : public PlayFabRequestCommon
        {

            DeregisterGameResponse() :
                PlayFabRequestCommon()
            {}

            DeregisterGameResponse(const DeregisterGameResponse& src) :
                PlayFabRequestCommon()
            {}

            ~DeregisterGameResponse() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct ItemInstance : public PlayFabBaseModel
        {
            std::string ItemId;
            std::string ItemInstanceId;
            std::string ItemClass;
            Boxed<time_t> PurchaseDate;
            Boxed<time_t> Expiration;
            Boxed<Int32> RemainingUses;
            Boxed<Int32> UsesIncrementedBy;
            std::string Annotation;
            std::string CatalogVersion;
            std::string BundleParent;
            std::string DisplayName;
            std::string UnitCurrency;
            Uint32 UnitPrice;
            std::list<std::string> BundleContents;
            std::map<std::string, std::string> CustomData;

            ItemInstance() :
                PlayFabBaseModel(),
                ItemId(),
                ItemInstanceId(),
                ItemClass(),
                PurchaseDate(),
                Expiration(),
                RemainingUses(),
                UsesIncrementedBy(),
                Annotation(),
                CatalogVersion(),
                BundleParent(),
                DisplayName(),
                UnitCurrency(),
                UnitPrice(),
                BundleContents(),
                CustomData()
            {}

            ItemInstance(const ItemInstance& src) :
                PlayFabBaseModel(),
                ItemId(src.ItemId),
                ItemInstanceId(src.ItemInstanceId),
                ItemClass(src.ItemClass),
                PurchaseDate(src.PurchaseDate),
                Expiration(src.Expiration),
                RemainingUses(src.RemainingUses),
                UsesIncrementedBy(src.UsesIncrementedBy),
                Annotation(src.Annotation),
                CatalogVersion(src.CatalogVersion),
                BundleParent(src.BundleParent),
                DisplayName(src.DisplayName),
                UnitCurrency(src.UnitCurrency),
                UnitPrice(src.UnitPrice),
                BundleContents(src.BundleContents),
                CustomData(src.CustomData)
            {}

            ~ItemInstance() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("ItemId")], ItemId);
                FromJsonUtilS(input[U("ItemInstanceId")], ItemInstanceId);
                FromJsonUtilS(input[U("ItemClass")], ItemClass);
                FromJsonUtilT(input[U("PurchaseDate")], PurchaseDate);
                FromJsonUtilT(input[U("Expiration")], Expiration);
                FromJsonUtilP(input[U("RemainingUses")], RemainingUses);
                FromJsonUtilP(input[U("UsesIncrementedBy")], UsesIncrementedBy);
                FromJsonUtilS(input[U("Annotation")], Annotation);
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("BundleParent")], BundleParent);
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
                FromJsonUtilS(input[U("UnitCurrency")], UnitCurrency);
                FromJsonUtilP(input[U("UnitPrice")], UnitPrice);
                FromJsonUtilS(input[U("BundleContents")], BundleContents);
                FromJsonUtilS(input[U("CustomData")], CustomData);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ItemId; ToJsonUtilS(ItemId, each_ItemId); output[U("ItemId")] = each_ItemId;
                web::json::value each_ItemInstanceId; ToJsonUtilS(ItemInstanceId, each_ItemInstanceId); output[U("ItemInstanceId")] = each_ItemInstanceId;
                web::json::value each_ItemClass; ToJsonUtilS(ItemClass, each_ItemClass); output[U("ItemClass")] = each_ItemClass;
                web::json::value each_PurchaseDate; ToJsonUtilT(PurchaseDate, each_PurchaseDate); output[U("PurchaseDate")] = each_PurchaseDate;
                web::json::value each_Expiration; ToJsonUtilT(Expiration, each_Expiration); output[U("Expiration")] = each_Expiration;
                web::json::value each_RemainingUses; ToJsonUtilP(RemainingUses, each_RemainingUses); output[U("RemainingUses")] = each_RemainingUses;
                web::json::value each_UsesIncrementedBy; ToJsonUtilP(UsesIncrementedBy, each_UsesIncrementedBy); output[U("UsesIncrementedBy")] = each_UsesIncrementedBy;
                web::json::value each_Annotation; ToJsonUtilS(Annotation, each_Annotation); output[U("Annotation")] = each_Annotation;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_BundleParent; ToJsonUtilS(BundleParent, each_BundleParent); output[U("BundleParent")] = each_BundleParent;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                web::json::value each_UnitCurrency; ToJsonUtilS(UnitCurrency, each_UnitCurrency); output[U("UnitCurrency")] = each_UnitCurrency;
                web::json::value each_UnitPrice; ToJsonUtilP(UnitPrice, each_UnitPrice); output[U("UnitPrice")] = each_UnitPrice;
                web::json::value each_BundleContents; ToJsonUtilS(BundleContents, each_BundleContents); output[U("BundleContents")] = each_BundleContents;
                web::json::value each_CustomData; ToJsonUtilS(CustomData, each_CustomData); output[U("CustomData")] = each_CustomData;
                return output;
            }
        };

        struct PlayerJoinedRequest : public PlayFabRequestCommon
        {
            std::string LobbyId;
            std::string PlayFabId;

            PlayerJoinedRequest() :
                PlayFabRequestCommon(),
                LobbyId(),
                PlayFabId()
            {}

            PlayerJoinedRequest(const PlayerJoinedRequest& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId),
                PlayFabId(src.PlayFabId)
            {}

            ~PlayerJoinedRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("LobbyId")], LobbyId);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_LobbyId; ToJsonUtilS(LobbyId, each_LobbyId); output[U("LobbyId")] = each_LobbyId;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct PlayerJoinedResponse : public PlayFabRequestCommon
        {

            PlayerJoinedResponse() :
                PlayFabRequestCommon()
            {}

            PlayerJoinedResponse(const PlayerJoinedResponse& src) :
                PlayFabRequestCommon()
            {}

            ~PlayerJoinedResponse() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct PlayerLeftRequest : public PlayFabRequestCommon
        {
            std::string LobbyId;
            std::string PlayFabId;

            PlayerLeftRequest() :
                PlayFabRequestCommon(),
                LobbyId(),
                PlayFabId()
            {}

            PlayerLeftRequest(const PlayerLeftRequest& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId),
                PlayFabId(src.PlayFabId)
            {}

            ~PlayerLeftRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("LobbyId")], LobbyId);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_LobbyId; ToJsonUtilS(LobbyId, each_LobbyId); output[U("LobbyId")] = each_LobbyId;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct PlayerLeftResponse : public PlayFabRequestCommon
        {

            PlayerLeftResponse() :
                PlayFabRequestCommon()
            {}

            PlayerLeftResponse(const PlayerLeftResponse& src) :
                PlayFabRequestCommon()
            {}

            ~PlayerLeftResponse() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct RegisterGameRequest : public PlayFabRequestCommon
        {
            std::string ServerHost;
            std::string ServerPort;
            std::string Build;
            Region pfRegion;
            std::string GameMode;
            std::map<std::string, std::string> Tags;

            RegisterGameRequest() :
                PlayFabRequestCommon(),
                ServerHost(),
                ServerPort(),
                Build(),
                pfRegion(),
                GameMode(),
                Tags()
            {}

            RegisterGameRequest(const RegisterGameRequest& src) :
                PlayFabRequestCommon(),
                ServerHost(src.ServerHost),
                ServerPort(src.ServerPort),
                Build(src.Build),
                pfRegion(src.pfRegion),
                GameMode(src.GameMode),
                Tags(src.Tags)
            {}

            ~RegisterGameRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("ServerHost")], ServerHost);
                FromJsonUtilS(input[U("ServerPort")], ServerPort);
                FromJsonUtilS(input[U("Build")], Build);
                FromJsonEnum(input[U("pfRegion")], pfRegion);
                FromJsonUtilS(input[U("GameMode")], GameMode);
                FromJsonUtilS(input[U("Tags")], Tags);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ServerHost; ToJsonUtilS(ServerHost, each_ServerHost); output[U("ServerHost")] = each_ServerHost;
                web::json::value each_ServerPort; ToJsonUtilS(ServerPort, each_ServerPort); output[U("ServerPort")] = each_ServerPort;
                web::json::value each_Build; ToJsonUtilS(Build, each_Build); output[U("Build")] = each_Build;
                web::json::value each_pfRegion; ToJsonEnum(pfRegion, each_pfRegion); output[U("Region")] = each_pfRegion;
                web::json::value each_GameMode; ToJsonUtilS(GameMode, each_GameMode); output[U("GameMode")] = each_GameMode;
                web::json::value each_Tags; ToJsonUtilS(Tags, each_Tags); output[U("Tags")] = each_Tags;
                return output;
            }
        };

        struct RegisterGameResponse : public PlayFabRequestCommon
        {
            std::string LobbyId;

            RegisterGameResponse() :
                PlayFabRequestCommon(),
                LobbyId()
            {}

            RegisterGameResponse(const RegisterGameResponse& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId)
            {}

            ~RegisterGameResponse() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("LobbyId")], LobbyId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_LobbyId; ToJsonUtilS(LobbyId, each_LobbyId); output[U("LobbyId")] = each_LobbyId;
                return output;
            }
        };

        struct StartGameRequest : public PlayFabRequestCommon
        {
            std::string Build;
            Region pfRegion;
            std::string GameMode;
            std::string CustomCommandLineData;
            std::string ExternalMatchmakerEventEndpoint;

            StartGameRequest() :
                PlayFabRequestCommon(),
                Build(),
                pfRegion(),
                GameMode(),
                CustomCommandLineData(),
                ExternalMatchmakerEventEndpoint()
            {}

            StartGameRequest(const StartGameRequest& src) :
                PlayFabRequestCommon(),
                Build(src.Build),
                pfRegion(src.pfRegion),
                GameMode(src.GameMode),
                CustomCommandLineData(src.CustomCommandLineData),
                ExternalMatchmakerEventEndpoint(src.ExternalMatchmakerEventEndpoint)
            {}

            ~StartGameRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Build")], Build);
                FromJsonEnum(input[U("pfRegion")], pfRegion);
                FromJsonUtilS(input[U("GameMode")], GameMode);
                FromJsonUtilS(input[U("CustomCommandLineData")], CustomCommandLineData);
                FromJsonUtilS(input[U("ExternalMatchmakerEventEndpoint")], ExternalMatchmakerEventEndpoint);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Build; ToJsonUtilS(Build, each_Build); output[U("Build")] = each_Build;
                web::json::value each_pfRegion; ToJsonEnum(pfRegion, each_pfRegion); output[U("Region")] = each_pfRegion;
                web::json::value each_GameMode; ToJsonUtilS(GameMode, each_GameMode); output[U("GameMode")] = each_GameMode;
                web::json::value each_CustomCommandLineData; ToJsonUtilS(CustomCommandLineData, each_CustomCommandLineData); output[U("CustomCommandLineData")] = each_CustomCommandLineData;
                web::json::value each_ExternalMatchmakerEventEndpoint; ToJsonUtilS(ExternalMatchmakerEventEndpoint, each_ExternalMatchmakerEventEndpoint); output[U("ExternalMatchmakerEventEndpoint")] = each_ExternalMatchmakerEventEndpoint;
                return output;
            }
        };

        struct StartGameResponse : public PlayFabRequestCommon
        {
            std::string GameID;
            std::string ServerHostname;
            Uint32 ServerPort;

            StartGameResponse() :
                PlayFabRequestCommon(),
                GameID(),
                ServerHostname(),
                ServerPort()
            {}

            StartGameResponse(const StartGameResponse& src) :
                PlayFabRequestCommon(),
                GameID(src.GameID),
                ServerHostname(src.ServerHostname),
                ServerPort(src.ServerPort)
            {}

            ~StartGameResponse() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("GameID")], GameID);
                FromJsonUtilS(input[U("ServerHostname")], ServerHostname);
                FromJsonUtilP(input[U("ServerPort")], ServerPort);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_GameID; ToJsonUtilS(GameID, each_GameID); output[U("GameID")] = each_GameID;
                web::json::value each_ServerHostname; ToJsonUtilS(ServerHostname, each_ServerHostname); output[U("ServerHostname")] = each_ServerHostname;
                web::json::value each_ServerPort; ToJsonUtilP(ServerPort, each_ServerPort); output[U("ServerPort")] = each_ServerPort;
                return output;
            }
        };

        struct UserInfoRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            Int32 MinCatalogVersion;

            UserInfoRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                MinCatalogVersion()
            {}

            UserInfoRequest(const UserInfoRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                MinCatalogVersion(src.MinCatalogVersion)
            {}

            ~UserInfoRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilP(input[U("MinCatalogVersion")], MinCatalogVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_MinCatalogVersion; ToJsonUtilP(MinCatalogVersion, each_MinCatalogVersion); output[U("MinCatalogVersion")] = each_MinCatalogVersion;
                return output;
            }
        };

        struct VirtualCurrencyRechargeTime : public PlayFabBaseModel
        {
            Int32 SecondsToRecharge;
            time_t RechargeTime;
            Int32 RechargeMax;

            VirtualCurrencyRechargeTime() :
                PlayFabBaseModel(),
                SecondsToRecharge(),
                RechargeTime(),
                RechargeMax()
            {}

            VirtualCurrencyRechargeTime(const VirtualCurrencyRechargeTime& src) :
                PlayFabBaseModel(),
                SecondsToRecharge(src.SecondsToRecharge),
                RechargeTime(src.RechargeTime),
                RechargeMax(src.RechargeMax)
            {}

            ~VirtualCurrencyRechargeTime() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("SecondsToRecharge")], SecondsToRecharge);
                FromJsonUtilT(input[U("RechargeTime")], RechargeTime);
                FromJsonUtilP(input[U("RechargeMax")], RechargeMax);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SecondsToRecharge; ToJsonUtilP(SecondsToRecharge, each_SecondsToRecharge); output[U("SecondsToRecharge")] = each_SecondsToRecharge;
                web::json::value each_RechargeTime; ToJsonUtilT(RechargeTime, each_RechargeTime); output[U("RechargeTime")] = each_RechargeTime;
                web::json::value each_RechargeMax; ToJsonUtilP(RechargeMax, each_RechargeMax); output[U("RechargeMax")] = each_RechargeMax;
                return output;
            }
        };

        struct UserInfoResponse : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string Username;
            std::string TitleDisplayName;
            std::list<ItemInstance> Inventory;
            std::map<std::string, Int32> VirtualCurrency;
            std::map<std::string, VirtualCurrencyRechargeTime> VirtualCurrencyRechargeTimes;
            bool IsDeveloper;
            std::string SteamId;

            UserInfoResponse() :
                PlayFabRequestCommon(),
                PlayFabId(),
                Username(),
                TitleDisplayName(),
                Inventory(),
                VirtualCurrency(),
                VirtualCurrencyRechargeTimes(),
                IsDeveloper(),
                SteamId()
            {}

            UserInfoResponse(const UserInfoResponse& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                Username(src.Username),
                TitleDisplayName(src.TitleDisplayName),
                Inventory(src.Inventory),
                VirtualCurrency(src.VirtualCurrency),
                VirtualCurrencyRechargeTimes(src.VirtualCurrencyRechargeTimes),
                IsDeveloper(src.IsDeveloper),
                SteamId(src.SteamId)
            {}

            ~UserInfoResponse() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("Username")], Username);
                FromJsonUtilS(input[U("TitleDisplayName")], TitleDisplayName);
                FromJsonUtilO(input[U("Inventory")], Inventory);
                FromJsonUtilP(input[U("VirtualCurrency")], VirtualCurrency);
                FromJsonUtilO(input[U("VirtualCurrencyRechargeTimes")], VirtualCurrencyRechargeTimes);
                FromJsonUtilP(input[U("IsDeveloper")], IsDeveloper);
                FromJsonUtilS(input[U("SteamId")], SteamId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Username; ToJsonUtilS(Username, each_Username); output[U("Username")] = each_Username;
                web::json::value each_TitleDisplayName; ToJsonUtilS(TitleDisplayName, each_TitleDisplayName); output[U("TitleDisplayName")] = each_TitleDisplayName;
                web::json::value each_Inventory; ToJsonUtilO(Inventory, each_Inventory); output[U("Inventory")] = each_Inventory;
                web::json::value each_VirtualCurrency; ToJsonUtilP(VirtualCurrency, each_VirtualCurrency); output[U("VirtualCurrency")] = each_VirtualCurrency;
                web::json::value each_VirtualCurrencyRechargeTimes; ToJsonUtilO(VirtualCurrencyRechargeTimes, each_VirtualCurrencyRechargeTimes); output[U("VirtualCurrencyRechargeTimes")] = each_VirtualCurrencyRechargeTimes;
                web::json::value each_IsDeveloper; ToJsonUtilP(IsDeveloper, each_IsDeveloper); output[U("IsDeveloper")] = each_IsDeveloper;
                web::json::value each_SteamId; ToJsonUtilS(SteamId, each_SteamId); output[U("SteamId")] = each_SteamId;
                return output;
            }
        };

    }
}

#endif
