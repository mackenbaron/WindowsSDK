#pragma once

#ifdef ENABLE_PLAYFABSERVER_API

#include "playfab/PlayFabBaseModel.h"

namespace PlayFab
{
    namespace ServerModels
    {
        // Server Enums
        enum CloudScriptRevisionOption
        {
            CloudScriptRevisionOptionLive,
            CloudScriptRevisionOptionLatest,
            CloudScriptRevisionOptionSpecific
        };

        inline void ToJsonEnum(const CloudScriptRevisionOption input, web::json::value& output)
        {
            if (input == CloudScriptRevisionOptionLive) output = web::json::value(U("Live"));
            if (input == CloudScriptRevisionOptionLatest) output = web::json::value(U("Latest"));
            if (input == CloudScriptRevisionOptionSpecific) output = web::json::value(U("Specific"));
        }
        inline void FromJsonEnum(const web::json::value& input, CloudScriptRevisionOption& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Live")) output = CloudScriptRevisionOptionLive;
            if (inputStr == U("Latest")) output = CloudScriptRevisionOptionLatest;
            if (inputStr == U("Specific")) output = CloudScriptRevisionOptionSpecific;
        }

        enum ContinentCode
        {
            ContinentCodeAF,
            ContinentCodeAN,
            ContinentCodeAS,
            ContinentCodeEU,
            ContinentCodeNA,
            ContinentCodeOC,
            ContinentCodeSA
        };

        inline void ToJsonEnum(const ContinentCode input, web::json::value& output)
        {
            if (input == ContinentCodeAF) output = web::json::value(U("AF"));
            if (input == ContinentCodeAN) output = web::json::value(U("AN"));
            if (input == ContinentCodeAS) output = web::json::value(U("AS"));
            if (input == ContinentCodeEU) output = web::json::value(U("EU"));
            if (input == ContinentCodeNA) output = web::json::value(U("NA"));
            if (input == ContinentCodeOC) output = web::json::value(U("OC"));
            if (input == ContinentCodeSA) output = web::json::value(U("SA"));
        }
        inline void FromJsonEnum(const web::json::value& input, ContinentCode& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("AF")) output = ContinentCodeAF;
            if (inputStr == U("AN")) output = ContinentCodeAN;
            if (inputStr == U("AS")) output = ContinentCodeAS;
            if (inputStr == U("EU")) output = ContinentCodeEU;
            if (inputStr == U("NA")) output = ContinentCodeNA;
            if (inputStr == U("OC")) output = ContinentCodeOC;
            if (inputStr == U("SA")) output = ContinentCodeSA;
        }

        enum CountryCode
        {
            CountryCodeAF,
            CountryCodeAX,
            CountryCodeAL,
            CountryCodeDZ,
            CountryCodeAS,
            CountryCodeAD,
            CountryCodeAO,
            CountryCodeAI,
            CountryCodeAQ,
            CountryCodeAG,
            CountryCodeAR,
            CountryCodeAM,
            CountryCodeAW,
            CountryCodeAU,
            CountryCodeAT,
            CountryCodeAZ,
            CountryCodeBS,
            CountryCodeBH,
            CountryCodeBD,
            CountryCodeBB,
            CountryCodeBY,
            CountryCodeBE,
            CountryCodeBZ,
            CountryCodeBJ,
            CountryCodeBM,
            CountryCodeBT,
            CountryCodeBO,
            CountryCodeBQ,
            CountryCodeBA,
            CountryCodeBW,
            CountryCodeBV,
            CountryCodeBR,
            CountryCodeIO,
            CountryCodeBN,
            CountryCodeBG,
            CountryCodeBF,
            CountryCodeBI,
            CountryCodeKH,
            CountryCodeCM,
            CountryCodeCA,
            CountryCodeCV,
            CountryCodeKY,
            CountryCodeCF,
            CountryCodeTD,
            CountryCodeCL,
            CountryCodeCN,
            CountryCodeCX,
            CountryCodeCC,
            CountryCodeCO,
            CountryCodeKM,
            CountryCodeCG,
            CountryCodeCD,
            CountryCodeCK,
            CountryCodeCR,
            CountryCodeCI,
            CountryCodeHR,
            CountryCodeCU,
            CountryCodeCW,
            CountryCodeCY,
            CountryCodeCZ,
            CountryCodeDK,
            CountryCodeDJ,
            CountryCodeDM,
            CountryCodeDO,
            CountryCodeEC,
            CountryCodeEG,
            CountryCodeSV,
            CountryCodeGQ,
            CountryCodeER,
            CountryCodeEE,
            CountryCodeET,
            CountryCodeFK,
            CountryCodeFO,
            CountryCodeFJ,
            CountryCodeFI,
            CountryCodeFR,
            CountryCodeGF,
            CountryCodePF,
            CountryCodeTF,
            CountryCodeGA,
            CountryCodeGM,
            CountryCodeGE,
            CountryCodeDE,
            CountryCodeGH,
            CountryCodeGI,
            CountryCodeGR,
            CountryCodeGL,
            CountryCodeGD,
            CountryCodeGP,
            CountryCodeGU,
            CountryCodeGT,
            CountryCodeGG,
            CountryCodeGN,
            CountryCodeGW,
            CountryCodeGY,
            CountryCodeHT,
            CountryCodeHM,
            CountryCodeVA,
            CountryCodeHN,
            CountryCodeHK,
            CountryCodeHU,
            CountryCodeIS,
            CountryCodeIN,
            CountryCodeID,
            CountryCodeIR,
            CountryCodeIQ,
            CountryCodeIE,
            CountryCodeIM,
            CountryCodeIL,
            CountryCodeIT,
            CountryCodeJM,
            CountryCodeJP,
            CountryCodeJE,
            CountryCodeJO,
            CountryCodeKZ,
            CountryCodeKE,
            CountryCodeKI,
            CountryCodeKP,
            CountryCodeKR,
            CountryCodeKW,
            CountryCodeKG,
            CountryCodeLA,
            CountryCodeLV,
            CountryCodeLB,
            CountryCodeLS,
            CountryCodeLR,
            CountryCodeLY,
            CountryCodeLI,
            CountryCodeLT,
            CountryCodeLU,
            CountryCodeMO,
            CountryCodeMK,
            CountryCodeMG,
            CountryCodeMW,
            CountryCodeMY,
            CountryCodeMV,
            CountryCodeML,
            CountryCodeMT,
            CountryCodeMH,
            CountryCodeMQ,
            CountryCodeMR,
            CountryCodeMU,
            CountryCodeYT,
            CountryCodeMX,
            CountryCodeFM,
            CountryCodeMD,
            CountryCodeMC,
            CountryCodeMN,
            CountryCodeME,
            CountryCodeMS,
            CountryCodeMA,
            CountryCodeMZ,
            CountryCodeMM,
            CountryCodeNA,
            CountryCodeNR,
            CountryCodeNP,
            CountryCodeNL,
            CountryCodeNC,
            CountryCodeNZ,
            CountryCodeNI,
            CountryCodeNE,
            CountryCodeNG,
            CountryCodeNU,
            CountryCodeNF,
            CountryCodeMP,
            CountryCodeNO,
            CountryCodeOM,
            CountryCodePK,
            CountryCodePW,
            CountryCodePS,
            CountryCodePA,
            CountryCodePG,
            CountryCodePY,
            CountryCodePE,
            CountryCodePH,
            CountryCodePN,
            CountryCodePL,
            CountryCodePT,
            CountryCodePR,
            CountryCodeQA,
            CountryCodeRE,
            CountryCodeRO,
            CountryCodeRU,
            CountryCodeRW,
            CountryCodeBL,
            CountryCodeSH,
            CountryCodeKN,
            CountryCodeLC,
            CountryCodeMF,
            CountryCodePM,
            CountryCodeVC,
            CountryCodeWS,
            CountryCodeSM,
            CountryCodeST,
            CountryCodeSA,
            CountryCodeSN,
            CountryCodeRS,
            CountryCodeSC,
            CountryCodeSL,
            CountryCodeSG,
            CountryCodeSX,
            CountryCodeSK,
            CountryCodeSI,
            CountryCodeSB,
            CountryCodeSO,
            CountryCodeZA,
            CountryCodeGS,
            CountryCodeSS,
            CountryCodeES,
            CountryCodeLK,
            CountryCodeSD,
            CountryCodeSR,
            CountryCodeSJ,
            CountryCodeSZ,
            CountryCodeSE,
            CountryCodeCH,
            CountryCodeSY,
            CountryCodeTW,
            CountryCodeTJ,
            CountryCodeTZ,
            CountryCodeTH,
            CountryCodeTL,
            CountryCodeTG,
            CountryCodeTK,
            CountryCodeTO,
            CountryCodeTT,
            CountryCodeTN,
            CountryCodeTR,
            CountryCodeTM,
            CountryCodeTC,
            CountryCodeTV,
            CountryCodeUG,
            CountryCodeUA,
            CountryCodeAE,
            CountryCodeGB,
            CountryCodeUS,
            CountryCodeUM,
            CountryCodeUY,
            CountryCodeUZ,
            CountryCodeVU,
            CountryCodeVE,
            CountryCodeVN,
            CountryCodeVG,
            CountryCodeVI,
            CountryCodeWF,
            CountryCodeEH,
            CountryCodeYE,
            CountryCodeZM,
            CountryCodeZW
        };

        inline void ToJsonEnum(const CountryCode input, web::json::value& output)
        {
            if (input == CountryCodeAF) output = web::json::value(U("AF"));
            if (input == CountryCodeAX) output = web::json::value(U("AX"));
            if (input == CountryCodeAL) output = web::json::value(U("AL"));
            if (input == CountryCodeDZ) output = web::json::value(U("DZ"));
            if (input == CountryCodeAS) output = web::json::value(U("AS"));
            if (input == CountryCodeAD) output = web::json::value(U("AD"));
            if (input == CountryCodeAO) output = web::json::value(U("AO"));
            if (input == CountryCodeAI) output = web::json::value(U("AI"));
            if (input == CountryCodeAQ) output = web::json::value(U("AQ"));
            if (input == CountryCodeAG) output = web::json::value(U("AG"));
            if (input == CountryCodeAR) output = web::json::value(U("AR"));
            if (input == CountryCodeAM) output = web::json::value(U("AM"));
            if (input == CountryCodeAW) output = web::json::value(U("AW"));
            if (input == CountryCodeAU) output = web::json::value(U("AU"));
            if (input == CountryCodeAT) output = web::json::value(U("AT"));
            if (input == CountryCodeAZ) output = web::json::value(U("AZ"));
            if (input == CountryCodeBS) output = web::json::value(U("BS"));
            if (input == CountryCodeBH) output = web::json::value(U("BH"));
            if (input == CountryCodeBD) output = web::json::value(U("BD"));
            if (input == CountryCodeBB) output = web::json::value(U("BB"));
            if (input == CountryCodeBY) output = web::json::value(U("BY"));
            if (input == CountryCodeBE) output = web::json::value(U("BE"));
            if (input == CountryCodeBZ) output = web::json::value(U("BZ"));
            if (input == CountryCodeBJ) output = web::json::value(U("BJ"));
            if (input == CountryCodeBM) output = web::json::value(U("BM"));
            if (input == CountryCodeBT) output = web::json::value(U("BT"));
            if (input == CountryCodeBO) output = web::json::value(U("BO"));
            if (input == CountryCodeBQ) output = web::json::value(U("BQ"));
            if (input == CountryCodeBA) output = web::json::value(U("BA"));
            if (input == CountryCodeBW) output = web::json::value(U("BW"));
            if (input == CountryCodeBV) output = web::json::value(U("BV"));
            if (input == CountryCodeBR) output = web::json::value(U("BR"));
            if (input == CountryCodeIO) output = web::json::value(U("IO"));
            if (input == CountryCodeBN) output = web::json::value(U("BN"));
            if (input == CountryCodeBG) output = web::json::value(U("BG"));
            if (input == CountryCodeBF) output = web::json::value(U("BF"));
            if (input == CountryCodeBI) output = web::json::value(U("BI"));
            if (input == CountryCodeKH) output = web::json::value(U("KH"));
            if (input == CountryCodeCM) output = web::json::value(U("CM"));
            if (input == CountryCodeCA) output = web::json::value(U("CA"));
            if (input == CountryCodeCV) output = web::json::value(U("CV"));
            if (input == CountryCodeKY) output = web::json::value(U("KY"));
            if (input == CountryCodeCF) output = web::json::value(U("CF"));
            if (input == CountryCodeTD) output = web::json::value(U("TD"));
            if (input == CountryCodeCL) output = web::json::value(U("CL"));
            if (input == CountryCodeCN) output = web::json::value(U("CN"));
            if (input == CountryCodeCX) output = web::json::value(U("CX"));
            if (input == CountryCodeCC) output = web::json::value(U("CC"));
            if (input == CountryCodeCO) output = web::json::value(U("CO"));
            if (input == CountryCodeKM) output = web::json::value(U("KM"));
            if (input == CountryCodeCG) output = web::json::value(U("CG"));
            if (input == CountryCodeCD) output = web::json::value(U("CD"));
            if (input == CountryCodeCK) output = web::json::value(U("CK"));
            if (input == CountryCodeCR) output = web::json::value(U("CR"));
            if (input == CountryCodeCI) output = web::json::value(U("CI"));
            if (input == CountryCodeHR) output = web::json::value(U("HR"));
            if (input == CountryCodeCU) output = web::json::value(U("CU"));
            if (input == CountryCodeCW) output = web::json::value(U("CW"));
            if (input == CountryCodeCY) output = web::json::value(U("CY"));
            if (input == CountryCodeCZ) output = web::json::value(U("CZ"));
            if (input == CountryCodeDK) output = web::json::value(U("DK"));
            if (input == CountryCodeDJ) output = web::json::value(U("DJ"));
            if (input == CountryCodeDM) output = web::json::value(U("DM"));
            if (input == CountryCodeDO) output = web::json::value(U("DO"));
            if (input == CountryCodeEC) output = web::json::value(U("EC"));
            if (input == CountryCodeEG) output = web::json::value(U("EG"));
            if (input == CountryCodeSV) output = web::json::value(U("SV"));
            if (input == CountryCodeGQ) output = web::json::value(U("GQ"));
            if (input == CountryCodeER) output = web::json::value(U("ER"));
            if (input == CountryCodeEE) output = web::json::value(U("EE"));
            if (input == CountryCodeET) output = web::json::value(U("ET"));
            if (input == CountryCodeFK) output = web::json::value(U("FK"));
            if (input == CountryCodeFO) output = web::json::value(U("FO"));
            if (input == CountryCodeFJ) output = web::json::value(U("FJ"));
            if (input == CountryCodeFI) output = web::json::value(U("FI"));
            if (input == CountryCodeFR) output = web::json::value(U("FR"));
            if (input == CountryCodeGF) output = web::json::value(U("GF"));
            if (input == CountryCodePF) output = web::json::value(U("PF"));
            if (input == CountryCodeTF) output = web::json::value(U("TF"));
            if (input == CountryCodeGA) output = web::json::value(U("GA"));
            if (input == CountryCodeGM) output = web::json::value(U("GM"));
            if (input == CountryCodeGE) output = web::json::value(U("GE"));
            if (input == CountryCodeDE) output = web::json::value(U("DE"));
            if (input == CountryCodeGH) output = web::json::value(U("GH"));
            if (input == CountryCodeGI) output = web::json::value(U("GI"));
            if (input == CountryCodeGR) output = web::json::value(U("GR"));
            if (input == CountryCodeGL) output = web::json::value(U("GL"));
            if (input == CountryCodeGD) output = web::json::value(U("GD"));
            if (input == CountryCodeGP) output = web::json::value(U("GP"));
            if (input == CountryCodeGU) output = web::json::value(U("GU"));
            if (input == CountryCodeGT) output = web::json::value(U("GT"));
            if (input == CountryCodeGG) output = web::json::value(U("GG"));
            if (input == CountryCodeGN) output = web::json::value(U("GN"));
            if (input == CountryCodeGW) output = web::json::value(U("GW"));
            if (input == CountryCodeGY) output = web::json::value(U("GY"));
            if (input == CountryCodeHT) output = web::json::value(U("HT"));
            if (input == CountryCodeHM) output = web::json::value(U("HM"));
            if (input == CountryCodeVA) output = web::json::value(U("VA"));
            if (input == CountryCodeHN) output = web::json::value(U("HN"));
            if (input == CountryCodeHK) output = web::json::value(U("HK"));
            if (input == CountryCodeHU) output = web::json::value(U("HU"));
            if (input == CountryCodeIS) output = web::json::value(U("IS"));
            if (input == CountryCodeIN) output = web::json::value(U("IN"));
            if (input == CountryCodeID) output = web::json::value(U("ID"));
            if (input == CountryCodeIR) output = web::json::value(U("IR"));
            if (input == CountryCodeIQ) output = web::json::value(U("IQ"));
            if (input == CountryCodeIE) output = web::json::value(U("IE"));
            if (input == CountryCodeIM) output = web::json::value(U("IM"));
            if (input == CountryCodeIL) output = web::json::value(U("IL"));
            if (input == CountryCodeIT) output = web::json::value(U("IT"));
            if (input == CountryCodeJM) output = web::json::value(U("JM"));
            if (input == CountryCodeJP) output = web::json::value(U("JP"));
            if (input == CountryCodeJE) output = web::json::value(U("JE"));
            if (input == CountryCodeJO) output = web::json::value(U("JO"));
            if (input == CountryCodeKZ) output = web::json::value(U("KZ"));
            if (input == CountryCodeKE) output = web::json::value(U("KE"));
            if (input == CountryCodeKI) output = web::json::value(U("KI"));
            if (input == CountryCodeKP) output = web::json::value(U("KP"));
            if (input == CountryCodeKR) output = web::json::value(U("KR"));
            if (input == CountryCodeKW) output = web::json::value(U("KW"));
            if (input == CountryCodeKG) output = web::json::value(U("KG"));
            if (input == CountryCodeLA) output = web::json::value(U("LA"));
            if (input == CountryCodeLV) output = web::json::value(U("LV"));
            if (input == CountryCodeLB) output = web::json::value(U("LB"));
            if (input == CountryCodeLS) output = web::json::value(U("LS"));
            if (input == CountryCodeLR) output = web::json::value(U("LR"));
            if (input == CountryCodeLY) output = web::json::value(U("LY"));
            if (input == CountryCodeLI) output = web::json::value(U("LI"));
            if (input == CountryCodeLT) output = web::json::value(U("LT"));
            if (input == CountryCodeLU) output = web::json::value(U("LU"));
            if (input == CountryCodeMO) output = web::json::value(U("MO"));
            if (input == CountryCodeMK) output = web::json::value(U("MK"));
            if (input == CountryCodeMG) output = web::json::value(U("MG"));
            if (input == CountryCodeMW) output = web::json::value(U("MW"));
            if (input == CountryCodeMY) output = web::json::value(U("MY"));
            if (input == CountryCodeMV) output = web::json::value(U("MV"));
            if (input == CountryCodeML) output = web::json::value(U("ML"));
            if (input == CountryCodeMT) output = web::json::value(U("MT"));
            if (input == CountryCodeMH) output = web::json::value(U("MH"));
            if (input == CountryCodeMQ) output = web::json::value(U("MQ"));
            if (input == CountryCodeMR) output = web::json::value(U("MR"));
            if (input == CountryCodeMU) output = web::json::value(U("MU"));
            if (input == CountryCodeYT) output = web::json::value(U("YT"));
            if (input == CountryCodeMX) output = web::json::value(U("MX"));
            if (input == CountryCodeFM) output = web::json::value(U("FM"));
            if (input == CountryCodeMD) output = web::json::value(U("MD"));
            if (input == CountryCodeMC) output = web::json::value(U("MC"));
            if (input == CountryCodeMN) output = web::json::value(U("MN"));
            if (input == CountryCodeME) output = web::json::value(U("ME"));
            if (input == CountryCodeMS) output = web::json::value(U("MS"));
            if (input == CountryCodeMA) output = web::json::value(U("MA"));
            if (input == CountryCodeMZ) output = web::json::value(U("MZ"));
            if (input == CountryCodeMM) output = web::json::value(U("MM"));
            if (input == CountryCodeNA) output = web::json::value(U("NA"));
            if (input == CountryCodeNR) output = web::json::value(U("NR"));
            if (input == CountryCodeNP) output = web::json::value(U("NP"));
            if (input == CountryCodeNL) output = web::json::value(U("NL"));
            if (input == CountryCodeNC) output = web::json::value(U("NC"));
            if (input == CountryCodeNZ) output = web::json::value(U("NZ"));
            if (input == CountryCodeNI) output = web::json::value(U("NI"));
            if (input == CountryCodeNE) output = web::json::value(U("NE"));
            if (input == CountryCodeNG) output = web::json::value(U("NG"));
            if (input == CountryCodeNU) output = web::json::value(U("NU"));
            if (input == CountryCodeNF) output = web::json::value(U("NF"));
            if (input == CountryCodeMP) output = web::json::value(U("MP"));
            if (input == CountryCodeNO) output = web::json::value(U("NO"));
            if (input == CountryCodeOM) output = web::json::value(U("OM"));
            if (input == CountryCodePK) output = web::json::value(U("PK"));
            if (input == CountryCodePW) output = web::json::value(U("PW"));
            if (input == CountryCodePS) output = web::json::value(U("PS"));
            if (input == CountryCodePA) output = web::json::value(U("PA"));
            if (input == CountryCodePG) output = web::json::value(U("PG"));
            if (input == CountryCodePY) output = web::json::value(U("PY"));
            if (input == CountryCodePE) output = web::json::value(U("PE"));
            if (input == CountryCodePH) output = web::json::value(U("PH"));
            if (input == CountryCodePN) output = web::json::value(U("PN"));
            if (input == CountryCodePL) output = web::json::value(U("PL"));
            if (input == CountryCodePT) output = web::json::value(U("PT"));
            if (input == CountryCodePR) output = web::json::value(U("PR"));
            if (input == CountryCodeQA) output = web::json::value(U("QA"));
            if (input == CountryCodeRE) output = web::json::value(U("RE"));
            if (input == CountryCodeRO) output = web::json::value(U("RO"));
            if (input == CountryCodeRU) output = web::json::value(U("RU"));
            if (input == CountryCodeRW) output = web::json::value(U("RW"));
            if (input == CountryCodeBL) output = web::json::value(U("BL"));
            if (input == CountryCodeSH) output = web::json::value(U("SH"));
            if (input == CountryCodeKN) output = web::json::value(U("KN"));
            if (input == CountryCodeLC) output = web::json::value(U("LC"));
            if (input == CountryCodeMF) output = web::json::value(U("MF"));
            if (input == CountryCodePM) output = web::json::value(U("PM"));
            if (input == CountryCodeVC) output = web::json::value(U("VC"));
            if (input == CountryCodeWS) output = web::json::value(U("WS"));
            if (input == CountryCodeSM) output = web::json::value(U("SM"));
            if (input == CountryCodeST) output = web::json::value(U("ST"));
            if (input == CountryCodeSA) output = web::json::value(U("SA"));
            if (input == CountryCodeSN) output = web::json::value(U("SN"));
            if (input == CountryCodeRS) output = web::json::value(U("RS"));
            if (input == CountryCodeSC) output = web::json::value(U("SC"));
            if (input == CountryCodeSL) output = web::json::value(U("SL"));
            if (input == CountryCodeSG) output = web::json::value(U("SG"));
            if (input == CountryCodeSX) output = web::json::value(U("SX"));
            if (input == CountryCodeSK) output = web::json::value(U("SK"));
            if (input == CountryCodeSI) output = web::json::value(U("SI"));
            if (input == CountryCodeSB) output = web::json::value(U("SB"));
            if (input == CountryCodeSO) output = web::json::value(U("SO"));
            if (input == CountryCodeZA) output = web::json::value(U("ZA"));
            if (input == CountryCodeGS) output = web::json::value(U("GS"));
            if (input == CountryCodeSS) output = web::json::value(U("SS"));
            if (input == CountryCodeES) output = web::json::value(U("ES"));
            if (input == CountryCodeLK) output = web::json::value(U("LK"));
            if (input == CountryCodeSD) output = web::json::value(U("SD"));
            if (input == CountryCodeSR) output = web::json::value(U("SR"));
            if (input == CountryCodeSJ) output = web::json::value(U("SJ"));
            if (input == CountryCodeSZ) output = web::json::value(U("SZ"));
            if (input == CountryCodeSE) output = web::json::value(U("SE"));
            if (input == CountryCodeCH) output = web::json::value(U("CH"));
            if (input == CountryCodeSY) output = web::json::value(U("SY"));
            if (input == CountryCodeTW) output = web::json::value(U("TW"));
            if (input == CountryCodeTJ) output = web::json::value(U("TJ"));
            if (input == CountryCodeTZ) output = web::json::value(U("TZ"));
            if (input == CountryCodeTH) output = web::json::value(U("TH"));
            if (input == CountryCodeTL) output = web::json::value(U("TL"));
            if (input == CountryCodeTG) output = web::json::value(U("TG"));
            if (input == CountryCodeTK) output = web::json::value(U("TK"));
            if (input == CountryCodeTO) output = web::json::value(U("TO"));
            if (input == CountryCodeTT) output = web::json::value(U("TT"));
            if (input == CountryCodeTN) output = web::json::value(U("TN"));
            if (input == CountryCodeTR) output = web::json::value(U("TR"));
            if (input == CountryCodeTM) output = web::json::value(U("TM"));
            if (input == CountryCodeTC) output = web::json::value(U("TC"));
            if (input == CountryCodeTV) output = web::json::value(U("TV"));
            if (input == CountryCodeUG) output = web::json::value(U("UG"));
            if (input == CountryCodeUA) output = web::json::value(U("UA"));
            if (input == CountryCodeAE) output = web::json::value(U("AE"));
            if (input == CountryCodeGB) output = web::json::value(U("GB"));
            if (input == CountryCodeUS) output = web::json::value(U("US"));
            if (input == CountryCodeUM) output = web::json::value(U("UM"));
            if (input == CountryCodeUY) output = web::json::value(U("UY"));
            if (input == CountryCodeUZ) output = web::json::value(U("UZ"));
            if (input == CountryCodeVU) output = web::json::value(U("VU"));
            if (input == CountryCodeVE) output = web::json::value(U("VE"));
            if (input == CountryCodeVN) output = web::json::value(U("VN"));
            if (input == CountryCodeVG) output = web::json::value(U("VG"));
            if (input == CountryCodeVI) output = web::json::value(U("VI"));
            if (input == CountryCodeWF) output = web::json::value(U("WF"));
            if (input == CountryCodeEH) output = web::json::value(U("EH"));
            if (input == CountryCodeYE) output = web::json::value(U("YE"));
            if (input == CountryCodeZM) output = web::json::value(U("ZM"));
            if (input == CountryCodeZW) output = web::json::value(U("ZW"));
        }
        inline void FromJsonEnum(const web::json::value& input, CountryCode& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("AF")) output = CountryCodeAF;
            if (inputStr == U("AX")) output = CountryCodeAX;
            if (inputStr == U("AL")) output = CountryCodeAL;
            if (inputStr == U("DZ")) output = CountryCodeDZ;
            if (inputStr == U("AS")) output = CountryCodeAS;
            if (inputStr == U("AD")) output = CountryCodeAD;
            if (inputStr == U("AO")) output = CountryCodeAO;
            if (inputStr == U("AI")) output = CountryCodeAI;
            if (inputStr == U("AQ")) output = CountryCodeAQ;
            if (inputStr == U("AG")) output = CountryCodeAG;
            if (inputStr == U("AR")) output = CountryCodeAR;
            if (inputStr == U("AM")) output = CountryCodeAM;
            if (inputStr == U("AW")) output = CountryCodeAW;
            if (inputStr == U("AU")) output = CountryCodeAU;
            if (inputStr == U("AT")) output = CountryCodeAT;
            if (inputStr == U("AZ")) output = CountryCodeAZ;
            if (inputStr == U("BS")) output = CountryCodeBS;
            if (inputStr == U("BH")) output = CountryCodeBH;
            if (inputStr == U("BD")) output = CountryCodeBD;
            if (inputStr == U("BB")) output = CountryCodeBB;
            if (inputStr == U("BY")) output = CountryCodeBY;
            if (inputStr == U("BE")) output = CountryCodeBE;
            if (inputStr == U("BZ")) output = CountryCodeBZ;
            if (inputStr == U("BJ")) output = CountryCodeBJ;
            if (inputStr == U("BM")) output = CountryCodeBM;
            if (inputStr == U("BT")) output = CountryCodeBT;
            if (inputStr == U("BO")) output = CountryCodeBO;
            if (inputStr == U("BQ")) output = CountryCodeBQ;
            if (inputStr == U("BA")) output = CountryCodeBA;
            if (inputStr == U("BW")) output = CountryCodeBW;
            if (inputStr == U("BV")) output = CountryCodeBV;
            if (inputStr == U("BR")) output = CountryCodeBR;
            if (inputStr == U("IO")) output = CountryCodeIO;
            if (inputStr == U("BN")) output = CountryCodeBN;
            if (inputStr == U("BG")) output = CountryCodeBG;
            if (inputStr == U("BF")) output = CountryCodeBF;
            if (inputStr == U("BI")) output = CountryCodeBI;
            if (inputStr == U("KH")) output = CountryCodeKH;
            if (inputStr == U("CM")) output = CountryCodeCM;
            if (inputStr == U("CA")) output = CountryCodeCA;
            if (inputStr == U("CV")) output = CountryCodeCV;
            if (inputStr == U("KY")) output = CountryCodeKY;
            if (inputStr == U("CF")) output = CountryCodeCF;
            if (inputStr == U("TD")) output = CountryCodeTD;
            if (inputStr == U("CL")) output = CountryCodeCL;
            if (inputStr == U("CN")) output = CountryCodeCN;
            if (inputStr == U("CX")) output = CountryCodeCX;
            if (inputStr == U("CC")) output = CountryCodeCC;
            if (inputStr == U("CO")) output = CountryCodeCO;
            if (inputStr == U("KM")) output = CountryCodeKM;
            if (inputStr == U("CG")) output = CountryCodeCG;
            if (inputStr == U("CD")) output = CountryCodeCD;
            if (inputStr == U("CK")) output = CountryCodeCK;
            if (inputStr == U("CR")) output = CountryCodeCR;
            if (inputStr == U("CI")) output = CountryCodeCI;
            if (inputStr == U("HR")) output = CountryCodeHR;
            if (inputStr == U("CU")) output = CountryCodeCU;
            if (inputStr == U("CW")) output = CountryCodeCW;
            if (inputStr == U("CY")) output = CountryCodeCY;
            if (inputStr == U("CZ")) output = CountryCodeCZ;
            if (inputStr == U("DK")) output = CountryCodeDK;
            if (inputStr == U("DJ")) output = CountryCodeDJ;
            if (inputStr == U("DM")) output = CountryCodeDM;
            if (inputStr == U("DO")) output = CountryCodeDO;
            if (inputStr == U("EC")) output = CountryCodeEC;
            if (inputStr == U("EG")) output = CountryCodeEG;
            if (inputStr == U("SV")) output = CountryCodeSV;
            if (inputStr == U("GQ")) output = CountryCodeGQ;
            if (inputStr == U("ER")) output = CountryCodeER;
            if (inputStr == U("EE")) output = CountryCodeEE;
            if (inputStr == U("ET")) output = CountryCodeET;
            if (inputStr == U("FK")) output = CountryCodeFK;
            if (inputStr == U("FO")) output = CountryCodeFO;
            if (inputStr == U("FJ")) output = CountryCodeFJ;
            if (inputStr == U("FI")) output = CountryCodeFI;
            if (inputStr == U("FR")) output = CountryCodeFR;
            if (inputStr == U("GF")) output = CountryCodeGF;
            if (inputStr == U("PF")) output = CountryCodePF;
            if (inputStr == U("TF")) output = CountryCodeTF;
            if (inputStr == U("GA")) output = CountryCodeGA;
            if (inputStr == U("GM")) output = CountryCodeGM;
            if (inputStr == U("GE")) output = CountryCodeGE;
            if (inputStr == U("DE")) output = CountryCodeDE;
            if (inputStr == U("GH")) output = CountryCodeGH;
            if (inputStr == U("GI")) output = CountryCodeGI;
            if (inputStr == U("GR")) output = CountryCodeGR;
            if (inputStr == U("GL")) output = CountryCodeGL;
            if (inputStr == U("GD")) output = CountryCodeGD;
            if (inputStr == U("GP")) output = CountryCodeGP;
            if (inputStr == U("GU")) output = CountryCodeGU;
            if (inputStr == U("GT")) output = CountryCodeGT;
            if (inputStr == U("GG")) output = CountryCodeGG;
            if (inputStr == U("GN")) output = CountryCodeGN;
            if (inputStr == U("GW")) output = CountryCodeGW;
            if (inputStr == U("GY")) output = CountryCodeGY;
            if (inputStr == U("HT")) output = CountryCodeHT;
            if (inputStr == U("HM")) output = CountryCodeHM;
            if (inputStr == U("VA")) output = CountryCodeVA;
            if (inputStr == U("HN")) output = CountryCodeHN;
            if (inputStr == U("HK")) output = CountryCodeHK;
            if (inputStr == U("HU")) output = CountryCodeHU;
            if (inputStr == U("IS")) output = CountryCodeIS;
            if (inputStr == U("IN")) output = CountryCodeIN;
            if (inputStr == U("ID")) output = CountryCodeID;
            if (inputStr == U("IR")) output = CountryCodeIR;
            if (inputStr == U("IQ")) output = CountryCodeIQ;
            if (inputStr == U("IE")) output = CountryCodeIE;
            if (inputStr == U("IM")) output = CountryCodeIM;
            if (inputStr == U("IL")) output = CountryCodeIL;
            if (inputStr == U("IT")) output = CountryCodeIT;
            if (inputStr == U("JM")) output = CountryCodeJM;
            if (inputStr == U("JP")) output = CountryCodeJP;
            if (inputStr == U("JE")) output = CountryCodeJE;
            if (inputStr == U("JO")) output = CountryCodeJO;
            if (inputStr == U("KZ")) output = CountryCodeKZ;
            if (inputStr == U("KE")) output = CountryCodeKE;
            if (inputStr == U("KI")) output = CountryCodeKI;
            if (inputStr == U("KP")) output = CountryCodeKP;
            if (inputStr == U("KR")) output = CountryCodeKR;
            if (inputStr == U("KW")) output = CountryCodeKW;
            if (inputStr == U("KG")) output = CountryCodeKG;
            if (inputStr == U("LA")) output = CountryCodeLA;
            if (inputStr == U("LV")) output = CountryCodeLV;
            if (inputStr == U("LB")) output = CountryCodeLB;
            if (inputStr == U("LS")) output = CountryCodeLS;
            if (inputStr == U("LR")) output = CountryCodeLR;
            if (inputStr == U("LY")) output = CountryCodeLY;
            if (inputStr == U("LI")) output = CountryCodeLI;
            if (inputStr == U("LT")) output = CountryCodeLT;
            if (inputStr == U("LU")) output = CountryCodeLU;
            if (inputStr == U("MO")) output = CountryCodeMO;
            if (inputStr == U("MK")) output = CountryCodeMK;
            if (inputStr == U("MG")) output = CountryCodeMG;
            if (inputStr == U("MW")) output = CountryCodeMW;
            if (inputStr == U("MY")) output = CountryCodeMY;
            if (inputStr == U("MV")) output = CountryCodeMV;
            if (inputStr == U("ML")) output = CountryCodeML;
            if (inputStr == U("MT")) output = CountryCodeMT;
            if (inputStr == U("MH")) output = CountryCodeMH;
            if (inputStr == U("MQ")) output = CountryCodeMQ;
            if (inputStr == U("MR")) output = CountryCodeMR;
            if (inputStr == U("MU")) output = CountryCodeMU;
            if (inputStr == U("YT")) output = CountryCodeYT;
            if (inputStr == U("MX")) output = CountryCodeMX;
            if (inputStr == U("FM")) output = CountryCodeFM;
            if (inputStr == U("MD")) output = CountryCodeMD;
            if (inputStr == U("MC")) output = CountryCodeMC;
            if (inputStr == U("MN")) output = CountryCodeMN;
            if (inputStr == U("ME")) output = CountryCodeME;
            if (inputStr == U("MS")) output = CountryCodeMS;
            if (inputStr == U("MA")) output = CountryCodeMA;
            if (inputStr == U("MZ")) output = CountryCodeMZ;
            if (inputStr == U("MM")) output = CountryCodeMM;
            if (inputStr == U("NA")) output = CountryCodeNA;
            if (inputStr == U("NR")) output = CountryCodeNR;
            if (inputStr == U("NP")) output = CountryCodeNP;
            if (inputStr == U("NL")) output = CountryCodeNL;
            if (inputStr == U("NC")) output = CountryCodeNC;
            if (inputStr == U("NZ")) output = CountryCodeNZ;
            if (inputStr == U("NI")) output = CountryCodeNI;
            if (inputStr == U("NE")) output = CountryCodeNE;
            if (inputStr == U("NG")) output = CountryCodeNG;
            if (inputStr == U("NU")) output = CountryCodeNU;
            if (inputStr == U("NF")) output = CountryCodeNF;
            if (inputStr == U("MP")) output = CountryCodeMP;
            if (inputStr == U("NO")) output = CountryCodeNO;
            if (inputStr == U("OM")) output = CountryCodeOM;
            if (inputStr == U("PK")) output = CountryCodePK;
            if (inputStr == U("PW")) output = CountryCodePW;
            if (inputStr == U("PS")) output = CountryCodePS;
            if (inputStr == U("PA")) output = CountryCodePA;
            if (inputStr == U("PG")) output = CountryCodePG;
            if (inputStr == U("PY")) output = CountryCodePY;
            if (inputStr == U("PE")) output = CountryCodePE;
            if (inputStr == U("PH")) output = CountryCodePH;
            if (inputStr == U("PN")) output = CountryCodePN;
            if (inputStr == U("PL")) output = CountryCodePL;
            if (inputStr == U("PT")) output = CountryCodePT;
            if (inputStr == U("PR")) output = CountryCodePR;
            if (inputStr == U("QA")) output = CountryCodeQA;
            if (inputStr == U("RE")) output = CountryCodeRE;
            if (inputStr == U("RO")) output = CountryCodeRO;
            if (inputStr == U("RU")) output = CountryCodeRU;
            if (inputStr == U("RW")) output = CountryCodeRW;
            if (inputStr == U("BL")) output = CountryCodeBL;
            if (inputStr == U("SH")) output = CountryCodeSH;
            if (inputStr == U("KN")) output = CountryCodeKN;
            if (inputStr == U("LC")) output = CountryCodeLC;
            if (inputStr == U("MF")) output = CountryCodeMF;
            if (inputStr == U("PM")) output = CountryCodePM;
            if (inputStr == U("VC")) output = CountryCodeVC;
            if (inputStr == U("WS")) output = CountryCodeWS;
            if (inputStr == U("SM")) output = CountryCodeSM;
            if (inputStr == U("ST")) output = CountryCodeST;
            if (inputStr == U("SA")) output = CountryCodeSA;
            if (inputStr == U("SN")) output = CountryCodeSN;
            if (inputStr == U("RS")) output = CountryCodeRS;
            if (inputStr == U("SC")) output = CountryCodeSC;
            if (inputStr == U("SL")) output = CountryCodeSL;
            if (inputStr == U("SG")) output = CountryCodeSG;
            if (inputStr == U("SX")) output = CountryCodeSX;
            if (inputStr == U("SK")) output = CountryCodeSK;
            if (inputStr == U("SI")) output = CountryCodeSI;
            if (inputStr == U("SB")) output = CountryCodeSB;
            if (inputStr == U("SO")) output = CountryCodeSO;
            if (inputStr == U("ZA")) output = CountryCodeZA;
            if (inputStr == U("GS")) output = CountryCodeGS;
            if (inputStr == U("SS")) output = CountryCodeSS;
            if (inputStr == U("ES")) output = CountryCodeES;
            if (inputStr == U("LK")) output = CountryCodeLK;
            if (inputStr == U("SD")) output = CountryCodeSD;
            if (inputStr == U("SR")) output = CountryCodeSR;
            if (inputStr == U("SJ")) output = CountryCodeSJ;
            if (inputStr == U("SZ")) output = CountryCodeSZ;
            if (inputStr == U("SE")) output = CountryCodeSE;
            if (inputStr == U("CH")) output = CountryCodeCH;
            if (inputStr == U("SY")) output = CountryCodeSY;
            if (inputStr == U("TW")) output = CountryCodeTW;
            if (inputStr == U("TJ")) output = CountryCodeTJ;
            if (inputStr == U("TZ")) output = CountryCodeTZ;
            if (inputStr == U("TH")) output = CountryCodeTH;
            if (inputStr == U("TL")) output = CountryCodeTL;
            if (inputStr == U("TG")) output = CountryCodeTG;
            if (inputStr == U("TK")) output = CountryCodeTK;
            if (inputStr == U("TO")) output = CountryCodeTO;
            if (inputStr == U("TT")) output = CountryCodeTT;
            if (inputStr == U("TN")) output = CountryCodeTN;
            if (inputStr == U("TR")) output = CountryCodeTR;
            if (inputStr == U("TM")) output = CountryCodeTM;
            if (inputStr == U("TC")) output = CountryCodeTC;
            if (inputStr == U("TV")) output = CountryCodeTV;
            if (inputStr == U("UG")) output = CountryCodeUG;
            if (inputStr == U("UA")) output = CountryCodeUA;
            if (inputStr == U("AE")) output = CountryCodeAE;
            if (inputStr == U("GB")) output = CountryCodeGB;
            if (inputStr == U("US")) output = CountryCodeUS;
            if (inputStr == U("UM")) output = CountryCodeUM;
            if (inputStr == U("UY")) output = CountryCodeUY;
            if (inputStr == U("UZ")) output = CountryCodeUZ;
            if (inputStr == U("VU")) output = CountryCodeVU;
            if (inputStr == U("VE")) output = CountryCodeVE;
            if (inputStr == U("VN")) output = CountryCodeVN;
            if (inputStr == U("VG")) output = CountryCodeVG;
            if (inputStr == U("VI")) output = CountryCodeVI;
            if (inputStr == U("WF")) output = CountryCodeWF;
            if (inputStr == U("EH")) output = CountryCodeEH;
            if (inputStr == U("YE")) output = CountryCodeYE;
            if (inputStr == U("ZM")) output = CountryCodeZM;
            if (inputStr == U("ZW")) output = CountryCodeZW;
        }

        enum Currency
        {
            CurrencyAED,
            CurrencyAFN,
            CurrencyALL,
            CurrencyAMD,
            CurrencyANG,
            CurrencyAOA,
            CurrencyARS,
            CurrencyAUD,
            CurrencyAWG,
            CurrencyAZN,
            CurrencyBAM,
            CurrencyBBD,
            CurrencyBDT,
            CurrencyBGN,
            CurrencyBHD,
            CurrencyBIF,
            CurrencyBMD,
            CurrencyBND,
            CurrencyBOB,
            CurrencyBRL,
            CurrencyBSD,
            CurrencyBTN,
            CurrencyBWP,
            CurrencyBYR,
            CurrencyBZD,
            CurrencyCAD,
            CurrencyCDF,
            CurrencyCHF,
            CurrencyCLP,
            CurrencyCNY,
            CurrencyCOP,
            CurrencyCRC,
            CurrencyCUC,
            CurrencyCUP,
            CurrencyCVE,
            CurrencyCZK,
            CurrencyDJF,
            CurrencyDKK,
            CurrencyDOP,
            CurrencyDZD,
            CurrencyEGP,
            CurrencyERN,
            CurrencyETB,
            CurrencyEUR,
            CurrencyFJD,
            CurrencyFKP,
            CurrencyGBP,
            CurrencyGEL,
            CurrencyGGP,
            CurrencyGHS,
            CurrencyGIP,
            CurrencyGMD,
            CurrencyGNF,
            CurrencyGTQ,
            CurrencyGYD,
            CurrencyHKD,
            CurrencyHNL,
            CurrencyHRK,
            CurrencyHTG,
            CurrencyHUF,
            CurrencyIDR,
            CurrencyILS,
            CurrencyIMP,
            CurrencyINR,
            CurrencyIQD,
            CurrencyIRR,
            CurrencyISK,
            CurrencyJEP,
            CurrencyJMD,
            CurrencyJOD,
            CurrencyJPY,
            CurrencyKES,
            CurrencyKGS,
            CurrencyKHR,
            CurrencyKMF,
            CurrencyKPW,
            CurrencyKRW,
            CurrencyKWD,
            CurrencyKYD,
            CurrencyKZT,
            CurrencyLAK,
            CurrencyLBP,
            CurrencyLKR,
            CurrencyLRD,
            CurrencyLSL,
            CurrencyLYD,
            CurrencyMAD,
            CurrencyMDL,
            CurrencyMGA,
            CurrencyMKD,
            CurrencyMMK,
            CurrencyMNT,
            CurrencyMOP,
            CurrencyMRO,
            CurrencyMUR,
            CurrencyMVR,
            CurrencyMWK,
            CurrencyMXN,
            CurrencyMYR,
            CurrencyMZN,
            CurrencyNAD,
            CurrencyNGN,
            CurrencyNIO,
            CurrencyNOK,
            CurrencyNPR,
            CurrencyNZD,
            CurrencyOMR,
            CurrencyPAB,
            CurrencyPEN,
            CurrencyPGK,
            CurrencyPHP,
            CurrencyPKR,
            CurrencyPLN,
            CurrencyPYG,
            CurrencyQAR,
            CurrencyRON,
            CurrencyRSD,
            CurrencyRUB,
            CurrencyRWF,
            CurrencySAR,
            CurrencySBD,
            CurrencySCR,
            CurrencySDG,
            CurrencySEK,
            CurrencySGD,
            CurrencySHP,
            CurrencySLL,
            CurrencySOS,
            CurrencySPL,
            CurrencySRD,
            CurrencySTD,
            CurrencySVC,
            CurrencySYP,
            CurrencySZL,
            CurrencyTHB,
            CurrencyTJS,
            CurrencyTMT,
            CurrencyTND,
            CurrencyTOP,
            CurrencyTRY,
            CurrencyTTD,
            CurrencyTVD,
            CurrencyTWD,
            CurrencyTZS,
            CurrencyUAH,
            CurrencyUGX,
            CurrencyUSD,
            CurrencyUYU,
            CurrencyUZS,
            CurrencyVEF,
            CurrencyVND,
            CurrencyVUV,
            CurrencyWST,
            CurrencyXAF,
            CurrencyXCD,
            CurrencyXDR,
            CurrencyXOF,
            CurrencyXPF,
            CurrencyYER,
            CurrencyZAR,
            CurrencyZMW,
            CurrencyZWD
        };

        inline void ToJsonEnum(const Currency input, web::json::value& output)
        {
            if (input == CurrencyAED) output = web::json::value(U("AED"));
            if (input == CurrencyAFN) output = web::json::value(U("AFN"));
            if (input == CurrencyALL) output = web::json::value(U("ALL"));
            if (input == CurrencyAMD) output = web::json::value(U("AMD"));
            if (input == CurrencyANG) output = web::json::value(U("ANG"));
            if (input == CurrencyAOA) output = web::json::value(U("AOA"));
            if (input == CurrencyARS) output = web::json::value(U("ARS"));
            if (input == CurrencyAUD) output = web::json::value(U("AUD"));
            if (input == CurrencyAWG) output = web::json::value(U("AWG"));
            if (input == CurrencyAZN) output = web::json::value(U("AZN"));
            if (input == CurrencyBAM) output = web::json::value(U("BAM"));
            if (input == CurrencyBBD) output = web::json::value(U("BBD"));
            if (input == CurrencyBDT) output = web::json::value(U("BDT"));
            if (input == CurrencyBGN) output = web::json::value(U("BGN"));
            if (input == CurrencyBHD) output = web::json::value(U("BHD"));
            if (input == CurrencyBIF) output = web::json::value(U("BIF"));
            if (input == CurrencyBMD) output = web::json::value(U("BMD"));
            if (input == CurrencyBND) output = web::json::value(U("BND"));
            if (input == CurrencyBOB) output = web::json::value(U("BOB"));
            if (input == CurrencyBRL) output = web::json::value(U("BRL"));
            if (input == CurrencyBSD) output = web::json::value(U("BSD"));
            if (input == CurrencyBTN) output = web::json::value(U("BTN"));
            if (input == CurrencyBWP) output = web::json::value(U("BWP"));
            if (input == CurrencyBYR) output = web::json::value(U("BYR"));
            if (input == CurrencyBZD) output = web::json::value(U("BZD"));
            if (input == CurrencyCAD) output = web::json::value(U("CAD"));
            if (input == CurrencyCDF) output = web::json::value(U("CDF"));
            if (input == CurrencyCHF) output = web::json::value(U("CHF"));
            if (input == CurrencyCLP) output = web::json::value(U("CLP"));
            if (input == CurrencyCNY) output = web::json::value(U("CNY"));
            if (input == CurrencyCOP) output = web::json::value(U("COP"));
            if (input == CurrencyCRC) output = web::json::value(U("CRC"));
            if (input == CurrencyCUC) output = web::json::value(U("CUC"));
            if (input == CurrencyCUP) output = web::json::value(U("CUP"));
            if (input == CurrencyCVE) output = web::json::value(U("CVE"));
            if (input == CurrencyCZK) output = web::json::value(U("CZK"));
            if (input == CurrencyDJF) output = web::json::value(U("DJF"));
            if (input == CurrencyDKK) output = web::json::value(U("DKK"));
            if (input == CurrencyDOP) output = web::json::value(U("DOP"));
            if (input == CurrencyDZD) output = web::json::value(U("DZD"));
            if (input == CurrencyEGP) output = web::json::value(U("EGP"));
            if (input == CurrencyERN) output = web::json::value(U("ERN"));
            if (input == CurrencyETB) output = web::json::value(U("ETB"));
            if (input == CurrencyEUR) output = web::json::value(U("EUR"));
            if (input == CurrencyFJD) output = web::json::value(U("FJD"));
            if (input == CurrencyFKP) output = web::json::value(U("FKP"));
            if (input == CurrencyGBP) output = web::json::value(U("GBP"));
            if (input == CurrencyGEL) output = web::json::value(U("GEL"));
            if (input == CurrencyGGP) output = web::json::value(U("GGP"));
            if (input == CurrencyGHS) output = web::json::value(U("GHS"));
            if (input == CurrencyGIP) output = web::json::value(U("GIP"));
            if (input == CurrencyGMD) output = web::json::value(U("GMD"));
            if (input == CurrencyGNF) output = web::json::value(U("GNF"));
            if (input == CurrencyGTQ) output = web::json::value(U("GTQ"));
            if (input == CurrencyGYD) output = web::json::value(U("GYD"));
            if (input == CurrencyHKD) output = web::json::value(U("HKD"));
            if (input == CurrencyHNL) output = web::json::value(U("HNL"));
            if (input == CurrencyHRK) output = web::json::value(U("HRK"));
            if (input == CurrencyHTG) output = web::json::value(U("HTG"));
            if (input == CurrencyHUF) output = web::json::value(U("HUF"));
            if (input == CurrencyIDR) output = web::json::value(U("IDR"));
            if (input == CurrencyILS) output = web::json::value(U("ILS"));
            if (input == CurrencyIMP) output = web::json::value(U("IMP"));
            if (input == CurrencyINR) output = web::json::value(U("INR"));
            if (input == CurrencyIQD) output = web::json::value(U("IQD"));
            if (input == CurrencyIRR) output = web::json::value(U("IRR"));
            if (input == CurrencyISK) output = web::json::value(U("ISK"));
            if (input == CurrencyJEP) output = web::json::value(U("JEP"));
            if (input == CurrencyJMD) output = web::json::value(U("JMD"));
            if (input == CurrencyJOD) output = web::json::value(U("JOD"));
            if (input == CurrencyJPY) output = web::json::value(U("JPY"));
            if (input == CurrencyKES) output = web::json::value(U("KES"));
            if (input == CurrencyKGS) output = web::json::value(U("KGS"));
            if (input == CurrencyKHR) output = web::json::value(U("KHR"));
            if (input == CurrencyKMF) output = web::json::value(U("KMF"));
            if (input == CurrencyKPW) output = web::json::value(U("KPW"));
            if (input == CurrencyKRW) output = web::json::value(U("KRW"));
            if (input == CurrencyKWD) output = web::json::value(U("KWD"));
            if (input == CurrencyKYD) output = web::json::value(U("KYD"));
            if (input == CurrencyKZT) output = web::json::value(U("KZT"));
            if (input == CurrencyLAK) output = web::json::value(U("LAK"));
            if (input == CurrencyLBP) output = web::json::value(U("LBP"));
            if (input == CurrencyLKR) output = web::json::value(U("LKR"));
            if (input == CurrencyLRD) output = web::json::value(U("LRD"));
            if (input == CurrencyLSL) output = web::json::value(U("LSL"));
            if (input == CurrencyLYD) output = web::json::value(U("LYD"));
            if (input == CurrencyMAD) output = web::json::value(U("MAD"));
            if (input == CurrencyMDL) output = web::json::value(U("MDL"));
            if (input == CurrencyMGA) output = web::json::value(U("MGA"));
            if (input == CurrencyMKD) output = web::json::value(U("MKD"));
            if (input == CurrencyMMK) output = web::json::value(U("MMK"));
            if (input == CurrencyMNT) output = web::json::value(U("MNT"));
            if (input == CurrencyMOP) output = web::json::value(U("MOP"));
            if (input == CurrencyMRO) output = web::json::value(U("MRO"));
            if (input == CurrencyMUR) output = web::json::value(U("MUR"));
            if (input == CurrencyMVR) output = web::json::value(U("MVR"));
            if (input == CurrencyMWK) output = web::json::value(U("MWK"));
            if (input == CurrencyMXN) output = web::json::value(U("MXN"));
            if (input == CurrencyMYR) output = web::json::value(U("MYR"));
            if (input == CurrencyMZN) output = web::json::value(U("MZN"));
            if (input == CurrencyNAD) output = web::json::value(U("NAD"));
            if (input == CurrencyNGN) output = web::json::value(U("NGN"));
            if (input == CurrencyNIO) output = web::json::value(U("NIO"));
            if (input == CurrencyNOK) output = web::json::value(U("NOK"));
            if (input == CurrencyNPR) output = web::json::value(U("NPR"));
            if (input == CurrencyNZD) output = web::json::value(U("NZD"));
            if (input == CurrencyOMR) output = web::json::value(U("OMR"));
            if (input == CurrencyPAB) output = web::json::value(U("PAB"));
            if (input == CurrencyPEN) output = web::json::value(U("PEN"));
            if (input == CurrencyPGK) output = web::json::value(U("PGK"));
            if (input == CurrencyPHP) output = web::json::value(U("PHP"));
            if (input == CurrencyPKR) output = web::json::value(U("PKR"));
            if (input == CurrencyPLN) output = web::json::value(U("PLN"));
            if (input == CurrencyPYG) output = web::json::value(U("PYG"));
            if (input == CurrencyQAR) output = web::json::value(U("QAR"));
            if (input == CurrencyRON) output = web::json::value(U("RON"));
            if (input == CurrencyRSD) output = web::json::value(U("RSD"));
            if (input == CurrencyRUB) output = web::json::value(U("RUB"));
            if (input == CurrencyRWF) output = web::json::value(U("RWF"));
            if (input == CurrencySAR) output = web::json::value(U("SAR"));
            if (input == CurrencySBD) output = web::json::value(U("SBD"));
            if (input == CurrencySCR) output = web::json::value(U("SCR"));
            if (input == CurrencySDG) output = web::json::value(U("SDG"));
            if (input == CurrencySEK) output = web::json::value(U("SEK"));
            if (input == CurrencySGD) output = web::json::value(U("SGD"));
            if (input == CurrencySHP) output = web::json::value(U("SHP"));
            if (input == CurrencySLL) output = web::json::value(U("SLL"));
            if (input == CurrencySOS) output = web::json::value(U("SOS"));
            if (input == CurrencySPL) output = web::json::value(U("SPL"));
            if (input == CurrencySRD) output = web::json::value(U("SRD"));
            if (input == CurrencySTD) output = web::json::value(U("STD"));
            if (input == CurrencySVC) output = web::json::value(U("SVC"));
            if (input == CurrencySYP) output = web::json::value(U("SYP"));
            if (input == CurrencySZL) output = web::json::value(U("SZL"));
            if (input == CurrencyTHB) output = web::json::value(U("THB"));
            if (input == CurrencyTJS) output = web::json::value(U("TJS"));
            if (input == CurrencyTMT) output = web::json::value(U("TMT"));
            if (input == CurrencyTND) output = web::json::value(U("TND"));
            if (input == CurrencyTOP) output = web::json::value(U("TOP"));
            if (input == CurrencyTRY) output = web::json::value(U("TRY"));
            if (input == CurrencyTTD) output = web::json::value(U("TTD"));
            if (input == CurrencyTVD) output = web::json::value(U("TVD"));
            if (input == CurrencyTWD) output = web::json::value(U("TWD"));
            if (input == CurrencyTZS) output = web::json::value(U("TZS"));
            if (input == CurrencyUAH) output = web::json::value(U("UAH"));
            if (input == CurrencyUGX) output = web::json::value(U("UGX"));
            if (input == CurrencyUSD) output = web::json::value(U("USD"));
            if (input == CurrencyUYU) output = web::json::value(U("UYU"));
            if (input == CurrencyUZS) output = web::json::value(U("UZS"));
            if (input == CurrencyVEF) output = web::json::value(U("VEF"));
            if (input == CurrencyVND) output = web::json::value(U("VND"));
            if (input == CurrencyVUV) output = web::json::value(U("VUV"));
            if (input == CurrencyWST) output = web::json::value(U("WST"));
            if (input == CurrencyXAF) output = web::json::value(U("XAF"));
            if (input == CurrencyXCD) output = web::json::value(U("XCD"));
            if (input == CurrencyXDR) output = web::json::value(U("XDR"));
            if (input == CurrencyXOF) output = web::json::value(U("XOF"));
            if (input == CurrencyXPF) output = web::json::value(U("XPF"));
            if (input == CurrencyYER) output = web::json::value(U("YER"));
            if (input == CurrencyZAR) output = web::json::value(U("ZAR"));
            if (input == CurrencyZMW) output = web::json::value(U("ZMW"));
            if (input == CurrencyZWD) output = web::json::value(U("ZWD"));
        }
        inline void FromJsonEnum(const web::json::value& input, Currency& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("AED")) output = CurrencyAED;
            if (inputStr == U("AFN")) output = CurrencyAFN;
            if (inputStr == U("ALL")) output = CurrencyALL;
            if (inputStr == U("AMD")) output = CurrencyAMD;
            if (inputStr == U("ANG")) output = CurrencyANG;
            if (inputStr == U("AOA")) output = CurrencyAOA;
            if (inputStr == U("ARS")) output = CurrencyARS;
            if (inputStr == U("AUD")) output = CurrencyAUD;
            if (inputStr == U("AWG")) output = CurrencyAWG;
            if (inputStr == U("AZN")) output = CurrencyAZN;
            if (inputStr == U("BAM")) output = CurrencyBAM;
            if (inputStr == U("BBD")) output = CurrencyBBD;
            if (inputStr == U("BDT")) output = CurrencyBDT;
            if (inputStr == U("BGN")) output = CurrencyBGN;
            if (inputStr == U("BHD")) output = CurrencyBHD;
            if (inputStr == U("BIF")) output = CurrencyBIF;
            if (inputStr == U("BMD")) output = CurrencyBMD;
            if (inputStr == U("BND")) output = CurrencyBND;
            if (inputStr == U("BOB")) output = CurrencyBOB;
            if (inputStr == U("BRL")) output = CurrencyBRL;
            if (inputStr == U("BSD")) output = CurrencyBSD;
            if (inputStr == U("BTN")) output = CurrencyBTN;
            if (inputStr == U("BWP")) output = CurrencyBWP;
            if (inputStr == U("BYR")) output = CurrencyBYR;
            if (inputStr == U("BZD")) output = CurrencyBZD;
            if (inputStr == U("CAD")) output = CurrencyCAD;
            if (inputStr == U("CDF")) output = CurrencyCDF;
            if (inputStr == U("CHF")) output = CurrencyCHF;
            if (inputStr == U("CLP")) output = CurrencyCLP;
            if (inputStr == U("CNY")) output = CurrencyCNY;
            if (inputStr == U("COP")) output = CurrencyCOP;
            if (inputStr == U("CRC")) output = CurrencyCRC;
            if (inputStr == U("CUC")) output = CurrencyCUC;
            if (inputStr == U("CUP")) output = CurrencyCUP;
            if (inputStr == U("CVE")) output = CurrencyCVE;
            if (inputStr == U("CZK")) output = CurrencyCZK;
            if (inputStr == U("DJF")) output = CurrencyDJF;
            if (inputStr == U("DKK")) output = CurrencyDKK;
            if (inputStr == U("DOP")) output = CurrencyDOP;
            if (inputStr == U("DZD")) output = CurrencyDZD;
            if (inputStr == U("EGP")) output = CurrencyEGP;
            if (inputStr == U("ERN")) output = CurrencyERN;
            if (inputStr == U("ETB")) output = CurrencyETB;
            if (inputStr == U("EUR")) output = CurrencyEUR;
            if (inputStr == U("FJD")) output = CurrencyFJD;
            if (inputStr == U("FKP")) output = CurrencyFKP;
            if (inputStr == U("GBP")) output = CurrencyGBP;
            if (inputStr == U("GEL")) output = CurrencyGEL;
            if (inputStr == U("GGP")) output = CurrencyGGP;
            if (inputStr == U("GHS")) output = CurrencyGHS;
            if (inputStr == U("GIP")) output = CurrencyGIP;
            if (inputStr == U("GMD")) output = CurrencyGMD;
            if (inputStr == U("GNF")) output = CurrencyGNF;
            if (inputStr == U("GTQ")) output = CurrencyGTQ;
            if (inputStr == U("GYD")) output = CurrencyGYD;
            if (inputStr == U("HKD")) output = CurrencyHKD;
            if (inputStr == U("HNL")) output = CurrencyHNL;
            if (inputStr == U("HRK")) output = CurrencyHRK;
            if (inputStr == U("HTG")) output = CurrencyHTG;
            if (inputStr == U("HUF")) output = CurrencyHUF;
            if (inputStr == U("IDR")) output = CurrencyIDR;
            if (inputStr == U("ILS")) output = CurrencyILS;
            if (inputStr == U("IMP")) output = CurrencyIMP;
            if (inputStr == U("INR")) output = CurrencyINR;
            if (inputStr == U("IQD")) output = CurrencyIQD;
            if (inputStr == U("IRR")) output = CurrencyIRR;
            if (inputStr == U("ISK")) output = CurrencyISK;
            if (inputStr == U("JEP")) output = CurrencyJEP;
            if (inputStr == U("JMD")) output = CurrencyJMD;
            if (inputStr == U("JOD")) output = CurrencyJOD;
            if (inputStr == U("JPY")) output = CurrencyJPY;
            if (inputStr == U("KES")) output = CurrencyKES;
            if (inputStr == U("KGS")) output = CurrencyKGS;
            if (inputStr == U("KHR")) output = CurrencyKHR;
            if (inputStr == U("KMF")) output = CurrencyKMF;
            if (inputStr == U("KPW")) output = CurrencyKPW;
            if (inputStr == U("KRW")) output = CurrencyKRW;
            if (inputStr == U("KWD")) output = CurrencyKWD;
            if (inputStr == U("KYD")) output = CurrencyKYD;
            if (inputStr == U("KZT")) output = CurrencyKZT;
            if (inputStr == U("LAK")) output = CurrencyLAK;
            if (inputStr == U("LBP")) output = CurrencyLBP;
            if (inputStr == U("LKR")) output = CurrencyLKR;
            if (inputStr == U("LRD")) output = CurrencyLRD;
            if (inputStr == U("LSL")) output = CurrencyLSL;
            if (inputStr == U("LYD")) output = CurrencyLYD;
            if (inputStr == U("MAD")) output = CurrencyMAD;
            if (inputStr == U("MDL")) output = CurrencyMDL;
            if (inputStr == U("MGA")) output = CurrencyMGA;
            if (inputStr == U("MKD")) output = CurrencyMKD;
            if (inputStr == U("MMK")) output = CurrencyMMK;
            if (inputStr == U("MNT")) output = CurrencyMNT;
            if (inputStr == U("MOP")) output = CurrencyMOP;
            if (inputStr == U("MRO")) output = CurrencyMRO;
            if (inputStr == U("MUR")) output = CurrencyMUR;
            if (inputStr == U("MVR")) output = CurrencyMVR;
            if (inputStr == U("MWK")) output = CurrencyMWK;
            if (inputStr == U("MXN")) output = CurrencyMXN;
            if (inputStr == U("MYR")) output = CurrencyMYR;
            if (inputStr == U("MZN")) output = CurrencyMZN;
            if (inputStr == U("NAD")) output = CurrencyNAD;
            if (inputStr == U("NGN")) output = CurrencyNGN;
            if (inputStr == U("NIO")) output = CurrencyNIO;
            if (inputStr == U("NOK")) output = CurrencyNOK;
            if (inputStr == U("NPR")) output = CurrencyNPR;
            if (inputStr == U("NZD")) output = CurrencyNZD;
            if (inputStr == U("OMR")) output = CurrencyOMR;
            if (inputStr == U("PAB")) output = CurrencyPAB;
            if (inputStr == U("PEN")) output = CurrencyPEN;
            if (inputStr == U("PGK")) output = CurrencyPGK;
            if (inputStr == U("PHP")) output = CurrencyPHP;
            if (inputStr == U("PKR")) output = CurrencyPKR;
            if (inputStr == U("PLN")) output = CurrencyPLN;
            if (inputStr == U("PYG")) output = CurrencyPYG;
            if (inputStr == U("QAR")) output = CurrencyQAR;
            if (inputStr == U("RON")) output = CurrencyRON;
            if (inputStr == U("RSD")) output = CurrencyRSD;
            if (inputStr == U("RUB")) output = CurrencyRUB;
            if (inputStr == U("RWF")) output = CurrencyRWF;
            if (inputStr == U("SAR")) output = CurrencySAR;
            if (inputStr == U("SBD")) output = CurrencySBD;
            if (inputStr == U("SCR")) output = CurrencySCR;
            if (inputStr == U("SDG")) output = CurrencySDG;
            if (inputStr == U("SEK")) output = CurrencySEK;
            if (inputStr == U("SGD")) output = CurrencySGD;
            if (inputStr == U("SHP")) output = CurrencySHP;
            if (inputStr == U("SLL")) output = CurrencySLL;
            if (inputStr == U("SOS")) output = CurrencySOS;
            if (inputStr == U("SPL")) output = CurrencySPL;
            if (inputStr == U("SRD")) output = CurrencySRD;
            if (inputStr == U("STD")) output = CurrencySTD;
            if (inputStr == U("SVC")) output = CurrencySVC;
            if (inputStr == U("SYP")) output = CurrencySYP;
            if (inputStr == U("SZL")) output = CurrencySZL;
            if (inputStr == U("THB")) output = CurrencyTHB;
            if (inputStr == U("TJS")) output = CurrencyTJS;
            if (inputStr == U("TMT")) output = CurrencyTMT;
            if (inputStr == U("TND")) output = CurrencyTND;
            if (inputStr == U("TOP")) output = CurrencyTOP;
            if (inputStr == U("TRY")) output = CurrencyTRY;
            if (inputStr == U("TTD")) output = CurrencyTTD;
            if (inputStr == U("TVD")) output = CurrencyTVD;
            if (inputStr == U("TWD")) output = CurrencyTWD;
            if (inputStr == U("TZS")) output = CurrencyTZS;
            if (inputStr == U("UAH")) output = CurrencyUAH;
            if (inputStr == U("UGX")) output = CurrencyUGX;
            if (inputStr == U("USD")) output = CurrencyUSD;
            if (inputStr == U("UYU")) output = CurrencyUYU;
            if (inputStr == U("UZS")) output = CurrencyUZS;
            if (inputStr == U("VEF")) output = CurrencyVEF;
            if (inputStr == U("VND")) output = CurrencyVND;
            if (inputStr == U("VUV")) output = CurrencyVUV;
            if (inputStr == U("WST")) output = CurrencyWST;
            if (inputStr == U("XAF")) output = CurrencyXAF;
            if (inputStr == U("XCD")) output = CurrencyXCD;
            if (inputStr == U("XDR")) output = CurrencyXDR;
            if (inputStr == U("XOF")) output = CurrencyXOF;
            if (inputStr == U("XPF")) output = CurrencyXPF;
            if (inputStr == U("YER")) output = CurrencyYER;
            if (inputStr == U("ZAR")) output = CurrencyZAR;
            if (inputStr == U("ZMW")) output = CurrencyZMW;
            if (inputStr == U("ZWD")) output = CurrencyZWD;
        }

        enum GameInstanceState
        {
            GameInstanceStateOpen,
            GameInstanceStateClosed
        };

        inline void ToJsonEnum(const GameInstanceState input, web::json::value& output)
        {
            if (input == GameInstanceStateOpen) output = web::json::value(U("Open"));
            if (input == GameInstanceStateClosed) output = web::json::value(U("Closed"));
        }
        inline void FromJsonEnum(const web::json::value& input, GameInstanceState& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Open")) output = GameInstanceStateOpen;
            if (inputStr == U("Closed")) output = GameInstanceStateClosed;
        }

        enum LoginIdentityProvider
        {
            LoginIdentityProviderUnknown,
            LoginIdentityProviderPlayFab,
            LoginIdentityProviderCustom,
            LoginIdentityProviderGameCenter,
            LoginIdentityProviderGooglePlay,
            LoginIdentityProviderSteam,
            LoginIdentityProviderXBoxLive,
            LoginIdentityProviderPSN,
            LoginIdentityProviderKongregate,
            LoginIdentityProviderFacebook,
            LoginIdentityProviderIOSDevice,
            LoginIdentityProviderAndroidDevice,
            LoginIdentityProviderTwitch,
            LoginIdentityProviderWindowsHello
        };

        inline void ToJsonEnum(const LoginIdentityProvider input, web::json::value& output)
        {
            if (input == LoginIdentityProviderUnknown) output = web::json::value(U("Unknown"));
            if (input == LoginIdentityProviderPlayFab) output = web::json::value(U("PlayFab"));
            if (input == LoginIdentityProviderCustom) output = web::json::value(U("Custom"));
            if (input == LoginIdentityProviderGameCenter) output = web::json::value(U("GameCenter"));
            if (input == LoginIdentityProviderGooglePlay) output = web::json::value(U("GooglePlay"));
            if (input == LoginIdentityProviderSteam) output = web::json::value(U("Steam"));
            if (input == LoginIdentityProviderXBoxLive) output = web::json::value(U("XBoxLive"));
            if (input == LoginIdentityProviderPSN) output = web::json::value(U("PSN"));
            if (input == LoginIdentityProviderKongregate) output = web::json::value(U("Kongregate"));
            if (input == LoginIdentityProviderFacebook) output = web::json::value(U("Facebook"));
            if (input == LoginIdentityProviderIOSDevice) output = web::json::value(U("IOSDevice"));
            if (input == LoginIdentityProviderAndroidDevice) output = web::json::value(U("AndroidDevice"));
            if (input == LoginIdentityProviderTwitch) output = web::json::value(U("Twitch"));
            if (input == LoginIdentityProviderWindowsHello) output = web::json::value(U("WindowsHello"));
        }
        inline void FromJsonEnum(const web::json::value& input, LoginIdentityProvider& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Unknown")) output = LoginIdentityProviderUnknown;
            if (inputStr == U("PlayFab")) output = LoginIdentityProviderPlayFab;
            if (inputStr == U("Custom")) output = LoginIdentityProviderCustom;
            if (inputStr == U("GameCenter")) output = LoginIdentityProviderGameCenter;
            if (inputStr == U("GooglePlay")) output = LoginIdentityProviderGooglePlay;
            if (inputStr == U("Steam")) output = LoginIdentityProviderSteam;
            if (inputStr == U("XBoxLive")) output = LoginIdentityProviderXBoxLive;
            if (inputStr == U("PSN")) output = LoginIdentityProviderPSN;
            if (inputStr == U("Kongregate")) output = LoginIdentityProviderKongregate;
            if (inputStr == U("Facebook")) output = LoginIdentityProviderFacebook;
            if (inputStr == U("IOSDevice")) output = LoginIdentityProviderIOSDevice;
            if (inputStr == U("AndroidDevice")) output = LoginIdentityProviderAndroidDevice;
            if (inputStr == U("Twitch")) output = LoginIdentityProviderTwitch;
            if (inputStr == U("WindowsHello")) output = LoginIdentityProviderWindowsHello;
        }

        enum PlayerConnectionState
        {
            PlayerConnectionStateUnassigned,
            PlayerConnectionStateConnecting,
            PlayerConnectionStateParticipating,
            PlayerConnectionStateParticipated
        };

        inline void ToJsonEnum(const PlayerConnectionState input, web::json::value& output)
        {
            if (input == PlayerConnectionStateUnassigned) output = web::json::value(U("Unassigned"));
            if (input == PlayerConnectionStateConnecting) output = web::json::value(U("Connecting"));
            if (input == PlayerConnectionStateParticipating) output = web::json::value(U("Participating"));
            if (input == PlayerConnectionStateParticipated) output = web::json::value(U("Participated"));
        }
        inline void FromJsonEnum(const web::json::value& input, PlayerConnectionState& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Unassigned")) output = PlayerConnectionStateUnassigned;
            if (inputStr == U("Connecting")) output = PlayerConnectionStateConnecting;
            if (inputStr == U("Participating")) output = PlayerConnectionStateParticipating;
            if (inputStr == U("Participated")) output = PlayerConnectionStateParticipated;
        }

        enum PushNotificationPlatform
        {
            PushNotificationPlatformApplePushNotificationService,
            PushNotificationPlatformGoogleCloudMessaging
        };

        inline void ToJsonEnum(const PushNotificationPlatform input, web::json::value& output)
        {
            if (input == PushNotificationPlatformApplePushNotificationService) output = web::json::value(U("ApplePushNotificationService"));
            if (input == PushNotificationPlatformGoogleCloudMessaging) output = web::json::value(U("GoogleCloudMessaging"));
        }
        inline void FromJsonEnum(const web::json::value& input, PushNotificationPlatform& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("ApplePushNotificationService")) output = PushNotificationPlatformApplePushNotificationService;
            if (inputStr == U("GoogleCloudMessaging")) output = PushNotificationPlatformGoogleCloudMessaging;
        }

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

        enum ResultTableNodeType
        {
            ResultTableNodeTypeItemId,
            ResultTableNodeTypeTableId
        };

        inline void ToJsonEnum(const ResultTableNodeType input, web::json::value& output)
        {
            if (input == ResultTableNodeTypeItemId) output = web::json::value(U("ItemId"));
            if (input == ResultTableNodeTypeTableId) output = web::json::value(U("TableId"));
        }
        inline void FromJsonEnum(const web::json::value& input, ResultTableNodeType& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("ItemId")) output = ResultTableNodeTypeItemId;
            if (inputStr == U("TableId")) output = ResultTableNodeTypeTableId;
        }

        enum TaskInstanceStatus
        {
            TaskInstanceStatusSucceeded,
            TaskInstanceStatusStarting,
            TaskInstanceStatusInProgress,
            TaskInstanceStatusFailed,
            TaskInstanceStatusAborted,
            TaskInstanceStatusPending
        };

        inline void ToJsonEnum(const TaskInstanceStatus input, web::json::value& output)
        {
            if (input == TaskInstanceStatusSucceeded) output = web::json::value(U("Succeeded"));
            if (input == TaskInstanceStatusStarting) output = web::json::value(U("Starting"));
            if (input == TaskInstanceStatusInProgress) output = web::json::value(U("InProgress"));
            if (input == TaskInstanceStatusFailed) output = web::json::value(U("Failed"));
            if (input == TaskInstanceStatusAborted) output = web::json::value(U("Aborted"));
            if (input == TaskInstanceStatusPending) output = web::json::value(U("Pending"));
        }
        inline void FromJsonEnum(const web::json::value& input, TaskInstanceStatus& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Succeeded")) output = TaskInstanceStatusSucceeded;
            if (inputStr == U("Starting")) output = TaskInstanceStatusStarting;
            if (inputStr == U("InProgress")) output = TaskInstanceStatusInProgress;
            if (inputStr == U("Failed")) output = TaskInstanceStatusFailed;
            if (inputStr == U("Aborted")) output = TaskInstanceStatusAborted;
            if (inputStr == U("Pending")) output = TaskInstanceStatusPending;
        }

        enum TitleActivationStatus
        {
            TitleActivationStatusNone,
            TitleActivationStatusActivatedTitleKey,
            TitleActivationStatusPendingSteam,
            TitleActivationStatusActivatedSteam,
            TitleActivationStatusRevokedSteam
        };

        inline void ToJsonEnum(const TitleActivationStatus input, web::json::value& output)
        {
            if (input == TitleActivationStatusNone) output = web::json::value(U("None"));
            if (input == TitleActivationStatusActivatedTitleKey) output = web::json::value(U("ActivatedTitleKey"));
            if (input == TitleActivationStatusPendingSteam) output = web::json::value(U("PendingSteam"));
            if (input == TitleActivationStatusActivatedSteam) output = web::json::value(U("ActivatedSteam"));
            if (input == TitleActivationStatusRevokedSteam) output = web::json::value(U("RevokedSteam"));
        }
        inline void FromJsonEnum(const web::json::value& input, TitleActivationStatus& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("None")) output = TitleActivationStatusNone;
            if (inputStr == U("ActivatedTitleKey")) output = TitleActivationStatusActivatedTitleKey;
            if (inputStr == U("PendingSteam")) output = TitleActivationStatusPendingSteam;
            if (inputStr == U("ActivatedSteam")) output = TitleActivationStatusActivatedSteam;
            if (inputStr == U("RevokedSteam")) output = TitleActivationStatusRevokedSteam;
        }

        enum UserDataPermission
        {
            UserDataPermissionPrivate,
            UserDataPermissionPublic
        };

        inline void ToJsonEnum(const UserDataPermission input, web::json::value& output)
        {
            if (input == UserDataPermissionPrivate) output = web::json::value(U("Private"));
            if (input == UserDataPermissionPublic) output = web::json::value(U("Public"));
        }
        inline void FromJsonEnum(const web::json::value& input, UserDataPermission& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Private")) output = UserDataPermissionPrivate;
            if (inputStr == U("Public")) output = UserDataPermissionPublic;
        }

        enum UserOrigination
        {
            UserOriginationOrganic,
            UserOriginationSteam,
            UserOriginationGoogle,
            UserOriginationAmazon,
            UserOriginationFacebook,
            UserOriginationKongregate,
            UserOriginationGamersFirst,
            UserOriginationUnknown,
            UserOriginationIOS,
            UserOriginationLoadTest,
            UserOriginationAndroid,
            UserOriginationPSN,
            UserOriginationGameCenter,
            UserOriginationCustomId,
            UserOriginationXboxLive,
            UserOriginationParse,
            UserOriginationTwitch,
            UserOriginationWindowsHello
        };

        inline void ToJsonEnum(const UserOrigination input, web::json::value& output)
        {
            if (input == UserOriginationOrganic) output = web::json::value(U("Organic"));
            if (input == UserOriginationSteam) output = web::json::value(U("Steam"));
            if (input == UserOriginationGoogle) output = web::json::value(U("Google"));
            if (input == UserOriginationAmazon) output = web::json::value(U("Amazon"));
            if (input == UserOriginationFacebook) output = web::json::value(U("Facebook"));
            if (input == UserOriginationKongregate) output = web::json::value(U("Kongregate"));
            if (input == UserOriginationGamersFirst) output = web::json::value(U("GamersFirst"));
            if (input == UserOriginationUnknown) output = web::json::value(U("Unknown"));
            if (input == UserOriginationIOS) output = web::json::value(U("IOS"));
            if (input == UserOriginationLoadTest) output = web::json::value(U("LoadTest"));
            if (input == UserOriginationAndroid) output = web::json::value(U("Android"));
            if (input == UserOriginationPSN) output = web::json::value(U("PSN"));
            if (input == UserOriginationGameCenter) output = web::json::value(U("GameCenter"));
            if (input == UserOriginationCustomId) output = web::json::value(U("CustomId"));
            if (input == UserOriginationXboxLive) output = web::json::value(U("XboxLive"));
            if (input == UserOriginationParse) output = web::json::value(U("Parse"));
            if (input == UserOriginationTwitch) output = web::json::value(U("Twitch"));
            if (input == UserOriginationWindowsHello) output = web::json::value(U("WindowsHello"));
        }
        inline void FromJsonEnum(const web::json::value& input, UserOrigination& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Organic")) output = UserOriginationOrganic;
            if (inputStr == U("Steam")) output = UserOriginationSteam;
            if (inputStr == U("Google")) output = UserOriginationGoogle;
            if (inputStr == U("Amazon")) output = UserOriginationAmazon;
            if (inputStr == U("Facebook")) output = UserOriginationFacebook;
            if (inputStr == U("Kongregate")) output = UserOriginationKongregate;
            if (inputStr == U("GamersFirst")) output = UserOriginationGamersFirst;
            if (inputStr == U("Unknown")) output = UserOriginationUnknown;
            if (inputStr == U("IOS")) output = UserOriginationIOS;
            if (inputStr == U("LoadTest")) output = UserOriginationLoadTest;
            if (inputStr == U("Android")) output = UserOriginationAndroid;
            if (inputStr == U("PSN")) output = UserOriginationPSN;
            if (inputStr == U("GameCenter")) output = UserOriginationGameCenter;
            if (inputStr == U("CustomId")) output = UserOriginationCustomId;
            if (inputStr == U("XboxLive")) output = UserOriginationXboxLive;
            if (inputStr == U("Parse")) output = UserOriginationParse;
            if (inputStr == U("Twitch")) output = UserOriginationTwitch;
            if (inputStr == U("WindowsHello")) output = UserOriginationWindowsHello;
        }

        // Server Classes
        struct NameIdentifier : public PlayFabBaseModel
        {
            std::string Name;
            std::string Id;

            NameIdentifier() :
                PlayFabBaseModel(),
                Name(),
                Id()
            {}

            NameIdentifier(const NameIdentifier& src) :
                PlayFabBaseModel(),
                Name(src.Name),
                Id(src.Id)
            {}

            ~NameIdentifier() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Name")], Name);
                FromJsonUtilS(input[U("Id")], Id);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Name; ToJsonUtilS(Name, each_Name); output[U("Name")] = each_Name;
                web::json::value each_Id; ToJsonUtilS(Id, each_Id); output[U("Id")] = each_Id;
                return output;
            }
        };

        struct ActionsOnPlayersInSegmentTaskSummary : public PlayFabBaseModel
        {
            std::string TaskInstanceId;
            Boxed<NameIdentifier> TaskIdentifier;
            time_t StartedAt;
            Boxed<time_t> CompletedAt;
            Boxed<TaskInstanceStatus> Status;
            Boxed<double> PercentComplete;
            Boxed<double> EstimatedSecondsRemaining;
            std::string ScheduledByUserId;
            std::string ErrorMessage;
            Boxed<bool> ErrorWasFatal;
            Boxed<Int32> TotalPlayersInSegment;
            Boxed<Int32> TotalPlayersProcessed;

            ActionsOnPlayersInSegmentTaskSummary() :
                PlayFabBaseModel(),
                TaskInstanceId(),
                TaskIdentifier(),
                StartedAt(),
                CompletedAt(),
                Status(),
                PercentComplete(),
                EstimatedSecondsRemaining(),
                ScheduledByUserId(),
                ErrorMessage(),
                ErrorWasFatal(),
                TotalPlayersInSegment(),
                TotalPlayersProcessed()
            {}

            ActionsOnPlayersInSegmentTaskSummary(const ActionsOnPlayersInSegmentTaskSummary& src) :
                PlayFabBaseModel(),
                TaskInstanceId(src.TaskInstanceId),
                TaskIdentifier(src.TaskIdentifier),
                StartedAt(src.StartedAt),
                CompletedAt(src.CompletedAt),
                Status(src.Status),
                PercentComplete(src.PercentComplete),
                EstimatedSecondsRemaining(src.EstimatedSecondsRemaining),
                ScheduledByUserId(src.ScheduledByUserId),
                ErrorMessage(src.ErrorMessage),
                ErrorWasFatal(src.ErrorWasFatal),
                TotalPlayersInSegment(src.TotalPlayersInSegment),
                TotalPlayersProcessed(src.TotalPlayersProcessed)
            {}

            ~ActionsOnPlayersInSegmentTaskSummary() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("TaskInstanceId")], TaskInstanceId);
                FromJsonUtilO(input[U("TaskIdentifier")], TaskIdentifier);
                FromJsonUtilT(input[U("StartedAt")], StartedAt);
                FromJsonUtilT(input[U("CompletedAt")], CompletedAt);
                FromJsonUtilE(input[U("Status")], Status);
                FromJsonUtilP(input[U("PercentComplete")], PercentComplete);
                FromJsonUtilP(input[U("EstimatedSecondsRemaining")], EstimatedSecondsRemaining);
                FromJsonUtilS(input[U("ScheduledByUserId")], ScheduledByUserId);
                FromJsonUtilS(input[U("ErrorMessage")], ErrorMessage);
                FromJsonUtilP(input[U("ErrorWasFatal")], ErrorWasFatal);
                FromJsonUtilP(input[U("TotalPlayersInSegment")], TotalPlayersInSegment);
                FromJsonUtilP(input[U("TotalPlayersProcessed")], TotalPlayersProcessed);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TaskInstanceId; ToJsonUtilS(TaskInstanceId, each_TaskInstanceId); output[U("TaskInstanceId")] = each_TaskInstanceId;
                web::json::value each_TaskIdentifier; ToJsonUtilO(TaskIdentifier, each_TaskIdentifier); output[U("TaskIdentifier")] = each_TaskIdentifier;
                web::json::value each_StartedAt; ToJsonUtilT(StartedAt, each_StartedAt); output[U("StartedAt")] = each_StartedAt;
                web::json::value each_CompletedAt; ToJsonUtilT(CompletedAt, each_CompletedAt); output[U("CompletedAt")] = each_CompletedAt;
                web::json::value each_Status; ToJsonUtilE(Status, each_Status); output[U("Status")] = each_Status;
                web::json::value each_PercentComplete; ToJsonUtilP(PercentComplete, each_PercentComplete); output[U("PercentComplete")] = each_PercentComplete;
                web::json::value each_EstimatedSecondsRemaining; ToJsonUtilP(EstimatedSecondsRemaining, each_EstimatedSecondsRemaining); output[U("EstimatedSecondsRemaining")] = each_EstimatedSecondsRemaining;
                web::json::value each_ScheduledByUserId; ToJsonUtilS(ScheduledByUserId, each_ScheduledByUserId); output[U("ScheduledByUserId")] = each_ScheduledByUserId;
                web::json::value each_ErrorMessage; ToJsonUtilS(ErrorMessage, each_ErrorMessage); output[U("ErrorMessage")] = each_ErrorMessage;
                web::json::value each_ErrorWasFatal; ToJsonUtilP(ErrorWasFatal, each_ErrorWasFatal); output[U("ErrorWasFatal")] = each_ErrorWasFatal;
                web::json::value each_TotalPlayersInSegment; ToJsonUtilP(TotalPlayersInSegment, each_TotalPlayersInSegment); output[U("TotalPlayersInSegment")] = each_TotalPlayersInSegment;
                web::json::value each_TotalPlayersProcessed; ToJsonUtilP(TotalPlayersProcessed, each_TotalPlayersProcessed); output[U("TotalPlayersProcessed")] = each_TotalPlayersProcessed;
                return output;
            }
        };

        struct AdCampaignAttribution : public PlayFabBaseModel
        {
            std::string Platform;
            std::string CampaignId;
            time_t AttributedAt;

            AdCampaignAttribution() :
                PlayFabBaseModel(),
                Platform(),
                CampaignId(),
                AttributedAt()
            {}

            AdCampaignAttribution(const AdCampaignAttribution& src) :
                PlayFabBaseModel(),
                Platform(src.Platform),
                CampaignId(src.CampaignId),
                AttributedAt(src.AttributedAt)
            {}

            ~AdCampaignAttribution() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Platform")], Platform);
                FromJsonUtilS(input[U("CampaignId")], CampaignId);
                FromJsonUtilT(input[U("AttributedAt")], AttributedAt);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Platform; ToJsonUtilS(Platform, each_Platform); output[U("Platform")] = each_Platform;
                web::json::value each_CampaignId; ToJsonUtilS(CampaignId, each_CampaignId); output[U("CampaignId")] = each_CampaignId;
                web::json::value each_AttributedAt; ToJsonUtilT(AttributedAt, each_AttributedAt); output[U("AttributedAt")] = each_AttributedAt;
                return output;
            }
        };

        struct AdCampaignAttributionModel : public PlayFabBaseModel
        {
            std::string Platform;
            std::string CampaignId;
            time_t AttributedAt;

            AdCampaignAttributionModel() :
                PlayFabBaseModel(),
                Platform(),
                CampaignId(),
                AttributedAt()
            {}

            AdCampaignAttributionModel(const AdCampaignAttributionModel& src) :
                PlayFabBaseModel(),
                Platform(src.Platform),
                CampaignId(src.CampaignId),
                AttributedAt(src.AttributedAt)
            {}

            ~AdCampaignAttributionModel() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Platform")], Platform);
                FromJsonUtilS(input[U("CampaignId")], CampaignId);
                FromJsonUtilT(input[U("AttributedAt")], AttributedAt);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Platform; ToJsonUtilS(Platform, each_Platform); output[U("Platform")] = each_Platform;
                web::json::value each_CampaignId; ToJsonUtilS(CampaignId, each_CampaignId); output[U("CampaignId")] = each_CampaignId;
                web::json::value each_AttributedAt; ToJsonUtilT(AttributedAt, each_AttributedAt); output[U("AttributedAt")] = each_AttributedAt;
                return output;
            }
        };

        struct AddCharacterVirtualCurrencyRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string VirtualCurrency;
            Int32 Amount;

            AddCharacterVirtualCurrencyRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                VirtualCurrency(),
                Amount()
            {}

            AddCharacterVirtualCurrencyRequest(const AddCharacterVirtualCurrencyRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                VirtualCurrency(src.VirtualCurrency),
                Amount(src.Amount)
            {}

            ~AddCharacterVirtualCurrencyRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("VirtualCurrency")], VirtualCurrency);
                FromJsonUtilP(input[U("Amount")], Amount);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_VirtualCurrency; ToJsonUtilS(VirtualCurrency, each_VirtualCurrency); output[U("VirtualCurrency")] = each_VirtualCurrency;
                web::json::value each_Amount; ToJsonUtilP(Amount, each_Amount); output[U("Amount")] = each_Amount;
                return output;
            }
        };

        struct AddFriendRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string FriendPlayFabId;
            std::string FriendUsername;
            std::string FriendEmail;
            std::string FriendTitleDisplayName;

            AddFriendRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                FriendPlayFabId(),
                FriendUsername(),
                FriendEmail(),
                FriendTitleDisplayName()
            {}

            AddFriendRequest(const AddFriendRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                FriendPlayFabId(src.FriendPlayFabId),
                FriendUsername(src.FriendUsername),
                FriendEmail(src.FriendEmail),
                FriendTitleDisplayName(src.FriendTitleDisplayName)
            {}

            ~AddFriendRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("FriendPlayFabId")], FriendPlayFabId);
                FromJsonUtilS(input[U("FriendUsername")], FriendUsername);
                FromJsonUtilS(input[U("FriendEmail")], FriendEmail);
                FromJsonUtilS(input[U("FriendTitleDisplayName")], FriendTitleDisplayName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_FriendPlayFabId; ToJsonUtilS(FriendPlayFabId, each_FriendPlayFabId); output[U("FriendPlayFabId")] = each_FriendPlayFabId;
                web::json::value each_FriendUsername; ToJsonUtilS(FriendUsername, each_FriendUsername); output[U("FriendUsername")] = each_FriendUsername;
                web::json::value each_FriendEmail; ToJsonUtilS(FriendEmail, each_FriendEmail); output[U("FriendEmail")] = each_FriendEmail;
                web::json::value each_FriendTitleDisplayName; ToJsonUtilS(FriendTitleDisplayName, each_FriendTitleDisplayName); output[U("FriendTitleDisplayName")] = each_FriendTitleDisplayName;
                return output;
            }
        };

        struct AddPlayerTagRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string TagName;

            AddPlayerTagRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                TagName()
            {}

            AddPlayerTagRequest(const AddPlayerTagRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                TagName(src.TagName)
            {}

            ~AddPlayerTagRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("TagName")], TagName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_TagName; ToJsonUtilS(TagName, each_TagName); output[U("TagName")] = each_TagName;
                return output;
            }
        };

        struct AddPlayerTagResult : public PlayFabRequestCommon
        {

            AddPlayerTagResult() :
                PlayFabRequestCommon()
            {}

            AddPlayerTagResult(const AddPlayerTagResult& src) :
                PlayFabRequestCommon()
            {}

            ~AddPlayerTagResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct AddSharedGroupMembersRequest : public PlayFabRequestCommon
        {
            std::string SharedGroupId;
            std::list<std::string> PlayFabIds;

            AddSharedGroupMembersRequest() :
                PlayFabRequestCommon(),
                SharedGroupId(),
                PlayFabIds()
            {}

            AddSharedGroupMembersRequest(const AddSharedGroupMembersRequest& src) :
                PlayFabRequestCommon(),
                SharedGroupId(src.SharedGroupId),
                PlayFabIds(src.PlayFabIds)
            {}

            ~AddSharedGroupMembersRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SharedGroupId")], SharedGroupId);
                FromJsonUtilS(input[U("PlayFabIds")], PlayFabIds);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SharedGroupId; ToJsonUtilS(SharedGroupId, each_SharedGroupId); output[U("SharedGroupId")] = each_SharedGroupId;
                web::json::value each_PlayFabIds; ToJsonUtilS(PlayFabIds, each_PlayFabIds); output[U("PlayFabIds")] = each_PlayFabIds;
                return output;
            }
        };

        struct AddSharedGroupMembersResult : public PlayFabRequestCommon
        {

            AddSharedGroupMembersResult() :
                PlayFabRequestCommon()
            {}

            AddSharedGroupMembersResult(const AddSharedGroupMembersResult& src) :
                PlayFabRequestCommon()
            {}

            ~AddSharedGroupMembersResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct AddUserVirtualCurrencyRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string VirtualCurrency;
            Int32 Amount;

            AddUserVirtualCurrencyRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                VirtualCurrency(),
                Amount()
            {}

            AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                VirtualCurrency(src.VirtualCurrency),
                Amount(src.Amount)
            {}

            ~AddUserVirtualCurrencyRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("VirtualCurrency")], VirtualCurrency);
                FromJsonUtilP(input[U("Amount")], Amount);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_VirtualCurrency; ToJsonUtilS(VirtualCurrency, each_VirtualCurrency); output[U("VirtualCurrency")] = each_VirtualCurrency;
                web::json::value each_Amount; ToJsonUtilP(Amount, each_Amount); output[U("Amount")] = each_Amount;
                return output;
            }
        };

        struct AuthenticateSessionTicketRequest : public PlayFabRequestCommon
        {
            std::string SessionTicket;

            AuthenticateSessionTicketRequest() :
                PlayFabRequestCommon(),
                SessionTicket()
            {}

            AuthenticateSessionTicketRequest(const AuthenticateSessionTicketRequest& src) :
                PlayFabRequestCommon(),
                SessionTicket(src.SessionTicket)
            {}

            ~AuthenticateSessionTicketRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SessionTicket")], SessionTicket);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SessionTicket; ToJsonUtilS(SessionTicket, each_SessionTicket); output[U("SessionTicket")] = each_SessionTicket;
                return output;
            }
        };

        struct UserTitleInfo : public PlayFabBaseModel
        {
            std::string DisplayName;
            Boxed<UserOrigination> Origination;
            time_t Created;
            Boxed<time_t> LastLogin;
            Boxed<time_t> FirstLogin;
            Boxed<bool> isBanned;
            std::string AvatarUrl;

            UserTitleInfo() :
                PlayFabBaseModel(),
                DisplayName(),
                Origination(),
                Created(),
                LastLogin(),
                FirstLogin(),
                isBanned(),
                AvatarUrl()
            {}

            UserTitleInfo(const UserTitleInfo& src) :
                PlayFabBaseModel(),
                DisplayName(src.DisplayName),
                Origination(src.Origination),
                Created(src.Created),
                LastLogin(src.LastLogin),
                FirstLogin(src.FirstLogin),
                isBanned(src.isBanned),
                AvatarUrl(src.AvatarUrl)
            {}

            ~UserTitleInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
                FromJsonUtilE(input[U("Origination")], Origination);
                FromJsonUtilT(input[U("Created")], Created);
                FromJsonUtilT(input[U("LastLogin")], LastLogin);
                FromJsonUtilT(input[U("FirstLogin")], FirstLogin);
                FromJsonUtilP(input[U("isBanned")], isBanned);
                FromJsonUtilS(input[U("AvatarUrl")], AvatarUrl);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                web::json::value each_Origination; ToJsonUtilE(Origination, each_Origination); output[U("Origination")] = each_Origination;
                web::json::value each_Created; ToJsonUtilT(Created, each_Created); output[U("Created")] = each_Created;
                web::json::value each_LastLogin; ToJsonUtilT(LastLogin, each_LastLogin); output[U("LastLogin")] = each_LastLogin;
                web::json::value each_FirstLogin; ToJsonUtilT(FirstLogin, each_FirstLogin); output[U("FirstLogin")] = each_FirstLogin;
                web::json::value each_isBanned; ToJsonUtilP(isBanned, each_isBanned); output[U("isBanned")] = each_isBanned;
                web::json::value each_AvatarUrl; ToJsonUtilS(AvatarUrl, each_AvatarUrl); output[U("AvatarUrl")] = each_AvatarUrl;
                return output;
            }
        };

        struct UserPrivateAccountInfo : public PlayFabBaseModel
        {
            std::string Email;

            UserPrivateAccountInfo() :
                PlayFabBaseModel(),
                Email()
            {}

            UserPrivateAccountInfo(const UserPrivateAccountInfo& src) :
                PlayFabBaseModel(),
                Email(src.Email)
            {}

            ~UserPrivateAccountInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Email")], Email);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Email; ToJsonUtilS(Email, each_Email); output[U("Email")] = each_Email;
                return output;
            }
        };

        struct UserFacebookInfo : public PlayFabBaseModel
        {
            std::string FacebookId;
            std::string FullName;

            UserFacebookInfo() :
                PlayFabBaseModel(),
                FacebookId(),
                FullName()
            {}

            UserFacebookInfo(const UserFacebookInfo& src) :
                PlayFabBaseModel(),
                FacebookId(src.FacebookId),
                FullName(src.FullName)
            {}

            ~UserFacebookInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("FacebookId")], FacebookId);
                FromJsonUtilS(input[U("FullName")], FullName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_FacebookId; ToJsonUtilS(FacebookId, each_FacebookId); output[U("FacebookId")] = each_FacebookId;
                web::json::value each_FullName; ToJsonUtilS(FullName, each_FullName); output[U("FullName")] = each_FullName;
                return output;
            }
        };

        struct UserSteamInfo : public PlayFabBaseModel
        {
            std::string SteamId;
            std::string SteamCountry;
            Boxed<Currency> SteamCurrency;
            Boxed<TitleActivationStatus> SteamActivationStatus;

            UserSteamInfo() :
                PlayFabBaseModel(),
                SteamId(),
                SteamCountry(),
                SteamCurrency(),
                SteamActivationStatus()
            {}

            UserSteamInfo(const UserSteamInfo& src) :
                PlayFabBaseModel(),
                SteamId(src.SteamId),
                SteamCountry(src.SteamCountry),
                SteamCurrency(src.SteamCurrency),
                SteamActivationStatus(src.SteamActivationStatus)
            {}

            ~UserSteamInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SteamId")], SteamId);
                FromJsonUtilS(input[U("SteamCountry")], SteamCountry);
                FromJsonUtilE(input[U("SteamCurrency")], SteamCurrency);
                FromJsonUtilE(input[U("SteamActivationStatus")], SteamActivationStatus);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SteamId; ToJsonUtilS(SteamId, each_SteamId); output[U("SteamId")] = each_SteamId;
                web::json::value each_SteamCountry; ToJsonUtilS(SteamCountry, each_SteamCountry); output[U("SteamCountry")] = each_SteamCountry;
                web::json::value each_SteamCurrency; ToJsonUtilE(SteamCurrency, each_SteamCurrency); output[U("SteamCurrency")] = each_SteamCurrency;
                web::json::value each_SteamActivationStatus; ToJsonUtilE(SteamActivationStatus, each_SteamActivationStatus); output[U("SteamActivationStatus")] = each_SteamActivationStatus;
                return output;
            }
        };

        struct UserGameCenterInfo : public PlayFabBaseModel
        {
            std::string GameCenterId;

            UserGameCenterInfo() :
                PlayFabBaseModel(),
                GameCenterId()
            {}

            UserGameCenterInfo(const UserGameCenterInfo& src) :
                PlayFabBaseModel(),
                GameCenterId(src.GameCenterId)
            {}

            ~UserGameCenterInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("GameCenterId")], GameCenterId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_GameCenterId; ToJsonUtilS(GameCenterId, each_GameCenterId); output[U("GameCenterId")] = each_GameCenterId;
                return output;
            }
        };

        struct UserIosDeviceInfo : public PlayFabBaseModel
        {
            std::string IosDeviceId;

            UserIosDeviceInfo() :
                PlayFabBaseModel(),
                IosDeviceId()
            {}

            UserIosDeviceInfo(const UserIosDeviceInfo& src) :
                PlayFabBaseModel(),
                IosDeviceId(src.IosDeviceId)
            {}

            ~UserIosDeviceInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("IosDeviceId")], IosDeviceId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_IosDeviceId; ToJsonUtilS(IosDeviceId, each_IosDeviceId); output[U("IosDeviceId")] = each_IosDeviceId;
                return output;
            }
        };

        struct UserAndroidDeviceInfo : public PlayFabBaseModel
        {
            std::string AndroidDeviceId;

            UserAndroidDeviceInfo() :
                PlayFabBaseModel(),
                AndroidDeviceId()
            {}

            UserAndroidDeviceInfo(const UserAndroidDeviceInfo& src) :
                PlayFabBaseModel(),
                AndroidDeviceId(src.AndroidDeviceId)
            {}

            ~UserAndroidDeviceInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("AndroidDeviceId")], AndroidDeviceId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_AndroidDeviceId; ToJsonUtilS(AndroidDeviceId, each_AndroidDeviceId); output[U("AndroidDeviceId")] = each_AndroidDeviceId;
                return output;
            }
        };

        struct UserKongregateInfo : public PlayFabBaseModel
        {
            std::string KongregateId;
            std::string KongregateName;

            UserKongregateInfo() :
                PlayFabBaseModel(),
                KongregateId(),
                KongregateName()
            {}

            UserKongregateInfo(const UserKongregateInfo& src) :
                PlayFabBaseModel(),
                KongregateId(src.KongregateId),
                KongregateName(src.KongregateName)
            {}

            ~UserKongregateInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("KongregateId")], KongregateId);
                FromJsonUtilS(input[U("KongregateName")], KongregateName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_KongregateId; ToJsonUtilS(KongregateId, each_KongregateId); output[U("KongregateId")] = each_KongregateId;
                web::json::value each_KongregateName; ToJsonUtilS(KongregateName, each_KongregateName); output[U("KongregateName")] = each_KongregateName;
                return output;
            }
        };

        struct UserTwitchInfo : public PlayFabBaseModel
        {
            std::string TwitchId;
            std::string TwitchUserName;

            UserTwitchInfo() :
                PlayFabBaseModel(),
                TwitchId(),
                TwitchUserName()
            {}

            UserTwitchInfo(const UserTwitchInfo& src) :
                PlayFabBaseModel(),
                TwitchId(src.TwitchId),
                TwitchUserName(src.TwitchUserName)
            {}

            ~UserTwitchInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("TwitchId")], TwitchId);
                FromJsonUtilS(input[U("TwitchUserName")], TwitchUserName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TwitchId; ToJsonUtilS(TwitchId, each_TwitchId); output[U("TwitchId")] = each_TwitchId;
                web::json::value each_TwitchUserName; ToJsonUtilS(TwitchUserName, each_TwitchUserName); output[U("TwitchUserName")] = each_TwitchUserName;
                return output;
            }
        };

        struct UserPsnInfo : public PlayFabBaseModel
        {
            std::string PsnAccountId;
            std::string PsnOnlineId;

            UserPsnInfo() :
                PlayFabBaseModel(),
                PsnAccountId(),
                PsnOnlineId()
            {}

            UserPsnInfo(const UserPsnInfo& src) :
                PlayFabBaseModel(),
                PsnAccountId(src.PsnAccountId),
                PsnOnlineId(src.PsnOnlineId)
            {}

            ~UserPsnInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PsnAccountId")], PsnAccountId);
                FromJsonUtilS(input[U("PsnOnlineId")], PsnOnlineId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PsnAccountId; ToJsonUtilS(PsnAccountId, each_PsnAccountId); output[U("PsnAccountId")] = each_PsnAccountId;
                web::json::value each_PsnOnlineId; ToJsonUtilS(PsnOnlineId, each_PsnOnlineId); output[U("PsnOnlineId")] = each_PsnOnlineId;
                return output;
            }
        };

        struct UserGoogleInfo : public PlayFabBaseModel
        {
            std::string GoogleId;
            std::string GoogleEmail;
            std::string GoogleLocale;
            std::string GoogleGender;

            UserGoogleInfo() :
                PlayFabBaseModel(),
                GoogleId(),
                GoogleEmail(),
                GoogleLocale(),
                GoogleGender()
            {}

            UserGoogleInfo(const UserGoogleInfo& src) :
                PlayFabBaseModel(),
                GoogleId(src.GoogleId),
                GoogleEmail(src.GoogleEmail),
                GoogleLocale(src.GoogleLocale),
                GoogleGender(src.GoogleGender)
            {}

            ~UserGoogleInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("GoogleId")], GoogleId);
                FromJsonUtilS(input[U("GoogleEmail")], GoogleEmail);
                FromJsonUtilS(input[U("GoogleLocale")], GoogleLocale);
                FromJsonUtilS(input[U("GoogleGender")], GoogleGender);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_GoogleId; ToJsonUtilS(GoogleId, each_GoogleId); output[U("GoogleId")] = each_GoogleId;
                web::json::value each_GoogleEmail; ToJsonUtilS(GoogleEmail, each_GoogleEmail); output[U("GoogleEmail")] = each_GoogleEmail;
                web::json::value each_GoogleLocale; ToJsonUtilS(GoogleLocale, each_GoogleLocale); output[U("GoogleLocale")] = each_GoogleLocale;
                web::json::value each_GoogleGender; ToJsonUtilS(GoogleGender, each_GoogleGender); output[U("GoogleGender")] = each_GoogleGender;
                return output;
            }
        };

        struct UserXboxInfo : public PlayFabBaseModel
        {
            std::string XboxUserId;

            UserXboxInfo() :
                PlayFabBaseModel(),
                XboxUserId()
            {}

            UserXboxInfo(const UserXboxInfo& src) :
                PlayFabBaseModel(),
                XboxUserId(src.XboxUserId)
            {}

            ~UserXboxInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("XboxUserId")], XboxUserId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_XboxUserId; ToJsonUtilS(XboxUserId, each_XboxUserId); output[U("XboxUserId")] = each_XboxUserId;
                return output;
            }
        };

        struct UserCustomIdInfo : public PlayFabBaseModel
        {
            std::string CustomId;

            UserCustomIdInfo() :
                PlayFabBaseModel(),
                CustomId()
            {}

            UserCustomIdInfo(const UserCustomIdInfo& src) :
                PlayFabBaseModel(),
                CustomId(src.CustomId)
            {}

            ~UserCustomIdInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CustomId")], CustomId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CustomId; ToJsonUtilS(CustomId, each_CustomId); output[U("CustomId")] = each_CustomId;
                return output;
            }
        };

        struct UserAccountInfo : public PlayFabBaseModel
        {
            std::string PlayFabId;
            time_t Created;
            std::string Username;
            Boxed<UserTitleInfo> TitleInfo;
            Boxed<UserPrivateAccountInfo> PrivateInfo;
            Boxed<UserFacebookInfo> FacebookInfo;
            Boxed<UserSteamInfo> SteamInfo;
            Boxed<UserGameCenterInfo> GameCenterInfo;
            Boxed<UserIosDeviceInfo> IosDeviceInfo;
            Boxed<UserAndroidDeviceInfo> AndroidDeviceInfo;
            Boxed<UserKongregateInfo> KongregateInfo;
            Boxed<UserTwitchInfo> TwitchInfo;
            Boxed<UserPsnInfo> PsnInfo;
            Boxed<UserGoogleInfo> GoogleInfo;
            Boxed<UserXboxInfo> XboxInfo;
            Boxed<UserCustomIdInfo> CustomIdInfo;

            UserAccountInfo() :
                PlayFabBaseModel(),
                PlayFabId(),
                Created(),
                Username(),
                TitleInfo(),
                PrivateInfo(),
                FacebookInfo(),
                SteamInfo(),
                GameCenterInfo(),
                IosDeviceInfo(),
                AndroidDeviceInfo(),
                KongregateInfo(),
                TwitchInfo(),
                PsnInfo(),
                GoogleInfo(),
                XboxInfo(),
                CustomIdInfo()
            {}

            UserAccountInfo(const UserAccountInfo& src) :
                PlayFabBaseModel(),
                PlayFabId(src.PlayFabId),
                Created(src.Created),
                Username(src.Username),
                TitleInfo(src.TitleInfo),
                PrivateInfo(src.PrivateInfo),
                FacebookInfo(src.FacebookInfo),
                SteamInfo(src.SteamInfo),
                GameCenterInfo(src.GameCenterInfo),
                IosDeviceInfo(src.IosDeviceInfo),
                AndroidDeviceInfo(src.AndroidDeviceInfo),
                KongregateInfo(src.KongregateInfo),
                TwitchInfo(src.TwitchInfo),
                PsnInfo(src.PsnInfo),
                GoogleInfo(src.GoogleInfo),
                XboxInfo(src.XboxInfo),
                CustomIdInfo(src.CustomIdInfo)
            {}

            ~UserAccountInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilT(input[U("Created")], Created);
                FromJsonUtilS(input[U("Username")], Username);
                FromJsonUtilO(input[U("TitleInfo")], TitleInfo);
                FromJsonUtilO(input[U("PrivateInfo")], PrivateInfo);
                FromJsonUtilO(input[U("FacebookInfo")], FacebookInfo);
                FromJsonUtilO(input[U("SteamInfo")], SteamInfo);
                FromJsonUtilO(input[U("GameCenterInfo")], GameCenterInfo);
                FromJsonUtilO(input[U("IosDeviceInfo")], IosDeviceInfo);
                FromJsonUtilO(input[U("AndroidDeviceInfo")], AndroidDeviceInfo);
                FromJsonUtilO(input[U("KongregateInfo")], KongregateInfo);
                FromJsonUtilO(input[U("TwitchInfo")], TwitchInfo);
                FromJsonUtilO(input[U("PsnInfo")], PsnInfo);
                FromJsonUtilO(input[U("GoogleInfo")], GoogleInfo);
                FromJsonUtilO(input[U("XboxInfo")], XboxInfo);
                FromJsonUtilO(input[U("CustomIdInfo")], CustomIdInfo);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Created; ToJsonUtilT(Created, each_Created); output[U("Created")] = each_Created;
                web::json::value each_Username; ToJsonUtilS(Username, each_Username); output[U("Username")] = each_Username;
                web::json::value each_TitleInfo; ToJsonUtilO(TitleInfo, each_TitleInfo); output[U("TitleInfo")] = each_TitleInfo;
                web::json::value each_PrivateInfo; ToJsonUtilO(PrivateInfo, each_PrivateInfo); output[U("PrivateInfo")] = each_PrivateInfo;
                web::json::value each_FacebookInfo; ToJsonUtilO(FacebookInfo, each_FacebookInfo); output[U("FacebookInfo")] = each_FacebookInfo;
                web::json::value each_SteamInfo; ToJsonUtilO(SteamInfo, each_SteamInfo); output[U("SteamInfo")] = each_SteamInfo;
                web::json::value each_GameCenterInfo; ToJsonUtilO(GameCenterInfo, each_GameCenterInfo); output[U("GameCenterInfo")] = each_GameCenterInfo;
                web::json::value each_IosDeviceInfo; ToJsonUtilO(IosDeviceInfo, each_IosDeviceInfo); output[U("IosDeviceInfo")] = each_IosDeviceInfo;
                web::json::value each_AndroidDeviceInfo; ToJsonUtilO(AndroidDeviceInfo, each_AndroidDeviceInfo); output[U("AndroidDeviceInfo")] = each_AndroidDeviceInfo;
                web::json::value each_KongregateInfo; ToJsonUtilO(KongregateInfo, each_KongregateInfo); output[U("KongregateInfo")] = each_KongregateInfo;
                web::json::value each_TwitchInfo; ToJsonUtilO(TwitchInfo, each_TwitchInfo); output[U("TwitchInfo")] = each_TwitchInfo;
                web::json::value each_PsnInfo; ToJsonUtilO(PsnInfo, each_PsnInfo); output[U("PsnInfo")] = each_PsnInfo;
                web::json::value each_GoogleInfo; ToJsonUtilO(GoogleInfo, each_GoogleInfo); output[U("GoogleInfo")] = each_GoogleInfo;
                web::json::value each_XboxInfo; ToJsonUtilO(XboxInfo, each_XboxInfo); output[U("XboxInfo")] = each_XboxInfo;
                web::json::value each_CustomIdInfo; ToJsonUtilO(CustomIdInfo, each_CustomIdInfo); output[U("CustomIdInfo")] = each_CustomIdInfo;
                return output;
            }
        };

        struct AuthenticateSessionTicketResult : public PlayFabRequestCommon
        {
            Boxed<UserAccountInfo> UserInfo;

            AuthenticateSessionTicketResult() :
                PlayFabRequestCommon(),
                UserInfo()
            {}

            AuthenticateSessionTicketResult(const AuthenticateSessionTicketResult& src) :
                PlayFabRequestCommon(),
                UserInfo(src.UserInfo)
            {}

            ~AuthenticateSessionTicketResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("UserInfo")], UserInfo);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_UserInfo; ToJsonUtilO(UserInfo, each_UserInfo); output[U("UserInfo")] = each_UserInfo;
                return output;
            }
        };

        struct AwardSteamAchievementItem : public PlayFabBaseModel
        {
            std::string PlayFabId;
            std::string AchievementName;
            bool Result;

            AwardSteamAchievementItem() :
                PlayFabBaseModel(),
                PlayFabId(),
                AchievementName(),
                Result()
            {}

            AwardSteamAchievementItem(const AwardSteamAchievementItem& src) :
                PlayFabBaseModel(),
                PlayFabId(src.PlayFabId),
                AchievementName(src.AchievementName),
                Result(src.Result)
            {}

            ~AwardSteamAchievementItem() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("AchievementName")], AchievementName);
                FromJsonUtilP(input[U("Result")], Result);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_AchievementName; ToJsonUtilS(AchievementName, each_AchievementName); output[U("AchievementName")] = each_AchievementName;
                web::json::value each_Result; ToJsonUtilP(Result, each_Result); output[U("Result")] = each_Result;
                return output;
            }
        };

        struct AwardSteamAchievementRequest : public PlayFabRequestCommon
        {
            std::list<AwardSteamAchievementItem> Achievements;

            AwardSteamAchievementRequest() :
                PlayFabRequestCommon(),
                Achievements()
            {}

            AwardSteamAchievementRequest(const AwardSteamAchievementRequest& src) :
                PlayFabRequestCommon(),
                Achievements(src.Achievements)
            {}

            ~AwardSteamAchievementRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Achievements")], Achievements);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Achievements; ToJsonUtilO(Achievements, each_Achievements); output[U("Achievements")] = each_Achievements;
                return output;
            }
        };

        struct AwardSteamAchievementResult : public PlayFabRequestCommon
        {
            std::list<AwardSteamAchievementItem> AchievementResults;

            AwardSteamAchievementResult() :
                PlayFabRequestCommon(),
                AchievementResults()
            {}

            AwardSteamAchievementResult(const AwardSteamAchievementResult& src) :
                PlayFabRequestCommon(),
                AchievementResults(src.AchievementResults)
            {}

            ~AwardSteamAchievementResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("AchievementResults")], AchievementResults);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_AchievementResults; ToJsonUtilO(AchievementResults, each_AchievementResults); output[U("AchievementResults")] = each_AchievementResults;
                return output;
            }
        };

        struct BanInfo : public PlayFabBaseModel
        {
            std::string PlayFabId;
            std::string BanId;
            std::string IPAddress;
            std::string MACAddress;
            Boxed<time_t> Created;
            Boxed<time_t> Expires;
            std::string Reason;
            bool Active;

            BanInfo() :
                PlayFabBaseModel(),
                PlayFabId(),
                BanId(),
                IPAddress(),
                MACAddress(),
                Created(),
                Expires(),
                Reason(),
                Active()
            {}

            BanInfo(const BanInfo& src) :
                PlayFabBaseModel(),
                PlayFabId(src.PlayFabId),
                BanId(src.BanId),
                IPAddress(src.IPAddress),
                MACAddress(src.MACAddress),
                Created(src.Created),
                Expires(src.Expires),
                Reason(src.Reason),
                Active(src.Active)
            {}

            ~BanInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("BanId")], BanId);
                FromJsonUtilS(input[U("IPAddress")], IPAddress);
                FromJsonUtilS(input[U("MACAddress")], MACAddress);
                FromJsonUtilT(input[U("Created")], Created);
                FromJsonUtilT(input[U("Expires")], Expires);
                FromJsonUtilS(input[U("Reason")], Reason);
                FromJsonUtilP(input[U("Active")], Active);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_BanId; ToJsonUtilS(BanId, each_BanId); output[U("BanId")] = each_BanId;
                web::json::value each_IPAddress; ToJsonUtilS(IPAddress, each_IPAddress); output[U("IPAddress")] = each_IPAddress;
                web::json::value each_MACAddress; ToJsonUtilS(MACAddress, each_MACAddress); output[U("MACAddress")] = each_MACAddress;
                web::json::value each_Created; ToJsonUtilT(Created, each_Created); output[U("Created")] = each_Created;
                web::json::value each_Expires; ToJsonUtilT(Expires, each_Expires); output[U("Expires")] = each_Expires;
                web::json::value each_Reason; ToJsonUtilS(Reason, each_Reason); output[U("Reason")] = each_Reason;
                web::json::value each_Active; ToJsonUtilP(Active, each_Active); output[U("Active")] = each_Active;
                return output;
            }
        };

        struct BanRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string IPAddress;
            std::string MACAddress;
            std::string Reason;
            Boxed<Uint32> DurationInHours;

            BanRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                IPAddress(),
                MACAddress(),
                Reason(),
                DurationInHours()
            {}

            BanRequest(const BanRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                IPAddress(src.IPAddress),
                MACAddress(src.MACAddress),
                Reason(src.Reason),
                DurationInHours(src.DurationInHours)
            {}

            ~BanRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("IPAddress")], IPAddress);
                FromJsonUtilS(input[U("MACAddress")], MACAddress);
                FromJsonUtilS(input[U("Reason")], Reason);
                FromJsonUtilP(input[U("DurationInHours")], DurationInHours);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_IPAddress; ToJsonUtilS(IPAddress, each_IPAddress); output[U("IPAddress")] = each_IPAddress;
                web::json::value each_MACAddress; ToJsonUtilS(MACAddress, each_MACAddress); output[U("MACAddress")] = each_MACAddress;
                web::json::value each_Reason; ToJsonUtilS(Reason, each_Reason); output[U("Reason")] = each_Reason;
                web::json::value each_DurationInHours; ToJsonUtilP(DurationInHours, each_DurationInHours); output[U("DurationInHours")] = each_DurationInHours;
                return output;
            }
        };

        struct BanUsersRequest : public PlayFabRequestCommon
        {
            std::list<BanRequest> Bans;

            BanUsersRequest() :
                PlayFabRequestCommon(),
                Bans()
            {}

            BanUsersRequest(const BanUsersRequest& src) :
                PlayFabRequestCommon(),
                Bans(src.Bans)
            {}

            ~BanUsersRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Bans")], Bans);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Bans; ToJsonUtilO(Bans, each_Bans); output[U("Bans")] = each_Bans;
                return output;
            }
        };

        struct BanUsersResult : public PlayFabRequestCommon
        {
            std::list<BanInfo> BanData;

            BanUsersResult() :
                PlayFabRequestCommon(),
                BanData()
            {}

            BanUsersResult(const BanUsersResult& src) :
                PlayFabRequestCommon(),
                BanData(src.BanData)
            {}

            ~BanUsersResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("BanData")], BanData);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BanData; ToJsonUtilO(BanData, each_BanData); output[U("BanData")] = each_BanData;
                return output;
            }
        };

        struct CatalogItemConsumableInfo : public PlayFabBaseModel
        {
            Boxed<Uint32> UsageCount;
            Boxed<Uint32> UsagePeriod;
            std::string UsagePeriodGroup;

            CatalogItemConsumableInfo() :
                PlayFabBaseModel(),
                UsageCount(),
                UsagePeriod(),
                UsagePeriodGroup()
            {}

            CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src) :
                PlayFabBaseModel(),
                UsageCount(src.UsageCount),
                UsagePeriod(src.UsagePeriod),
                UsagePeriodGroup(src.UsagePeriodGroup)
            {}

            ~CatalogItemConsumableInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("UsageCount")], UsageCount);
                FromJsonUtilP(input[U("UsagePeriod")], UsagePeriod);
                FromJsonUtilS(input[U("UsagePeriodGroup")], UsagePeriodGroup);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_UsageCount; ToJsonUtilP(UsageCount, each_UsageCount); output[U("UsageCount")] = each_UsageCount;
                web::json::value each_UsagePeriod; ToJsonUtilP(UsagePeriod, each_UsagePeriod); output[U("UsagePeriod")] = each_UsagePeriod;
                web::json::value each_UsagePeriodGroup; ToJsonUtilS(UsagePeriodGroup, each_UsagePeriodGroup); output[U("UsagePeriodGroup")] = each_UsagePeriodGroup;
                return output;
            }
        };

        struct CatalogItemContainerInfo : public PlayFabBaseModel
        {
            std::string KeyItemId;
            std::list<std::string> ItemContents;
            std::list<std::string> ResultTableContents;
            std::map<std::string, Uint32> VirtualCurrencyContents;

            CatalogItemContainerInfo() :
                PlayFabBaseModel(),
                KeyItemId(),
                ItemContents(),
                ResultTableContents(),
                VirtualCurrencyContents()
            {}

            CatalogItemContainerInfo(const CatalogItemContainerInfo& src) :
                PlayFabBaseModel(),
                KeyItemId(src.KeyItemId),
                ItemContents(src.ItemContents),
                ResultTableContents(src.ResultTableContents),
                VirtualCurrencyContents(src.VirtualCurrencyContents)
            {}

            ~CatalogItemContainerInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("KeyItemId")], KeyItemId);
                FromJsonUtilS(input[U("ItemContents")], ItemContents);
                FromJsonUtilS(input[U("ResultTableContents")], ResultTableContents);
                FromJsonUtilP(input[U("VirtualCurrencyContents")], VirtualCurrencyContents);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_KeyItemId; ToJsonUtilS(KeyItemId, each_KeyItemId); output[U("KeyItemId")] = each_KeyItemId;
                web::json::value each_ItemContents; ToJsonUtilS(ItemContents, each_ItemContents); output[U("ItemContents")] = each_ItemContents;
                web::json::value each_ResultTableContents; ToJsonUtilS(ResultTableContents, each_ResultTableContents); output[U("ResultTableContents")] = each_ResultTableContents;
                web::json::value each_VirtualCurrencyContents; ToJsonUtilP(VirtualCurrencyContents, each_VirtualCurrencyContents); output[U("VirtualCurrencyContents")] = each_VirtualCurrencyContents;
                return output;
            }
        };

        struct CatalogItemBundleInfo : public PlayFabBaseModel
        {
            std::list<std::string> BundledItems;
            std::list<std::string> BundledResultTables;
            std::map<std::string, Uint32> BundledVirtualCurrencies;

            CatalogItemBundleInfo() :
                PlayFabBaseModel(),
                BundledItems(),
                BundledResultTables(),
                BundledVirtualCurrencies()
            {}

            CatalogItemBundleInfo(const CatalogItemBundleInfo& src) :
                PlayFabBaseModel(),
                BundledItems(src.BundledItems),
                BundledResultTables(src.BundledResultTables),
                BundledVirtualCurrencies(src.BundledVirtualCurrencies)
            {}

            ~CatalogItemBundleInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BundledItems")], BundledItems);
                FromJsonUtilS(input[U("BundledResultTables")], BundledResultTables);
                FromJsonUtilP(input[U("BundledVirtualCurrencies")], BundledVirtualCurrencies);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BundledItems; ToJsonUtilS(BundledItems, each_BundledItems); output[U("BundledItems")] = each_BundledItems;
                web::json::value each_BundledResultTables; ToJsonUtilS(BundledResultTables, each_BundledResultTables); output[U("BundledResultTables")] = each_BundledResultTables;
                web::json::value each_BundledVirtualCurrencies; ToJsonUtilP(BundledVirtualCurrencies, each_BundledVirtualCurrencies); output[U("BundledVirtualCurrencies")] = each_BundledVirtualCurrencies;
                return output;
            }
        };

        struct CatalogItem : public PlayFabBaseModel
        {
            std::string ItemId;
            std::string ItemClass;
            std::string CatalogVersion;
            std::string DisplayName;
            std::string Description;
            std::map<std::string, Uint32> VirtualCurrencyPrices;
            std::map<std::string, Uint32> RealCurrencyPrices;
            std::list<std::string> Tags;
            std::string CustomData;
            Boxed<CatalogItemConsumableInfo> Consumable;
            Boxed<CatalogItemContainerInfo> Container;
            Boxed<CatalogItemBundleInfo> Bundle;
            bool CanBecomeCharacter;
            bool IsStackable;
            bool IsTradable;
            std::string ItemImageUrl;
            bool IsLimitedEdition;
            Int32 InitialLimitedEditionCount;

            CatalogItem() :
                PlayFabBaseModel(),
                ItemId(),
                ItemClass(),
                CatalogVersion(),
                DisplayName(),
                Description(),
                VirtualCurrencyPrices(),
                RealCurrencyPrices(),
                Tags(),
                CustomData(),
                Consumable(),
                Container(),
                Bundle(),
                CanBecomeCharacter(),
                IsStackable(),
                IsTradable(),
                ItemImageUrl(),
                IsLimitedEdition(),
                InitialLimitedEditionCount()
            {}

            CatalogItem(const CatalogItem& src) :
                PlayFabBaseModel(),
                ItemId(src.ItemId),
                ItemClass(src.ItemClass),
                CatalogVersion(src.CatalogVersion),
                DisplayName(src.DisplayName),
                Description(src.Description),
                VirtualCurrencyPrices(src.VirtualCurrencyPrices),
                RealCurrencyPrices(src.RealCurrencyPrices),
                Tags(src.Tags),
                CustomData(src.CustomData),
                Consumable(src.Consumable),
                Container(src.Container),
                Bundle(src.Bundle),
                CanBecomeCharacter(src.CanBecomeCharacter),
                IsStackable(src.IsStackable),
                IsTradable(src.IsTradable),
                ItemImageUrl(src.ItemImageUrl),
                IsLimitedEdition(src.IsLimitedEdition),
                InitialLimitedEditionCount(src.InitialLimitedEditionCount)
            {}

            ~CatalogItem() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("ItemId")], ItemId);
                FromJsonUtilS(input[U("ItemClass")], ItemClass);
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
                FromJsonUtilS(input[U("Description")], Description);
                FromJsonUtilP(input[U("VirtualCurrencyPrices")], VirtualCurrencyPrices);
                FromJsonUtilP(input[U("RealCurrencyPrices")], RealCurrencyPrices);
                FromJsonUtilS(input[U("Tags")], Tags);
                FromJsonUtilS(input[U("CustomData")], CustomData);
                FromJsonUtilO(input[U("Consumable")], Consumable);
                FromJsonUtilO(input[U("Container")], Container);
                FromJsonUtilO(input[U("Bundle")], Bundle);
                FromJsonUtilP(input[U("CanBecomeCharacter")], CanBecomeCharacter);
                FromJsonUtilP(input[U("IsStackable")], IsStackable);
                FromJsonUtilP(input[U("IsTradable")], IsTradable);
                FromJsonUtilS(input[U("ItemImageUrl")], ItemImageUrl);
                FromJsonUtilP(input[U("IsLimitedEdition")], IsLimitedEdition);
                FromJsonUtilP(input[U("InitialLimitedEditionCount")], InitialLimitedEditionCount);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ItemId; ToJsonUtilS(ItemId, each_ItemId); output[U("ItemId")] = each_ItemId;
                web::json::value each_ItemClass; ToJsonUtilS(ItemClass, each_ItemClass); output[U("ItemClass")] = each_ItemClass;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                web::json::value each_Description; ToJsonUtilS(Description, each_Description); output[U("Description")] = each_Description;
                web::json::value each_VirtualCurrencyPrices; ToJsonUtilP(VirtualCurrencyPrices, each_VirtualCurrencyPrices); output[U("VirtualCurrencyPrices")] = each_VirtualCurrencyPrices;
                web::json::value each_RealCurrencyPrices; ToJsonUtilP(RealCurrencyPrices, each_RealCurrencyPrices); output[U("RealCurrencyPrices")] = each_RealCurrencyPrices;
                web::json::value each_Tags; ToJsonUtilS(Tags, each_Tags); output[U("Tags")] = each_Tags;
                web::json::value each_CustomData; ToJsonUtilS(CustomData, each_CustomData); output[U("CustomData")] = each_CustomData;
                web::json::value each_Consumable; ToJsonUtilO(Consumable, each_Consumable); output[U("Consumable")] = each_Consumable;
                web::json::value each_Container; ToJsonUtilO(Container, each_Container); output[U("Container")] = each_Container;
                web::json::value each_Bundle; ToJsonUtilO(Bundle, each_Bundle); output[U("Bundle")] = each_Bundle;
                web::json::value each_CanBecomeCharacter; ToJsonUtilP(CanBecomeCharacter, each_CanBecomeCharacter); output[U("CanBecomeCharacter")] = each_CanBecomeCharacter;
                web::json::value each_IsStackable; ToJsonUtilP(IsStackable, each_IsStackable); output[U("IsStackable")] = each_IsStackable;
                web::json::value each_IsTradable; ToJsonUtilP(IsTradable, each_IsTradable); output[U("IsTradable")] = each_IsTradable;
                web::json::value each_ItemImageUrl; ToJsonUtilS(ItemImageUrl, each_ItemImageUrl); output[U("ItemImageUrl")] = each_ItemImageUrl;
                web::json::value each_IsLimitedEdition; ToJsonUtilP(IsLimitedEdition, each_IsLimitedEdition); output[U("IsLimitedEdition")] = each_IsLimitedEdition;
                web::json::value each_InitialLimitedEditionCount; ToJsonUtilP(InitialLimitedEditionCount, each_InitialLimitedEditionCount); output[U("InitialLimitedEditionCount")] = each_InitialLimitedEditionCount;
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

        struct CharacterInventory : public PlayFabBaseModel
        {
            std::string CharacterId;
            std::list<ItemInstance> Inventory;

            CharacterInventory() :
                PlayFabBaseModel(),
                CharacterId(),
                Inventory()
            {}

            CharacterInventory(const CharacterInventory& src) :
                PlayFabBaseModel(),
                CharacterId(src.CharacterId),
                Inventory(src.Inventory)
            {}

            ~CharacterInventory() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilO(input[U("Inventory")], Inventory);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_Inventory; ToJsonUtilO(Inventory, each_Inventory); output[U("Inventory")] = each_Inventory;
                return output;
            }
        };

        struct CharacterLeaderboardEntry : public PlayFabBaseModel
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string CharacterName;
            std::string DisplayName;
            std::string CharacterType;
            Int32 StatValue;
            Int32 Position;

            CharacterLeaderboardEntry() :
                PlayFabBaseModel(),
                PlayFabId(),
                CharacterId(),
                CharacterName(),
                DisplayName(),
                CharacterType(),
                StatValue(),
                Position()
            {}

            CharacterLeaderboardEntry(const CharacterLeaderboardEntry& src) :
                PlayFabBaseModel(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                CharacterName(src.CharacterName),
                DisplayName(src.DisplayName),
                CharacterType(src.CharacterType),
                StatValue(src.StatValue),
                Position(src.Position)
            {}

            ~CharacterLeaderboardEntry() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("CharacterName")], CharacterName);
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
                FromJsonUtilS(input[U("CharacterType")], CharacterType);
                FromJsonUtilP(input[U("StatValue")], StatValue);
                FromJsonUtilP(input[U("Position")], Position);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_CharacterName; ToJsonUtilS(CharacterName, each_CharacterName); output[U("CharacterName")] = each_CharacterName;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                web::json::value each_CharacterType; ToJsonUtilS(CharacterType, each_CharacterType); output[U("CharacterType")] = each_CharacterType;
                web::json::value each_StatValue; ToJsonUtilP(StatValue, each_StatValue); output[U("StatValue")] = each_StatValue;
                web::json::value each_Position; ToJsonUtilP(Position, each_Position); output[U("Position")] = each_Position;
                return output;
            }
        };

        struct CharacterResult : public PlayFabRequestCommon
        {
            std::string CharacterId;
            std::string CharacterName;
            std::string CharacterType;

            CharacterResult() :
                PlayFabRequestCommon(),
                CharacterId(),
                CharacterName(),
                CharacterType()
            {}

            CharacterResult(const CharacterResult& src) :
                PlayFabRequestCommon(),
                CharacterId(src.CharacterId),
                CharacterName(src.CharacterName),
                CharacterType(src.CharacterType)
            {}

            ~CharacterResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("CharacterName")], CharacterName);
                FromJsonUtilS(input[U("CharacterType")], CharacterType);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_CharacterName; ToJsonUtilS(CharacterName, each_CharacterName); output[U("CharacterName")] = each_CharacterName;
                web::json::value each_CharacterType; ToJsonUtilS(CharacterType, each_CharacterType); output[U("CharacterType")] = each_CharacterType;
                return output;
            }
        };

        struct ConsumeItemRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string ItemInstanceId;
            Int32 ConsumeCount;
            std::string CharacterId;

            ConsumeItemRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                ItemInstanceId(),
                ConsumeCount(),
                CharacterId()
            {}

            ConsumeItemRequest(const ConsumeItemRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                ItemInstanceId(src.ItemInstanceId),
                ConsumeCount(src.ConsumeCount),
                CharacterId(src.CharacterId)
            {}

            ~ConsumeItemRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("ItemInstanceId")], ItemInstanceId);
                FromJsonUtilP(input[U("ConsumeCount")], ConsumeCount);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_ItemInstanceId; ToJsonUtilS(ItemInstanceId, each_ItemInstanceId); output[U("ItemInstanceId")] = each_ItemInstanceId;
                web::json::value each_ConsumeCount; ToJsonUtilP(ConsumeCount, each_ConsumeCount); output[U("ConsumeCount")] = each_ConsumeCount;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                return output;
            }
        };

        struct ConsumeItemResult : public PlayFabRequestCommon
        {
            std::string ItemInstanceId;
            Int32 RemainingUses;

            ConsumeItemResult() :
                PlayFabRequestCommon(),
                ItemInstanceId(),
                RemainingUses()
            {}

            ConsumeItemResult(const ConsumeItemResult& src) :
                PlayFabRequestCommon(),
                ItemInstanceId(src.ItemInstanceId),
                RemainingUses(src.RemainingUses)
            {}

            ~ConsumeItemResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("ItemInstanceId")], ItemInstanceId);
                FromJsonUtilP(input[U("RemainingUses")], RemainingUses);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ItemInstanceId; ToJsonUtilS(ItemInstanceId, each_ItemInstanceId); output[U("ItemInstanceId")] = each_ItemInstanceId;
                web::json::value each_RemainingUses; ToJsonUtilP(RemainingUses, each_RemainingUses); output[U("RemainingUses")] = each_RemainingUses;
                return output;
            }
        };

        struct CreateSharedGroupRequest : public PlayFabRequestCommon
        {
            std::string SharedGroupId;

            CreateSharedGroupRequest() :
                PlayFabRequestCommon(),
                SharedGroupId()
            {}

            CreateSharedGroupRequest(const CreateSharedGroupRequest& src) :
                PlayFabRequestCommon(),
                SharedGroupId(src.SharedGroupId)
            {}

            ~CreateSharedGroupRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SharedGroupId")], SharedGroupId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SharedGroupId; ToJsonUtilS(SharedGroupId, each_SharedGroupId); output[U("SharedGroupId")] = each_SharedGroupId;
                return output;
            }
        };

        struct CreateSharedGroupResult : public PlayFabRequestCommon
        {
            std::string SharedGroupId;

            CreateSharedGroupResult() :
                PlayFabRequestCommon(),
                SharedGroupId()
            {}

            CreateSharedGroupResult(const CreateSharedGroupResult& src) :
                PlayFabRequestCommon(),
                SharedGroupId(src.SharedGroupId)
            {}

            ~CreateSharedGroupResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SharedGroupId")], SharedGroupId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SharedGroupId; ToJsonUtilS(SharedGroupId, each_SharedGroupId); output[U("SharedGroupId")] = each_SharedGroupId;
                return output;
            }
        };

        struct DeleteCharacterFromUserRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            bool SaveCharacterInventory;

            DeleteCharacterFromUserRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                SaveCharacterInventory()
            {}

            DeleteCharacterFromUserRequest(const DeleteCharacterFromUserRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                SaveCharacterInventory(src.SaveCharacterInventory)
            {}

            ~DeleteCharacterFromUserRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilP(input[U("SaveCharacterInventory")], SaveCharacterInventory);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_SaveCharacterInventory; ToJsonUtilP(SaveCharacterInventory, each_SaveCharacterInventory); output[U("SaveCharacterInventory")] = each_SaveCharacterInventory;
                return output;
            }
        };

        struct DeleteCharacterFromUserResult : public PlayFabRequestCommon
        {

            DeleteCharacterFromUserResult() :
                PlayFabRequestCommon()
            {}

            DeleteCharacterFromUserResult(const DeleteCharacterFromUserResult& src) :
                PlayFabRequestCommon()
            {}

            ~DeleteCharacterFromUserResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct DeleteSharedGroupRequest : public PlayFabRequestCommon
        {
            std::string SharedGroupId;

            DeleteSharedGroupRequest() :
                PlayFabRequestCommon(),
                SharedGroupId()
            {}

            DeleteSharedGroupRequest(const DeleteSharedGroupRequest& src) :
                PlayFabRequestCommon(),
                SharedGroupId(src.SharedGroupId)
            {}

            ~DeleteSharedGroupRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SharedGroupId")], SharedGroupId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SharedGroupId; ToJsonUtilS(SharedGroupId, each_SharedGroupId); output[U("SharedGroupId")] = each_SharedGroupId;
                return output;
            }
        };

        struct DeleteUsersRequest : public PlayFabRequestCommon
        {
            std::list<std::string> PlayFabIds;
            std::string TitleId;

            DeleteUsersRequest() :
                PlayFabRequestCommon(),
                PlayFabIds(),
                TitleId()
            {}

            DeleteUsersRequest(const DeleteUsersRequest& src) :
                PlayFabRequestCommon(),
                PlayFabIds(src.PlayFabIds),
                TitleId(src.TitleId)
            {}

            ~DeleteUsersRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabIds")], PlayFabIds);
                FromJsonUtilS(input[U("TitleId")], TitleId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabIds; ToJsonUtilS(PlayFabIds, each_PlayFabIds); output[U("PlayFabIds")] = each_PlayFabIds;
                web::json::value each_TitleId; ToJsonUtilS(TitleId, each_TitleId); output[U("TitleId")] = each_TitleId;
                return output;
            }
        };

        struct DeleteUsersResult : public PlayFabRequestCommon
        {

            DeleteUsersResult() :
                PlayFabRequestCommon()
            {}

            DeleteUsersResult(const DeleteUsersResult& src) :
                PlayFabRequestCommon()
            {}

            ~DeleteUsersResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
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

        struct EmptyResult : public PlayFabRequestCommon
        {

            EmptyResult() :
                PlayFabRequestCommon()
            {}

            EmptyResult(const EmptyResult& src) :
                PlayFabRequestCommon()
            {}

            ~EmptyResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct EvaluateRandomResultTableRequest : public PlayFabRequestCommon
        {
            std::string TableId;
            std::string CatalogVersion;

            EvaluateRandomResultTableRequest() :
                PlayFabRequestCommon(),
                TableId(),
                CatalogVersion()
            {}

            EvaluateRandomResultTableRequest(const EvaluateRandomResultTableRequest& src) :
                PlayFabRequestCommon(),
                TableId(src.TableId),
                CatalogVersion(src.CatalogVersion)
            {}

            ~EvaluateRandomResultTableRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("TableId")], TableId);
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TableId; ToJsonUtilS(TableId, each_TableId); output[U("TableId")] = each_TableId;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                return output;
            }
        };

        struct EvaluateRandomResultTableResult : public PlayFabRequestCommon
        {
            std::string ResultItemId;

            EvaluateRandomResultTableResult() :
                PlayFabRequestCommon(),
                ResultItemId()
            {}

            EvaluateRandomResultTableResult(const EvaluateRandomResultTableResult& src) :
                PlayFabRequestCommon(),
                ResultItemId(src.ResultItemId)
            {}

            ~EvaluateRandomResultTableResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("ResultItemId")], ResultItemId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ResultItemId; ToJsonUtilS(ResultItemId, each_ResultItemId); output[U("ResultItemId")] = each_ResultItemId;
                return output;
            }
        };

        struct LogStatement : public PlayFabBaseModel
        {
            std::string Level;
            std::string Message;
            web::json::value Data;

            LogStatement() :
                PlayFabBaseModel(),
                Level(),
                Message(),
                Data()
            {}

            LogStatement(const LogStatement& src) :
                PlayFabBaseModel(),
                Level(src.Level),
                Message(src.Message),
                Data(src.Data)
            {}

            ~LogStatement() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Level")], Level);
                FromJsonUtilS(input[U("Message")], Message);
                Data = input[U("Data")];
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Level; ToJsonUtilS(Level, each_Level); output[U("Level")] = each_Level;
                web::json::value each_Message; ToJsonUtilS(Message, each_Message); output[U("Message")] = each_Message;
                output[U("Data")] = Data;
                return output;
            }
        };

        struct ScriptExecutionError : public PlayFabBaseModel
        {
            std::string Error;
            std::string Message;
            std::string StackTrace;

            ScriptExecutionError() :
                PlayFabBaseModel(),
                Error(),
                Message(),
                StackTrace()
            {}

            ScriptExecutionError(const ScriptExecutionError& src) :
                PlayFabBaseModel(),
                Error(src.Error),
                Message(src.Message),
                StackTrace(src.StackTrace)
            {}

            ~ScriptExecutionError() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Error")], Error);
                FromJsonUtilS(input[U("Message")], Message);
                FromJsonUtilS(input[U("StackTrace")], StackTrace);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Error; ToJsonUtilS(Error, each_Error); output[U("Error")] = each_Error;
                web::json::value each_Message; ToJsonUtilS(Message, each_Message); output[U("Message")] = each_Message;
                web::json::value each_StackTrace; ToJsonUtilS(StackTrace, each_StackTrace); output[U("StackTrace")] = each_StackTrace;
                return output;
            }
        };

        struct ExecuteCloudScriptResult : public PlayFabRequestCommon
        {
            std::string FunctionName;
            Int32 Revision;
            web::json::value FunctionResult;
            std::list<LogStatement> Logs;
            double ExecutionTimeSeconds;
            double ProcessorTimeSeconds;
            Uint32 MemoryConsumedBytes;
            Int32 APIRequestsIssued;
            Int32 HttpRequestsIssued;
            Boxed<ScriptExecutionError> Error;

            ExecuteCloudScriptResult() :
                PlayFabRequestCommon(),
                FunctionName(),
                Revision(),
                FunctionResult(),
                Logs(),
                ExecutionTimeSeconds(),
                ProcessorTimeSeconds(),
                MemoryConsumedBytes(),
                APIRequestsIssued(),
                HttpRequestsIssued(),
                Error()
            {}

            ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src) :
                PlayFabRequestCommon(),
                FunctionName(src.FunctionName),
                Revision(src.Revision),
                FunctionResult(src.FunctionResult),
                Logs(src.Logs),
                ExecutionTimeSeconds(src.ExecutionTimeSeconds),
                ProcessorTimeSeconds(src.ProcessorTimeSeconds),
                MemoryConsumedBytes(src.MemoryConsumedBytes),
                APIRequestsIssued(src.APIRequestsIssued),
                HttpRequestsIssued(src.HttpRequestsIssued),
                Error(src.Error)
            {}

            ~ExecuteCloudScriptResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("FunctionName")], FunctionName);
                FromJsonUtilP(input[U("Revision")], Revision);
                FunctionResult = input[U("FunctionResult")];
                FromJsonUtilO(input[U("Logs")], Logs);
                FromJsonUtilP(input[U("ExecutionTimeSeconds")], ExecutionTimeSeconds);
                FromJsonUtilP(input[U("ProcessorTimeSeconds")], ProcessorTimeSeconds);
                FromJsonUtilP(input[U("MemoryConsumedBytes")], MemoryConsumedBytes);
                FromJsonUtilP(input[U("APIRequestsIssued")], APIRequestsIssued);
                FromJsonUtilP(input[U("HttpRequestsIssued")], HttpRequestsIssued);
                FromJsonUtilO(input[U("Error")], Error);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_FunctionName; ToJsonUtilS(FunctionName, each_FunctionName); output[U("FunctionName")] = each_FunctionName;
                web::json::value each_Revision; ToJsonUtilP(Revision, each_Revision); output[U("Revision")] = each_Revision;
                output[U("FunctionResult")] = FunctionResult;
                web::json::value each_Logs; ToJsonUtilO(Logs, each_Logs); output[U("Logs")] = each_Logs;
                web::json::value each_ExecutionTimeSeconds; ToJsonUtilP(ExecutionTimeSeconds, each_ExecutionTimeSeconds); output[U("ExecutionTimeSeconds")] = each_ExecutionTimeSeconds;
                web::json::value each_ProcessorTimeSeconds; ToJsonUtilP(ProcessorTimeSeconds, each_ProcessorTimeSeconds); output[U("ProcessorTimeSeconds")] = each_ProcessorTimeSeconds;
                web::json::value each_MemoryConsumedBytes; ToJsonUtilP(MemoryConsumedBytes, each_MemoryConsumedBytes); output[U("MemoryConsumedBytes")] = each_MemoryConsumedBytes;
                web::json::value each_APIRequestsIssued; ToJsonUtilP(APIRequestsIssued, each_APIRequestsIssued); output[U("APIRequestsIssued")] = each_APIRequestsIssued;
                web::json::value each_HttpRequestsIssued; ToJsonUtilP(HttpRequestsIssued, each_HttpRequestsIssued); output[U("HttpRequestsIssued")] = each_HttpRequestsIssued;
                web::json::value each_Error; ToJsonUtilO(Error, each_Error); output[U("Error")] = each_Error;
                return output;
            }
        };

        struct ExecuteCloudScriptServerRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string FunctionName;
            web::json::value FunctionParameter;
            Boxed<CloudScriptRevisionOption> RevisionSelection;
            Boxed<Int32> SpecificRevision;
            Boxed<bool> GeneratePlayStreamEvent;

            ExecuteCloudScriptServerRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                FunctionName(),
                FunctionParameter(),
                RevisionSelection(),
                SpecificRevision(),
                GeneratePlayStreamEvent()
            {}

            ExecuteCloudScriptServerRequest(const ExecuteCloudScriptServerRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                FunctionName(src.FunctionName),
                FunctionParameter(src.FunctionParameter),
                RevisionSelection(src.RevisionSelection),
                SpecificRevision(src.SpecificRevision),
                GeneratePlayStreamEvent(src.GeneratePlayStreamEvent)
            {}

            ~ExecuteCloudScriptServerRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("FunctionName")], FunctionName);
                FunctionParameter = input[U("FunctionParameter")];
                FromJsonUtilE(input[U("RevisionSelection")], RevisionSelection);
                FromJsonUtilP(input[U("SpecificRevision")], SpecificRevision);
                FromJsonUtilP(input[U("GeneratePlayStreamEvent")], GeneratePlayStreamEvent);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_FunctionName; ToJsonUtilS(FunctionName, each_FunctionName); output[U("FunctionName")] = each_FunctionName;
                output[U("FunctionParameter")] = FunctionParameter;
                web::json::value each_RevisionSelection; ToJsonUtilE(RevisionSelection, each_RevisionSelection); output[U("RevisionSelection")] = each_RevisionSelection;
                web::json::value each_SpecificRevision; ToJsonUtilP(SpecificRevision, each_SpecificRevision); output[U("SpecificRevision")] = each_SpecificRevision;
                web::json::value each_GeneratePlayStreamEvent; ToJsonUtilP(GeneratePlayStreamEvent, each_GeneratePlayStreamEvent); output[U("GeneratePlayStreamEvent")] = each_GeneratePlayStreamEvent;
                return output;
            }
        };

        struct FacebookPlayFabIdPair : public PlayFabBaseModel
        {
            std::string FacebookId;
            std::string PlayFabId;

            FacebookPlayFabIdPair() :
                PlayFabBaseModel(),
                FacebookId(),
                PlayFabId()
            {}

            FacebookPlayFabIdPair(const FacebookPlayFabIdPair& src) :
                PlayFabBaseModel(),
                FacebookId(src.FacebookId),
                PlayFabId(src.PlayFabId)
            {}

            ~FacebookPlayFabIdPair() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("FacebookId")], FacebookId);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_FacebookId; ToJsonUtilS(FacebookId, each_FacebookId); output[U("FacebookId")] = each_FacebookId;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct FriendInfo : public PlayFabBaseModel
        {
            std::string FriendPlayFabId;
            std::string Username;
            std::string TitleDisplayName;
            std::list<std::string> Tags;
            std::string CurrentMatchmakerLobbyId;
            Boxed<UserFacebookInfo> FacebookInfo;
            Boxed<UserSteamInfo> SteamInfo;
            Boxed<UserGameCenterInfo> GameCenterInfo;

            FriendInfo() :
                PlayFabBaseModel(),
                FriendPlayFabId(),
                Username(),
                TitleDisplayName(),
                Tags(),
                CurrentMatchmakerLobbyId(),
                FacebookInfo(),
                SteamInfo(),
                GameCenterInfo()
            {}

            FriendInfo(const FriendInfo& src) :
                PlayFabBaseModel(),
                FriendPlayFabId(src.FriendPlayFabId),
                Username(src.Username),
                TitleDisplayName(src.TitleDisplayName),
                Tags(src.Tags),
                CurrentMatchmakerLobbyId(src.CurrentMatchmakerLobbyId),
                FacebookInfo(src.FacebookInfo),
                SteamInfo(src.SteamInfo),
                GameCenterInfo(src.GameCenterInfo)
            {}

            ~FriendInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("FriendPlayFabId")], FriendPlayFabId);
                FromJsonUtilS(input[U("Username")], Username);
                FromJsonUtilS(input[U("TitleDisplayName")], TitleDisplayName);
                FromJsonUtilS(input[U("Tags")], Tags);
                FromJsonUtilS(input[U("CurrentMatchmakerLobbyId")], CurrentMatchmakerLobbyId);
                FromJsonUtilO(input[U("FacebookInfo")], FacebookInfo);
                FromJsonUtilO(input[U("SteamInfo")], SteamInfo);
                FromJsonUtilO(input[U("GameCenterInfo")], GameCenterInfo);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_FriendPlayFabId; ToJsonUtilS(FriendPlayFabId, each_FriendPlayFabId); output[U("FriendPlayFabId")] = each_FriendPlayFabId;
                web::json::value each_Username; ToJsonUtilS(Username, each_Username); output[U("Username")] = each_Username;
                web::json::value each_TitleDisplayName; ToJsonUtilS(TitleDisplayName, each_TitleDisplayName); output[U("TitleDisplayName")] = each_TitleDisplayName;
                web::json::value each_Tags; ToJsonUtilS(Tags, each_Tags); output[U("Tags")] = each_Tags;
                web::json::value each_CurrentMatchmakerLobbyId; ToJsonUtilS(CurrentMatchmakerLobbyId, each_CurrentMatchmakerLobbyId); output[U("CurrentMatchmakerLobbyId")] = each_CurrentMatchmakerLobbyId;
                web::json::value each_FacebookInfo; ToJsonUtilO(FacebookInfo, each_FacebookInfo); output[U("FacebookInfo")] = each_FacebookInfo;
                web::json::value each_SteamInfo; ToJsonUtilO(SteamInfo, each_SteamInfo); output[U("SteamInfo")] = each_SteamInfo;
                web::json::value each_GameCenterInfo; ToJsonUtilO(GameCenterInfo, each_GameCenterInfo); output[U("GameCenterInfo")] = each_GameCenterInfo;
                return output;
            }
        };

        struct GetActionGroupResult : public PlayFabRequestCommon
        {
            std::string Name;
            std::string Id;

            GetActionGroupResult() :
                PlayFabRequestCommon(),
                Name(),
                Id()
            {}

            GetActionGroupResult(const GetActionGroupResult& src) :
                PlayFabRequestCommon(),
                Name(src.Name),
                Id(src.Id)
            {}

            ~GetActionGroupResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Name")], Name);
                FromJsonUtilS(input[U("Id")], Id);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Name; ToJsonUtilS(Name, each_Name); output[U("Name")] = each_Name;
                web::json::value each_Id; ToJsonUtilS(Id, each_Id); output[U("Id")] = each_Id;
                return output;
            }
        };

        struct GetAllActionGroupsRequest : public PlayFabRequestCommon
        {

            GetAllActionGroupsRequest() :
                PlayFabRequestCommon()
            {}

            GetAllActionGroupsRequest(const GetAllActionGroupsRequest& src) :
                PlayFabRequestCommon()
            {}

            ~GetAllActionGroupsRequest() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct GetAllActionGroupsResult : public PlayFabRequestCommon
        {
            std::list<GetActionGroupResult> ActionGroups;

            GetAllActionGroupsResult() :
                PlayFabRequestCommon(),
                ActionGroups()
            {}

            GetAllActionGroupsResult(const GetAllActionGroupsResult& src) :
                PlayFabRequestCommon(),
                ActionGroups(src.ActionGroups)
            {}

            ~GetAllActionGroupsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("ActionGroups")], ActionGroups);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ActionGroups; ToJsonUtilO(ActionGroups, each_ActionGroups); output[U("ActionGroups")] = each_ActionGroups;
                return output;
            }
        };

        struct GetAllSegmentsRequest : public PlayFabRequestCommon
        {

            GetAllSegmentsRequest() :
                PlayFabRequestCommon()
            {}

            GetAllSegmentsRequest(const GetAllSegmentsRequest& src) :
                PlayFabRequestCommon()
            {}

            ~GetAllSegmentsRequest() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct GetSegmentResult : public PlayFabRequestCommon
        {
            std::string Id;
            std::string Name;
            std::string ABTestParent;

            GetSegmentResult() :
                PlayFabRequestCommon(),
                Id(),
                Name(),
                ABTestParent()
            {}

            GetSegmentResult(const GetSegmentResult& src) :
                PlayFabRequestCommon(),
                Id(src.Id),
                Name(src.Name),
                ABTestParent(src.ABTestParent)
            {}

            ~GetSegmentResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Id")], Id);
                FromJsonUtilS(input[U("Name")], Name);
                FromJsonUtilS(input[U("ABTestParent")], ABTestParent);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Id; ToJsonUtilS(Id, each_Id); output[U("Id")] = each_Id;
                web::json::value each_Name; ToJsonUtilS(Name, each_Name); output[U("Name")] = each_Name;
                web::json::value each_ABTestParent; ToJsonUtilS(ABTestParent, each_ABTestParent); output[U("ABTestParent")] = each_ABTestParent;
                return output;
            }
        };

        struct GetAllSegmentsResult : public PlayFabRequestCommon
        {
            std::list<GetSegmentResult> Segments;

            GetAllSegmentsResult() :
                PlayFabRequestCommon(),
                Segments()
            {}

            GetAllSegmentsResult(const GetAllSegmentsResult& src) :
                PlayFabRequestCommon(),
                Segments(src.Segments)
            {}

            ~GetAllSegmentsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Segments")], Segments);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Segments; ToJsonUtilO(Segments, each_Segments); output[U("Segments")] = each_Segments;
                return output;
            }
        };

        struct GetCatalogItemsRequest : public PlayFabRequestCommon
        {
            std::string CatalogVersion;

            GetCatalogItemsRequest() :
                PlayFabRequestCommon(),
                CatalogVersion()
            {}

            GetCatalogItemsRequest(const GetCatalogItemsRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion)
            {}

            ~GetCatalogItemsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                return output;
            }
        };

        struct GetCatalogItemsResult : public PlayFabRequestCommon
        {
            std::list<CatalogItem> Catalog;

            GetCatalogItemsResult() :
                PlayFabRequestCommon(),
                Catalog()
            {}

            GetCatalogItemsResult(const GetCatalogItemsResult& src) :
                PlayFabRequestCommon(),
                Catalog(src.Catalog)
            {}

            ~GetCatalogItemsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Catalog")], Catalog);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Catalog; ToJsonUtilO(Catalog, each_Catalog); output[U("Catalog")] = each_Catalog;
                return output;
            }
        };

        struct GetCharacterDataRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::list<std::string> Keys;
            Boxed<Uint32> IfChangedFromDataVersion;

            GetCharacterDataRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                Keys(),
                IfChangedFromDataVersion()
            {}

            GetCharacterDataRequest(const GetCharacterDataRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                Keys(src.Keys),
                IfChangedFromDataVersion(src.IfChangedFromDataVersion)
            {}

            ~GetCharacterDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("Keys")], Keys);
                FromJsonUtilP(input[U("IfChangedFromDataVersion")], IfChangedFromDataVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_Keys; ToJsonUtilS(Keys, each_Keys); output[U("Keys")] = each_Keys;
                web::json::value each_IfChangedFromDataVersion; ToJsonUtilP(IfChangedFromDataVersion, each_IfChangedFromDataVersion); output[U("IfChangedFromDataVersion")] = each_IfChangedFromDataVersion;
                return output;
            }
        };

        struct UserDataRecord : public PlayFabBaseModel
        {
            std::string Value;
            time_t LastUpdated;
            Boxed<UserDataPermission> Permission;

            UserDataRecord() :
                PlayFabBaseModel(),
                Value(),
                LastUpdated(),
                Permission()
            {}

            UserDataRecord(const UserDataRecord& src) :
                PlayFabBaseModel(),
                Value(src.Value),
                LastUpdated(src.LastUpdated),
                Permission(src.Permission)
            {}

            ~UserDataRecord() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Value")], Value);
                FromJsonUtilT(input[U("LastUpdated")], LastUpdated);
                FromJsonUtilE(input[U("Permission")], Permission);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Value; ToJsonUtilS(Value, each_Value); output[U("Value")] = each_Value;
                web::json::value each_LastUpdated; ToJsonUtilT(LastUpdated, each_LastUpdated); output[U("LastUpdated")] = each_LastUpdated;
                web::json::value each_Permission; ToJsonUtilE(Permission, each_Permission); output[U("Permission")] = each_Permission;
                return output;
            }
        };

        struct GetCharacterDataResult : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            Uint32 DataVersion;
            std::map<std::string, UserDataRecord> Data;
            std::string CharacterId;

            GetCharacterDataResult() :
                PlayFabRequestCommon(),
                PlayFabId(),
                DataVersion(),
                Data(),
                CharacterId()
            {}

            GetCharacterDataResult(const GetCharacterDataResult& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                DataVersion(src.DataVersion),
                Data(src.Data),
                CharacterId(src.CharacterId)
            {}

            ~GetCharacterDataResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilP(input[U("DataVersion")], DataVersion);
                FromJsonUtilO(input[U("Data")], Data);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_DataVersion; ToJsonUtilP(DataVersion, each_DataVersion); output[U("DataVersion")] = each_DataVersion;
                web::json::value each_Data; ToJsonUtilO(Data, each_Data); output[U("Data")] = each_Data;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                return output;
            }
        };

        struct GetCharacterInventoryRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string CatalogVersion;

            GetCharacterInventoryRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                CatalogVersion()
            {}

            GetCharacterInventoryRequest(const GetCharacterInventoryRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                CatalogVersion(src.CatalogVersion)
            {}

            ~GetCharacterInventoryRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
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

        struct GetCharacterInventoryResult : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::list<ItemInstance> Inventory;
            std::map<std::string, Int32> VirtualCurrency;
            std::map<std::string, VirtualCurrencyRechargeTime> VirtualCurrencyRechargeTimes;

            GetCharacterInventoryResult() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                Inventory(),
                VirtualCurrency(),
                VirtualCurrencyRechargeTimes()
            {}

            GetCharacterInventoryResult(const GetCharacterInventoryResult& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                Inventory(src.Inventory),
                VirtualCurrency(src.VirtualCurrency),
                VirtualCurrencyRechargeTimes(src.VirtualCurrencyRechargeTimes)
            {}

            ~GetCharacterInventoryResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilO(input[U("Inventory")], Inventory);
                FromJsonUtilP(input[U("VirtualCurrency")], VirtualCurrency);
                FromJsonUtilO(input[U("VirtualCurrencyRechargeTimes")], VirtualCurrencyRechargeTimes);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_Inventory; ToJsonUtilO(Inventory, each_Inventory); output[U("Inventory")] = each_Inventory;
                web::json::value each_VirtualCurrency; ToJsonUtilP(VirtualCurrency, each_VirtualCurrency); output[U("VirtualCurrency")] = each_VirtualCurrency;
                web::json::value each_VirtualCurrencyRechargeTimes; ToJsonUtilO(VirtualCurrencyRechargeTimes, each_VirtualCurrencyRechargeTimes); output[U("VirtualCurrencyRechargeTimes")] = each_VirtualCurrencyRechargeTimes;
                return output;
            }
        };

        struct GetCharacterLeaderboardRequest : public PlayFabRequestCommon
        {
            std::string CharacterId;
            std::string CharacterType;
            std::string StatisticName;
            Int32 StartPosition;
            Int32 MaxResultsCount;

            GetCharacterLeaderboardRequest() :
                PlayFabRequestCommon(),
                CharacterId(),
                CharacterType(),
                StatisticName(),
                StartPosition(),
                MaxResultsCount()
            {}

            GetCharacterLeaderboardRequest(const GetCharacterLeaderboardRequest& src) :
                PlayFabRequestCommon(),
                CharacterId(src.CharacterId),
                CharacterType(src.CharacterType),
                StatisticName(src.StatisticName),
                StartPosition(src.StartPosition),
                MaxResultsCount(src.MaxResultsCount)
            {}

            ~GetCharacterLeaderboardRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("CharacterType")], CharacterType);
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilP(input[U("StartPosition")], StartPosition);
                FromJsonUtilP(input[U("MaxResultsCount")], MaxResultsCount);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_CharacterType; ToJsonUtilS(CharacterType, each_CharacterType); output[U("CharacterType")] = each_CharacterType;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_StartPosition; ToJsonUtilP(StartPosition, each_StartPosition); output[U("StartPosition")] = each_StartPosition;
                web::json::value each_MaxResultsCount; ToJsonUtilP(MaxResultsCount, each_MaxResultsCount); output[U("MaxResultsCount")] = each_MaxResultsCount;
                return output;
            }
        };

        struct GetCharacterLeaderboardResult : public PlayFabRequestCommon
        {
            std::list<CharacterLeaderboardEntry> Leaderboard;

            GetCharacterLeaderboardResult() :
                PlayFabRequestCommon(),
                Leaderboard()
            {}

            GetCharacterLeaderboardResult(const GetCharacterLeaderboardResult& src) :
                PlayFabRequestCommon(),
                Leaderboard(src.Leaderboard)
            {}

            ~GetCharacterLeaderboardResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Leaderboard")], Leaderboard);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Leaderboard; ToJsonUtilO(Leaderboard, each_Leaderboard); output[U("Leaderboard")] = each_Leaderboard;
                return output;
            }
        };

        struct GetCharacterStatisticsRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;

            GetCharacterStatisticsRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId()
            {}

            GetCharacterStatisticsRequest(const GetCharacterStatisticsRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId)
            {}

            ~GetCharacterStatisticsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                return output;
            }
        };

        struct GetCharacterStatisticsResult : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::map<std::string, Int32> CharacterStatistics;

            GetCharacterStatisticsResult() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                CharacterStatistics()
            {}

            GetCharacterStatisticsResult(const GetCharacterStatisticsResult& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                CharacterStatistics(src.CharacterStatistics)
            {}

            ~GetCharacterStatisticsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilP(input[U("CharacterStatistics")], CharacterStatistics);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_CharacterStatistics; ToJsonUtilP(CharacterStatistics, each_CharacterStatistics); output[U("CharacterStatistics")] = each_CharacterStatistics;
                return output;
            }
        };

        struct GetContentDownloadUrlRequest : public PlayFabRequestCommon
        {
            std::string Key;
            std::string HttpMethod;
            Boxed<bool> ThruCDN;

            GetContentDownloadUrlRequest() :
                PlayFabRequestCommon(),
                Key(),
                HttpMethod(),
                ThruCDN()
            {}

            GetContentDownloadUrlRequest(const GetContentDownloadUrlRequest& src) :
                PlayFabRequestCommon(),
                Key(src.Key),
                HttpMethod(src.HttpMethod),
                ThruCDN(src.ThruCDN)
            {}

            ~GetContentDownloadUrlRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Key")], Key);
                FromJsonUtilS(input[U("HttpMethod")], HttpMethod);
                FromJsonUtilP(input[U("ThruCDN")], ThruCDN);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Key; ToJsonUtilS(Key, each_Key); output[U("Key")] = each_Key;
                web::json::value each_HttpMethod; ToJsonUtilS(HttpMethod, each_HttpMethod); output[U("HttpMethod")] = each_HttpMethod;
                web::json::value each_ThruCDN; ToJsonUtilP(ThruCDN, each_ThruCDN); output[U("ThruCDN")] = each_ThruCDN;
                return output;
            }
        };

        struct GetContentDownloadUrlResult : public PlayFabRequestCommon
        {
            std::string URL;

            GetContentDownloadUrlResult() :
                PlayFabRequestCommon(),
                URL()
            {}

            GetContentDownloadUrlResult(const GetContentDownloadUrlResult& src) :
                PlayFabRequestCommon(),
                URL(src.URL)
            {}

            ~GetContentDownloadUrlResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("URL")], URL);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_URL; ToJsonUtilS(URL, each_URL); output[U("URL")] = each_URL;
                return output;
            }
        };

        struct PlayerProfileViewConstraints : public PlayFabBaseModel
        {
            bool ShowDisplayName;
            bool ShowCreated;
            bool ShowOrigination;
            bool ShowLastLogin;
            bool ShowBannedUntil;
            bool ShowStatistics;
            bool ShowCampaignAttributions;
            bool ShowPushNotificationRegistrations;
            bool ShowLinkedAccounts;
            bool ShowTotalValueToDateInUsd;
            bool ShowValuesToDate;
            bool ShowTags;
            bool ShowLocations;
            bool ShowAvatarUrl;

            PlayerProfileViewConstraints() :
                PlayFabBaseModel(),
                ShowDisplayName(),
                ShowCreated(),
                ShowOrigination(),
                ShowLastLogin(),
                ShowBannedUntil(),
                ShowStatistics(),
                ShowCampaignAttributions(),
                ShowPushNotificationRegistrations(),
                ShowLinkedAccounts(),
                ShowTotalValueToDateInUsd(),
                ShowValuesToDate(),
                ShowTags(),
                ShowLocations(),
                ShowAvatarUrl()
            {}

            PlayerProfileViewConstraints(const PlayerProfileViewConstraints& src) :
                PlayFabBaseModel(),
                ShowDisplayName(src.ShowDisplayName),
                ShowCreated(src.ShowCreated),
                ShowOrigination(src.ShowOrigination),
                ShowLastLogin(src.ShowLastLogin),
                ShowBannedUntil(src.ShowBannedUntil),
                ShowStatistics(src.ShowStatistics),
                ShowCampaignAttributions(src.ShowCampaignAttributions),
                ShowPushNotificationRegistrations(src.ShowPushNotificationRegistrations),
                ShowLinkedAccounts(src.ShowLinkedAccounts),
                ShowTotalValueToDateInUsd(src.ShowTotalValueToDateInUsd),
                ShowValuesToDate(src.ShowValuesToDate),
                ShowTags(src.ShowTags),
                ShowLocations(src.ShowLocations),
                ShowAvatarUrl(src.ShowAvatarUrl)
            {}

            ~PlayerProfileViewConstraints() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("ShowDisplayName")], ShowDisplayName);
                FromJsonUtilP(input[U("ShowCreated")], ShowCreated);
                FromJsonUtilP(input[U("ShowOrigination")], ShowOrigination);
                FromJsonUtilP(input[U("ShowLastLogin")], ShowLastLogin);
                FromJsonUtilP(input[U("ShowBannedUntil")], ShowBannedUntil);
                FromJsonUtilP(input[U("ShowStatistics")], ShowStatistics);
                FromJsonUtilP(input[U("ShowCampaignAttributions")], ShowCampaignAttributions);
                FromJsonUtilP(input[U("ShowPushNotificationRegistrations")], ShowPushNotificationRegistrations);
                FromJsonUtilP(input[U("ShowLinkedAccounts")], ShowLinkedAccounts);
                FromJsonUtilP(input[U("ShowTotalValueToDateInUsd")], ShowTotalValueToDateInUsd);
                FromJsonUtilP(input[U("ShowValuesToDate")], ShowValuesToDate);
                FromJsonUtilP(input[U("ShowTags")], ShowTags);
                FromJsonUtilP(input[U("ShowLocations")], ShowLocations);
                FromJsonUtilP(input[U("ShowAvatarUrl")], ShowAvatarUrl);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ShowDisplayName; ToJsonUtilP(ShowDisplayName, each_ShowDisplayName); output[U("ShowDisplayName")] = each_ShowDisplayName;
                web::json::value each_ShowCreated; ToJsonUtilP(ShowCreated, each_ShowCreated); output[U("ShowCreated")] = each_ShowCreated;
                web::json::value each_ShowOrigination; ToJsonUtilP(ShowOrigination, each_ShowOrigination); output[U("ShowOrigination")] = each_ShowOrigination;
                web::json::value each_ShowLastLogin; ToJsonUtilP(ShowLastLogin, each_ShowLastLogin); output[U("ShowLastLogin")] = each_ShowLastLogin;
                web::json::value each_ShowBannedUntil; ToJsonUtilP(ShowBannedUntil, each_ShowBannedUntil); output[U("ShowBannedUntil")] = each_ShowBannedUntil;
                web::json::value each_ShowStatistics; ToJsonUtilP(ShowStatistics, each_ShowStatistics); output[U("ShowStatistics")] = each_ShowStatistics;
                web::json::value each_ShowCampaignAttributions; ToJsonUtilP(ShowCampaignAttributions, each_ShowCampaignAttributions); output[U("ShowCampaignAttributions")] = each_ShowCampaignAttributions;
                web::json::value each_ShowPushNotificationRegistrations; ToJsonUtilP(ShowPushNotificationRegistrations, each_ShowPushNotificationRegistrations); output[U("ShowPushNotificationRegistrations")] = each_ShowPushNotificationRegistrations;
                web::json::value each_ShowLinkedAccounts; ToJsonUtilP(ShowLinkedAccounts, each_ShowLinkedAccounts); output[U("ShowLinkedAccounts")] = each_ShowLinkedAccounts;
                web::json::value each_ShowTotalValueToDateInUsd; ToJsonUtilP(ShowTotalValueToDateInUsd, each_ShowTotalValueToDateInUsd); output[U("ShowTotalValueToDateInUsd")] = each_ShowTotalValueToDateInUsd;
                web::json::value each_ShowValuesToDate; ToJsonUtilP(ShowValuesToDate, each_ShowValuesToDate); output[U("ShowValuesToDate")] = each_ShowValuesToDate;
                web::json::value each_ShowTags; ToJsonUtilP(ShowTags, each_ShowTags); output[U("ShowTags")] = each_ShowTags;
                web::json::value each_ShowLocations; ToJsonUtilP(ShowLocations, each_ShowLocations); output[U("ShowLocations")] = each_ShowLocations;
                web::json::value each_ShowAvatarUrl; ToJsonUtilP(ShowAvatarUrl, each_ShowAvatarUrl); output[U("ShowAvatarUrl")] = each_ShowAvatarUrl;
                return output;
            }
        };

        struct GetFriendLeaderboardRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string StatisticName;
            Int32 StartPosition;
            Int32 MaxResultsCount;
            Boxed<bool> IncludeSteamFriends;
            Boxed<bool> IncludeFacebookFriends;
            Int32 Version;
            bool UseSpecificVersion;
            Boxed<PlayerProfileViewConstraints> ProfileConstraints;

            GetFriendLeaderboardRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                StatisticName(),
                StartPosition(),
                MaxResultsCount(),
                IncludeSteamFriends(),
                IncludeFacebookFriends(),
                Version(),
                UseSpecificVersion(),
                ProfileConstraints()
            {}

            GetFriendLeaderboardRequest(const GetFriendLeaderboardRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                StatisticName(src.StatisticName),
                StartPosition(src.StartPosition),
                MaxResultsCount(src.MaxResultsCount),
                IncludeSteamFriends(src.IncludeSteamFriends),
                IncludeFacebookFriends(src.IncludeFacebookFriends),
                Version(src.Version),
                UseSpecificVersion(src.UseSpecificVersion),
                ProfileConstraints(src.ProfileConstraints)
            {}

            ~GetFriendLeaderboardRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilP(input[U("StartPosition")], StartPosition);
                FromJsonUtilP(input[U("MaxResultsCount")], MaxResultsCount);
                FromJsonUtilP(input[U("IncludeSteamFriends")], IncludeSteamFriends);
                FromJsonUtilP(input[U("IncludeFacebookFriends")], IncludeFacebookFriends);
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilP(input[U("UseSpecificVersion")], UseSpecificVersion);
                FromJsonUtilO(input[U("ProfileConstraints")], ProfileConstraints);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_StartPosition; ToJsonUtilP(StartPosition, each_StartPosition); output[U("StartPosition")] = each_StartPosition;
                web::json::value each_MaxResultsCount; ToJsonUtilP(MaxResultsCount, each_MaxResultsCount); output[U("MaxResultsCount")] = each_MaxResultsCount;
                web::json::value each_IncludeSteamFriends; ToJsonUtilP(IncludeSteamFriends, each_IncludeSteamFriends); output[U("IncludeSteamFriends")] = each_IncludeSteamFriends;
                web::json::value each_IncludeFacebookFriends; ToJsonUtilP(IncludeFacebookFriends, each_IncludeFacebookFriends); output[U("IncludeFacebookFriends")] = each_IncludeFacebookFriends;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_UseSpecificVersion; ToJsonUtilP(UseSpecificVersion, each_UseSpecificVersion); output[U("UseSpecificVersion")] = each_UseSpecificVersion;
                web::json::value each_ProfileConstraints; ToJsonUtilO(ProfileConstraints, each_ProfileConstraints); output[U("ProfileConstraints")] = each_ProfileConstraints;
                return output;
            }
        };

        struct GetFriendsListRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            Boxed<bool> IncludeSteamFriends;
            Boxed<bool> IncludeFacebookFriends;

            GetFriendsListRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                IncludeSteamFriends(),
                IncludeFacebookFriends()
            {}

            GetFriendsListRequest(const GetFriendsListRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                IncludeSteamFriends(src.IncludeSteamFriends),
                IncludeFacebookFriends(src.IncludeFacebookFriends)
            {}

            ~GetFriendsListRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilP(input[U("IncludeSteamFriends")], IncludeSteamFriends);
                FromJsonUtilP(input[U("IncludeFacebookFriends")], IncludeFacebookFriends);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_IncludeSteamFriends; ToJsonUtilP(IncludeSteamFriends, each_IncludeSteamFriends); output[U("IncludeSteamFriends")] = each_IncludeSteamFriends;
                web::json::value each_IncludeFacebookFriends; ToJsonUtilP(IncludeFacebookFriends, each_IncludeFacebookFriends); output[U("IncludeFacebookFriends")] = each_IncludeFacebookFriends;
                return output;
            }
        };

        struct GetFriendsListResult : public PlayFabRequestCommon
        {
            std::list<FriendInfo> Friends;

            GetFriendsListResult() :
                PlayFabRequestCommon(),
                Friends()
            {}

            GetFriendsListResult(const GetFriendsListResult& src) :
                PlayFabRequestCommon(),
                Friends(src.Friends)
            {}

            ~GetFriendsListResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Friends")], Friends);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Friends; ToJsonUtilO(Friends, each_Friends); output[U("Friends")] = each_Friends;
                return output;
            }
        };

        struct GetLeaderboardAroundCharacterRequest : public PlayFabRequestCommon
        {
            std::string StatisticName;
            std::string PlayFabId;
            std::string CharacterId;
            std::string CharacterType;
            Int32 MaxResultsCount;

            GetLeaderboardAroundCharacterRequest() :
                PlayFabRequestCommon(),
                StatisticName(),
                PlayFabId(),
                CharacterId(),
                CharacterType(),
                MaxResultsCount()
            {}

            GetLeaderboardAroundCharacterRequest(const GetLeaderboardAroundCharacterRequest& src) :
                PlayFabRequestCommon(),
                StatisticName(src.StatisticName),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                CharacterType(src.CharacterType),
                MaxResultsCount(src.MaxResultsCount)
            {}

            ~GetLeaderboardAroundCharacterRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("CharacterType")], CharacterType);
                FromJsonUtilP(input[U("MaxResultsCount")], MaxResultsCount);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_CharacterType; ToJsonUtilS(CharacterType, each_CharacterType); output[U("CharacterType")] = each_CharacterType;
                web::json::value each_MaxResultsCount; ToJsonUtilP(MaxResultsCount, each_MaxResultsCount); output[U("MaxResultsCount")] = each_MaxResultsCount;
                return output;
            }
        };

        struct GetLeaderboardAroundCharacterResult : public PlayFabRequestCommon
        {
            std::list<CharacterLeaderboardEntry> Leaderboard;

            GetLeaderboardAroundCharacterResult() :
                PlayFabRequestCommon(),
                Leaderboard()
            {}

            GetLeaderboardAroundCharacterResult(const GetLeaderboardAroundCharacterResult& src) :
                PlayFabRequestCommon(),
                Leaderboard(src.Leaderboard)
            {}

            ~GetLeaderboardAroundCharacterResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Leaderboard")], Leaderboard);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Leaderboard; ToJsonUtilO(Leaderboard, each_Leaderboard); output[U("Leaderboard")] = each_Leaderboard;
                return output;
            }
        };

        struct GetLeaderboardAroundUserRequest : public PlayFabRequestCommon
        {
            std::string StatisticName;
            std::string PlayFabId;
            Int32 MaxResultsCount;
            Boxed<PlayerProfileViewConstraints> ProfileConstraints;
            Int32 Version;
            bool UseSpecificVersion;

            GetLeaderboardAroundUserRequest() :
                PlayFabRequestCommon(),
                StatisticName(),
                PlayFabId(),
                MaxResultsCount(),
                ProfileConstraints(),
                Version(),
                UseSpecificVersion()
            {}

            GetLeaderboardAroundUserRequest(const GetLeaderboardAroundUserRequest& src) :
                PlayFabRequestCommon(),
                StatisticName(src.StatisticName),
                PlayFabId(src.PlayFabId),
                MaxResultsCount(src.MaxResultsCount),
                ProfileConstraints(src.ProfileConstraints),
                Version(src.Version),
                UseSpecificVersion(src.UseSpecificVersion)
            {}

            ~GetLeaderboardAroundUserRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilP(input[U("MaxResultsCount")], MaxResultsCount);
                FromJsonUtilO(input[U("ProfileConstraints")], ProfileConstraints);
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilP(input[U("UseSpecificVersion")], UseSpecificVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_MaxResultsCount; ToJsonUtilP(MaxResultsCount, each_MaxResultsCount); output[U("MaxResultsCount")] = each_MaxResultsCount;
                web::json::value each_ProfileConstraints; ToJsonUtilO(ProfileConstraints, each_ProfileConstraints); output[U("ProfileConstraints")] = each_ProfileConstraints;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_UseSpecificVersion; ToJsonUtilP(UseSpecificVersion, each_UseSpecificVersion); output[U("UseSpecificVersion")] = each_UseSpecificVersion;
                return output;
            }
        };

        struct LocationModel : public PlayFabBaseModel
        {
            Boxed<ContinentCode> pfContinentCode;
            Boxed<CountryCode> pfCountryCode;
            std::string City;
            Boxed<double> Latitude;
            Boxed<double> Longitude;

            LocationModel() :
                PlayFabBaseModel(),
                pfContinentCode(),
                pfCountryCode(),
                City(),
                Latitude(),
                Longitude()
            {}

            LocationModel(const LocationModel& src) :
                PlayFabBaseModel(),
                pfContinentCode(src.pfContinentCode),
                pfCountryCode(src.pfCountryCode),
                City(src.City),
                Latitude(src.Latitude),
                Longitude(src.Longitude)
            {}

            ~LocationModel() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilE(input[U("pfContinentCode")], pfContinentCode);
                FromJsonUtilE(input[U("pfCountryCode")], pfCountryCode);
                FromJsonUtilS(input[U("City")], City);
                FromJsonUtilP(input[U("Latitude")], Latitude);
                FromJsonUtilP(input[U("Longitude")], Longitude);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_pfContinentCode; ToJsonUtilE(pfContinentCode, each_pfContinentCode); output[U("ContinentCode")] = each_pfContinentCode;
                web::json::value each_pfCountryCode; ToJsonUtilE(pfCountryCode, each_pfCountryCode); output[U("CountryCode")] = each_pfCountryCode;
                web::json::value each_City; ToJsonUtilS(City, each_City); output[U("City")] = each_City;
                web::json::value each_Latitude; ToJsonUtilP(Latitude, each_Latitude); output[U("Latitude")] = each_Latitude;
                web::json::value each_Longitude; ToJsonUtilP(Longitude, each_Longitude); output[U("Longitude")] = each_Longitude;
                return output;
            }
        };

        struct TagModel : public PlayFabBaseModel
        {
            std::string TagValue;

            TagModel() :
                PlayFabBaseModel(),
                TagValue()
            {}

            TagModel(const TagModel& src) :
                PlayFabBaseModel(),
                TagValue(src.TagValue)
            {}

            ~TagModel() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("TagValue")], TagValue);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TagValue; ToJsonUtilS(TagValue, each_TagValue); output[U("TagValue")] = each_TagValue;
                return output;
            }
        };

        struct PushNotificationRegistrationModel : public PlayFabBaseModel
        {
            Boxed<PushNotificationPlatform> Platform;
            std::string NotificationEndpointARN;

            PushNotificationRegistrationModel() :
                PlayFabBaseModel(),
                Platform(),
                NotificationEndpointARN()
            {}

            PushNotificationRegistrationModel(const PushNotificationRegistrationModel& src) :
                PlayFabBaseModel(),
                Platform(src.Platform),
                NotificationEndpointARN(src.NotificationEndpointARN)
            {}

            ~PushNotificationRegistrationModel() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilE(input[U("Platform")], Platform);
                FromJsonUtilS(input[U("NotificationEndpointARN")], NotificationEndpointARN);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Platform; ToJsonUtilE(Platform, each_Platform); output[U("Platform")] = each_Platform;
                web::json::value each_NotificationEndpointARN; ToJsonUtilS(NotificationEndpointARN, each_NotificationEndpointARN); output[U("NotificationEndpointARN")] = each_NotificationEndpointARN;
                return output;
            }
        };

        struct LinkedPlatformAccountModel : public PlayFabBaseModel
        {
            Boxed<LoginIdentityProvider> Platform;
            std::string PlatformUserId;
            std::string Username;
            std::string Email;

            LinkedPlatformAccountModel() :
                PlayFabBaseModel(),
                Platform(),
                PlatformUserId(),
                Username(),
                Email()
            {}

            LinkedPlatformAccountModel(const LinkedPlatformAccountModel& src) :
                PlayFabBaseModel(),
                Platform(src.Platform),
                PlatformUserId(src.PlatformUserId),
                Username(src.Username),
                Email(src.Email)
            {}

            ~LinkedPlatformAccountModel() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilE(input[U("Platform")], Platform);
                FromJsonUtilS(input[U("PlatformUserId")], PlatformUserId);
                FromJsonUtilS(input[U("Username")], Username);
                FromJsonUtilS(input[U("Email")], Email);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Platform; ToJsonUtilE(Platform, each_Platform); output[U("Platform")] = each_Platform;
                web::json::value each_PlatformUserId; ToJsonUtilS(PlatformUserId, each_PlatformUserId); output[U("PlatformUserId")] = each_PlatformUserId;
                web::json::value each_Username; ToJsonUtilS(Username, each_Username); output[U("Username")] = each_Username;
                web::json::value each_Email; ToJsonUtilS(Email, each_Email); output[U("Email")] = each_Email;
                return output;
            }
        };

        struct ValueToDateModel : public PlayFabBaseModel
        {
            std::string Currency;
            Uint32 TotalValue;
            std::string TotalValueAsDecimal;

            ValueToDateModel() :
                PlayFabBaseModel(),
                Currency(),
                TotalValue(),
                TotalValueAsDecimal()
            {}

            ValueToDateModel(const ValueToDateModel& src) :
                PlayFabBaseModel(),
                Currency(src.Currency),
                TotalValue(src.TotalValue),
                TotalValueAsDecimal(src.TotalValueAsDecimal)
            {}

            ~ValueToDateModel() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Currency")], Currency);
                FromJsonUtilP(input[U("TotalValue")], TotalValue);
                FromJsonUtilS(input[U("TotalValueAsDecimal")], TotalValueAsDecimal);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Currency; ToJsonUtilS(Currency, each_Currency); output[U("Currency")] = each_Currency;
                web::json::value each_TotalValue; ToJsonUtilP(TotalValue, each_TotalValue); output[U("TotalValue")] = each_TotalValue;
                web::json::value each_TotalValueAsDecimal; ToJsonUtilS(TotalValueAsDecimal, each_TotalValueAsDecimal); output[U("TotalValueAsDecimal")] = each_TotalValueAsDecimal;
                return output;
            }
        };

        struct VirtualCurrencyBalanceModel : public PlayFabBaseModel
        {
            std::string Currency;
            Int32 TotalValue;

            VirtualCurrencyBalanceModel() :
                PlayFabBaseModel(),
                Currency(),
                TotalValue()
            {}

            VirtualCurrencyBalanceModel(const VirtualCurrencyBalanceModel& src) :
                PlayFabBaseModel(),
                Currency(src.Currency),
                TotalValue(src.TotalValue)
            {}

            ~VirtualCurrencyBalanceModel() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Currency")], Currency);
                FromJsonUtilP(input[U("TotalValue")], TotalValue);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Currency; ToJsonUtilS(Currency, each_Currency); output[U("Currency")] = each_Currency;
                web::json::value each_TotalValue; ToJsonUtilP(TotalValue, each_TotalValue); output[U("TotalValue")] = each_TotalValue;
                return output;
            }
        };

        struct StatisticModel : public PlayFabBaseModel
        {
            std::string Name;
            Int32 Version;
            Int32 Value;

            StatisticModel() :
                PlayFabBaseModel(),
                Name(),
                Version(),
                Value()
            {}

            StatisticModel(const StatisticModel& src) :
                PlayFabBaseModel(),
                Name(src.Name),
                Version(src.Version),
                Value(src.Value)
            {}

            ~StatisticModel() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Name")], Name);
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilP(input[U("Value")], Value);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Name; ToJsonUtilS(Name, each_Name); output[U("Name")] = each_Name;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_Value; ToJsonUtilP(Value, each_Value); output[U("Value")] = each_Value;
                return output;
            }
        };

        struct PlayerProfileModel : public PlayFabBaseModel
        {
            std::string PublisherId;
            std::string TitleId;
            std::string PlayerId;
            Boxed<time_t> Created;
            Boxed<LoginIdentityProvider> Origination;
            Boxed<time_t> LastLogin;
            Boxed<time_t> BannedUntil;
            std::list<LocationModel> Locations;
            std::string DisplayName;
            std::string AvatarUrl;
            std::list<TagModel> Tags;
            std::list<PushNotificationRegistrationModel> PushNotificationRegistrations;
            std::list<LinkedPlatformAccountModel> LinkedAccounts;
            std::list<AdCampaignAttributionModel> AdCampaignAttributions;
            Boxed<Uint32> TotalValueToDateInUSD;
            std::list<ValueToDateModel> ValuesToDate;
            std::list<VirtualCurrencyBalanceModel> VirtualCurrencyBalances;
            std::list<StatisticModel> Statistics;

            PlayerProfileModel() :
                PlayFabBaseModel(),
                PublisherId(),
                TitleId(),
                PlayerId(),
                Created(),
                Origination(),
                LastLogin(),
                BannedUntil(),
                Locations(),
                DisplayName(),
                AvatarUrl(),
                Tags(),
                PushNotificationRegistrations(),
                LinkedAccounts(),
                AdCampaignAttributions(),
                TotalValueToDateInUSD(),
                ValuesToDate(),
                VirtualCurrencyBalances(),
                Statistics()
            {}

            PlayerProfileModel(const PlayerProfileModel& src) :
                PlayFabBaseModel(),
                PublisherId(src.PublisherId),
                TitleId(src.TitleId),
                PlayerId(src.PlayerId),
                Created(src.Created),
                Origination(src.Origination),
                LastLogin(src.LastLogin),
                BannedUntil(src.BannedUntil),
                Locations(src.Locations),
                DisplayName(src.DisplayName),
                AvatarUrl(src.AvatarUrl),
                Tags(src.Tags),
                PushNotificationRegistrations(src.PushNotificationRegistrations),
                LinkedAccounts(src.LinkedAccounts),
                AdCampaignAttributions(src.AdCampaignAttributions),
                TotalValueToDateInUSD(src.TotalValueToDateInUSD),
                ValuesToDate(src.ValuesToDate),
                VirtualCurrencyBalances(src.VirtualCurrencyBalances),
                Statistics(src.Statistics)
            {}

            ~PlayerProfileModel() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PublisherId")], PublisherId);
                FromJsonUtilS(input[U("TitleId")], TitleId);
                FromJsonUtilS(input[U("PlayerId")], PlayerId);
                FromJsonUtilT(input[U("Created")], Created);
                FromJsonUtilE(input[U("Origination")], Origination);
                FromJsonUtilT(input[U("LastLogin")], LastLogin);
                FromJsonUtilT(input[U("BannedUntil")], BannedUntil);
                FromJsonUtilO(input[U("Locations")], Locations);
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
                FromJsonUtilS(input[U("AvatarUrl")], AvatarUrl);
                FromJsonUtilO(input[U("Tags")], Tags);
                FromJsonUtilO(input[U("PushNotificationRegistrations")], PushNotificationRegistrations);
                FromJsonUtilO(input[U("LinkedAccounts")], LinkedAccounts);
                FromJsonUtilO(input[U("AdCampaignAttributions")], AdCampaignAttributions);
                FromJsonUtilP(input[U("TotalValueToDateInUSD")], TotalValueToDateInUSD);
                FromJsonUtilO(input[U("ValuesToDate")], ValuesToDate);
                FromJsonUtilO(input[U("VirtualCurrencyBalances")], VirtualCurrencyBalances);
                FromJsonUtilO(input[U("Statistics")], Statistics);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PublisherId; ToJsonUtilS(PublisherId, each_PublisherId); output[U("PublisherId")] = each_PublisherId;
                web::json::value each_TitleId; ToJsonUtilS(TitleId, each_TitleId); output[U("TitleId")] = each_TitleId;
                web::json::value each_PlayerId; ToJsonUtilS(PlayerId, each_PlayerId); output[U("PlayerId")] = each_PlayerId;
                web::json::value each_Created; ToJsonUtilT(Created, each_Created); output[U("Created")] = each_Created;
                web::json::value each_Origination; ToJsonUtilE(Origination, each_Origination); output[U("Origination")] = each_Origination;
                web::json::value each_LastLogin; ToJsonUtilT(LastLogin, each_LastLogin); output[U("LastLogin")] = each_LastLogin;
                web::json::value each_BannedUntil; ToJsonUtilT(BannedUntil, each_BannedUntil); output[U("BannedUntil")] = each_BannedUntil;
                web::json::value each_Locations; ToJsonUtilO(Locations, each_Locations); output[U("Locations")] = each_Locations;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                web::json::value each_AvatarUrl; ToJsonUtilS(AvatarUrl, each_AvatarUrl); output[U("AvatarUrl")] = each_AvatarUrl;
                web::json::value each_Tags; ToJsonUtilO(Tags, each_Tags); output[U("Tags")] = each_Tags;
                web::json::value each_PushNotificationRegistrations; ToJsonUtilO(PushNotificationRegistrations, each_PushNotificationRegistrations); output[U("PushNotificationRegistrations")] = each_PushNotificationRegistrations;
                web::json::value each_LinkedAccounts; ToJsonUtilO(LinkedAccounts, each_LinkedAccounts); output[U("LinkedAccounts")] = each_LinkedAccounts;
                web::json::value each_AdCampaignAttributions; ToJsonUtilO(AdCampaignAttributions, each_AdCampaignAttributions); output[U("AdCampaignAttributions")] = each_AdCampaignAttributions;
                web::json::value each_TotalValueToDateInUSD; ToJsonUtilP(TotalValueToDateInUSD, each_TotalValueToDateInUSD); output[U("TotalValueToDateInUSD")] = each_TotalValueToDateInUSD;
                web::json::value each_ValuesToDate; ToJsonUtilO(ValuesToDate, each_ValuesToDate); output[U("ValuesToDate")] = each_ValuesToDate;
                web::json::value each_VirtualCurrencyBalances; ToJsonUtilO(VirtualCurrencyBalances, each_VirtualCurrencyBalances); output[U("VirtualCurrencyBalances")] = each_VirtualCurrencyBalances;
                web::json::value each_Statistics; ToJsonUtilO(Statistics, each_Statistics); output[U("Statistics")] = each_Statistics;
                return output;
            }
        };

        struct PlayerLeaderboardEntry : public PlayFabBaseModel
        {
            std::string PlayFabId;
            std::string DisplayName;
            Int32 StatValue;
            Int32 Position;
            Boxed<PlayerProfileModel> Profile;

            PlayerLeaderboardEntry() :
                PlayFabBaseModel(),
                PlayFabId(),
                DisplayName(),
                StatValue(),
                Position(),
                Profile()
            {}

            PlayerLeaderboardEntry(const PlayerLeaderboardEntry& src) :
                PlayFabBaseModel(),
                PlayFabId(src.PlayFabId),
                DisplayName(src.DisplayName),
                StatValue(src.StatValue),
                Position(src.Position),
                Profile(src.Profile)
            {}

            ~PlayerLeaderboardEntry() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
                FromJsonUtilP(input[U("StatValue")], StatValue);
                FromJsonUtilP(input[U("Position")], Position);
                FromJsonUtilO(input[U("Profile")], Profile);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                web::json::value each_StatValue; ToJsonUtilP(StatValue, each_StatValue); output[U("StatValue")] = each_StatValue;
                web::json::value each_Position; ToJsonUtilP(Position, each_Position); output[U("Position")] = each_Position;
                web::json::value each_Profile; ToJsonUtilO(Profile, each_Profile); output[U("Profile")] = each_Profile;
                return output;
            }
        };

        struct GetLeaderboardAroundUserResult : public PlayFabRequestCommon
        {
            std::list<PlayerLeaderboardEntry> Leaderboard;
            Int32 Version;
            Boxed<time_t> NextReset;

            GetLeaderboardAroundUserResult() :
                PlayFabRequestCommon(),
                Leaderboard(),
                Version(),
                NextReset()
            {}

            GetLeaderboardAroundUserResult(const GetLeaderboardAroundUserResult& src) :
                PlayFabRequestCommon(),
                Leaderboard(src.Leaderboard),
                Version(src.Version),
                NextReset(src.NextReset)
            {}

            ~GetLeaderboardAroundUserResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Leaderboard")], Leaderboard);
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilT(input[U("NextReset")], NextReset);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Leaderboard; ToJsonUtilO(Leaderboard, each_Leaderboard); output[U("Leaderboard")] = each_Leaderboard;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_NextReset; ToJsonUtilT(NextReset, each_NextReset); output[U("NextReset")] = each_NextReset;
                return output;
            }
        };

        struct GetLeaderboardForUsersCharactersRequest : public PlayFabRequestCommon
        {
            std::string StatisticName;
            std::string PlayFabId;
            Int32 MaxResultsCount;

            GetLeaderboardForUsersCharactersRequest() :
                PlayFabRequestCommon(),
                StatisticName(),
                PlayFabId(),
                MaxResultsCount()
            {}

            GetLeaderboardForUsersCharactersRequest(const GetLeaderboardForUsersCharactersRequest& src) :
                PlayFabRequestCommon(),
                StatisticName(src.StatisticName),
                PlayFabId(src.PlayFabId),
                MaxResultsCount(src.MaxResultsCount)
            {}

            ~GetLeaderboardForUsersCharactersRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilP(input[U("MaxResultsCount")], MaxResultsCount);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_MaxResultsCount; ToJsonUtilP(MaxResultsCount, each_MaxResultsCount); output[U("MaxResultsCount")] = each_MaxResultsCount;
                return output;
            }
        };

        struct GetLeaderboardForUsersCharactersResult : public PlayFabRequestCommon
        {
            std::list<CharacterLeaderboardEntry> Leaderboard;

            GetLeaderboardForUsersCharactersResult() :
                PlayFabRequestCommon(),
                Leaderboard()
            {}

            GetLeaderboardForUsersCharactersResult(const GetLeaderboardForUsersCharactersResult& src) :
                PlayFabRequestCommon(),
                Leaderboard(src.Leaderboard)
            {}

            ~GetLeaderboardForUsersCharactersResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Leaderboard")], Leaderboard);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Leaderboard; ToJsonUtilO(Leaderboard, each_Leaderboard); output[U("Leaderboard")] = each_Leaderboard;
                return output;
            }
        };

        struct GetLeaderboardRequest : public PlayFabRequestCommon
        {
            std::string StatisticName;
            Int32 StartPosition;
            Int32 MaxResultsCount;
            Boxed<PlayerProfileViewConstraints> ProfileConstraints;
            Int32 Version;
            bool UseSpecificVersion;

            GetLeaderboardRequest() :
                PlayFabRequestCommon(),
                StatisticName(),
                StartPosition(),
                MaxResultsCount(),
                ProfileConstraints(),
                Version(),
                UseSpecificVersion()
            {}

            GetLeaderboardRequest(const GetLeaderboardRequest& src) :
                PlayFabRequestCommon(),
                StatisticName(src.StatisticName),
                StartPosition(src.StartPosition),
                MaxResultsCount(src.MaxResultsCount),
                ProfileConstraints(src.ProfileConstraints),
                Version(src.Version),
                UseSpecificVersion(src.UseSpecificVersion)
            {}

            ~GetLeaderboardRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilP(input[U("StartPosition")], StartPosition);
                FromJsonUtilP(input[U("MaxResultsCount")], MaxResultsCount);
                FromJsonUtilO(input[U("ProfileConstraints")], ProfileConstraints);
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilP(input[U("UseSpecificVersion")], UseSpecificVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_StartPosition; ToJsonUtilP(StartPosition, each_StartPosition); output[U("StartPosition")] = each_StartPosition;
                web::json::value each_MaxResultsCount; ToJsonUtilP(MaxResultsCount, each_MaxResultsCount); output[U("MaxResultsCount")] = each_MaxResultsCount;
                web::json::value each_ProfileConstraints; ToJsonUtilO(ProfileConstraints, each_ProfileConstraints); output[U("ProfileConstraints")] = each_ProfileConstraints;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_UseSpecificVersion; ToJsonUtilP(UseSpecificVersion, each_UseSpecificVersion); output[U("UseSpecificVersion")] = each_UseSpecificVersion;
                return output;
            }
        };

        struct GetLeaderboardResult : public PlayFabRequestCommon
        {
            std::list<PlayerLeaderboardEntry> Leaderboard;
            Int32 Version;
            Boxed<time_t> NextReset;

            GetLeaderboardResult() :
                PlayFabRequestCommon(),
                Leaderboard(),
                Version(),
                NextReset()
            {}

            GetLeaderboardResult(const GetLeaderboardResult& src) :
                PlayFabRequestCommon(),
                Leaderboard(src.Leaderboard),
                Version(src.Version),
                NextReset(src.NextReset)
            {}

            ~GetLeaderboardResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Leaderboard")], Leaderboard);
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilT(input[U("NextReset")], NextReset);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Leaderboard; ToJsonUtilO(Leaderboard, each_Leaderboard); output[U("Leaderboard")] = each_Leaderboard;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_NextReset; ToJsonUtilT(NextReset, each_NextReset); output[U("NextReset")] = each_NextReset;
                return output;
            }
        };

        struct GetPlayerCombinedInfoRequestParams : public PlayFabBaseModel
        {
            bool GetUserAccountInfo;
            bool GetUserInventory;
            bool GetUserVirtualCurrency;
            bool GetUserData;
            std::list<std::string> UserDataKeys;
            bool GetUserReadOnlyData;
            std::list<std::string> UserReadOnlyDataKeys;
            bool GetCharacterInventories;
            bool GetCharacterList;
            bool GetTitleData;
            std::list<std::string> TitleDataKeys;
            bool GetPlayerStatistics;
            std::list<std::string> PlayerStatisticNames;

            GetPlayerCombinedInfoRequestParams() :
                PlayFabBaseModel(),
                GetUserAccountInfo(),
                GetUserInventory(),
                GetUserVirtualCurrency(),
                GetUserData(),
                UserDataKeys(),
                GetUserReadOnlyData(),
                UserReadOnlyDataKeys(),
                GetCharacterInventories(),
                GetCharacterList(),
                GetTitleData(),
                TitleDataKeys(),
                GetPlayerStatistics(),
                PlayerStatisticNames()
            {}

            GetPlayerCombinedInfoRequestParams(const GetPlayerCombinedInfoRequestParams& src) :
                PlayFabBaseModel(),
                GetUserAccountInfo(src.GetUserAccountInfo),
                GetUserInventory(src.GetUserInventory),
                GetUserVirtualCurrency(src.GetUserVirtualCurrency),
                GetUserData(src.GetUserData),
                UserDataKeys(src.UserDataKeys),
                GetUserReadOnlyData(src.GetUserReadOnlyData),
                UserReadOnlyDataKeys(src.UserReadOnlyDataKeys),
                GetCharacterInventories(src.GetCharacterInventories),
                GetCharacterList(src.GetCharacterList),
                GetTitleData(src.GetTitleData),
                TitleDataKeys(src.TitleDataKeys),
                GetPlayerStatistics(src.GetPlayerStatistics),
                PlayerStatisticNames(src.PlayerStatisticNames)
            {}

            ~GetPlayerCombinedInfoRequestParams() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("GetUserAccountInfo")], GetUserAccountInfo);
                FromJsonUtilP(input[U("GetUserInventory")], GetUserInventory);
                FromJsonUtilP(input[U("GetUserVirtualCurrency")], GetUserVirtualCurrency);
                FromJsonUtilP(input[U("GetUserData")], GetUserData);
                FromJsonUtilS(input[U("UserDataKeys")], UserDataKeys);
                FromJsonUtilP(input[U("GetUserReadOnlyData")], GetUserReadOnlyData);
                FromJsonUtilS(input[U("UserReadOnlyDataKeys")], UserReadOnlyDataKeys);
                FromJsonUtilP(input[U("GetCharacterInventories")], GetCharacterInventories);
                FromJsonUtilP(input[U("GetCharacterList")], GetCharacterList);
                FromJsonUtilP(input[U("GetTitleData")], GetTitleData);
                FromJsonUtilS(input[U("TitleDataKeys")], TitleDataKeys);
                FromJsonUtilP(input[U("GetPlayerStatistics")], GetPlayerStatistics);
                FromJsonUtilS(input[U("PlayerStatisticNames")], PlayerStatisticNames);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_GetUserAccountInfo; ToJsonUtilP(GetUserAccountInfo, each_GetUserAccountInfo); output[U("GetUserAccountInfo")] = each_GetUserAccountInfo;
                web::json::value each_GetUserInventory; ToJsonUtilP(GetUserInventory, each_GetUserInventory); output[U("GetUserInventory")] = each_GetUserInventory;
                web::json::value each_GetUserVirtualCurrency; ToJsonUtilP(GetUserVirtualCurrency, each_GetUserVirtualCurrency); output[U("GetUserVirtualCurrency")] = each_GetUserVirtualCurrency;
                web::json::value each_GetUserData; ToJsonUtilP(GetUserData, each_GetUserData); output[U("GetUserData")] = each_GetUserData;
                web::json::value each_UserDataKeys; ToJsonUtilS(UserDataKeys, each_UserDataKeys); output[U("UserDataKeys")] = each_UserDataKeys;
                web::json::value each_GetUserReadOnlyData; ToJsonUtilP(GetUserReadOnlyData, each_GetUserReadOnlyData); output[U("GetUserReadOnlyData")] = each_GetUserReadOnlyData;
                web::json::value each_UserReadOnlyDataKeys; ToJsonUtilS(UserReadOnlyDataKeys, each_UserReadOnlyDataKeys); output[U("UserReadOnlyDataKeys")] = each_UserReadOnlyDataKeys;
                web::json::value each_GetCharacterInventories; ToJsonUtilP(GetCharacterInventories, each_GetCharacterInventories); output[U("GetCharacterInventories")] = each_GetCharacterInventories;
                web::json::value each_GetCharacterList; ToJsonUtilP(GetCharacterList, each_GetCharacterList); output[U("GetCharacterList")] = each_GetCharacterList;
                web::json::value each_GetTitleData; ToJsonUtilP(GetTitleData, each_GetTitleData); output[U("GetTitleData")] = each_GetTitleData;
                web::json::value each_TitleDataKeys; ToJsonUtilS(TitleDataKeys, each_TitleDataKeys); output[U("TitleDataKeys")] = each_TitleDataKeys;
                web::json::value each_GetPlayerStatistics; ToJsonUtilP(GetPlayerStatistics, each_GetPlayerStatistics); output[U("GetPlayerStatistics")] = each_GetPlayerStatistics;
                web::json::value each_PlayerStatisticNames; ToJsonUtilS(PlayerStatisticNames, each_PlayerStatisticNames); output[U("PlayerStatisticNames")] = each_PlayerStatisticNames;
                return output;
            }
        };

        struct GetPlayerCombinedInfoRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            GetPlayerCombinedInfoRequestParams InfoRequestParameters;

            GetPlayerCombinedInfoRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                InfoRequestParameters()
            {}

            GetPlayerCombinedInfoRequest(const GetPlayerCombinedInfoRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                InfoRequestParameters(src.InfoRequestParameters)
            {}

            ~GetPlayerCombinedInfoRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilO(input[U("InfoRequestParameters")], InfoRequestParameters);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_InfoRequestParameters; ToJsonUtilO(InfoRequestParameters, each_InfoRequestParameters); output[U("InfoRequestParameters")] = each_InfoRequestParameters;
                return output;
            }
        };

        struct StatisticValue : public PlayFabBaseModel
        {
            std::string StatisticName;
            Int32 Value;
            Uint32 Version;

            StatisticValue() :
                PlayFabBaseModel(),
                StatisticName(),
                Value(),
                Version()
            {}

            StatisticValue(const StatisticValue& src) :
                PlayFabBaseModel(),
                StatisticName(src.StatisticName),
                Value(src.Value),
                Version(src.Version)
            {}

            ~StatisticValue() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilP(input[U("Value")], Value);
                FromJsonUtilP(input[U("Version")], Version);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_Value; ToJsonUtilP(Value, each_Value); output[U("Value")] = each_Value;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                return output;
            }
        };

        struct GetPlayerCombinedInfoResultPayload : public PlayFabBaseModel
        {
            Boxed<UserAccountInfo> AccountInfo;
            std::list<ItemInstance> UserInventory;
            std::map<std::string, Int32> UserVirtualCurrency;
            std::map<std::string, VirtualCurrencyRechargeTime> UserVirtualCurrencyRechargeTimes;
            std::map<std::string, UserDataRecord> UserData;
            Uint32 UserDataVersion;
            std::map<std::string, UserDataRecord> UserReadOnlyData;
            Uint32 UserReadOnlyDataVersion;
            std::list<CharacterResult> CharacterList;
            std::list<CharacterInventory> CharacterInventories;
            std::map<std::string, std::string> TitleData;
            std::list<StatisticValue> PlayerStatistics;

            GetPlayerCombinedInfoResultPayload() :
                PlayFabBaseModel(),
                AccountInfo(),
                UserInventory(),
                UserVirtualCurrency(),
                UserVirtualCurrencyRechargeTimes(),
                UserData(),
                UserDataVersion(),
                UserReadOnlyData(),
                UserReadOnlyDataVersion(),
                CharacterList(),
                CharacterInventories(),
                TitleData(),
                PlayerStatistics()
            {}

            GetPlayerCombinedInfoResultPayload(const GetPlayerCombinedInfoResultPayload& src) :
                PlayFabBaseModel(),
                AccountInfo(src.AccountInfo),
                UserInventory(src.UserInventory),
                UserVirtualCurrency(src.UserVirtualCurrency),
                UserVirtualCurrencyRechargeTimes(src.UserVirtualCurrencyRechargeTimes),
                UserData(src.UserData),
                UserDataVersion(src.UserDataVersion),
                UserReadOnlyData(src.UserReadOnlyData),
                UserReadOnlyDataVersion(src.UserReadOnlyDataVersion),
                CharacterList(src.CharacterList),
                CharacterInventories(src.CharacterInventories),
                TitleData(src.TitleData),
                PlayerStatistics(src.PlayerStatistics)
            {}

            ~GetPlayerCombinedInfoResultPayload() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("AccountInfo")], AccountInfo);
                FromJsonUtilO(input[U("UserInventory")], UserInventory);
                FromJsonUtilP(input[U("UserVirtualCurrency")], UserVirtualCurrency);
                FromJsonUtilO(input[U("UserVirtualCurrencyRechargeTimes")], UserVirtualCurrencyRechargeTimes);
                FromJsonUtilO(input[U("UserData")], UserData);
                FromJsonUtilP(input[U("UserDataVersion")], UserDataVersion);
                FromJsonUtilO(input[U("UserReadOnlyData")], UserReadOnlyData);
                FromJsonUtilP(input[U("UserReadOnlyDataVersion")], UserReadOnlyDataVersion);
                FromJsonUtilO(input[U("CharacterList")], CharacterList);
                FromJsonUtilO(input[U("CharacterInventories")], CharacterInventories);
                FromJsonUtilS(input[U("TitleData")], TitleData);
                FromJsonUtilO(input[U("PlayerStatistics")], PlayerStatistics);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_AccountInfo; ToJsonUtilO(AccountInfo, each_AccountInfo); output[U("AccountInfo")] = each_AccountInfo;
                web::json::value each_UserInventory; ToJsonUtilO(UserInventory, each_UserInventory); output[U("UserInventory")] = each_UserInventory;
                web::json::value each_UserVirtualCurrency; ToJsonUtilP(UserVirtualCurrency, each_UserVirtualCurrency); output[U("UserVirtualCurrency")] = each_UserVirtualCurrency;
                web::json::value each_UserVirtualCurrencyRechargeTimes; ToJsonUtilO(UserVirtualCurrencyRechargeTimes, each_UserVirtualCurrencyRechargeTimes); output[U("UserVirtualCurrencyRechargeTimes")] = each_UserVirtualCurrencyRechargeTimes;
                web::json::value each_UserData; ToJsonUtilO(UserData, each_UserData); output[U("UserData")] = each_UserData;
                web::json::value each_UserDataVersion; ToJsonUtilP(UserDataVersion, each_UserDataVersion); output[U("UserDataVersion")] = each_UserDataVersion;
                web::json::value each_UserReadOnlyData; ToJsonUtilO(UserReadOnlyData, each_UserReadOnlyData); output[U("UserReadOnlyData")] = each_UserReadOnlyData;
                web::json::value each_UserReadOnlyDataVersion; ToJsonUtilP(UserReadOnlyDataVersion, each_UserReadOnlyDataVersion); output[U("UserReadOnlyDataVersion")] = each_UserReadOnlyDataVersion;
                web::json::value each_CharacterList; ToJsonUtilO(CharacterList, each_CharacterList); output[U("CharacterList")] = each_CharacterList;
                web::json::value each_CharacterInventories; ToJsonUtilO(CharacterInventories, each_CharacterInventories); output[U("CharacterInventories")] = each_CharacterInventories;
                web::json::value each_TitleData; ToJsonUtilS(TitleData, each_TitleData); output[U("TitleData")] = each_TitleData;
                web::json::value each_PlayerStatistics; ToJsonUtilO(PlayerStatistics, each_PlayerStatistics); output[U("PlayerStatistics")] = each_PlayerStatistics;
                return output;
            }
        };

        struct GetPlayerCombinedInfoResult : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            Boxed<GetPlayerCombinedInfoResultPayload> InfoResultPayload;

            GetPlayerCombinedInfoResult() :
                PlayFabRequestCommon(),
                PlayFabId(),
                InfoResultPayload()
            {}

            GetPlayerCombinedInfoResult(const GetPlayerCombinedInfoResult& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                InfoResultPayload(src.InfoResultPayload)
            {}

            ~GetPlayerCombinedInfoResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilO(input[U("InfoResultPayload")], InfoResultPayload);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_InfoResultPayload; ToJsonUtilO(InfoResultPayload, each_InfoResultPayload); output[U("InfoResultPayload")] = each_InfoResultPayload;
                return output;
            }
        };

        struct GetPlayerSegmentsResult : public PlayFabRequestCommon
        {
            std::list<GetSegmentResult> Segments;

            GetPlayerSegmentsResult() :
                PlayFabRequestCommon(),
                Segments()
            {}

            GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src) :
                PlayFabRequestCommon(),
                Segments(src.Segments)
            {}

            ~GetPlayerSegmentsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Segments")], Segments);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Segments; ToJsonUtilO(Segments, each_Segments); output[U("Segments")] = each_Segments;
                return output;
            }
        };

        struct GetPlayersInSegmentRequest : public PlayFabRequestCommon
        {
            std::string SegmentId;
            Boxed<Uint32> SecondsToLive;
            Boxed<Uint32> MaxBatchSize;
            std::string ContinuationToken;

            GetPlayersInSegmentRequest() :
                PlayFabRequestCommon(),
                SegmentId(),
                SecondsToLive(),
                MaxBatchSize(),
                ContinuationToken()
            {}

            GetPlayersInSegmentRequest(const GetPlayersInSegmentRequest& src) :
                PlayFabRequestCommon(),
                SegmentId(src.SegmentId),
                SecondsToLive(src.SecondsToLive),
                MaxBatchSize(src.MaxBatchSize),
                ContinuationToken(src.ContinuationToken)
            {}

            ~GetPlayersInSegmentRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SegmentId")], SegmentId);
                FromJsonUtilP(input[U("SecondsToLive")], SecondsToLive);
                FromJsonUtilP(input[U("MaxBatchSize")], MaxBatchSize);
                FromJsonUtilS(input[U("ContinuationToken")], ContinuationToken);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SegmentId; ToJsonUtilS(SegmentId, each_SegmentId); output[U("SegmentId")] = each_SegmentId;
                web::json::value each_SecondsToLive; ToJsonUtilP(SecondsToLive, each_SecondsToLive); output[U("SecondsToLive")] = each_SecondsToLive;
                web::json::value each_MaxBatchSize; ToJsonUtilP(MaxBatchSize, each_MaxBatchSize); output[U("MaxBatchSize")] = each_MaxBatchSize;
                web::json::value each_ContinuationToken; ToJsonUtilS(ContinuationToken, each_ContinuationToken); output[U("ContinuationToken")] = each_ContinuationToken;
                return output;
            }
        };

        struct PlayerLocation : public PlayFabBaseModel
        {
            ContinentCode pfContinentCode;
            CountryCode pfCountryCode;
            std::string City;
            Boxed<double> Latitude;
            Boxed<double> Longitude;

            PlayerLocation() :
                PlayFabBaseModel(),
                pfContinentCode(),
                pfCountryCode(),
                City(),
                Latitude(),
                Longitude()
            {}

            PlayerLocation(const PlayerLocation& src) :
                PlayFabBaseModel(),
                pfContinentCode(src.pfContinentCode),
                pfCountryCode(src.pfCountryCode),
                City(src.City),
                Latitude(src.Latitude),
                Longitude(src.Longitude)
            {}

            ~PlayerLocation() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonEnum(input[U("pfContinentCode")], pfContinentCode);
                FromJsonEnum(input[U("pfCountryCode")], pfCountryCode);
                FromJsonUtilS(input[U("City")], City);
                FromJsonUtilP(input[U("Latitude")], Latitude);
                FromJsonUtilP(input[U("Longitude")], Longitude);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_pfContinentCode; ToJsonEnum(pfContinentCode, each_pfContinentCode); output[U("ContinentCode")] = each_pfContinentCode;
                web::json::value each_pfCountryCode; ToJsonEnum(pfCountryCode, each_pfCountryCode); output[U("CountryCode")] = each_pfCountryCode;
                web::json::value each_City; ToJsonUtilS(City, each_City); output[U("City")] = each_City;
                web::json::value each_Latitude; ToJsonUtilP(Latitude, each_Latitude); output[U("Latitude")] = each_Latitude;
                web::json::value each_Longitude; ToJsonUtilP(Longitude, each_Longitude); output[U("Longitude")] = each_Longitude;
                return output;
            }
        };

        struct PushNotificationRegistration : public PlayFabBaseModel
        {
            Boxed<PushNotificationPlatform> Platform;
            std::string NotificationEndpointARN;

            PushNotificationRegistration() :
                PlayFabBaseModel(),
                Platform(),
                NotificationEndpointARN()
            {}

            PushNotificationRegistration(const PushNotificationRegistration& src) :
                PlayFabBaseModel(),
                Platform(src.Platform),
                NotificationEndpointARN(src.NotificationEndpointARN)
            {}

            ~PushNotificationRegistration() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilE(input[U("Platform")], Platform);
                FromJsonUtilS(input[U("NotificationEndpointARN")], NotificationEndpointARN);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Platform; ToJsonUtilE(Platform, each_Platform); output[U("Platform")] = each_Platform;
                web::json::value each_NotificationEndpointARN; ToJsonUtilS(NotificationEndpointARN, each_NotificationEndpointARN); output[U("NotificationEndpointARN")] = each_NotificationEndpointARN;
                return output;
            }
        };

        struct PlayerLinkedAccount : public PlayFabBaseModel
        {
            Boxed<LoginIdentityProvider> Platform;
            std::string PlatformUserId;
            std::string Username;
            std::string Email;

            PlayerLinkedAccount() :
                PlayFabBaseModel(),
                Platform(),
                PlatformUserId(),
                Username(),
                Email()
            {}

            PlayerLinkedAccount(const PlayerLinkedAccount& src) :
                PlayFabBaseModel(),
                Platform(src.Platform),
                PlatformUserId(src.PlatformUserId),
                Username(src.Username),
                Email(src.Email)
            {}

            ~PlayerLinkedAccount() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilE(input[U("Platform")], Platform);
                FromJsonUtilS(input[U("PlatformUserId")], PlatformUserId);
                FromJsonUtilS(input[U("Username")], Username);
                FromJsonUtilS(input[U("Email")], Email);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Platform; ToJsonUtilE(Platform, each_Platform); output[U("Platform")] = each_Platform;
                web::json::value each_PlatformUserId; ToJsonUtilS(PlatformUserId, each_PlatformUserId); output[U("PlatformUserId")] = each_PlatformUserId;
                web::json::value each_Username; ToJsonUtilS(Username, each_Username); output[U("Username")] = each_Username;
                web::json::value each_Email; ToJsonUtilS(Email, each_Email); output[U("Email")] = each_Email;
                return output;
            }
        };

        struct PlayerStatistic : public PlayFabBaseModel
        {
            std::string Id;
            Int32 StatisticVersion;
            Int32 StatisticValue;
            std::string Name;

            PlayerStatistic() :
                PlayFabBaseModel(),
                Id(),
                StatisticVersion(),
                StatisticValue(),
                Name()
            {}

            PlayerStatistic(const PlayerStatistic& src) :
                PlayFabBaseModel(),
                Id(src.Id),
                StatisticVersion(src.StatisticVersion),
                StatisticValue(src.StatisticValue),
                Name(src.Name)
            {}

            ~PlayerStatistic() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Id")], Id);
                FromJsonUtilP(input[U("StatisticVersion")], StatisticVersion);
                FromJsonUtilP(input[U("StatisticValue")], StatisticValue);
                FromJsonUtilS(input[U("Name")], Name);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Id; ToJsonUtilS(Id, each_Id); output[U("Id")] = each_Id;
                web::json::value each_StatisticVersion; ToJsonUtilP(StatisticVersion, each_StatisticVersion); output[U("StatisticVersion")] = each_StatisticVersion;
                web::json::value each_StatisticValue; ToJsonUtilP(StatisticValue, each_StatisticValue); output[U("StatisticValue")] = each_StatisticValue;
                web::json::value each_Name; ToJsonUtilS(Name, each_Name); output[U("Name")] = each_Name;
                return output;
            }
        };

        struct PlayerProfile : public PlayFabBaseModel
        {
            std::string PlayerId;
            std::string TitleId;
            std::string DisplayName;
            std::string PublisherId;
            Boxed<LoginIdentityProvider> Origination;
            Boxed<time_t> Created;
            Boxed<time_t> LastLogin;
            Boxed<time_t> BannedUntil;
            std::string AvatarUrl;
            std::map<std::string, Int32> Statistics;
            Boxed<Uint32> TotalValueToDateInUSD;
            std::map<std::string, Uint32> ValuesToDate;
            std::list<std::string> Tags;
            std::map<std::string, PlayerLocation> Locations;
            std::map<std::string, Int32> VirtualCurrencyBalances;
            std::list<AdCampaignAttribution> AdCampaignAttributions;
            std::list<PushNotificationRegistration> PushNotificationRegistrations;
            std::list<PlayerLinkedAccount> LinkedAccounts;
            std::list<PlayerStatistic> PlayerStatistics;

            PlayerProfile() :
                PlayFabBaseModel(),
                PlayerId(),
                TitleId(),
                DisplayName(),
                PublisherId(),
                Origination(),
                Created(),
                LastLogin(),
                BannedUntil(),
                AvatarUrl(),
                Statistics(),
                TotalValueToDateInUSD(),
                ValuesToDate(),
                Tags(),
                Locations(),
                VirtualCurrencyBalances(),
                AdCampaignAttributions(),
                PushNotificationRegistrations(),
                LinkedAccounts(),
                PlayerStatistics()
            {}

            PlayerProfile(const PlayerProfile& src) :
                PlayFabBaseModel(),
                PlayerId(src.PlayerId),
                TitleId(src.TitleId),
                DisplayName(src.DisplayName),
                PublisherId(src.PublisherId),
                Origination(src.Origination),
                Created(src.Created),
                LastLogin(src.LastLogin),
                BannedUntil(src.BannedUntil),
                AvatarUrl(src.AvatarUrl),
                Statistics(src.Statistics),
                TotalValueToDateInUSD(src.TotalValueToDateInUSD),
                ValuesToDate(src.ValuesToDate),
                Tags(src.Tags),
                Locations(src.Locations),
                VirtualCurrencyBalances(src.VirtualCurrencyBalances),
                AdCampaignAttributions(src.AdCampaignAttributions),
                PushNotificationRegistrations(src.PushNotificationRegistrations),
                LinkedAccounts(src.LinkedAccounts),
                PlayerStatistics(src.PlayerStatistics)
            {}

            ~PlayerProfile() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayerId")], PlayerId);
                FromJsonUtilS(input[U("TitleId")], TitleId);
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
                FromJsonUtilS(input[U("PublisherId")], PublisherId);
                FromJsonUtilE(input[U("Origination")], Origination);
                FromJsonUtilT(input[U("Created")], Created);
                FromJsonUtilT(input[U("LastLogin")], LastLogin);
                FromJsonUtilT(input[U("BannedUntil")], BannedUntil);
                FromJsonUtilS(input[U("AvatarUrl")], AvatarUrl);
                FromJsonUtilP(input[U("Statistics")], Statistics);
                FromJsonUtilP(input[U("TotalValueToDateInUSD")], TotalValueToDateInUSD);
                FromJsonUtilP(input[U("ValuesToDate")], ValuesToDate);
                FromJsonUtilS(input[U("Tags")], Tags);
                FromJsonUtilO(input[U("Locations")], Locations);
                FromJsonUtilP(input[U("VirtualCurrencyBalances")], VirtualCurrencyBalances);
                FromJsonUtilO(input[U("AdCampaignAttributions")], AdCampaignAttributions);
                FromJsonUtilO(input[U("PushNotificationRegistrations")], PushNotificationRegistrations);
                FromJsonUtilO(input[U("LinkedAccounts")], LinkedAccounts);
                FromJsonUtilO(input[U("PlayerStatistics")], PlayerStatistics);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayerId; ToJsonUtilS(PlayerId, each_PlayerId); output[U("PlayerId")] = each_PlayerId;
                web::json::value each_TitleId; ToJsonUtilS(TitleId, each_TitleId); output[U("TitleId")] = each_TitleId;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                web::json::value each_PublisherId; ToJsonUtilS(PublisherId, each_PublisherId); output[U("PublisherId")] = each_PublisherId;
                web::json::value each_Origination; ToJsonUtilE(Origination, each_Origination); output[U("Origination")] = each_Origination;
                web::json::value each_Created; ToJsonUtilT(Created, each_Created); output[U("Created")] = each_Created;
                web::json::value each_LastLogin; ToJsonUtilT(LastLogin, each_LastLogin); output[U("LastLogin")] = each_LastLogin;
                web::json::value each_BannedUntil; ToJsonUtilT(BannedUntil, each_BannedUntil); output[U("BannedUntil")] = each_BannedUntil;
                web::json::value each_AvatarUrl; ToJsonUtilS(AvatarUrl, each_AvatarUrl); output[U("AvatarUrl")] = each_AvatarUrl;
                web::json::value each_Statistics; ToJsonUtilP(Statistics, each_Statistics); output[U("Statistics")] = each_Statistics;
                web::json::value each_TotalValueToDateInUSD; ToJsonUtilP(TotalValueToDateInUSD, each_TotalValueToDateInUSD); output[U("TotalValueToDateInUSD")] = each_TotalValueToDateInUSD;
                web::json::value each_ValuesToDate; ToJsonUtilP(ValuesToDate, each_ValuesToDate); output[U("ValuesToDate")] = each_ValuesToDate;
                web::json::value each_Tags; ToJsonUtilS(Tags, each_Tags); output[U("Tags")] = each_Tags;
                web::json::value each_Locations; ToJsonUtilO(Locations, each_Locations); output[U("Locations")] = each_Locations;
                web::json::value each_VirtualCurrencyBalances; ToJsonUtilP(VirtualCurrencyBalances, each_VirtualCurrencyBalances); output[U("VirtualCurrencyBalances")] = each_VirtualCurrencyBalances;
                web::json::value each_AdCampaignAttributions; ToJsonUtilO(AdCampaignAttributions, each_AdCampaignAttributions); output[U("AdCampaignAttributions")] = each_AdCampaignAttributions;
                web::json::value each_PushNotificationRegistrations; ToJsonUtilO(PushNotificationRegistrations, each_PushNotificationRegistrations); output[U("PushNotificationRegistrations")] = each_PushNotificationRegistrations;
                web::json::value each_LinkedAccounts; ToJsonUtilO(LinkedAccounts, each_LinkedAccounts); output[U("LinkedAccounts")] = each_LinkedAccounts;
                web::json::value each_PlayerStatistics; ToJsonUtilO(PlayerStatistics, each_PlayerStatistics); output[U("PlayerStatistics")] = each_PlayerStatistics;
                return output;
            }
        };

        struct GetPlayersInSegmentResult : public PlayFabRequestCommon
        {
            Int32 ProfilesInSegment;
            std::string ContinuationToken;
            std::list<PlayerProfile> PlayerProfiles;

            GetPlayersInSegmentResult() :
                PlayFabRequestCommon(),
                ProfilesInSegment(),
                ContinuationToken(),
                PlayerProfiles()
            {}

            GetPlayersInSegmentResult(const GetPlayersInSegmentResult& src) :
                PlayFabRequestCommon(),
                ProfilesInSegment(src.ProfilesInSegment),
                ContinuationToken(src.ContinuationToken),
                PlayerProfiles(src.PlayerProfiles)
            {}

            ~GetPlayersInSegmentResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("ProfilesInSegment")], ProfilesInSegment);
                FromJsonUtilS(input[U("ContinuationToken")], ContinuationToken);
                FromJsonUtilO(input[U("PlayerProfiles")], PlayerProfiles);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ProfilesInSegment; ToJsonUtilP(ProfilesInSegment, each_ProfilesInSegment); output[U("ProfilesInSegment")] = each_ProfilesInSegment;
                web::json::value each_ContinuationToken; ToJsonUtilS(ContinuationToken, each_ContinuationToken); output[U("ContinuationToken")] = each_ContinuationToken;
                web::json::value each_PlayerProfiles; ToJsonUtilO(PlayerProfiles, each_PlayerProfiles); output[U("PlayerProfiles")] = each_PlayerProfiles;
                return output;
            }
        };

        struct GetPlayersSegmentsRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;

            GetPlayersSegmentsRequest() :
                PlayFabRequestCommon(),
                PlayFabId()
            {}

            GetPlayersSegmentsRequest(const GetPlayersSegmentsRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId)
            {}

            ~GetPlayersSegmentsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct StatisticNameVersion : public PlayFabBaseModel
        {
            std::string StatisticName;
            Uint32 Version;

            StatisticNameVersion() :
                PlayFabBaseModel(),
                StatisticName(),
                Version()
            {}

            StatisticNameVersion(const StatisticNameVersion& src) :
                PlayFabBaseModel(),
                StatisticName(src.StatisticName),
                Version(src.Version)
            {}

            ~StatisticNameVersion() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilP(input[U("Version")], Version);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                return output;
            }
        };

        struct GetPlayerStatisticsRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::list<std::string> StatisticNames;
            std::list<StatisticNameVersion> StatisticNameVersions;

            GetPlayerStatisticsRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                StatisticNames(),
                StatisticNameVersions()
            {}

            GetPlayerStatisticsRequest(const GetPlayerStatisticsRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                StatisticNames(src.StatisticNames),
                StatisticNameVersions(src.StatisticNameVersions)
            {}

            ~GetPlayerStatisticsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("StatisticNames")], StatisticNames);
                FromJsonUtilO(input[U("StatisticNameVersions")], StatisticNameVersions);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_StatisticNames; ToJsonUtilS(StatisticNames, each_StatisticNames); output[U("StatisticNames")] = each_StatisticNames;
                web::json::value each_StatisticNameVersions; ToJsonUtilO(StatisticNameVersions, each_StatisticNameVersions); output[U("StatisticNameVersions")] = each_StatisticNameVersions;
                return output;
            }
        };

        struct GetPlayerStatisticsResult : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::list<StatisticValue> Statistics;

            GetPlayerStatisticsResult() :
                PlayFabRequestCommon(),
                PlayFabId(),
                Statistics()
            {}

            GetPlayerStatisticsResult(const GetPlayerStatisticsResult& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                Statistics(src.Statistics)
            {}

            ~GetPlayerStatisticsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilO(input[U("Statistics")], Statistics);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Statistics; ToJsonUtilO(Statistics, each_Statistics); output[U("Statistics")] = each_Statistics;
                return output;
            }
        };

        struct GetPlayerStatisticVersionsRequest : public PlayFabRequestCommon
        {
            std::string StatisticName;

            GetPlayerStatisticVersionsRequest() :
                PlayFabRequestCommon(),
                StatisticName()
            {}

            GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src) :
                PlayFabRequestCommon(),
                StatisticName(src.StatisticName)
            {}

            ~GetPlayerStatisticVersionsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                return output;
            }
        };

        struct PlayerStatisticVersion : public PlayFabBaseModel
        {
            std::string StatisticName;
            Uint32 Version;
            Boxed<time_t> ScheduledActivationTime;
            time_t ActivationTime;
            Boxed<time_t> ScheduledDeactivationTime;
            Boxed<time_t> DeactivationTime;

            PlayerStatisticVersion() :
                PlayFabBaseModel(),
                StatisticName(),
                Version(),
                ScheduledActivationTime(),
                ActivationTime(),
                ScheduledDeactivationTime(),
                DeactivationTime()
            {}

            PlayerStatisticVersion(const PlayerStatisticVersion& src) :
                PlayFabBaseModel(),
                StatisticName(src.StatisticName),
                Version(src.Version),
                ScheduledActivationTime(src.ScheduledActivationTime),
                ActivationTime(src.ActivationTime),
                ScheduledDeactivationTime(src.ScheduledDeactivationTime),
                DeactivationTime(src.DeactivationTime)
            {}

            ~PlayerStatisticVersion() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilT(input[U("ScheduledActivationTime")], ScheduledActivationTime);
                FromJsonUtilT(input[U("ActivationTime")], ActivationTime);
                FromJsonUtilT(input[U("ScheduledDeactivationTime")], ScheduledDeactivationTime);
                FromJsonUtilT(input[U("DeactivationTime")], DeactivationTime);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_ScheduledActivationTime; ToJsonUtilT(ScheduledActivationTime, each_ScheduledActivationTime); output[U("ScheduledActivationTime")] = each_ScheduledActivationTime;
                web::json::value each_ActivationTime; ToJsonUtilT(ActivationTime, each_ActivationTime); output[U("ActivationTime")] = each_ActivationTime;
                web::json::value each_ScheduledDeactivationTime; ToJsonUtilT(ScheduledDeactivationTime, each_ScheduledDeactivationTime); output[U("ScheduledDeactivationTime")] = each_ScheduledDeactivationTime;
                web::json::value each_DeactivationTime; ToJsonUtilT(DeactivationTime, each_DeactivationTime); output[U("DeactivationTime")] = each_DeactivationTime;
                return output;
            }
        };

        struct GetPlayerStatisticVersionsResult : public PlayFabRequestCommon
        {
            std::list<PlayerStatisticVersion> StatisticVersions;

            GetPlayerStatisticVersionsResult() :
                PlayFabRequestCommon(),
                StatisticVersions()
            {}

            GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src) :
                PlayFabRequestCommon(),
                StatisticVersions(src.StatisticVersions)
            {}

            ~GetPlayerStatisticVersionsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("StatisticVersions")], StatisticVersions);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticVersions; ToJsonUtilO(StatisticVersions, each_StatisticVersions); output[U("StatisticVersions")] = each_StatisticVersions;
                return output;
            }
        };

        struct GetPlayerTagsRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string Namespace;

            GetPlayerTagsRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                Namespace()
            {}

            GetPlayerTagsRequest(const GetPlayerTagsRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                Namespace(src.Namespace)
            {}

            ~GetPlayerTagsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("Namespace")], Namespace);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Namespace; ToJsonUtilS(Namespace, each_Namespace); output[U("Namespace")] = each_Namespace;
                return output;
            }
        };

        struct GetPlayerTagsResult : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::list<std::string> Tags;

            GetPlayerTagsResult() :
                PlayFabRequestCommon(),
                PlayFabId(),
                Tags()
            {}

            GetPlayerTagsResult(const GetPlayerTagsResult& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                Tags(src.Tags)
            {}

            ~GetPlayerTagsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("Tags")], Tags);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Tags; ToJsonUtilS(Tags, each_Tags); output[U("Tags")] = each_Tags;
                return output;
            }
        };

        struct GetPlayFabIDsFromFacebookIDsRequest : public PlayFabRequestCommon
        {
            std::list<std::string> FacebookIDs;

            GetPlayFabIDsFromFacebookIDsRequest() :
                PlayFabRequestCommon(),
                FacebookIDs()
            {}

            GetPlayFabIDsFromFacebookIDsRequest(const GetPlayFabIDsFromFacebookIDsRequest& src) :
                PlayFabRequestCommon(),
                FacebookIDs(src.FacebookIDs)
            {}

            ~GetPlayFabIDsFromFacebookIDsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("FacebookIDs")], FacebookIDs);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_FacebookIDs; ToJsonUtilS(FacebookIDs, each_FacebookIDs); output[U("FacebookIDs")] = each_FacebookIDs;
                return output;
            }
        };

        struct GetPlayFabIDsFromFacebookIDsResult : public PlayFabRequestCommon
        {
            std::list<FacebookPlayFabIdPair> Data;

            GetPlayFabIDsFromFacebookIDsResult() :
                PlayFabRequestCommon(),
                Data()
            {}

            GetPlayFabIDsFromFacebookIDsResult(const GetPlayFabIDsFromFacebookIDsResult& src) :
                PlayFabRequestCommon(),
                Data(src.Data)
            {}

            ~GetPlayFabIDsFromFacebookIDsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Data")], Data);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Data; ToJsonUtilO(Data, each_Data); output[U("Data")] = each_Data;
                return output;
            }
        };

        struct GetPlayFabIDsFromSteamIDsRequest : public PlayFabRequestCommon
        {
            std::list<std::string> SteamStringIDs;

            GetPlayFabIDsFromSteamIDsRequest() :
                PlayFabRequestCommon(),
                SteamStringIDs()
            {}

            GetPlayFabIDsFromSteamIDsRequest(const GetPlayFabIDsFromSteamIDsRequest& src) :
                PlayFabRequestCommon(),
                SteamStringIDs(src.SteamStringIDs)
            {}

            ~GetPlayFabIDsFromSteamIDsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SteamStringIDs")], SteamStringIDs);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SteamStringIDs; ToJsonUtilS(SteamStringIDs, each_SteamStringIDs); output[U("SteamStringIDs")] = each_SteamStringIDs;
                return output;
            }
        };

        struct SteamPlayFabIdPair : public PlayFabBaseModel
        {
            std::string SteamStringId;
            std::string PlayFabId;

            SteamPlayFabIdPair() :
                PlayFabBaseModel(),
                SteamStringId(),
                PlayFabId()
            {}

            SteamPlayFabIdPair(const SteamPlayFabIdPair& src) :
                PlayFabBaseModel(),
                SteamStringId(src.SteamStringId),
                PlayFabId(src.PlayFabId)
            {}

            ~SteamPlayFabIdPair() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SteamStringId")], SteamStringId);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SteamStringId; ToJsonUtilS(SteamStringId, each_SteamStringId); output[U("SteamStringId")] = each_SteamStringId;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct GetPlayFabIDsFromSteamIDsResult : public PlayFabRequestCommon
        {
            std::list<SteamPlayFabIdPair> Data;

            GetPlayFabIDsFromSteamIDsResult() :
                PlayFabRequestCommon(),
                Data()
            {}

            GetPlayFabIDsFromSteamIDsResult(const GetPlayFabIDsFromSteamIDsResult& src) :
                PlayFabRequestCommon(),
                Data(src.Data)
            {}

            ~GetPlayFabIDsFromSteamIDsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Data")], Data);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Data; ToJsonUtilO(Data, each_Data); output[U("Data")] = each_Data;
                return output;
            }
        };

        struct GetPublisherDataRequest : public PlayFabRequestCommon
        {
            std::list<std::string> Keys;

            GetPublisherDataRequest() :
                PlayFabRequestCommon(),
                Keys()
            {}

            GetPublisherDataRequest(const GetPublisherDataRequest& src) :
                PlayFabRequestCommon(),
                Keys(src.Keys)
            {}

            ~GetPublisherDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Keys")], Keys);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Keys; ToJsonUtilS(Keys, each_Keys); output[U("Keys")] = each_Keys;
                return output;
            }
        };

        struct GetPublisherDataResult : public PlayFabRequestCommon
        {
            std::map<std::string, std::string> Data;

            GetPublisherDataResult() :
                PlayFabRequestCommon(),
                Data()
            {}

            GetPublisherDataResult(const GetPublisherDataResult& src) :
                PlayFabRequestCommon(),
                Data(src.Data)
            {}

            ~GetPublisherDataResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Data")], Data);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Data; ToJsonUtilS(Data, each_Data); output[U("Data")] = each_Data;
                return output;
            }
        };

        struct GetRandomResultTablesRequest : public PlayFabRequestCommon
        {
            std::string CatalogVersion;
            std::list<std::string> TableIDs;

            GetRandomResultTablesRequest() :
                PlayFabRequestCommon(),
                CatalogVersion(),
                TableIDs()
            {}

            GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion),
                TableIDs(src.TableIDs)
            {}

            ~GetRandomResultTablesRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("TableIDs")], TableIDs);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_TableIDs; ToJsonUtilS(TableIDs, each_TableIDs); output[U("TableIDs")] = each_TableIDs;
                return output;
            }
        };

        struct ResultTableNode : public PlayFabBaseModel
        {
            ResultTableNodeType ResultItemType;
            std::string ResultItem;
            Int32 Weight;

            ResultTableNode() :
                PlayFabBaseModel(),
                ResultItemType(),
                ResultItem(),
                Weight()
            {}

            ResultTableNode(const ResultTableNode& src) :
                PlayFabBaseModel(),
                ResultItemType(src.ResultItemType),
                ResultItem(src.ResultItem),
                Weight(src.Weight)
            {}

            ~ResultTableNode() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonEnum(input[U("ResultItemType")], ResultItemType);
                FromJsonUtilS(input[U("ResultItem")], ResultItem);
                FromJsonUtilP(input[U("Weight")], Weight);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ResultItemType; ToJsonEnum(ResultItemType, each_ResultItemType); output[U("ResultItemType")] = each_ResultItemType;
                web::json::value each_ResultItem; ToJsonUtilS(ResultItem, each_ResultItem); output[U("ResultItem")] = each_ResultItem;
                web::json::value each_Weight; ToJsonUtilP(Weight, each_Weight); output[U("Weight")] = each_Weight;
                return output;
            }
        };

        struct RandomResultTableListing : public PlayFabBaseModel
        {
            std::string CatalogVersion;
            std::string TableId;
            std::list<ResultTableNode> Nodes;

            RandomResultTableListing() :
                PlayFabBaseModel(),
                CatalogVersion(),
                TableId(),
                Nodes()
            {}

            RandomResultTableListing(const RandomResultTableListing& src) :
                PlayFabBaseModel(),
                CatalogVersion(src.CatalogVersion),
                TableId(src.TableId),
                Nodes(src.Nodes)
            {}

            ~RandomResultTableListing() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("TableId")], TableId);
                FromJsonUtilO(input[U("Nodes")], Nodes);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_TableId; ToJsonUtilS(TableId, each_TableId); output[U("TableId")] = each_TableId;
                web::json::value each_Nodes; ToJsonUtilO(Nodes, each_Nodes); output[U("Nodes")] = each_Nodes;
                return output;
            }
        };

        struct GetRandomResultTablesResult : public PlayFabRequestCommon
        {
            std::map<std::string, RandomResultTableListing> Tables;

            GetRandomResultTablesResult() :
                PlayFabRequestCommon(),
                Tables()
            {}

            GetRandomResultTablesResult(const GetRandomResultTablesResult& src) :
                PlayFabRequestCommon(),
                Tables(src.Tables)
            {}

            ~GetRandomResultTablesResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Tables")], Tables);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Tables; ToJsonUtilO(Tables, each_Tables); output[U("Tables")] = each_Tables;
                return output;
            }
        };

        struct GetSharedGroupDataRequest : public PlayFabRequestCommon
        {
            std::string SharedGroupId;
            std::list<std::string> Keys;
            Boxed<bool> GetMembers;

            GetSharedGroupDataRequest() :
                PlayFabRequestCommon(),
                SharedGroupId(),
                Keys(),
                GetMembers()
            {}

            GetSharedGroupDataRequest(const GetSharedGroupDataRequest& src) :
                PlayFabRequestCommon(),
                SharedGroupId(src.SharedGroupId),
                Keys(src.Keys),
                GetMembers(src.GetMembers)
            {}

            ~GetSharedGroupDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SharedGroupId")], SharedGroupId);
                FromJsonUtilS(input[U("Keys")], Keys);
                FromJsonUtilP(input[U("GetMembers")], GetMembers);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SharedGroupId; ToJsonUtilS(SharedGroupId, each_SharedGroupId); output[U("SharedGroupId")] = each_SharedGroupId;
                web::json::value each_Keys; ToJsonUtilS(Keys, each_Keys); output[U("Keys")] = each_Keys;
                web::json::value each_GetMembers; ToJsonUtilP(GetMembers, each_GetMembers); output[U("GetMembers")] = each_GetMembers;
                return output;
            }
        };

        struct SharedGroupDataRecord : public PlayFabBaseModel
        {
            std::string Value;
            std::string LastUpdatedBy;
            time_t LastUpdated;
            Boxed<UserDataPermission> Permission;

            SharedGroupDataRecord() :
                PlayFabBaseModel(),
                Value(),
                LastUpdatedBy(),
                LastUpdated(),
                Permission()
            {}

            SharedGroupDataRecord(const SharedGroupDataRecord& src) :
                PlayFabBaseModel(),
                Value(src.Value),
                LastUpdatedBy(src.LastUpdatedBy),
                LastUpdated(src.LastUpdated),
                Permission(src.Permission)
            {}

            ~SharedGroupDataRecord() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Value")], Value);
                FromJsonUtilS(input[U("LastUpdatedBy")], LastUpdatedBy);
                FromJsonUtilT(input[U("LastUpdated")], LastUpdated);
                FromJsonUtilE(input[U("Permission")], Permission);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Value; ToJsonUtilS(Value, each_Value); output[U("Value")] = each_Value;
                web::json::value each_LastUpdatedBy; ToJsonUtilS(LastUpdatedBy, each_LastUpdatedBy); output[U("LastUpdatedBy")] = each_LastUpdatedBy;
                web::json::value each_LastUpdated; ToJsonUtilT(LastUpdated, each_LastUpdated); output[U("LastUpdated")] = each_LastUpdated;
                web::json::value each_Permission; ToJsonUtilE(Permission, each_Permission); output[U("Permission")] = each_Permission;
                return output;
            }
        };

        struct GetSharedGroupDataResult : public PlayFabRequestCommon
        {
            std::map<std::string, SharedGroupDataRecord> Data;
            std::list<std::string> Members;

            GetSharedGroupDataResult() :
                PlayFabRequestCommon(),
                Data(),
                Members()
            {}

            GetSharedGroupDataResult(const GetSharedGroupDataResult& src) :
                PlayFabRequestCommon(),
                Data(src.Data),
                Members(src.Members)
            {}

            ~GetSharedGroupDataResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Data")], Data);
                FromJsonUtilS(input[U("Members")], Members);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Data; ToJsonUtilO(Data, each_Data); output[U("Data")] = each_Data;
                web::json::value each_Members; ToJsonUtilS(Members, each_Members); output[U("Members")] = each_Members;
                return output;
            }
        };

        struct GetTimeRequest : public PlayFabRequestCommon
        {

            GetTimeRequest() :
                PlayFabRequestCommon()
            {}

            GetTimeRequest(const GetTimeRequest& src) :
                PlayFabRequestCommon()
            {}

            ~GetTimeRequest() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct GetTimeResult : public PlayFabRequestCommon
        {
            time_t Time;

            GetTimeResult() :
                PlayFabRequestCommon(),
                Time()
            {}

            GetTimeResult(const GetTimeResult& src) :
                PlayFabRequestCommon(),
                Time(src.Time)
            {}

            ~GetTimeResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilT(input[U("Time")], Time);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Time; ToJsonUtilT(Time, each_Time); output[U("Time")] = each_Time;
                return output;
            }
        };

        struct GetTitleDataRequest : public PlayFabRequestCommon
        {
            std::list<std::string> Keys;

            GetTitleDataRequest() :
                PlayFabRequestCommon(),
                Keys()
            {}

            GetTitleDataRequest(const GetTitleDataRequest& src) :
                PlayFabRequestCommon(),
                Keys(src.Keys)
            {}

            ~GetTitleDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Keys")], Keys);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Keys; ToJsonUtilS(Keys, each_Keys); output[U("Keys")] = each_Keys;
                return output;
            }
        };

        struct GetTitleDataResult : public PlayFabRequestCommon
        {
            std::map<std::string, std::string> Data;

            GetTitleDataResult() :
                PlayFabRequestCommon(),
                Data()
            {}

            GetTitleDataResult(const GetTitleDataResult& src) :
                PlayFabRequestCommon(),
                Data(src.Data)
            {}

            ~GetTitleDataResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Data")], Data);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Data; ToJsonUtilS(Data, each_Data); output[U("Data")] = each_Data;
                return output;
            }
        };

        struct GetTitleNewsRequest : public PlayFabRequestCommon
        {
            Boxed<Int32> Count;

            GetTitleNewsRequest() :
                PlayFabRequestCommon(),
                Count()
            {}

            GetTitleNewsRequest(const GetTitleNewsRequest& src) :
                PlayFabRequestCommon(),
                Count(src.Count)
            {}

            ~GetTitleNewsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("Count")], Count);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Count; ToJsonUtilP(Count, each_Count); output[U("Count")] = each_Count;
                return output;
            }
        };

        struct TitleNewsItem : public PlayFabBaseModel
        {
            time_t Timestamp;
            std::string NewsId;
            std::string Title;
            std::string Body;

            TitleNewsItem() :
                PlayFabBaseModel(),
                Timestamp(),
                NewsId(),
                Title(),
                Body()
            {}

            TitleNewsItem(const TitleNewsItem& src) :
                PlayFabBaseModel(),
                Timestamp(src.Timestamp),
                NewsId(src.NewsId),
                Title(src.Title),
                Body(src.Body)
            {}

            ~TitleNewsItem() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilT(input[U("Timestamp")], Timestamp);
                FromJsonUtilS(input[U("NewsId")], NewsId);
                FromJsonUtilS(input[U("Title")], Title);
                FromJsonUtilS(input[U("Body")], Body);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Timestamp; ToJsonUtilT(Timestamp, each_Timestamp); output[U("Timestamp")] = each_Timestamp;
                web::json::value each_NewsId; ToJsonUtilS(NewsId, each_NewsId); output[U("NewsId")] = each_NewsId;
                web::json::value each_Title; ToJsonUtilS(Title, each_Title); output[U("Title")] = each_Title;
                web::json::value each_Body; ToJsonUtilS(Body, each_Body); output[U("Body")] = each_Body;
                return output;
            }
        };

        struct GetTitleNewsResult : public PlayFabRequestCommon
        {
            std::list<TitleNewsItem> News;

            GetTitleNewsResult() :
                PlayFabRequestCommon(),
                News()
            {}

            GetTitleNewsResult(const GetTitleNewsResult& src) :
                PlayFabRequestCommon(),
                News(src.News)
            {}

            ~GetTitleNewsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("News")], News);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_News; ToJsonUtilO(News, each_News); output[U("News")] = each_News;
                return output;
            }
        };

        struct GetUserAccountInfoRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;

            GetUserAccountInfoRequest() :
                PlayFabRequestCommon(),
                PlayFabId()
            {}

            GetUserAccountInfoRequest(const GetUserAccountInfoRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId)
            {}

            ~GetUserAccountInfoRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct GetUserAccountInfoResult : public PlayFabRequestCommon
        {
            Boxed<UserAccountInfo> UserInfo;

            GetUserAccountInfoResult() :
                PlayFabRequestCommon(),
                UserInfo()
            {}

            GetUserAccountInfoResult(const GetUserAccountInfoResult& src) :
                PlayFabRequestCommon(),
                UserInfo(src.UserInfo)
            {}

            ~GetUserAccountInfoResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("UserInfo")], UserInfo);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_UserInfo; ToJsonUtilO(UserInfo, each_UserInfo); output[U("UserInfo")] = each_UserInfo;
                return output;
            }
        };

        struct GetUserBansRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;

            GetUserBansRequest() :
                PlayFabRequestCommon(),
                PlayFabId()
            {}

            GetUserBansRequest(const GetUserBansRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId)
            {}

            ~GetUserBansRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct GetUserBansResult : public PlayFabRequestCommon
        {
            std::list<BanInfo> BanData;

            GetUserBansResult() :
                PlayFabRequestCommon(),
                BanData()
            {}

            GetUserBansResult(const GetUserBansResult& src) :
                PlayFabRequestCommon(),
                BanData(src.BanData)
            {}

            ~GetUserBansResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("BanData")], BanData);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BanData; ToJsonUtilO(BanData, each_BanData); output[U("BanData")] = each_BanData;
                return output;
            }
        };

        struct GetUserDataRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::list<std::string> Keys;
            Boxed<Uint32> IfChangedFromDataVersion;

            GetUserDataRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                Keys(),
                IfChangedFromDataVersion()
            {}

            GetUserDataRequest(const GetUserDataRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                Keys(src.Keys),
                IfChangedFromDataVersion(src.IfChangedFromDataVersion)
            {}

            ~GetUserDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("Keys")], Keys);
                FromJsonUtilP(input[U("IfChangedFromDataVersion")], IfChangedFromDataVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Keys; ToJsonUtilS(Keys, each_Keys); output[U("Keys")] = each_Keys;
                web::json::value each_IfChangedFromDataVersion; ToJsonUtilP(IfChangedFromDataVersion, each_IfChangedFromDataVersion); output[U("IfChangedFromDataVersion")] = each_IfChangedFromDataVersion;
                return output;
            }
        };

        struct GetUserDataResult : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            Uint32 DataVersion;
            std::map<std::string, UserDataRecord> Data;

            GetUserDataResult() :
                PlayFabRequestCommon(),
                PlayFabId(),
                DataVersion(),
                Data()
            {}

            GetUserDataResult(const GetUserDataResult& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                DataVersion(src.DataVersion),
                Data(src.Data)
            {}

            ~GetUserDataResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilP(input[U("DataVersion")], DataVersion);
                FromJsonUtilO(input[U("Data")], Data);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_DataVersion; ToJsonUtilP(DataVersion, each_DataVersion); output[U("DataVersion")] = each_DataVersion;
                web::json::value each_Data; ToJsonUtilO(Data, each_Data); output[U("Data")] = each_Data;
                return output;
            }
        };

        struct GetUserInventoryRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;

            GetUserInventoryRequest() :
                PlayFabRequestCommon(),
                PlayFabId()
            {}

            GetUserInventoryRequest(const GetUserInventoryRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId)
            {}

            ~GetUserInventoryRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct GetUserInventoryResult : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::list<ItemInstance> Inventory;
            std::map<std::string, Int32> VirtualCurrency;
            std::map<std::string, VirtualCurrencyRechargeTime> VirtualCurrencyRechargeTimes;

            GetUserInventoryResult() :
                PlayFabRequestCommon(),
                PlayFabId(),
                Inventory(),
                VirtualCurrency(),
                VirtualCurrencyRechargeTimes()
            {}

            GetUserInventoryResult(const GetUserInventoryResult& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                Inventory(src.Inventory),
                VirtualCurrency(src.VirtualCurrency),
                VirtualCurrencyRechargeTimes(src.VirtualCurrencyRechargeTimes)
            {}

            ~GetUserInventoryResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilO(input[U("Inventory")], Inventory);
                FromJsonUtilP(input[U("VirtualCurrency")], VirtualCurrency);
                FromJsonUtilO(input[U("VirtualCurrencyRechargeTimes")], VirtualCurrencyRechargeTimes);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Inventory; ToJsonUtilO(Inventory, each_Inventory); output[U("Inventory")] = each_Inventory;
                web::json::value each_VirtualCurrency; ToJsonUtilP(VirtualCurrency, each_VirtualCurrency); output[U("VirtualCurrency")] = each_VirtualCurrency;
                web::json::value each_VirtualCurrencyRechargeTimes; ToJsonUtilO(VirtualCurrencyRechargeTimes, each_VirtualCurrencyRechargeTimes); output[U("VirtualCurrencyRechargeTimes")] = each_VirtualCurrencyRechargeTimes;
                return output;
            }
        };

        struct GrantCharacterToUserRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterName;
            std::string CharacterType;

            GrantCharacterToUserRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterName(),
                CharacterType()
            {}

            GrantCharacterToUserRequest(const GrantCharacterToUserRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterName(src.CharacterName),
                CharacterType(src.CharacterType)
            {}

            ~GrantCharacterToUserRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterName")], CharacterName);
                FromJsonUtilS(input[U("CharacterType")], CharacterType);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterName; ToJsonUtilS(CharacterName, each_CharacterName); output[U("CharacterName")] = each_CharacterName;
                web::json::value each_CharacterType; ToJsonUtilS(CharacterType, each_CharacterType); output[U("CharacterType")] = each_CharacterType;
                return output;
            }
        };

        struct GrantCharacterToUserResult : public PlayFabRequestCommon
        {
            std::string CharacterId;

            GrantCharacterToUserResult() :
                PlayFabRequestCommon(),
                CharacterId()
            {}

            GrantCharacterToUserResult(const GrantCharacterToUserResult& src) :
                PlayFabRequestCommon(),
                CharacterId(src.CharacterId)
            {}

            ~GrantCharacterToUserResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                return output;
            }
        };

        struct GrantedItemInstance : public PlayFabBaseModel
        {
            std::string PlayFabId;
            std::string CharacterId;
            bool Result;
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

            GrantedItemInstance() :
                PlayFabBaseModel(),
                PlayFabId(),
                CharacterId(),
                Result(),
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

            GrantedItemInstance(const GrantedItemInstance& src) :
                PlayFabBaseModel(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                Result(src.Result),
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

            ~GrantedItemInstance() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilP(input[U("Result")], Result);
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
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_Result; ToJsonUtilP(Result, each_Result); output[U("Result")] = each_Result;
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

        struct GrantItemsToCharacterRequest : public PlayFabRequestCommon
        {
            std::string CatalogVersion;
            std::string CharacterId;
            std::string PlayFabId;
            std::string Annotation;
            std::list<std::string> ItemIds;

            GrantItemsToCharacterRequest() :
                PlayFabRequestCommon(),
                CatalogVersion(),
                CharacterId(),
                PlayFabId(),
                Annotation(),
                ItemIds()
            {}

            GrantItemsToCharacterRequest(const GrantItemsToCharacterRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion),
                CharacterId(src.CharacterId),
                PlayFabId(src.PlayFabId),
                Annotation(src.Annotation),
                ItemIds(src.ItemIds)
            {}

            ~GrantItemsToCharacterRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("Annotation")], Annotation);
                FromJsonUtilS(input[U("ItemIds")], ItemIds);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Annotation; ToJsonUtilS(Annotation, each_Annotation); output[U("Annotation")] = each_Annotation;
                web::json::value each_ItemIds; ToJsonUtilS(ItemIds, each_ItemIds); output[U("ItemIds")] = each_ItemIds;
                return output;
            }
        };

        struct GrantItemsToCharacterResult : public PlayFabRequestCommon
        {
            std::list<GrantedItemInstance> ItemGrantResults;

            GrantItemsToCharacterResult() :
                PlayFabRequestCommon(),
                ItemGrantResults()
            {}

            GrantItemsToCharacterResult(const GrantItemsToCharacterResult& src) :
                PlayFabRequestCommon(),
                ItemGrantResults(src.ItemGrantResults)
            {}

            ~GrantItemsToCharacterResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("ItemGrantResults")], ItemGrantResults);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ItemGrantResults; ToJsonUtilO(ItemGrantResults, each_ItemGrantResults); output[U("ItemGrantResults")] = each_ItemGrantResults;
                return output;
            }
        };

        struct GrantItemsToUserRequest : public PlayFabRequestCommon
        {
            std::string CatalogVersion;
            std::string PlayFabId;
            std::string Annotation;
            std::list<std::string> ItemIds;

            GrantItemsToUserRequest() :
                PlayFabRequestCommon(),
                CatalogVersion(),
                PlayFabId(),
                Annotation(),
                ItemIds()
            {}

            GrantItemsToUserRequest(const GrantItemsToUserRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion),
                PlayFabId(src.PlayFabId),
                Annotation(src.Annotation),
                ItemIds(src.ItemIds)
            {}

            ~GrantItemsToUserRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("Annotation")], Annotation);
                FromJsonUtilS(input[U("ItemIds")], ItemIds);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Annotation; ToJsonUtilS(Annotation, each_Annotation); output[U("Annotation")] = each_Annotation;
                web::json::value each_ItemIds; ToJsonUtilS(ItemIds, each_ItemIds); output[U("ItemIds")] = each_ItemIds;
                return output;
            }
        };

        struct GrantItemsToUserResult : public PlayFabRequestCommon
        {
            std::list<GrantedItemInstance> ItemGrantResults;

            GrantItemsToUserResult() :
                PlayFabRequestCommon(),
                ItemGrantResults()
            {}

            GrantItemsToUserResult(const GrantItemsToUserResult& src) :
                PlayFabRequestCommon(),
                ItemGrantResults(src.ItemGrantResults)
            {}

            ~GrantItemsToUserResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("ItemGrantResults")], ItemGrantResults);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ItemGrantResults; ToJsonUtilO(ItemGrantResults, each_ItemGrantResults); output[U("ItemGrantResults")] = each_ItemGrantResults;
                return output;
            }
        };

        struct ItemGrant : public PlayFabBaseModel
        {
            std::string PlayFabId;
            std::string ItemId;
            std::string Annotation;
            std::string CharacterId;
            std::map<std::string, std::string> Data;
            std::list<std::string> KeysToRemove;

            ItemGrant() :
                PlayFabBaseModel(),
                PlayFabId(),
                ItemId(),
                Annotation(),
                CharacterId(),
                Data(),
                KeysToRemove()
            {}

            ItemGrant(const ItemGrant& src) :
                PlayFabBaseModel(),
                PlayFabId(src.PlayFabId),
                ItemId(src.ItemId),
                Annotation(src.Annotation),
                CharacterId(src.CharacterId),
                Data(src.Data),
                KeysToRemove(src.KeysToRemove)
            {}

            ~ItemGrant() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("ItemId")], ItemId);
                FromJsonUtilS(input[U("Annotation")], Annotation);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("Data")], Data);
                FromJsonUtilS(input[U("KeysToRemove")], KeysToRemove);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_ItemId; ToJsonUtilS(ItemId, each_ItemId); output[U("ItemId")] = each_ItemId;
                web::json::value each_Annotation; ToJsonUtilS(Annotation, each_Annotation); output[U("Annotation")] = each_Annotation;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_Data; ToJsonUtilS(Data, each_Data); output[U("Data")] = each_Data;
                web::json::value each_KeysToRemove; ToJsonUtilS(KeysToRemove, each_KeysToRemove); output[U("KeysToRemove")] = each_KeysToRemove;
                return output;
            }
        };

        struct GrantItemsToUsersRequest : public PlayFabRequestCommon
        {
            std::string CatalogVersion;
            std::list<ItemGrant> ItemGrants;

            GrantItemsToUsersRequest() :
                PlayFabRequestCommon(),
                CatalogVersion(),
                ItemGrants()
            {}

            GrantItemsToUsersRequest(const GrantItemsToUsersRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion),
                ItemGrants(src.ItemGrants)
            {}

            ~GrantItemsToUsersRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilO(input[U("ItemGrants")], ItemGrants);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_ItemGrants; ToJsonUtilO(ItemGrants, each_ItemGrants); output[U("ItemGrants")] = each_ItemGrants;
                return output;
            }
        };

        struct GrantItemsToUsersResult : public PlayFabRequestCommon
        {
            std::list<GrantedItemInstance> ItemGrantResults;

            GrantItemsToUsersResult() :
                PlayFabRequestCommon(),
                ItemGrantResults()
            {}

            GrantItemsToUsersResult(const GrantItemsToUsersResult& src) :
                PlayFabRequestCommon(),
                ItemGrantResults(src.ItemGrantResults)
            {}

            ~GrantItemsToUsersResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("ItemGrantResults")], ItemGrantResults);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ItemGrantResults; ToJsonUtilO(ItemGrantResults, each_ItemGrantResults); output[U("ItemGrantResults")] = each_ItemGrantResults;
                return output;
            }
        };

        struct ListUsersCharactersRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;

            ListUsersCharactersRequest() :
                PlayFabRequestCommon(),
                PlayFabId()
            {}

            ListUsersCharactersRequest(const ListUsersCharactersRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId)
            {}

            ~ListUsersCharactersRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct ListUsersCharactersResult : public PlayFabRequestCommon
        {
            std::list<CharacterResult> Characters;

            ListUsersCharactersResult() :
                PlayFabRequestCommon(),
                Characters()
            {}

            ListUsersCharactersResult(const ListUsersCharactersResult& src) :
                PlayFabRequestCommon(),
                Characters(src.Characters)
            {}

            ~ListUsersCharactersResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Characters")], Characters);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Characters; ToJsonUtilO(Characters, each_Characters); output[U("Characters")] = each_Characters;
                return output;
            }
        };

        struct ModifyCharacterVirtualCurrencyResult : public PlayFabRequestCommon
        {
            std::string VirtualCurrency;
            Int32 Balance;

            ModifyCharacterVirtualCurrencyResult() :
                PlayFabRequestCommon(),
                VirtualCurrency(),
                Balance()
            {}

            ModifyCharacterVirtualCurrencyResult(const ModifyCharacterVirtualCurrencyResult& src) :
                PlayFabRequestCommon(),
                VirtualCurrency(src.VirtualCurrency),
                Balance(src.Balance)
            {}

            ~ModifyCharacterVirtualCurrencyResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("VirtualCurrency")], VirtualCurrency);
                FromJsonUtilP(input[U("Balance")], Balance);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_VirtualCurrency; ToJsonUtilS(VirtualCurrency, each_VirtualCurrency); output[U("VirtualCurrency")] = each_VirtualCurrency;
                web::json::value each_Balance; ToJsonUtilP(Balance, each_Balance); output[U("Balance")] = each_Balance;
                return output;
            }
        };

        struct ModifyItemUsesRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string ItemInstanceId;
            Int32 UsesToAdd;

            ModifyItemUsesRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                ItemInstanceId(),
                UsesToAdd()
            {}

            ModifyItemUsesRequest(const ModifyItemUsesRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                ItemInstanceId(src.ItemInstanceId),
                UsesToAdd(src.UsesToAdd)
            {}

            ~ModifyItemUsesRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("ItemInstanceId")], ItemInstanceId);
                FromJsonUtilP(input[U("UsesToAdd")], UsesToAdd);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_ItemInstanceId; ToJsonUtilS(ItemInstanceId, each_ItemInstanceId); output[U("ItemInstanceId")] = each_ItemInstanceId;
                web::json::value each_UsesToAdd; ToJsonUtilP(UsesToAdd, each_UsesToAdd); output[U("UsesToAdd")] = each_UsesToAdd;
                return output;
            }
        };

        struct ModifyItemUsesResult : public PlayFabRequestCommon
        {
            std::string ItemInstanceId;
            Int32 RemainingUses;

            ModifyItemUsesResult() :
                PlayFabRequestCommon(),
                ItemInstanceId(),
                RemainingUses()
            {}

            ModifyItemUsesResult(const ModifyItemUsesResult& src) :
                PlayFabRequestCommon(),
                ItemInstanceId(src.ItemInstanceId),
                RemainingUses(src.RemainingUses)
            {}

            ~ModifyItemUsesResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("ItemInstanceId")], ItemInstanceId);
                FromJsonUtilP(input[U("RemainingUses")], RemainingUses);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ItemInstanceId; ToJsonUtilS(ItemInstanceId, each_ItemInstanceId); output[U("ItemInstanceId")] = each_ItemInstanceId;
                web::json::value each_RemainingUses; ToJsonUtilP(RemainingUses, each_RemainingUses); output[U("RemainingUses")] = each_RemainingUses;
                return output;
            }
        };

        struct ModifyUserVirtualCurrencyResult : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string VirtualCurrency;
            Int32 BalanceChange;
            Int32 Balance;

            ModifyUserVirtualCurrencyResult() :
                PlayFabRequestCommon(),
                PlayFabId(),
                VirtualCurrency(),
                BalanceChange(),
                Balance()
            {}

            ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                VirtualCurrency(src.VirtualCurrency),
                BalanceChange(src.BalanceChange),
                Balance(src.Balance)
            {}

            ~ModifyUserVirtualCurrencyResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("VirtualCurrency")], VirtualCurrency);
                FromJsonUtilP(input[U("BalanceChange")], BalanceChange);
                FromJsonUtilP(input[U("Balance")], Balance);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_VirtualCurrency; ToJsonUtilS(VirtualCurrency, each_VirtualCurrency); output[U("VirtualCurrency")] = each_VirtualCurrency;
                web::json::value each_BalanceChange; ToJsonUtilP(BalanceChange, each_BalanceChange); output[U("BalanceChange")] = each_BalanceChange;
                web::json::value each_Balance; ToJsonUtilP(Balance, each_Balance); output[U("Balance")] = each_Balance;
                return output;
            }
        };

        struct MoveItemToCharacterFromCharacterRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string GivingCharacterId;
            std::string ReceivingCharacterId;
            std::string ItemInstanceId;

            MoveItemToCharacterFromCharacterRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                GivingCharacterId(),
                ReceivingCharacterId(),
                ItemInstanceId()
            {}

            MoveItemToCharacterFromCharacterRequest(const MoveItemToCharacterFromCharacterRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                GivingCharacterId(src.GivingCharacterId),
                ReceivingCharacterId(src.ReceivingCharacterId),
                ItemInstanceId(src.ItemInstanceId)
            {}

            ~MoveItemToCharacterFromCharacterRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("GivingCharacterId")], GivingCharacterId);
                FromJsonUtilS(input[U("ReceivingCharacterId")], ReceivingCharacterId);
                FromJsonUtilS(input[U("ItemInstanceId")], ItemInstanceId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_GivingCharacterId; ToJsonUtilS(GivingCharacterId, each_GivingCharacterId); output[U("GivingCharacterId")] = each_GivingCharacterId;
                web::json::value each_ReceivingCharacterId; ToJsonUtilS(ReceivingCharacterId, each_ReceivingCharacterId); output[U("ReceivingCharacterId")] = each_ReceivingCharacterId;
                web::json::value each_ItemInstanceId; ToJsonUtilS(ItemInstanceId, each_ItemInstanceId); output[U("ItemInstanceId")] = each_ItemInstanceId;
                return output;
            }
        };

        struct MoveItemToCharacterFromCharacterResult : public PlayFabRequestCommon
        {

            MoveItemToCharacterFromCharacterResult() :
                PlayFabRequestCommon()
            {}

            MoveItemToCharacterFromCharacterResult(const MoveItemToCharacterFromCharacterResult& src) :
                PlayFabRequestCommon()
            {}

            ~MoveItemToCharacterFromCharacterResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct MoveItemToCharacterFromUserRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string ItemInstanceId;

            MoveItemToCharacterFromUserRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                ItemInstanceId()
            {}

            MoveItemToCharacterFromUserRequest(const MoveItemToCharacterFromUserRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                ItemInstanceId(src.ItemInstanceId)
            {}

            ~MoveItemToCharacterFromUserRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("ItemInstanceId")], ItemInstanceId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_ItemInstanceId; ToJsonUtilS(ItemInstanceId, each_ItemInstanceId); output[U("ItemInstanceId")] = each_ItemInstanceId;
                return output;
            }
        };

        struct MoveItemToCharacterFromUserResult : public PlayFabRequestCommon
        {

            MoveItemToCharacterFromUserResult() :
                PlayFabRequestCommon()
            {}

            MoveItemToCharacterFromUserResult(const MoveItemToCharacterFromUserResult& src) :
                PlayFabRequestCommon()
            {}

            ~MoveItemToCharacterFromUserResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct MoveItemToUserFromCharacterRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string ItemInstanceId;

            MoveItemToUserFromCharacterRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                ItemInstanceId()
            {}

            MoveItemToUserFromCharacterRequest(const MoveItemToUserFromCharacterRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                ItemInstanceId(src.ItemInstanceId)
            {}

            ~MoveItemToUserFromCharacterRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("ItemInstanceId")], ItemInstanceId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_ItemInstanceId; ToJsonUtilS(ItemInstanceId, each_ItemInstanceId); output[U("ItemInstanceId")] = each_ItemInstanceId;
                return output;
            }
        };

        struct MoveItemToUserFromCharacterResult : public PlayFabRequestCommon
        {

            MoveItemToUserFromCharacterResult() :
                PlayFabRequestCommon()
            {}

            MoveItemToUserFromCharacterResult(const MoveItemToUserFromCharacterResult& src) :
                PlayFabRequestCommon()
            {}

            ~MoveItemToUserFromCharacterResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct NotifyMatchmakerPlayerLeftRequest : public PlayFabRequestCommon
        {
            std::string LobbyId;
            std::string PlayFabId;

            NotifyMatchmakerPlayerLeftRequest() :
                PlayFabRequestCommon(),
                LobbyId(),
                PlayFabId()
            {}

            NotifyMatchmakerPlayerLeftRequest(const NotifyMatchmakerPlayerLeftRequest& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId),
                PlayFabId(src.PlayFabId)
            {}

            ~NotifyMatchmakerPlayerLeftRequest() { }

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

        struct NotifyMatchmakerPlayerLeftResult : public PlayFabRequestCommon
        {
            Boxed<PlayerConnectionState> PlayerState;

            NotifyMatchmakerPlayerLeftResult() :
                PlayFabRequestCommon(),
                PlayerState()
            {}

            NotifyMatchmakerPlayerLeftResult(const NotifyMatchmakerPlayerLeftResult& src) :
                PlayFabRequestCommon(),
                PlayerState(src.PlayerState)
            {}

            ~NotifyMatchmakerPlayerLeftResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilE(input[U("PlayerState")], PlayerState);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayerState; ToJsonUtilE(PlayerState, each_PlayerState); output[U("PlayerState")] = each_PlayerState;
                return output;
            }
        };

        struct RedeemCouponRequest : public PlayFabRequestCommon
        {
            std::string CouponCode;
            std::string PlayFabId;
            std::string CatalogVersion;
            std::string CharacterId;

            RedeemCouponRequest() :
                PlayFabRequestCommon(),
                CouponCode(),
                PlayFabId(),
                CatalogVersion(),
                CharacterId()
            {}

            RedeemCouponRequest(const RedeemCouponRequest& src) :
                PlayFabRequestCommon(),
                CouponCode(src.CouponCode),
                PlayFabId(src.PlayFabId),
                CatalogVersion(src.CatalogVersion),
                CharacterId(src.CharacterId)
            {}

            ~RedeemCouponRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CouponCode")], CouponCode);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CouponCode; ToJsonUtilS(CouponCode, each_CouponCode); output[U("CouponCode")] = each_CouponCode;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                return output;
            }
        };

        struct RedeemCouponResult : public PlayFabRequestCommon
        {
            std::list<ItemInstance> GrantedItems;

            RedeemCouponResult() :
                PlayFabRequestCommon(),
                GrantedItems()
            {}

            RedeemCouponResult(const RedeemCouponResult& src) :
                PlayFabRequestCommon(),
                GrantedItems(src.GrantedItems)
            {}

            ~RedeemCouponResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("GrantedItems")], GrantedItems);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_GrantedItems; ToJsonUtilO(GrantedItems, each_GrantedItems); output[U("GrantedItems")] = each_GrantedItems;
                return output;
            }
        };

        struct RedeemMatchmakerTicketRequest : public PlayFabRequestCommon
        {
            std::string Ticket;
            std::string LobbyId;

            RedeemMatchmakerTicketRequest() :
                PlayFabRequestCommon(),
                Ticket(),
                LobbyId()
            {}

            RedeemMatchmakerTicketRequest(const RedeemMatchmakerTicketRequest& src) :
                PlayFabRequestCommon(),
                Ticket(src.Ticket),
                LobbyId(src.LobbyId)
            {}

            ~RedeemMatchmakerTicketRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Ticket")], Ticket);
                FromJsonUtilS(input[U("LobbyId")], LobbyId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Ticket; ToJsonUtilS(Ticket, each_Ticket); output[U("Ticket")] = each_Ticket;
                web::json::value each_LobbyId; ToJsonUtilS(LobbyId, each_LobbyId); output[U("LobbyId")] = each_LobbyId;
                return output;
            }
        };

        struct RedeemMatchmakerTicketResult : public PlayFabRequestCommon
        {
            bool TicketIsValid;
            std::string Error;
            Boxed<UserAccountInfo> UserInfo;

            RedeemMatchmakerTicketResult() :
                PlayFabRequestCommon(),
                TicketIsValid(),
                Error(),
                UserInfo()
            {}

            RedeemMatchmakerTicketResult(const RedeemMatchmakerTicketResult& src) :
                PlayFabRequestCommon(),
                TicketIsValid(src.TicketIsValid),
                Error(src.Error),
                UserInfo(src.UserInfo)
            {}

            ~RedeemMatchmakerTicketResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("TicketIsValid")], TicketIsValid);
                FromJsonUtilS(input[U("Error")], Error);
                FromJsonUtilO(input[U("UserInfo")], UserInfo);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TicketIsValid; ToJsonUtilP(TicketIsValid, each_TicketIsValid); output[U("TicketIsValid")] = each_TicketIsValid;
                web::json::value each_Error; ToJsonUtilS(Error, each_Error); output[U("Error")] = each_Error;
                web::json::value each_UserInfo; ToJsonUtilO(UserInfo, each_UserInfo); output[U("UserInfo")] = each_UserInfo;
                return output;
            }
        };

        struct RefreshGameServerInstanceHeartbeatRequest : public PlayFabRequestCommon
        {
            std::string LobbyId;

            RefreshGameServerInstanceHeartbeatRequest() :
                PlayFabRequestCommon(),
                LobbyId()
            {}

            RefreshGameServerInstanceHeartbeatRequest(const RefreshGameServerInstanceHeartbeatRequest& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId)
            {}

            ~RefreshGameServerInstanceHeartbeatRequest() { }

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

        struct RefreshGameServerInstanceHeartbeatResult : public PlayFabRequestCommon
        {

            RefreshGameServerInstanceHeartbeatResult() :
                PlayFabRequestCommon()
            {}

            RefreshGameServerInstanceHeartbeatResult(const RefreshGameServerInstanceHeartbeatResult& src) :
                PlayFabRequestCommon()
            {}

            ~RefreshGameServerInstanceHeartbeatResult() { }

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

        struct RemoveFriendRequest : public PlayFabRequestCommon
        {
            std::string FriendPlayFabId;
            std::string PlayFabId;

            RemoveFriendRequest() :
                PlayFabRequestCommon(),
                FriendPlayFabId(),
                PlayFabId()
            {}

            RemoveFriendRequest(const RemoveFriendRequest& src) :
                PlayFabRequestCommon(),
                FriendPlayFabId(src.FriendPlayFabId),
                PlayFabId(src.PlayFabId)
            {}

            ~RemoveFriendRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("FriendPlayFabId")], FriendPlayFabId);
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_FriendPlayFabId; ToJsonUtilS(FriendPlayFabId, each_FriendPlayFabId); output[U("FriendPlayFabId")] = each_FriendPlayFabId;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct RemovePlayerTagRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string TagName;

            RemovePlayerTagRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                TagName()
            {}

            RemovePlayerTagRequest(const RemovePlayerTagRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                TagName(src.TagName)
            {}

            ~RemovePlayerTagRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("TagName")], TagName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_TagName; ToJsonUtilS(TagName, each_TagName); output[U("TagName")] = each_TagName;
                return output;
            }
        };

        struct RemovePlayerTagResult : public PlayFabRequestCommon
        {

            RemovePlayerTagResult() :
                PlayFabRequestCommon()
            {}

            RemovePlayerTagResult(const RemovePlayerTagResult& src) :
                PlayFabRequestCommon()
            {}

            ~RemovePlayerTagResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct RemoveSharedGroupMembersRequest : public PlayFabRequestCommon
        {
            std::string SharedGroupId;
            std::list<std::string> PlayFabIds;

            RemoveSharedGroupMembersRequest() :
                PlayFabRequestCommon(),
                SharedGroupId(),
                PlayFabIds()
            {}

            RemoveSharedGroupMembersRequest(const RemoveSharedGroupMembersRequest& src) :
                PlayFabRequestCommon(),
                SharedGroupId(src.SharedGroupId),
                PlayFabIds(src.PlayFabIds)
            {}

            ~RemoveSharedGroupMembersRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SharedGroupId")], SharedGroupId);
                FromJsonUtilS(input[U("PlayFabIds")], PlayFabIds);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SharedGroupId; ToJsonUtilS(SharedGroupId, each_SharedGroupId); output[U("SharedGroupId")] = each_SharedGroupId;
                web::json::value each_PlayFabIds; ToJsonUtilS(PlayFabIds, each_PlayFabIds); output[U("PlayFabIds")] = each_PlayFabIds;
                return output;
            }
        };

        struct RemoveSharedGroupMembersResult : public PlayFabRequestCommon
        {

            RemoveSharedGroupMembersResult() :
                PlayFabRequestCommon()
            {}

            RemoveSharedGroupMembersResult(const RemoveSharedGroupMembersResult& src) :
                PlayFabRequestCommon()
            {}

            ~RemoveSharedGroupMembersResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct ReportPlayerServerRequest : public PlayFabRequestCommon
        {
            std::string ReporterId;
            std::string ReporteeId;
            std::string TitleId;
            std::string Comment;

            ReportPlayerServerRequest() :
                PlayFabRequestCommon(),
                ReporterId(),
                ReporteeId(),
                TitleId(),
                Comment()
            {}

            ReportPlayerServerRequest(const ReportPlayerServerRequest& src) :
                PlayFabRequestCommon(),
                ReporterId(src.ReporterId),
                ReporteeId(src.ReporteeId),
                TitleId(src.TitleId),
                Comment(src.Comment)
            {}

            ~ReportPlayerServerRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("ReporterId")], ReporterId);
                FromJsonUtilS(input[U("ReporteeId")], ReporteeId);
                FromJsonUtilS(input[U("TitleId")], TitleId);
                FromJsonUtilS(input[U("Comment")], Comment);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ReporterId; ToJsonUtilS(ReporterId, each_ReporterId); output[U("ReporterId")] = each_ReporterId;
                web::json::value each_ReporteeId; ToJsonUtilS(ReporteeId, each_ReporteeId); output[U("ReporteeId")] = each_ReporteeId;
                web::json::value each_TitleId; ToJsonUtilS(TitleId, each_TitleId); output[U("TitleId")] = each_TitleId;
                web::json::value each_Comment; ToJsonUtilS(Comment, each_Comment); output[U("Comment")] = each_Comment;
                return output;
            }
        };

        struct ReportPlayerServerResult : public PlayFabRequestCommon
        {
            bool Updated;
            Int32 SubmissionsRemaining;

            ReportPlayerServerResult() :
                PlayFabRequestCommon(),
                Updated(),
                SubmissionsRemaining()
            {}

            ReportPlayerServerResult(const ReportPlayerServerResult& src) :
                PlayFabRequestCommon(),
                Updated(src.Updated),
                SubmissionsRemaining(src.SubmissionsRemaining)
            {}

            ~ReportPlayerServerResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("Updated")], Updated);
                FromJsonUtilP(input[U("SubmissionsRemaining")], SubmissionsRemaining);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Updated; ToJsonUtilP(Updated, each_Updated); output[U("Updated")] = each_Updated;
                web::json::value each_SubmissionsRemaining; ToJsonUtilP(SubmissionsRemaining, each_SubmissionsRemaining); output[U("SubmissionsRemaining")] = each_SubmissionsRemaining;
                return output;
            }
        };

        struct RevokeAllBansForUserRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;

            RevokeAllBansForUserRequest() :
                PlayFabRequestCommon(),
                PlayFabId()
            {}

            RevokeAllBansForUserRequest(const RevokeAllBansForUserRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId)
            {}

            ~RevokeAllBansForUserRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                return output;
            }
        };

        struct RevokeAllBansForUserResult : public PlayFabRequestCommon
        {
            std::list<BanInfo> BanData;

            RevokeAllBansForUserResult() :
                PlayFabRequestCommon(),
                BanData()
            {}

            RevokeAllBansForUserResult(const RevokeAllBansForUserResult& src) :
                PlayFabRequestCommon(),
                BanData(src.BanData)
            {}

            ~RevokeAllBansForUserResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("BanData")], BanData);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BanData; ToJsonUtilO(BanData, each_BanData); output[U("BanData")] = each_BanData;
                return output;
            }
        };

        struct RevokeBansRequest : public PlayFabRequestCommon
        {
            std::list<std::string> BanIds;

            RevokeBansRequest() :
                PlayFabRequestCommon(),
                BanIds()
            {}

            RevokeBansRequest(const RevokeBansRequest& src) :
                PlayFabRequestCommon(),
                BanIds(src.BanIds)
            {}

            ~RevokeBansRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BanIds")], BanIds);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BanIds; ToJsonUtilS(BanIds, each_BanIds); output[U("BanIds")] = each_BanIds;
                return output;
            }
        };

        struct RevokeBansResult : public PlayFabRequestCommon
        {
            std::list<BanInfo> BanData;

            RevokeBansResult() :
                PlayFabRequestCommon(),
                BanData()
            {}

            RevokeBansResult(const RevokeBansResult& src) :
                PlayFabRequestCommon(),
                BanData(src.BanData)
            {}

            ~RevokeBansResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("BanData")], BanData);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BanData; ToJsonUtilO(BanData, each_BanData); output[U("BanData")] = each_BanData;
                return output;
            }
        };

        struct RevokeInventoryItemRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string ItemInstanceId;

            RevokeInventoryItemRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                ItemInstanceId()
            {}

            RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                ItemInstanceId(src.ItemInstanceId)
            {}

            ~RevokeInventoryItemRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("ItemInstanceId")], ItemInstanceId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_ItemInstanceId; ToJsonUtilS(ItemInstanceId, each_ItemInstanceId); output[U("ItemInstanceId")] = each_ItemInstanceId;
                return output;
            }
        };

        struct RevokeInventoryResult : public PlayFabRequestCommon
        {

            RevokeInventoryResult() :
                PlayFabRequestCommon()
            {}

            RevokeInventoryResult(const RevokeInventoryResult& src) :
                PlayFabRequestCommon()
            {}

            ~RevokeInventoryResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct SendPushNotificationRequest : public PlayFabRequestCommon
        {
            std::string Recipient;
            std::string Message;
            std::string Subject;

            SendPushNotificationRequest() :
                PlayFabRequestCommon(),
                Recipient(),
                Message(),
                Subject()
            {}

            SendPushNotificationRequest(const SendPushNotificationRequest& src) :
                PlayFabRequestCommon(),
                Recipient(src.Recipient),
                Message(src.Message),
                Subject(src.Subject)
            {}

            ~SendPushNotificationRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Recipient")], Recipient);
                FromJsonUtilS(input[U("Message")], Message);
                FromJsonUtilS(input[U("Subject")], Subject);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Recipient; ToJsonUtilS(Recipient, each_Recipient); output[U("Recipient")] = each_Recipient;
                web::json::value each_Message; ToJsonUtilS(Message, each_Message); output[U("Message")] = each_Message;
                web::json::value each_Subject; ToJsonUtilS(Subject, each_Subject); output[U("Subject")] = each_Subject;
                return output;
            }
        };

        struct SendPushNotificationResult : public PlayFabRequestCommon
        {

            SendPushNotificationResult() :
                PlayFabRequestCommon()
            {}

            SendPushNotificationResult(const SendPushNotificationResult& src) :
                PlayFabRequestCommon()
            {}

            ~SendPushNotificationResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct SetFriendTagsRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string FriendPlayFabId;
            std::list<std::string> Tags;

            SetFriendTagsRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                FriendPlayFabId(),
                Tags()
            {}

            SetFriendTagsRequest(const SetFriendTagsRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                FriendPlayFabId(src.FriendPlayFabId),
                Tags(src.Tags)
            {}

            ~SetFriendTagsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("FriendPlayFabId")], FriendPlayFabId);
                FromJsonUtilS(input[U("Tags")], Tags);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_FriendPlayFabId; ToJsonUtilS(FriendPlayFabId, each_FriendPlayFabId); output[U("FriendPlayFabId")] = each_FriendPlayFabId;
                web::json::value each_Tags; ToJsonUtilS(Tags, each_Tags); output[U("Tags")] = each_Tags;
                return output;
            }
        };

        struct SetGameServerInstanceDataRequest : public PlayFabRequestCommon
        {
            std::string LobbyId;
            std::string GameServerData;

            SetGameServerInstanceDataRequest() :
                PlayFabRequestCommon(),
                LobbyId(),
                GameServerData()
            {}

            SetGameServerInstanceDataRequest(const SetGameServerInstanceDataRequest& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId),
                GameServerData(src.GameServerData)
            {}

            ~SetGameServerInstanceDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("LobbyId")], LobbyId);
                FromJsonUtilS(input[U("GameServerData")], GameServerData);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_LobbyId; ToJsonUtilS(LobbyId, each_LobbyId); output[U("LobbyId")] = each_LobbyId;
                web::json::value each_GameServerData; ToJsonUtilS(GameServerData, each_GameServerData); output[U("GameServerData")] = each_GameServerData;
                return output;
            }
        };

        struct SetGameServerInstanceDataResult : public PlayFabRequestCommon
        {

            SetGameServerInstanceDataResult() :
                PlayFabRequestCommon()
            {}

            SetGameServerInstanceDataResult(const SetGameServerInstanceDataResult& src) :
                PlayFabRequestCommon()
            {}

            ~SetGameServerInstanceDataResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct SetGameServerInstanceStateRequest : public PlayFabRequestCommon
        {
            std::string LobbyId;
            GameInstanceState State;

            SetGameServerInstanceStateRequest() :
                PlayFabRequestCommon(),
                LobbyId(),
                State()
            {}

            SetGameServerInstanceStateRequest(const SetGameServerInstanceStateRequest& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId),
                State(src.State)
            {}

            ~SetGameServerInstanceStateRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("LobbyId")], LobbyId);
                FromJsonEnum(input[U("State")], State);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_LobbyId; ToJsonUtilS(LobbyId, each_LobbyId); output[U("LobbyId")] = each_LobbyId;
                web::json::value each_State; ToJsonEnum(State, each_State); output[U("State")] = each_State;
                return output;
            }
        };

        struct SetGameServerInstanceStateResult : public PlayFabRequestCommon
        {

            SetGameServerInstanceStateResult() :
                PlayFabRequestCommon()
            {}

            SetGameServerInstanceStateResult(const SetGameServerInstanceStateResult& src) :
                PlayFabRequestCommon()
            {}

            ~SetGameServerInstanceStateResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct SetGameServerInstanceTagsRequest : public PlayFabRequestCommon
        {
            std::string LobbyId;
            std::map<std::string, std::string> Tags;

            SetGameServerInstanceTagsRequest() :
                PlayFabRequestCommon(),
                LobbyId(),
                Tags()
            {}

            SetGameServerInstanceTagsRequest(const SetGameServerInstanceTagsRequest& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId),
                Tags(src.Tags)
            {}

            ~SetGameServerInstanceTagsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("LobbyId")], LobbyId);
                FromJsonUtilS(input[U("Tags")], Tags);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_LobbyId; ToJsonUtilS(LobbyId, each_LobbyId); output[U("LobbyId")] = each_LobbyId;
                web::json::value each_Tags; ToJsonUtilS(Tags, each_Tags); output[U("Tags")] = each_Tags;
                return output;
            }
        };

        struct SetGameServerInstanceTagsResult : public PlayFabRequestCommon
        {

            SetGameServerInstanceTagsResult() :
                PlayFabRequestCommon()
            {}

            SetGameServerInstanceTagsResult(const SetGameServerInstanceTagsResult& src) :
                PlayFabRequestCommon()
            {}

            ~SetGameServerInstanceTagsResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct SetPublisherDataRequest : public PlayFabRequestCommon
        {
            std::string Key;
            std::string Value;

            SetPublisherDataRequest() :
                PlayFabRequestCommon(),
                Key(),
                Value()
            {}

            SetPublisherDataRequest(const SetPublisherDataRequest& src) :
                PlayFabRequestCommon(),
                Key(src.Key),
                Value(src.Value)
            {}

            ~SetPublisherDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Key")], Key);
                FromJsonUtilS(input[U("Value")], Value);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Key; ToJsonUtilS(Key, each_Key); output[U("Key")] = each_Key;
                web::json::value each_Value; ToJsonUtilS(Value, each_Value); output[U("Value")] = each_Value;
                return output;
            }
        };

        struct SetPublisherDataResult : public PlayFabRequestCommon
        {

            SetPublisherDataResult() :
                PlayFabRequestCommon()
            {}

            SetPublisherDataResult(const SetPublisherDataResult& src) :
                PlayFabRequestCommon()
            {}

            ~SetPublisherDataResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct SetTitleDataRequest : public PlayFabRequestCommon
        {
            std::string Key;
            std::string Value;

            SetTitleDataRequest() :
                PlayFabRequestCommon(),
                Key(),
                Value()
            {}

            SetTitleDataRequest(const SetTitleDataRequest& src) :
                PlayFabRequestCommon(),
                Key(src.Key),
                Value(src.Value)
            {}

            ~SetTitleDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Key")], Key);
                FromJsonUtilS(input[U("Value")], Value);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Key; ToJsonUtilS(Key, each_Key); output[U("Key")] = each_Key;
                web::json::value each_Value; ToJsonUtilS(Value, each_Value); output[U("Value")] = each_Value;
                return output;
            }
        };

        struct SetTitleDataResult : public PlayFabRequestCommon
        {

            SetTitleDataResult() :
                PlayFabRequestCommon()
            {}

            SetTitleDataResult(const SetTitleDataResult& src) :
                PlayFabRequestCommon()
            {}

            ~SetTitleDataResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct StatisticUpdate : public PlayFabBaseModel
        {
            std::string StatisticName;
            Boxed<Uint32> Version;
            Int32 Value;

            StatisticUpdate() :
                PlayFabBaseModel(),
                StatisticName(),
                Version(),
                Value()
            {}

            StatisticUpdate(const StatisticUpdate& src) :
                PlayFabBaseModel(),
                StatisticName(src.StatisticName),
                Version(src.Version),
                Value(src.Value)
            {}

            ~StatisticUpdate() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilP(input[U("Value")], Value);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_Value; ToJsonUtilP(Value, each_Value); output[U("Value")] = each_Value;
                return output;
            }
        };

        struct SubtractCharacterVirtualCurrencyRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string VirtualCurrency;
            Int32 Amount;

            SubtractCharacterVirtualCurrencyRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                VirtualCurrency(),
                Amount()
            {}

            SubtractCharacterVirtualCurrencyRequest(const SubtractCharacterVirtualCurrencyRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                VirtualCurrency(src.VirtualCurrency),
                Amount(src.Amount)
            {}

            ~SubtractCharacterVirtualCurrencyRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("VirtualCurrency")], VirtualCurrency);
                FromJsonUtilP(input[U("Amount")], Amount);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_VirtualCurrency; ToJsonUtilS(VirtualCurrency, each_VirtualCurrency); output[U("VirtualCurrency")] = each_VirtualCurrency;
                web::json::value each_Amount; ToJsonUtilP(Amount, each_Amount); output[U("Amount")] = each_Amount;
                return output;
            }
        };

        struct SubtractUserVirtualCurrencyRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string VirtualCurrency;
            Int32 Amount;

            SubtractUserVirtualCurrencyRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                VirtualCurrency(),
                Amount()
            {}

            SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                VirtualCurrency(src.VirtualCurrency),
                Amount(src.Amount)
            {}

            ~SubtractUserVirtualCurrencyRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("VirtualCurrency")], VirtualCurrency);
                FromJsonUtilP(input[U("Amount")], Amount);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_VirtualCurrency; ToJsonUtilS(VirtualCurrency, each_VirtualCurrency); output[U("VirtualCurrency")] = each_VirtualCurrency;
                web::json::value each_Amount; ToJsonUtilP(Amount, each_Amount); output[U("Amount")] = each_Amount;
                return output;
            }
        };

        struct UnlockContainerInstanceRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string ContainerItemInstanceId;
            std::string KeyItemInstanceId;
            std::string CatalogVersion;

            UnlockContainerInstanceRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                ContainerItemInstanceId(),
                KeyItemInstanceId(),
                CatalogVersion()
            {}

            UnlockContainerInstanceRequest(const UnlockContainerInstanceRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                ContainerItemInstanceId(src.ContainerItemInstanceId),
                KeyItemInstanceId(src.KeyItemInstanceId),
                CatalogVersion(src.CatalogVersion)
            {}

            ~UnlockContainerInstanceRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("ContainerItemInstanceId")], ContainerItemInstanceId);
                FromJsonUtilS(input[U("KeyItemInstanceId")], KeyItemInstanceId);
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_ContainerItemInstanceId; ToJsonUtilS(ContainerItemInstanceId, each_ContainerItemInstanceId); output[U("ContainerItemInstanceId")] = each_ContainerItemInstanceId;
                web::json::value each_KeyItemInstanceId; ToJsonUtilS(KeyItemInstanceId, each_KeyItemInstanceId); output[U("KeyItemInstanceId")] = each_KeyItemInstanceId;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                return output;
            }
        };

        struct UnlockContainerItemRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string ContainerItemId;
            std::string CatalogVersion;

            UnlockContainerItemRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                ContainerItemId(),
                CatalogVersion()
            {}

            UnlockContainerItemRequest(const UnlockContainerItemRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                ContainerItemId(src.ContainerItemId),
                CatalogVersion(src.CatalogVersion)
            {}

            ~UnlockContainerItemRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("ContainerItemId")], ContainerItemId);
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_ContainerItemId; ToJsonUtilS(ContainerItemId, each_ContainerItemId); output[U("ContainerItemId")] = each_ContainerItemId;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                return output;
            }
        };

        struct UnlockContainerItemResult : public PlayFabRequestCommon
        {
            std::string UnlockedItemInstanceId;
            std::string UnlockedWithItemInstanceId;
            std::list<ItemInstance> GrantedItems;
            std::map<std::string, Uint32> VirtualCurrency;

            UnlockContainerItemResult() :
                PlayFabRequestCommon(),
                UnlockedItemInstanceId(),
                UnlockedWithItemInstanceId(),
                GrantedItems(),
                VirtualCurrency()
            {}

            UnlockContainerItemResult(const UnlockContainerItemResult& src) :
                PlayFabRequestCommon(),
                UnlockedItemInstanceId(src.UnlockedItemInstanceId),
                UnlockedWithItemInstanceId(src.UnlockedWithItemInstanceId),
                GrantedItems(src.GrantedItems),
                VirtualCurrency(src.VirtualCurrency)
            {}

            ~UnlockContainerItemResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("UnlockedItemInstanceId")], UnlockedItemInstanceId);
                FromJsonUtilS(input[U("UnlockedWithItemInstanceId")], UnlockedWithItemInstanceId);
                FromJsonUtilO(input[U("GrantedItems")], GrantedItems);
                FromJsonUtilP(input[U("VirtualCurrency")], VirtualCurrency);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_UnlockedItemInstanceId; ToJsonUtilS(UnlockedItemInstanceId, each_UnlockedItemInstanceId); output[U("UnlockedItemInstanceId")] = each_UnlockedItemInstanceId;
                web::json::value each_UnlockedWithItemInstanceId; ToJsonUtilS(UnlockedWithItemInstanceId, each_UnlockedWithItemInstanceId); output[U("UnlockedWithItemInstanceId")] = each_UnlockedWithItemInstanceId;
                web::json::value each_GrantedItems; ToJsonUtilO(GrantedItems, each_GrantedItems); output[U("GrantedItems")] = each_GrantedItems;
                web::json::value each_VirtualCurrency; ToJsonUtilP(VirtualCurrency, each_VirtualCurrency); output[U("VirtualCurrency")] = each_VirtualCurrency;
                return output;
            }
        };

        struct UpdateAvatarUrlRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string ImageUrl;

            UpdateAvatarUrlRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                ImageUrl()
            {}

            UpdateAvatarUrlRequest(const UpdateAvatarUrlRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                ImageUrl(src.ImageUrl)
            {}

            ~UpdateAvatarUrlRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("ImageUrl")], ImageUrl);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_ImageUrl; ToJsonUtilS(ImageUrl, each_ImageUrl); output[U("ImageUrl")] = each_ImageUrl;
                return output;
            }
        };

        struct UpdateBanRequest : public PlayFabRequestCommon
        {
            std::string BanId;
            std::string Reason;
            Boxed<time_t> Expires;
            std::string IPAddress;
            std::string MACAddress;
            Boxed<bool> Permanent;
            Boxed<bool> Active;

            UpdateBanRequest() :
                PlayFabRequestCommon(),
                BanId(),
                Reason(),
                Expires(),
                IPAddress(),
                MACAddress(),
                Permanent(),
                Active()
            {}

            UpdateBanRequest(const UpdateBanRequest& src) :
                PlayFabRequestCommon(),
                BanId(src.BanId),
                Reason(src.Reason),
                Expires(src.Expires),
                IPAddress(src.IPAddress),
                MACAddress(src.MACAddress),
                Permanent(src.Permanent),
                Active(src.Active)
            {}

            ~UpdateBanRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BanId")], BanId);
                FromJsonUtilS(input[U("Reason")], Reason);
                FromJsonUtilT(input[U("Expires")], Expires);
                FromJsonUtilS(input[U("IPAddress")], IPAddress);
                FromJsonUtilS(input[U("MACAddress")], MACAddress);
                FromJsonUtilP(input[U("Permanent")], Permanent);
                FromJsonUtilP(input[U("Active")], Active);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BanId; ToJsonUtilS(BanId, each_BanId); output[U("BanId")] = each_BanId;
                web::json::value each_Reason; ToJsonUtilS(Reason, each_Reason); output[U("Reason")] = each_Reason;
                web::json::value each_Expires; ToJsonUtilT(Expires, each_Expires); output[U("Expires")] = each_Expires;
                web::json::value each_IPAddress; ToJsonUtilS(IPAddress, each_IPAddress); output[U("IPAddress")] = each_IPAddress;
                web::json::value each_MACAddress; ToJsonUtilS(MACAddress, each_MACAddress); output[U("MACAddress")] = each_MACAddress;
                web::json::value each_Permanent; ToJsonUtilP(Permanent, each_Permanent); output[U("Permanent")] = each_Permanent;
                web::json::value each_Active; ToJsonUtilP(Active, each_Active); output[U("Active")] = each_Active;
                return output;
            }
        };

        struct UpdateBansRequest : public PlayFabRequestCommon
        {
            std::list<UpdateBanRequest> Bans;

            UpdateBansRequest() :
                PlayFabRequestCommon(),
                Bans()
            {}

            UpdateBansRequest(const UpdateBansRequest& src) :
                PlayFabRequestCommon(),
                Bans(src.Bans)
            {}

            ~UpdateBansRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Bans")], Bans);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Bans; ToJsonUtilO(Bans, each_Bans); output[U("Bans")] = each_Bans;
                return output;
            }
        };

        struct UpdateBansResult : public PlayFabRequestCommon
        {
            std::list<BanInfo> BanData;

            UpdateBansResult() :
                PlayFabRequestCommon(),
                BanData()
            {}

            UpdateBansResult(const UpdateBansResult& src) :
                PlayFabRequestCommon(),
                BanData(src.BanData)
            {}

            ~UpdateBansResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("BanData")], BanData);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BanData; ToJsonUtilO(BanData, each_BanData); output[U("BanData")] = each_BanData;
                return output;
            }
        };

        struct UpdateCharacterDataRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::map<std::string, std::string> Data;
            std::list<std::string> KeysToRemove;
            Boxed<UserDataPermission> Permission;

            UpdateCharacterDataRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                Data(),
                KeysToRemove(),
                Permission()
            {}

            UpdateCharacterDataRequest(const UpdateCharacterDataRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                Data(src.Data),
                KeysToRemove(src.KeysToRemove),
                Permission(src.Permission)
            {}

            ~UpdateCharacterDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("Data")], Data);
                FromJsonUtilS(input[U("KeysToRemove")], KeysToRemove);
                FromJsonUtilE(input[U("Permission")], Permission);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_Data; ToJsonUtilS(Data, each_Data); output[U("Data")] = each_Data;
                web::json::value each_KeysToRemove; ToJsonUtilS(KeysToRemove, each_KeysToRemove); output[U("KeysToRemove")] = each_KeysToRemove;
                web::json::value each_Permission; ToJsonUtilE(Permission, each_Permission); output[U("Permission")] = each_Permission;
                return output;
            }
        };

        struct UpdateCharacterDataResult : public PlayFabRequestCommon
        {
            Uint32 DataVersion;

            UpdateCharacterDataResult() :
                PlayFabRequestCommon(),
                DataVersion()
            {}

            UpdateCharacterDataResult(const UpdateCharacterDataResult& src) :
                PlayFabRequestCommon(),
                DataVersion(src.DataVersion)
            {}

            ~UpdateCharacterDataResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("DataVersion")], DataVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_DataVersion; ToJsonUtilP(DataVersion, each_DataVersion); output[U("DataVersion")] = each_DataVersion;
                return output;
            }
        };

        struct UpdateCharacterStatisticsRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::map<std::string, Int32> CharacterStatistics;

            UpdateCharacterStatisticsRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                CharacterStatistics()
            {}

            UpdateCharacterStatisticsRequest(const UpdateCharacterStatisticsRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                CharacterStatistics(src.CharacterStatistics)
            {}

            ~UpdateCharacterStatisticsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilP(input[U("CharacterStatistics")], CharacterStatistics);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_CharacterStatistics; ToJsonUtilP(CharacterStatistics, each_CharacterStatistics); output[U("CharacterStatistics")] = each_CharacterStatistics;
                return output;
            }
        };

        struct UpdateCharacterStatisticsResult : public PlayFabRequestCommon
        {

            UpdateCharacterStatisticsResult() :
                PlayFabRequestCommon()
            {}

            UpdateCharacterStatisticsResult(const UpdateCharacterStatisticsResult& src) :
                PlayFabRequestCommon()
            {}

            ~UpdateCharacterStatisticsResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct UpdatePlayerStatisticsRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::list<StatisticUpdate> Statistics;
            Boxed<bool> ForceUpdate;

            UpdatePlayerStatisticsRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                Statistics(),
                ForceUpdate()
            {}

            UpdatePlayerStatisticsRequest(const UpdatePlayerStatisticsRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                Statistics(src.Statistics),
                ForceUpdate(src.ForceUpdate)
            {}

            ~UpdatePlayerStatisticsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilO(input[U("Statistics")], Statistics);
                FromJsonUtilP(input[U("ForceUpdate")], ForceUpdate);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Statistics; ToJsonUtilO(Statistics, each_Statistics); output[U("Statistics")] = each_Statistics;
                web::json::value each_ForceUpdate; ToJsonUtilP(ForceUpdate, each_ForceUpdate); output[U("ForceUpdate")] = each_ForceUpdate;
                return output;
            }
        };

        struct UpdatePlayerStatisticsResult : public PlayFabRequestCommon
        {

            UpdatePlayerStatisticsResult() :
                PlayFabRequestCommon()
            {}

            UpdatePlayerStatisticsResult(const UpdatePlayerStatisticsResult& src) :
                PlayFabRequestCommon()
            {}

            ~UpdatePlayerStatisticsResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct UpdateSharedGroupDataRequest : public PlayFabRequestCommon
        {
            std::string SharedGroupId;
            std::map<std::string, std::string> Data;
            std::list<std::string> KeysToRemove;
            Boxed<UserDataPermission> Permission;

            UpdateSharedGroupDataRequest() :
                PlayFabRequestCommon(),
                SharedGroupId(),
                Data(),
                KeysToRemove(),
                Permission()
            {}

            UpdateSharedGroupDataRequest(const UpdateSharedGroupDataRequest& src) :
                PlayFabRequestCommon(),
                SharedGroupId(src.SharedGroupId),
                Data(src.Data),
                KeysToRemove(src.KeysToRemove),
                Permission(src.Permission)
            {}

            ~UpdateSharedGroupDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SharedGroupId")], SharedGroupId);
                FromJsonUtilS(input[U("Data")], Data);
                FromJsonUtilS(input[U("KeysToRemove")], KeysToRemove);
                FromJsonUtilE(input[U("Permission")], Permission);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SharedGroupId; ToJsonUtilS(SharedGroupId, each_SharedGroupId); output[U("SharedGroupId")] = each_SharedGroupId;
                web::json::value each_Data; ToJsonUtilS(Data, each_Data); output[U("Data")] = each_Data;
                web::json::value each_KeysToRemove; ToJsonUtilS(KeysToRemove, each_KeysToRemove); output[U("KeysToRemove")] = each_KeysToRemove;
                web::json::value each_Permission; ToJsonUtilE(Permission, each_Permission); output[U("Permission")] = each_Permission;
                return output;
            }
        };

        struct UpdateSharedGroupDataResult : public PlayFabRequestCommon
        {

            UpdateSharedGroupDataResult() :
                PlayFabRequestCommon()
            {}

            UpdateSharedGroupDataResult(const UpdateSharedGroupDataResult& src) :
                PlayFabRequestCommon()
            {}

            ~UpdateSharedGroupDataResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct UpdateUserDataRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::map<std::string, std::string> Data;
            std::list<std::string> KeysToRemove;
            Boxed<UserDataPermission> Permission;

            UpdateUserDataRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                Data(),
                KeysToRemove(),
                Permission()
            {}

            UpdateUserDataRequest(const UpdateUserDataRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                Data(src.Data),
                KeysToRemove(src.KeysToRemove),
                Permission(src.Permission)
            {}

            ~UpdateUserDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("Data")], Data);
                FromJsonUtilS(input[U("KeysToRemove")], KeysToRemove);
                FromJsonUtilE(input[U("Permission")], Permission);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Data; ToJsonUtilS(Data, each_Data); output[U("Data")] = each_Data;
                web::json::value each_KeysToRemove; ToJsonUtilS(KeysToRemove, each_KeysToRemove); output[U("KeysToRemove")] = each_KeysToRemove;
                web::json::value each_Permission; ToJsonUtilE(Permission, each_Permission); output[U("Permission")] = each_Permission;
                return output;
            }
        };

        struct UpdateUserDataResult : public PlayFabRequestCommon
        {
            Uint32 DataVersion;

            UpdateUserDataResult() :
                PlayFabRequestCommon(),
                DataVersion()
            {}

            UpdateUserDataResult(const UpdateUserDataResult& src) :
                PlayFabRequestCommon(),
                DataVersion(src.DataVersion)
            {}

            ~UpdateUserDataResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("DataVersion")], DataVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_DataVersion; ToJsonUtilP(DataVersion, each_DataVersion); output[U("DataVersion")] = each_DataVersion;
                return output;
            }
        };

        struct UpdateUserInternalDataRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::map<std::string, std::string> Data;
            std::list<std::string> KeysToRemove;

            UpdateUserInternalDataRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                Data(),
                KeysToRemove()
            {}

            UpdateUserInternalDataRequest(const UpdateUserInternalDataRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                Data(src.Data),
                KeysToRemove(src.KeysToRemove)
            {}

            ~UpdateUserInternalDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("Data")], Data);
                FromJsonUtilS(input[U("KeysToRemove")], KeysToRemove);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Data; ToJsonUtilS(Data, each_Data); output[U("Data")] = each_Data;
                web::json::value each_KeysToRemove; ToJsonUtilS(KeysToRemove, each_KeysToRemove); output[U("KeysToRemove")] = each_KeysToRemove;
                return output;
            }
        };

        struct UpdateUserInventoryItemDataRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string ItemInstanceId;
            std::map<std::string, std::string> Data;
            std::list<std::string> KeysToRemove;

            UpdateUserInventoryItemDataRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                ItemInstanceId(),
                Data(),
                KeysToRemove()
            {}

            UpdateUserInventoryItemDataRequest(const UpdateUserInventoryItemDataRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                ItemInstanceId(src.ItemInstanceId),
                Data(src.Data),
                KeysToRemove(src.KeysToRemove)
            {}

            ~UpdateUserInventoryItemDataRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("ItemInstanceId")], ItemInstanceId);
                FromJsonUtilS(input[U("Data")], Data);
                FromJsonUtilS(input[U("KeysToRemove")], KeysToRemove);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_ItemInstanceId; ToJsonUtilS(ItemInstanceId, each_ItemInstanceId); output[U("ItemInstanceId")] = each_ItemInstanceId;
                web::json::value each_Data; ToJsonUtilS(Data, each_Data); output[U("Data")] = each_Data;
                web::json::value each_KeysToRemove; ToJsonUtilS(KeysToRemove, each_KeysToRemove); output[U("KeysToRemove")] = each_KeysToRemove;
                return output;
            }
        };

        struct WriteEventResponse : public PlayFabRequestCommon
        {
            std::string EventId;

            WriteEventResponse() :
                PlayFabRequestCommon(),
                EventId()
            {}

            WriteEventResponse(const WriteEventResponse& src) :
                PlayFabRequestCommon(),
                EventId(src.EventId)
            {}

            ~WriteEventResponse() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("EventId")], EventId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_EventId; ToJsonUtilS(EventId, each_EventId); output[U("EventId")] = each_EventId;
                return output;
            }
        };

        struct WriteServerCharacterEventRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;
            std::string EventName;
            Boxed<time_t> Timestamp;
            web::json::value Body; // Not truly arbitrary. See documentation for restrictions on format

            WriteServerCharacterEventRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId(),
                EventName(),
                Timestamp(),
                Body()
            {}

            WriteServerCharacterEventRequest(const WriteServerCharacterEventRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId),
                EventName(src.EventName),
                Timestamp(src.Timestamp),
                Body(src.Body)
            {}

            ~WriteServerCharacterEventRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("CharacterId")], CharacterId);
                FromJsonUtilS(input[U("EventName")], EventName);
                FromJsonUtilT(input[U("Timestamp")], Timestamp);
                Body = input[U("Body")];
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_CharacterId; ToJsonUtilS(CharacterId, each_CharacterId); output[U("CharacterId")] = each_CharacterId;
                web::json::value each_EventName; ToJsonUtilS(EventName, each_EventName); output[U("EventName")] = each_EventName;
                web::json::value each_Timestamp; ToJsonUtilT(Timestamp, each_Timestamp); output[U("Timestamp")] = each_Timestamp;
                output[U("Body")] = Body;
                return output;
            }
        };

        struct WriteServerPlayerEventRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string EventName;
            Boxed<time_t> Timestamp;
            web::json::value Body; // Not truly arbitrary. See documentation for restrictions on format

            WriteServerPlayerEventRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                EventName(),
                Timestamp(),
                Body()
            {}

            WriteServerPlayerEventRequest(const WriteServerPlayerEventRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                EventName(src.EventName),
                Timestamp(src.Timestamp),
                Body(src.Body)
            {}

            ~WriteServerPlayerEventRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("EventName")], EventName);
                FromJsonUtilT(input[U("Timestamp")], Timestamp);
                Body = input[U("Body")];
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_EventName; ToJsonUtilS(EventName, each_EventName); output[U("EventName")] = each_EventName;
                web::json::value each_Timestamp; ToJsonUtilT(Timestamp, each_Timestamp); output[U("Timestamp")] = each_Timestamp;
                output[U("Body")] = Body;
                return output;
            }
        };

        struct WriteTitleEventRequest : public PlayFabRequestCommon
        {
            std::string EventName;
            Boxed<time_t> Timestamp;
            web::json::value Body; // Not truly arbitrary. See documentation for restrictions on format

            WriteTitleEventRequest() :
                PlayFabRequestCommon(),
                EventName(),
                Timestamp(),
                Body()
            {}

            WriteTitleEventRequest(const WriteTitleEventRequest& src) :
                PlayFabRequestCommon(),
                EventName(src.EventName),
                Timestamp(src.Timestamp),
                Body(src.Body)
            {}

            ~WriteTitleEventRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("EventName")], EventName);
                FromJsonUtilT(input[U("Timestamp")], Timestamp);
                Body = input[U("Body")];
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_EventName; ToJsonUtilS(EventName, each_EventName); output[U("EventName")] = each_EventName;
                web::json::value each_Timestamp; ToJsonUtilT(Timestamp, each_Timestamp); output[U("Timestamp")] = each_Timestamp;
                output[U("Body")] = Body;
                return output;
            }
        };

    }
}

#endif
