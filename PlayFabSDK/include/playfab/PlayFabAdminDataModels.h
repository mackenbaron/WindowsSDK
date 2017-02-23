#pragma once

#ifdef ENABLE_PLAYFABADMIN_API

#include "playfab/PlayFabBaseModel.h"

namespace PlayFab
{
    namespace AdminModels
    {
        // Admin Enums
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

        enum EffectType
        {
            EffectTypeAllow
        };

        inline void ToJsonEnum(const EffectType input, web::json::value& output)
        {
            if (input == EffectTypeAllow) output = web::json::value(U("Allow"));
        }
        inline void FromJsonEnum(const web::json::value& input, EffectType& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Allow")) output = EffectTypeAllow;
        }

        enum GameBuildStatus
        {
            GameBuildStatusAvailable,
            GameBuildStatusValidating,
            GameBuildStatusInvalidBuildPackage,
            GameBuildStatusProcessing,
            GameBuildStatusFailedToProcess
        };

        inline void ToJsonEnum(const GameBuildStatus input, web::json::value& output)
        {
            if (input == GameBuildStatusAvailable) output = web::json::value(U("Available"));
            if (input == GameBuildStatusValidating) output = web::json::value(U("Validating"));
            if (input == GameBuildStatusInvalidBuildPackage) output = web::json::value(U("InvalidBuildPackage"));
            if (input == GameBuildStatusProcessing) output = web::json::value(U("Processing"));
            if (input == GameBuildStatusFailedToProcess) output = web::json::value(U("FailedToProcess"));
        }
        inline void FromJsonEnum(const web::json::value& input, GameBuildStatus& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Available")) output = GameBuildStatusAvailable;
            if (inputStr == U("Validating")) output = GameBuildStatusValidating;
            if (inputStr == U("InvalidBuildPackage")) output = GameBuildStatusInvalidBuildPackage;
            if (inputStr == U("Processing")) output = GameBuildStatusProcessing;
            if (inputStr == U("FailedToProcess")) output = GameBuildStatusFailedToProcess;
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

        enum ResolutionOutcome
        {
            ResolutionOutcomeRevoke,
            ResolutionOutcomeReinstate,
            ResolutionOutcomeManual
        };

        inline void ToJsonEnum(const ResolutionOutcome input, web::json::value& output)
        {
            if (input == ResolutionOutcomeRevoke) output = web::json::value(U("Revoke"));
            if (input == ResolutionOutcomeReinstate) output = web::json::value(U("Reinstate"));
            if (input == ResolutionOutcomeManual) output = web::json::value(U("Manual"));
        }
        inline void FromJsonEnum(const web::json::value& input, ResolutionOutcome& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Revoke")) output = ResolutionOutcomeRevoke;
            if (inputStr == U("Reinstate")) output = ResolutionOutcomeReinstate;
            if (inputStr == U("Manual")) output = ResolutionOutcomeManual;
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

        enum ScheduledTaskType
        {
            ScheduledTaskTypeCloudScript,
            ScheduledTaskTypeActionsOnPlayerSegment
        };

        inline void ToJsonEnum(const ScheduledTaskType input, web::json::value& output)
        {
            if (input == ScheduledTaskTypeCloudScript) output = web::json::value(U("CloudScript"));
            if (input == ScheduledTaskTypeActionsOnPlayerSegment) output = web::json::value(U("ActionsOnPlayerSegment"));
        }
        inline void FromJsonEnum(const web::json::value& input, ScheduledTaskType& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("CloudScript")) output = ScheduledTaskTypeCloudScript;
            if (inputStr == U("ActionsOnPlayerSegment")) output = ScheduledTaskTypeActionsOnPlayerSegment;
        }

        enum SourceType
        {
            SourceTypeAdmin,
            SourceTypeBackEnd,
            SourceTypeGameClient,
            SourceTypeGameServer,
            SourceTypePartner
        };

        inline void ToJsonEnum(const SourceType input, web::json::value& output)
        {
            if (input == SourceTypeAdmin) output = web::json::value(U("Admin"));
            if (input == SourceTypeBackEnd) output = web::json::value(U("BackEnd"));
            if (input == SourceTypeGameClient) output = web::json::value(U("GameClient"));
            if (input == SourceTypeGameServer) output = web::json::value(U("GameServer"));
            if (input == SourceTypePartner) output = web::json::value(U("Partner"));
        }
        inline void FromJsonEnum(const web::json::value& input, SourceType& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Admin")) output = SourceTypeAdmin;
            if (inputStr == U("BackEnd")) output = SourceTypeBackEnd;
            if (inputStr == U("GameClient")) output = SourceTypeGameClient;
            if (inputStr == U("GameServer")) output = SourceTypeGameServer;
            if (inputStr == U("Partner")) output = SourceTypePartner;
        }

        enum StatisticAggregationMethod
        {
            StatisticAggregationMethodLast,
            StatisticAggregationMethodMin,
            StatisticAggregationMethodMax,
            StatisticAggregationMethodSum
        };

        inline void ToJsonEnum(const StatisticAggregationMethod input, web::json::value& output)
        {
            if (input == StatisticAggregationMethodLast) output = web::json::value(U("Last"));
            if (input == StatisticAggregationMethodMin) output = web::json::value(U("Min"));
            if (input == StatisticAggregationMethodMax) output = web::json::value(U("Max"));
            if (input == StatisticAggregationMethodSum) output = web::json::value(U("Sum"));
        }
        inline void FromJsonEnum(const web::json::value& input, StatisticAggregationMethod& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Last")) output = StatisticAggregationMethodLast;
            if (inputStr == U("Min")) output = StatisticAggregationMethodMin;
            if (inputStr == U("Max")) output = StatisticAggregationMethodMax;
            if (inputStr == U("Sum")) output = StatisticAggregationMethodSum;
        }

        enum StatisticResetIntervalOption
        {
            StatisticResetIntervalOptionNever,
            StatisticResetIntervalOptionHour,
            StatisticResetIntervalOptionDay,
            StatisticResetIntervalOptionWeek,
            StatisticResetIntervalOptionMonth
        };

        inline void ToJsonEnum(const StatisticResetIntervalOption input, web::json::value& output)
        {
            if (input == StatisticResetIntervalOptionNever) output = web::json::value(U("Never"));
            if (input == StatisticResetIntervalOptionHour) output = web::json::value(U("Hour"));
            if (input == StatisticResetIntervalOptionDay) output = web::json::value(U("Day"));
            if (input == StatisticResetIntervalOptionWeek) output = web::json::value(U("Week"));
            if (input == StatisticResetIntervalOptionMonth) output = web::json::value(U("Month"));
        }
        inline void FromJsonEnum(const web::json::value& input, StatisticResetIntervalOption& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("Never")) output = StatisticResetIntervalOptionNever;
            if (inputStr == U("Hour")) output = StatisticResetIntervalOptionHour;
            if (inputStr == U("Day")) output = StatisticResetIntervalOptionDay;
            if (inputStr == U("Week")) output = StatisticResetIntervalOptionWeek;
            if (inputStr == U("Month")) output = StatisticResetIntervalOptionMonth;
        }

        enum StatisticVersionArchivalStatus
        {
            StatisticVersionArchivalStatusNotScheduled,
            StatisticVersionArchivalStatusScheduled,
            StatisticVersionArchivalStatusQueued,
            StatisticVersionArchivalStatusInProgress,
            StatisticVersionArchivalStatusComplete
        };

        inline void ToJsonEnum(const StatisticVersionArchivalStatus input, web::json::value& output)
        {
            if (input == StatisticVersionArchivalStatusNotScheduled) output = web::json::value(U("NotScheduled"));
            if (input == StatisticVersionArchivalStatusScheduled) output = web::json::value(U("Scheduled"));
            if (input == StatisticVersionArchivalStatusQueued) output = web::json::value(U("Queued"));
            if (input == StatisticVersionArchivalStatusInProgress) output = web::json::value(U("InProgress"));
            if (input == StatisticVersionArchivalStatusComplete) output = web::json::value(U("Complete"));
        }
        inline void FromJsonEnum(const web::json::value& input, StatisticVersionArchivalStatus& output)
        {
            if (!input.is_string()) return;
            const utility::string_t& inputStr = input.as_string();
            if (inputStr == U("NotScheduled")) output = StatisticVersionArchivalStatusNotScheduled;
            if (inputStr == U("Scheduled")) output = StatisticVersionArchivalStatusScheduled;
            if (inputStr == U("Queued")) output = StatisticVersionArchivalStatusQueued;
            if (inputStr == U("InProgress")) output = StatisticVersionArchivalStatusInProgress;
            if (inputStr == U("Complete")) output = StatisticVersionArchivalStatusComplete;
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

        // Admin Classes
        struct AbortTaskInstanceRequest : public PlayFabRequestCommon
        {
            std::string TaskInstanceId;

            AbortTaskInstanceRequest() :
                PlayFabRequestCommon(),
                TaskInstanceId()
            {}

            AbortTaskInstanceRequest(const AbortTaskInstanceRequest& src) :
                PlayFabRequestCommon(),
                TaskInstanceId(src.TaskInstanceId)
            {}

            ~AbortTaskInstanceRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("TaskInstanceId")], TaskInstanceId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TaskInstanceId; ToJsonUtilS(TaskInstanceId, each_TaskInstanceId); output[U("TaskInstanceId")] = each_TaskInstanceId;
                return output;
            }
        };

        struct ActionsOnPlayersInSegmentTaskParameter : public PlayFabBaseModel
        {
            std::string SegmentId;
            std::string ActionId;

            ActionsOnPlayersInSegmentTaskParameter() :
                PlayFabBaseModel(),
                SegmentId(),
                ActionId()
            {}

            ActionsOnPlayersInSegmentTaskParameter(const ActionsOnPlayersInSegmentTaskParameter& src) :
                PlayFabBaseModel(),
                SegmentId(src.SegmentId),
                ActionId(src.ActionId)
            {}

            ~ActionsOnPlayersInSegmentTaskParameter() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("SegmentId")], SegmentId);
                FromJsonUtilS(input[U("ActionId")], ActionId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_SegmentId; ToJsonUtilS(SegmentId, each_SegmentId); output[U("SegmentId")] = each_SegmentId;
                web::json::value each_ActionId; ToJsonUtilS(ActionId, each_ActionId); output[U("ActionId")] = each_ActionId;
                return output;
            }
        };

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

        struct AddNewsRequest : public PlayFabRequestCommon
        {
            Boxed<time_t> Timestamp;
            std::string Title;
            std::string Body;

            AddNewsRequest() :
                PlayFabRequestCommon(),
                Timestamp(),
                Title(),
                Body()
            {}

            AddNewsRequest(const AddNewsRequest& src) :
                PlayFabRequestCommon(),
                Timestamp(src.Timestamp),
                Title(src.Title),
                Body(src.Body)
            {}

            ~AddNewsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilT(input[U("Timestamp")], Timestamp);
                FromJsonUtilS(input[U("Title")], Title);
                FromJsonUtilS(input[U("Body")], Body);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Timestamp; ToJsonUtilT(Timestamp, each_Timestamp); output[U("Timestamp")] = each_Timestamp;
                web::json::value each_Title; ToJsonUtilS(Title, each_Title); output[U("Title")] = each_Title;
                web::json::value each_Body; ToJsonUtilS(Body, each_Body); output[U("Body")] = each_Body;
                return output;
            }
        };

        struct AddNewsResult : public PlayFabRequestCommon
        {
            std::string NewsId;

            AddNewsResult() :
                PlayFabRequestCommon(),
                NewsId()
            {}

            AddNewsResult(const AddNewsResult& src) :
                PlayFabRequestCommon(),
                NewsId(src.NewsId)
            {}

            ~AddNewsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("NewsId")], NewsId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_NewsId; ToJsonUtilS(NewsId, each_NewsId); output[U("NewsId")] = each_NewsId;
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

        struct AddServerBuildRequest : public PlayFabRequestCommon
        {
            std::string BuildId;
            std::string CommandLineTemplate;
            std::string ExecutablePath;
            std::list<Region> ActiveRegions;
            std::string Comment;
            Int32 MaxGamesPerHost;
            Int32 MinFreeGameSlots;

            AddServerBuildRequest() :
                PlayFabRequestCommon(),
                BuildId(),
                CommandLineTemplate(),
                ExecutablePath(),
                ActiveRegions(),
                Comment(),
                MaxGamesPerHost(),
                MinFreeGameSlots()
            {}

            AddServerBuildRequest(const AddServerBuildRequest& src) :
                PlayFabRequestCommon(),
                BuildId(src.BuildId),
                CommandLineTemplate(src.CommandLineTemplate),
                ExecutablePath(src.ExecutablePath),
                ActiveRegions(src.ActiveRegions),
                Comment(src.Comment),
                MaxGamesPerHost(src.MaxGamesPerHost),
                MinFreeGameSlots(src.MinFreeGameSlots)
            {}

            ~AddServerBuildRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BuildId")], BuildId);
                FromJsonUtilS(input[U("CommandLineTemplate")], CommandLineTemplate);
                FromJsonUtilS(input[U("ExecutablePath")], ExecutablePath);
                FromJsonUtilE(input[U("ActiveRegions")], ActiveRegions);
                FromJsonUtilS(input[U("Comment")], Comment);
                FromJsonUtilP(input[U("MaxGamesPerHost")], MaxGamesPerHost);
                FromJsonUtilP(input[U("MinFreeGameSlots")], MinFreeGameSlots);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BuildId; ToJsonUtilS(BuildId, each_BuildId); output[U("BuildId")] = each_BuildId;
                web::json::value each_CommandLineTemplate; ToJsonUtilS(CommandLineTemplate, each_CommandLineTemplate); output[U("CommandLineTemplate")] = each_CommandLineTemplate;
                web::json::value each_ExecutablePath; ToJsonUtilS(ExecutablePath, each_ExecutablePath); output[U("ExecutablePath")] = each_ExecutablePath;
                web::json::value each_ActiveRegions; ToJsonUtilE(ActiveRegions, each_ActiveRegions); output[U("ActiveRegions")] = each_ActiveRegions;
                web::json::value each_Comment; ToJsonUtilS(Comment, each_Comment); output[U("Comment")] = each_Comment;
                web::json::value each_MaxGamesPerHost; ToJsonUtilP(MaxGamesPerHost, each_MaxGamesPerHost); output[U("MaxGamesPerHost")] = each_MaxGamesPerHost;
                web::json::value each_MinFreeGameSlots; ToJsonUtilP(MinFreeGameSlots, each_MinFreeGameSlots); output[U("MinFreeGameSlots")] = each_MinFreeGameSlots;
                return output;
            }
        };

        struct AddServerBuildResult : public PlayFabRequestCommon
        {
            std::string BuildId;
            std::list<Region> ActiveRegions;
            Int32 MaxGamesPerHost;
            Int32 MinFreeGameSlots;
            std::string CommandLineTemplate;
            std::string ExecutablePath;
            std::string Comment;
            time_t Timestamp;
            std::string TitleId;
            Boxed<GameBuildStatus> Status;

            AddServerBuildResult() :
                PlayFabRequestCommon(),
                BuildId(),
                ActiveRegions(),
                MaxGamesPerHost(),
                MinFreeGameSlots(),
                CommandLineTemplate(),
                ExecutablePath(),
                Comment(),
                Timestamp(),
                TitleId(),
                Status()
            {}

            AddServerBuildResult(const AddServerBuildResult& src) :
                PlayFabRequestCommon(),
                BuildId(src.BuildId),
                ActiveRegions(src.ActiveRegions),
                MaxGamesPerHost(src.MaxGamesPerHost),
                MinFreeGameSlots(src.MinFreeGameSlots),
                CommandLineTemplate(src.CommandLineTemplate),
                ExecutablePath(src.ExecutablePath),
                Comment(src.Comment),
                Timestamp(src.Timestamp),
                TitleId(src.TitleId),
                Status(src.Status)
            {}

            ~AddServerBuildResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BuildId")], BuildId);
                FromJsonUtilE(input[U("ActiveRegions")], ActiveRegions);
                FromJsonUtilP(input[U("MaxGamesPerHost")], MaxGamesPerHost);
                FromJsonUtilP(input[U("MinFreeGameSlots")], MinFreeGameSlots);
                FromJsonUtilS(input[U("CommandLineTemplate")], CommandLineTemplate);
                FromJsonUtilS(input[U("ExecutablePath")], ExecutablePath);
                FromJsonUtilS(input[U("Comment")], Comment);
                FromJsonUtilT(input[U("Timestamp")], Timestamp);
                FromJsonUtilS(input[U("TitleId")], TitleId);
                FromJsonUtilE(input[U("Status")], Status);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BuildId; ToJsonUtilS(BuildId, each_BuildId); output[U("BuildId")] = each_BuildId;
                web::json::value each_ActiveRegions; ToJsonUtilE(ActiveRegions, each_ActiveRegions); output[U("ActiveRegions")] = each_ActiveRegions;
                web::json::value each_MaxGamesPerHost; ToJsonUtilP(MaxGamesPerHost, each_MaxGamesPerHost); output[U("MaxGamesPerHost")] = each_MaxGamesPerHost;
                web::json::value each_MinFreeGameSlots; ToJsonUtilP(MinFreeGameSlots, each_MinFreeGameSlots); output[U("MinFreeGameSlots")] = each_MinFreeGameSlots;
                web::json::value each_CommandLineTemplate; ToJsonUtilS(CommandLineTemplate, each_CommandLineTemplate); output[U("CommandLineTemplate")] = each_CommandLineTemplate;
                web::json::value each_ExecutablePath; ToJsonUtilS(ExecutablePath, each_ExecutablePath); output[U("ExecutablePath")] = each_ExecutablePath;
                web::json::value each_Comment; ToJsonUtilS(Comment, each_Comment); output[U("Comment")] = each_Comment;
                web::json::value each_Timestamp; ToJsonUtilT(Timestamp, each_Timestamp); output[U("Timestamp")] = each_Timestamp;
                web::json::value each_TitleId; ToJsonUtilS(TitleId, each_TitleId); output[U("TitleId")] = each_TitleId;
                web::json::value each_Status; ToJsonUtilE(Status, each_Status); output[U("Status")] = each_Status;
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

        struct VirtualCurrencyData : public PlayFabBaseModel
        {
            std::string CurrencyCode;
            std::string DisplayName;
            Boxed<Int32> InitialDeposit;
            Boxed<Int32> RechargeRate;
            Boxed<Int32> RechargeMax;

            VirtualCurrencyData() :
                PlayFabBaseModel(),
                CurrencyCode(),
                DisplayName(),
                InitialDeposit(),
                RechargeRate(),
                RechargeMax()
            {}

            VirtualCurrencyData(const VirtualCurrencyData& src) :
                PlayFabBaseModel(),
                CurrencyCode(src.CurrencyCode),
                DisplayName(src.DisplayName),
                InitialDeposit(src.InitialDeposit),
                RechargeRate(src.RechargeRate),
                RechargeMax(src.RechargeMax)
            {}

            ~VirtualCurrencyData() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CurrencyCode")], CurrencyCode);
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
                FromJsonUtilP(input[U("InitialDeposit")], InitialDeposit);
                FromJsonUtilP(input[U("RechargeRate")], RechargeRate);
                FromJsonUtilP(input[U("RechargeMax")], RechargeMax);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CurrencyCode; ToJsonUtilS(CurrencyCode, each_CurrencyCode); output[U("CurrencyCode")] = each_CurrencyCode;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                web::json::value each_InitialDeposit; ToJsonUtilP(InitialDeposit, each_InitialDeposit); output[U("InitialDeposit")] = each_InitialDeposit;
                web::json::value each_RechargeRate; ToJsonUtilP(RechargeRate, each_RechargeRate); output[U("RechargeRate")] = each_RechargeRate;
                web::json::value each_RechargeMax; ToJsonUtilP(RechargeMax, each_RechargeMax); output[U("RechargeMax")] = each_RechargeMax;
                return output;
            }
        };

        struct AddVirtualCurrencyTypesRequest : public PlayFabRequestCommon
        {
            std::list<VirtualCurrencyData> VirtualCurrencies;

            AddVirtualCurrencyTypesRequest() :
                PlayFabRequestCommon(),
                VirtualCurrencies()
            {}

            AddVirtualCurrencyTypesRequest(const AddVirtualCurrencyTypesRequest& src) :
                PlayFabRequestCommon(),
                VirtualCurrencies(src.VirtualCurrencies)
            {}

            ~AddVirtualCurrencyTypesRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("VirtualCurrencies")], VirtualCurrencies);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_VirtualCurrencies; ToJsonUtilO(VirtualCurrencies, each_VirtualCurrencies); output[U("VirtualCurrencies")] = each_VirtualCurrencies;
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

        struct BlankResult : public PlayFabRequestCommon
        {

            BlankResult() :
                PlayFabRequestCommon()
            {}

            BlankResult(const BlankResult& src) :
                PlayFabRequestCommon()
            {}

            ~BlankResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
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

        struct CloudScriptFile : public PlayFabBaseModel
        {
            std::string Filename;
            std::string FileContents;

            CloudScriptFile() :
                PlayFabBaseModel(),
                Filename(),
                FileContents()
            {}

            CloudScriptFile(const CloudScriptFile& src) :
                PlayFabBaseModel(),
                Filename(src.Filename),
                FileContents(src.FileContents)
            {}

            ~CloudScriptFile() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Filename")], Filename);
                FromJsonUtilS(input[U("FileContents")], FileContents);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Filename; ToJsonUtilS(Filename, each_Filename); output[U("Filename")] = each_Filename;
                web::json::value each_FileContents; ToJsonUtilS(FileContents, each_FileContents); output[U("FileContents")] = each_FileContents;
                return output;
            }
        };

        struct CloudScriptTaskParameter : public PlayFabBaseModel
        {
            std::string FunctionName;
            web::json::value Argument;

            CloudScriptTaskParameter() :
                PlayFabBaseModel(),
                FunctionName(),
                Argument()
            {}

            CloudScriptTaskParameter(const CloudScriptTaskParameter& src) :
                PlayFabBaseModel(),
                FunctionName(src.FunctionName),
                Argument(src.Argument)
            {}

            ~CloudScriptTaskParameter() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("FunctionName")], FunctionName);
                Argument = input[U("Argument")];
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_FunctionName; ToJsonUtilS(FunctionName, each_FunctionName); output[U("FunctionName")] = each_FunctionName;
                output[U("Argument")] = Argument;
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

        struct CloudScriptTaskSummary : public PlayFabBaseModel
        {
            std::string TaskInstanceId;
            Boxed<NameIdentifier> TaskIdentifier;
            time_t StartedAt;
            Boxed<time_t> CompletedAt;
            Boxed<TaskInstanceStatus> Status;
            Boxed<double> PercentComplete;
            Boxed<double> EstimatedSecondsRemaining;
            std::string ScheduledByUserId;
            Boxed<ExecuteCloudScriptResult> Result;

            CloudScriptTaskSummary() :
                PlayFabBaseModel(),
                TaskInstanceId(),
                TaskIdentifier(),
                StartedAt(),
                CompletedAt(),
                Status(),
                PercentComplete(),
                EstimatedSecondsRemaining(),
                ScheduledByUserId(),
                Result()
            {}

            CloudScriptTaskSummary(const CloudScriptTaskSummary& src) :
                PlayFabBaseModel(),
                TaskInstanceId(src.TaskInstanceId),
                TaskIdentifier(src.TaskIdentifier),
                StartedAt(src.StartedAt),
                CompletedAt(src.CompletedAt),
                Status(src.Status),
                PercentComplete(src.PercentComplete),
                EstimatedSecondsRemaining(src.EstimatedSecondsRemaining),
                ScheduledByUserId(src.ScheduledByUserId),
                Result(src.Result)
            {}

            ~CloudScriptTaskSummary() { }

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
                FromJsonUtilO(input[U("Result")], Result);
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
                web::json::value each_Result; ToJsonUtilO(Result, each_Result); output[U("Result")] = each_Result;
                return output;
            }
        };

        struct CloudScriptVersionStatus : public PlayFabBaseModel
        {
            Int32 Version;
            Int32 PublishedRevision;
            Int32 LatestRevision;

            CloudScriptVersionStatus() :
                PlayFabBaseModel(),
                Version(),
                PublishedRevision(),
                LatestRevision()
            {}

            CloudScriptVersionStatus(const CloudScriptVersionStatus& src) :
                PlayFabBaseModel(),
                Version(src.Version),
                PublishedRevision(src.PublishedRevision),
                LatestRevision(src.LatestRevision)
            {}

            ~CloudScriptVersionStatus() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilP(input[U("PublishedRevision")], PublishedRevision);
                FromJsonUtilP(input[U("LatestRevision")], LatestRevision);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_PublishedRevision; ToJsonUtilP(PublishedRevision, each_PublishedRevision); output[U("PublishedRevision")] = each_PublishedRevision;
                web::json::value each_LatestRevision; ToJsonUtilP(LatestRevision, each_LatestRevision); output[U("LatestRevision")] = each_LatestRevision;
                return output;
            }
        };

        struct ContentInfo : public PlayFabBaseModel
        {
            std::string Key;
            Uint32 Size;
            time_t LastModified;

            ContentInfo() :
                PlayFabBaseModel(),
                Key(),
                Size(),
                LastModified()
            {}

            ContentInfo(const ContentInfo& src) :
                PlayFabBaseModel(),
                Key(src.Key),
                Size(src.Size),
                LastModified(src.LastModified)
            {}

            ~ContentInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Key")], Key);
                FromJsonUtilP(input[U("Size")], Size);
                FromJsonUtilT(input[U("LastModified")], LastModified);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Key; ToJsonUtilS(Key, each_Key); output[U("Key")] = each_Key;
                web::json::value each_Size; ToJsonUtilP(Size, each_Size); output[U("Size")] = each_Size;
                web::json::value each_LastModified; ToJsonUtilT(LastModified, each_LastModified); output[U("LastModified")] = each_LastModified;
                return output;
            }
        };

        struct CreateActionsOnPlayerSegmentTaskRequest : public PlayFabRequestCommon
        {
            std::string Name;
            std::string Description;
            std::string Schedule;
            bool IsActive;
            ActionsOnPlayersInSegmentTaskParameter Parameter;

            CreateActionsOnPlayerSegmentTaskRequest() :
                PlayFabRequestCommon(),
                Name(),
                Description(),
                Schedule(),
                IsActive(),
                Parameter()
            {}

            CreateActionsOnPlayerSegmentTaskRequest(const CreateActionsOnPlayerSegmentTaskRequest& src) :
                PlayFabRequestCommon(),
                Name(src.Name),
                Description(src.Description),
                Schedule(src.Schedule),
                IsActive(src.IsActive),
                Parameter(src.Parameter)
            {}

            ~CreateActionsOnPlayerSegmentTaskRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Name")], Name);
                FromJsonUtilS(input[U("Description")], Description);
                FromJsonUtilS(input[U("Schedule")], Schedule);
                FromJsonUtilP(input[U("IsActive")], IsActive);
                FromJsonUtilO(input[U("Parameter")], Parameter);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Name; ToJsonUtilS(Name, each_Name); output[U("Name")] = each_Name;
                web::json::value each_Description; ToJsonUtilS(Description, each_Description); output[U("Description")] = each_Description;
                web::json::value each_Schedule; ToJsonUtilS(Schedule, each_Schedule); output[U("Schedule")] = each_Schedule;
                web::json::value each_IsActive; ToJsonUtilP(IsActive, each_IsActive); output[U("IsActive")] = each_IsActive;
                web::json::value each_Parameter; ToJsonUtilO(Parameter, each_Parameter); output[U("Parameter")] = each_Parameter;
                return output;
            }
        };

        struct CreateCloudScriptTaskRequest : public PlayFabRequestCommon
        {
            std::string Name;
            std::string Description;
            std::string Schedule;
            bool IsActive;
            CloudScriptTaskParameter Parameter;

            CreateCloudScriptTaskRequest() :
                PlayFabRequestCommon(),
                Name(),
                Description(),
                Schedule(),
                IsActive(),
                Parameter()
            {}

            CreateCloudScriptTaskRequest(const CreateCloudScriptTaskRequest& src) :
                PlayFabRequestCommon(),
                Name(src.Name),
                Description(src.Description),
                Schedule(src.Schedule),
                IsActive(src.IsActive),
                Parameter(src.Parameter)
            {}

            ~CreateCloudScriptTaskRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Name")], Name);
                FromJsonUtilS(input[U("Description")], Description);
                FromJsonUtilS(input[U("Schedule")], Schedule);
                FromJsonUtilP(input[U("IsActive")], IsActive);
                FromJsonUtilO(input[U("Parameter")], Parameter);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Name; ToJsonUtilS(Name, each_Name); output[U("Name")] = each_Name;
                web::json::value each_Description; ToJsonUtilS(Description, each_Description); output[U("Description")] = each_Description;
                web::json::value each_Schedule; ToJsonUtilS(Schedule, each_Schedule); output[U("Schedule")] = each_Schedule;
                web::json::value each_IsActive; ToJsonUtilP(IsActive, each_IsActive); output[U("IsActive")] = each_IsActive;
                web::json::value each_Parameter; ToJsonUtilO(Parameter, each_Parameter); output[U("Parameter")] = each_Parameter;
                return output;
            }
        };

        struct CreatePlayerStatisticDefinitionRequest : public PlayFabRequestCommon
        {
            std::string StatisticName;
            Boxed<StatisticResetIntervalOption> VersionChangeInterval;
            Boxed<StatisticAggregationMethod> AggregationMethod;

            CreatePlayerStatisticDefinitionRequest() :
                PlayFabRequestCommon(),
                StatisticName(),
                VersionChangeInterval(),
                AggregationMethod()
            {}

            CreatePlayerStatisticDefinitionRequest(const CreatePlayerStatisticDefinitionRequest& src) :
                PlayFabRequestCommon(),
                StatisticName(src.StatisticName),
                VersionChangeInterval(src.VersionChangeInterval),
                AggregationMethod(src.AggregationMethod)
            {}

            ~CreatePlayerStatisticDefinitionRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilE(input[U("VersionChangeInterval")], VersionChangeInterval);
                FromJsonUtilE(input[U("AggregationMethod")], AggregationMethod);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_VersionChangeInterval; ToJsonUtilE(VersionChangeInterval, each_VersionChangeInterval); output[U("VersionChangeInterval")] = each_VersionChangeInterval;
                web::json::value each_AggregationMethod; ToJsonUtilE(AggregationMethod, each_AggregationMethod); output[U("AggregationMethod")] = each_AggregationMethod;
                return output;
            }
        };

        struct PlayerStatisticDefinition : public PlayFabBaseModel
        {
            std::string StatisticName;
            Uint32 CurrentVersion;
            Boxed<StatisticResetIntervalOption> VersionChangeInterval;
            Boxed<StatisticAggregationMethod> AggregationMethod;

            PlayerStatisticDefinition() :
                PlayFabBaseModel(),
                StatisticName(),
                CurrentVersion(),
                VersionChangeInterval(),
                AggregationMethod()
            {}

            PlayerStatisticDefinition(const PlayerStatisticDefinition& src) :
                PlayFabBaseModel(),
                StatisticName(src.StatisticName),
                CurrentVersion(src.CurrentVersion),
                VersionChangeInterval(src.VersionChangeInterval),
                AggregationMethod(src.AggregationMethod)
            {}

            ~PlayerStatisticDefinition() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilP(input[U("CurrentVersion")], CurrentVersion);
                FromJsonUtilE(input[U("VersionChangeInterval")], VersionChangeInterval);
                FromJsonUtilE(input[U("AggregationMethod")], AggregationMethod);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_CurrentVersion; ToJsonUtilP(CurrentVersion, each_CurrentVersion); output[U("CurrentVersion")] = each_CurrentVersion;
                web::json::value each_VersionChangeInterval; ToJsonUtilE(VersionChangeInterval, each_VersionChangeInterval); output[U("VersionChangeInterval")] = each_VersionChangeInterval;
                web::json::value each_AggregationMethod; ToJsonUtilE(AggregationMethod, each_AggregationMethod); output[U("AggregationMethod")] = each_AggregationMethod;
                return output;
            }
        };

        struct CreatePlayerStatisticDefinitionResult : public PlayFabRequestCommon
        {
            Boxed<PlayerStatisticDefinition> Statistic;

            CreatePlayerStatisticDefinitionResult() :
                PlayFabRequestCommon(),
                Statistic()
            {}

            CreatePlayerStatisticDefinitionResult(const CreatePlayerStatisticDefinitionResult& src) :
                PlayFabRequestCommon(),
                Statistic(src.Statistic)
            {}

            ~CreatePlayerStatisticDefinitionResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Statistic")], Statistic);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Statistic; ToJsonUtilO(Statistic, each_Statistic); output[U("Statistic")] = each_Statistic;
                return output;
            }
        };

        struct CreateTaskResult : public PlayFabRequestCommon
        {
            std::string TaskId;

            CreateTaskResult() :
                PlayFabRequestCommon(),
                TaskId()
            {}

            CreateTaskResult(const CreateTaskResult& src) :
                PlayFabRequestCommon(),
                TaskId(src.TaskId)
            {}

            ~CreateTaskResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("TaskId")], TaskId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TaskId; ToJsonUtilS(TaskId, each_TaskId); output[U("TaskId")] = each_TaskId;
                return output;
            }
        };

        struct DeleteContentRequest : public PlayFabRequestCommon
        {
            std::string Key;

            DeleteContentRequest() :
                PlayFabRequestCommon(),
                Key()
            {}

            DeleteContentRequest(const DeleteContentRequest& src) :
                PlayFabRequestCommon(),
                Key(src.Key)
            {}

            ~DeleteContentRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Key")], Key);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Key; ToJsonUtilS(Key, each_Key); output[U("Key")] = each_Key;
                return output;
            }
        };

        struct DeleteStoreRequest : public PlayFabRequestCommon
        {
            std::string CatalogVersion;
            std::string StoreId;

            DeleteStoreRequest() :
                PlayFabRequestCommon(),
                CatalogVersion(),
                StoreId()
            {}

            DeleteStoreRequest(const DeleteStoreRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion),
                StoreId(src.StoreId)
            {}

            ~DeleteStoreRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("StoreId")], StoreId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_StoreId; ToJsonUtilS(StoreId, each_StoreId); output[U("StoreId")] = each_StoreId;
                return output;
            }
        };

        struct DeleteStoreResult : public PlayFabRequestCommon
        {

            DeleteStoreResult() :
                PlayFabRequestCommon()
            {}

            DeleteStoreResult(const DeleteStoreResult& src) :
                PlayFabRequestCommon()
            {}

            ~DeleteStoreResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct DeleteTaskRequest : public PlayFabRequestCommon
        {
            Boxed<NameIdentifier> Identifier;

            DeleteTaskRequest() :
                PlayFabRequestCommon(),
                Identifier()
            {}

            DeleteTaskRequest(const DeleteTaskRequest& src) :
                PlayFabRequestCommon(),
                Identifier(src.Identifier)
            {}

            ~DeleteTaskRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Identifier")], Identifier);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Identifier; ToJsonUtilO(Identifier, each_Identifier); output[U("Identifier")] = each_Identifier;
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

        struct GameModeInfo : public PlayFabBaseModel
        {
            std::string Gamemode;
            Uint32 MinPlayerCount;
            Uint32 MaxPlayerCount;
            Boxed<bool> StartOpen;

            GameModeInfo() :
                PlayFabBaseModel(),
                Gamemode(),
                MinPlayerCount(),
                MaxPlayerCount(),
                StartOpen()
            {}

            GameModeInfo(const GameModeInfo& src) :
                PlayFabBaseModel(),
                Gamemode(src.Gamemode),
                MinPlayerCount(src.MinPlayerCount),
                MaxPlayerCount(src.MaxPlayerCount),
                StartOpen(src.StartOpen)
            {}

            ~GameModeInfo() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Gamemode")], Gamemode);
                FromJsonUtilP(input[U("MinPlayerCount")], MinPlayerCount);
                FromJsonUtilP(input[U("MaxPlayerCount")], MaxPlayerCount);
                FromJsonUtilP(input[U("StartOpen")], StartOpen);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Gamemode; ToJsonUtilS(Gamemode, each_Gamemode); output[U("Gamemode")] = each_Gamemode;
                web::json::value each_MinPlayerCount; ToJsonUtilP(MinPlayerCount, each_MinPlayerCount); output[U("MinPlayerCount")] = each_MinPlayerCount;
                web::json::value each_MaxPlayerCount; ToJsonUtilP(MaxPlayerCount, each_MaxPlayerCount); output[U("MaxPlayerCount")] = each_MaxPlayerCount;
                web::json::value each_StartOpen; ToJsonUtilP(StartOpen, each_StartOpen); output[U("StartOpen")] = each_StartOpen;
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

        struct GetActionsOnPlayersInSegmentTaskInstanceResult : public PlayFabRequestCommon
        {
            Boxed<ActionsOnPlayersInSegmentTaskSummary> Summary;
            Boxed<ActionsOnPlayersInSegmentTaskParameter> Parameter;

            GetActionsOnPlayersInSegmentTaskInstanceResult() :
                PlayFabRequestCommon(),
                Summary(),
                Parameter()
            {}

            GetActionsOnPlayersInSegmentTaskInstanceResult(const GetActionsOnPlayersInSegmentTaskInstanceResult& src) :
                PlayFabRequestCommon(),
                Summary(src.Summary),
                Parameter(src.Parameter)
            {}

            ~GetActionsOnPlayersInSegmentTaskInstanceResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Summary")], Summary);
                FromJsonUtilO(input[U("Parameter")], Parameter);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Summary; ToJsonUtilO(Summary, each_Summary); output[U("Summary")] = each_Summary;
                web::json::value each_Parameter; ToJsonUtilO(Parameter, each_Parameter); output[U("Parameter")] = each_Parameter;
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

        struct GetCloudScriptRevisionRequest : public PlayFabRequestCommon
        {
            Boxed<Int32> Version;
            Boxed<Int32> Revision;

            GetCloudScriptRevisionRequest() :
                PlayFabRequestCommon(),
                Version(),
                Revision()
            {}

            GetCloudScriptRevisionRequest(const GetCloudScriptRevisionRequest& src) :
                PlayFabRequestCommon(),
                Version(src.Version),
                Revision(src.Revision)
            {}

            ~GetCloudScriptRevisionRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilP(input[U("Revision")], Revision);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_Revision; ToJsonUtilP(Revision, each_Revision); output[U("Revision")] = each_Revision;
                return output;
            }
        };

        struct GetCloudScriptRevisionResult : public PlayFabRequestCommon
        {
            Int32 Version;
            Int32 Revision;
            time_t CreatedAt;
            std::list<CloudScriptFile> Files;
            bool IsPublished;

            GetCloudScriptRevisionResult() :
                PlayFabRequestCommon(),
                Version(),
                Revision(),
                CreatedAt(),
                Files(),
                IsPublished()
            {}

            GetCloudScriptRevisionResult(const GetCloudScriptRevisionResult& src) :
                PlayFabRequestCommon(),
                Version(src.Version),
                Revision(src.Revision),
                CreatedAt(src.CreatedAt),
                Files(src.Files),
                IsPublished(src.IsPublished)
            {}

            ~GetCloudScriptRevisionResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilP(input[U("Revision")], Revision);
                FromJsonUtilT(input[U("CreatedAt")], CreatedAt);
                FromJsonUtilO(input[U("Files")], Files);
                FromJsonUtilP(input[U("IsPublished")], IsPublished);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_Revision; ToJsonUtilP(Revision, each_Revision); output[U("Revision")] = each_Revision;
                web::json::value each_CreatedAt; ToJsonUtilT(CreatedAt, each_CreatedAt); output[U("CreatedAt")] = each_CreatedAt;
                web::json::value each_Files; ToJsonUtilO(Files, each_Files); output[U("Files")] = each_Files;
                web::json::value each_IsPublished; ToJsonUtilP(IsPublished, each_IsPublished); output[U("IsPublished")] = each_IsPublished;
                return output;
            }
        };

        struct GetCloudScriptTaskInstanceResult : public PlayFabRequestCommon
        {
            Boxed<CloudScriptTaskSummary> Summary;
            Boxed<CloudScriptTaskParameter> Parameter;

            GetCloudScriptTaskInstanceResult() :
                PlayFabRequestCommon(),
                Summary(),
                Parameter()
            {}

            GetCloudScriptTaskInstanceResult(const GetCloudScriptTaskInstanceResult& src) :
                PlayFabRequestCommon(),
                Summary(src.Summary),
                Parameter(src.Parameter)
            {}

            ~GetCloudScriptTaskInstanceResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Summary")], Summary);
                FromJsonUtilO(input[U("Parameter")], Parameter);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Summary; ToJsonUtilO(Summary, each_Summary); output[U("Summary")] = each_Summary;
                web::json::value each_Parameter; ToJsonUtilO(Parameter, each_Parameter); output[U("Parameter")] = each_Parameter;
                return output;
            }
        };

        struct GetCloudScriptVersionsRequest : public PlayFabRequestCommon
        {

            GetCloudScriptVersionsRequest() :
                PlayFabRequestCommon()
            {}

            GetCloudScriptVersionsRequest(const GetCloudScriptVersionsRequest& src) :
                PlayFabRequestCommon()
            {}

            ~GetCloudScriptVersionsRequest() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct GetCloudScriptVersionsResult : public PlayFabRequestCommon
        {
            std::list<CloudScriptVersionStatus> Versions;

            GetCloudScriptVersionsResult() :
                PlayFabRequestCommon(),
                Versions()
            {}

            GetCloudScriptVersionsResult(const GetCloudScriptVersionsResult& src) :
                PlayFabRequestCommon(),
                Versions(src.Versions)
            {}

            ~GetCloudScriptVersionsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Versions")], Versions);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Versions; ToJsonUtilO(Versions, each_Versions); output[U("Versions")] = each_Versions;
                return output;
            }
        };

        struct GetContentListRequest : public PlayFabRequestCommon
        {
            std::string Prefix;

            GetContentListRequest() :
                PlayFabRequestCommon(),
                Prefix()
            {}

            GetContentListRequest(const GetContentListRequest& src) :
                PlayFabRequestCommon(),
                Prefix(src.Prefix)
            {}

            ~GetContentListRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Prefix")], Prefix);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Prefix; ToJsonUtilS(Prefix, each_Prefix); output[U("Prefix")] = each_Prefix;
                return output;
            }
        };

        struct GetContentListResult : public PlayFabRequestCommon
        {
            Int32 ItemCount;
            Uint32 TotalSize;
            std::list<ContentInfo> Contents;

            GetContentListResult() :
                PlayFabRequestCommon(),
                ItemCount(),
                TotalSize(),
                Contents()
            {}

            GetContentListResult(const GetContentListResult& src) :
                PlayFabRequestCommon(),
                ItemCount(src.ItemCount),
                TotalSize(src.TotalSize),
                Contents(src.Contents)
            {}

            ~GetContentListResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("ItemCount")], ItemCount);
                FromJsonUtilP(input[U("TotalSize")], TotalSize);
                FromJsonUtilO(input[U("Contents")], Contents);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ItemCount; ToJsonUtilP(ItemCount, each_ItemCount); output[U("ItemCount")] = each_ItemCount;
                web::json::value each_TotalSize; ToJsonUtilP(TotalSize, each_TotalSize); output[U("TotalSize")] = each_TotalSize;
                web::json::value each_Contents; ToJsonUtilO(Contents, each_Contents); output[U("Contents")] = each_Contents;
                return output;
            }
        };

        struct GetContentUploadUrlRequest : public PlayFabRequestCommon
        {
            std::string Key;
            std::string ContentType;

            GetContentUploadUrlRequest() :
                PlayFabRequestCommon(),
                Key(),
                ContentType()
            {}

            GetContentUploadUrlRequest(const GetContentUploadUrlRequest& src) :
                PlayFabRequestCommon(),
                Key(src.Key),
                ContentType(src.ContentType)
            {}

            ~GetContentUploadUrlRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Key")], Key);
                FromJsonUtilS(input[U("ContentType")], ContentType);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Key; ToJsonUtilS(Key, each_Key); output[U("Key")] = each_Key;
                web::json::value each_ContentType; ToJsonUtilS(ContentType, each_ContentType); output[U("ContentType")] = each_ContentType;
                return output;
            }
        };

        struct GetContentUploadUrlResult : public PlayFabRequestCommon
        {
            std::string URL;

            GetContentUploadUrlResult() :
                PlayFabRequestCommon(),
                URL()
            {}

            GetContentUploadUrlResult(const GetContentUploadUrlResult& src) :
                PlayFabRequestCommon(),
                URL(src.URL)
            {}

            ~GetContentUploadUrlResult() { }

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

        struct GetDataReportRequest : public PlayFabRequestCommon
        {
            std::string ReportName;
            Int32 Year;
            Int32 Month;
            Int32 Day;

            GetDataReportRequest() :
                PlayFabRequestCommon(),
                ReportName(),
                Year(),
                Month(),
                Day()
            {}

            GetDataReportRequest(const GetDataReportRequest& src) :
                PlayFabRequestCommon(),
                ReportName(src.ReportName),
                Year(src.Year),
                Month(src.Month),
                Day(src.Day)
            {}

            ~GetDataReportRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("ReportName")], ReportName);
                FromJsonUtilP(input[U("Year")], Year);
                FromJsonUtilP(input[U("Month")], Month);
                FromJsonUtilP(input[U("Day")], Day);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ReportName; ToJsonUtilS(ReportName, each_ReportName); output[U("ReportName")] = each_ReportName;
                web::json::value each_Year; ToJsonUtilP(Year, each_Year); output[U("Year")] = each_Year;
                web::json::value each_Month; ToJsonUtilP(Month, each_Month); output[U("Month")] = each_Month;
                web::json::value each_Day; ToJsonUtilP(Day, each_Day); output[U("Day")] = each_Day;
                return output;
            }
        };

        struct GetDataReportResult : public PlayFabRequestCommon
        {
            std::string DownloadUrl;

            GetDataReportResult() :
                PlayFabRequestCommon(),
                DownloadUrl()
            {}

            GetDataReportResult(const GetDataReportResult& src) :
                PlayFabRequestCommon(),
                DownloadUrl(src.DownloadUrl)
            {}

            ~GetDataReportResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("DownloadUrl")], DownloadUrl);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_DownloadUrl; ToJsonUtilS(DownloadUrl, each_DownloadUrl); output[U("DownloadUrl")] = each_DownloadUrl;
                return output;
            }
        };

        struct GetMatchmakerGameInfoRequest : public PlayFabRequestCommon
        {
            std::string LobbyId;

            GetMatchmakerGameInfoRequest() :
                PlayFabRequestCommon(),
                LobbyId()
            {}

            GetMatchmakerGameInfoRequest(const GetMatchmakerGameInfoRequest& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId)
            {}

            ~GetMatchmakerGameInfoRequest() { }

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

        struct GetMatchmakerGameInfoResult : public PlayFabRequestCommon
        {
            std::string LobbyId;
            std::string TitleId;
            time_t StartTime;
            Boxed<time_t> EndTime;
            std::string Mode;
            std::string BuildVersion;
            Boxed<Region> pfRegion;
            std::list<std::string> Players;
            std::string ServerAddress;
            Uint32 ServerPort;

            GetMatchmakerGameInfoResult() :
                PlayFabRequestCommon(),
                LobbyId(),
                TitleId(),
                StartTime(),
                EndTime(),
                Mode(),
                BuildVersion(),
                pfRegion(),
                Players(),
                ServerAddress(),
                ServerPort()
            {}

            GetMatchmakerGameInfoResult(const GetMatchmakerGameInfoResult& src) :
                PlayFabRequestCommon(),
                LobbyId(src.LobbyId),
                TitleId(src.TitleId),
                StartTime(src.StartTime),
                EndTime(src.EndTime),
                Mode(src.Mode),
                BuildVersion(src.BuildVersion),
                pfRegion(src.pfRegion),
                Players(src.Players),
                ServerAddress(src.ServerAddress),
                ServerPort(src.ServerPort)
            {}

            ~GetMatchmakerGameInfoResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("LobbyId")], LobbyId);
                FromJsonUtilS(input[U("TitleId")], TitleId);
                FromJsonUtilT(input[U("StartTime")], StartTime);
                FromJsonUtilT(input[U("EndTime")], EndTime);
                FromJsonUtilS(input[U("Mode")], Mode);
                FromJsonUtilS(input[U("BuildVersion")], BuildVersion);
                FromJsonUtilE(input[U("pfRegion")], pfRegion);
                FromJsonUtilS(input[U("Players")], Players);
                FromJsonUtilS(input[U("ServerAddress")], ServerAddress);
                FromJsonUtilP(input[U("ServerPort")], ServerPort);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_LobbyId; ToJsonUtilS(LobbyId, each_LobbyId); output[U("LobbyId")] = each_LobbyId;
                web::json::value each_TitleId; ToJsonUtilS(TitleId, each_TitleId); output[U("TitleId")] = each_TitleId;
                web::json::value each_StartTime; ToJsonUtilT(StartTime, each_StartTime); output[U("StartTime")] = each_StartTime;
                web::json::value each_EndTime; ToJsonUtilT(EndTime, each_EndTime); output[U("EndTime")] = each_EndTime;
                web::json::value each_Mode; ToJsonUtilS(Mode, each_Mode); output[U("Mode")] = each_Mode;
                web::json::value each_BuildVersion; ToJsonUtilS(BuildVersion, each_BuildVersion); output[U("BuildVersion")] = each_BuildVersion;
                web::json::value each_pfRegion; ToJsonUtilE(pfRegion, each_pfRegion); output[U("Region")] = each_pfRegion;
                web::json::value each_Players; ToJsonUtilS(Players, each_Players); output[U("Players")] = each_Players;
                web::json::value each_ServerAddress; ToJsonUtilS(ServerAddress, each_ServerAddress); output[U("ServerAddress")] = each_ServerAddress;
                web::json::value each_ServerPort; ToJsonUtilP(ServerPort, each_ServerPort); output[U("ServerPort")] = each_ServerPort;
                return output;
            }
        };

        struct GetMatchmakerGameModesRequest : public PlayFabRequestCommon
        {
            std::string BuildVersion;

            GetMatchmakerGameModesRequest() :
                PlayFabRequestCommon(),
                BuildVersion()
            {}

            GetMatchmakerGameModesRequest(const GetMatchmakerGameModesRequest& src) :
                PlayFabRequestCommon(),
                BuildVersion(src.BuildVersion)
            {}

            ~GetMatchmakerGameModesRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BuildVersion")], BuildVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BuildVersion; ToJsonUtilS(BuildVersion, each_BuildVersion); output[U("BuildVersion")] = each_BuildVersion;
                return output;
            }
        };

        struct GetMatchmakerGameModesResult : public PlayFabRequestCommon
        {
            std::list<GameModeInfo> GameModes;

            GetMatchmakerGameModesResult() :
                PlayFabRequestCommon(),
                GameModes()
            {}

            GetMatchmakerGameModesResult(const GetMatchmakerGameModesResult& src) :
                PlayFabRequestCommon(),
                GameModes(src.GameModes)
            {}

            ~GetMatchmakerGameModesResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("GameModes")], GameModes);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_GameModes; ToJsonUtilO(GameModes, each_GameModes); output[U("GameModes")] = each_GameModes;
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

        struct GetPlayerStatisticDefinitionsRequest : public PlayFabRequestCommon
        {

            GetPlayerStatisticDefinitionsRequest() :
                PlayFabRequestCommon()
            {}

            GetPlayerStatisticDefinitionsRequest(const GetPlayerStatisticDefinitionsRequest& src) :
                PlayFabRequestCommon()
            {}

            ~GetPlayerStatisticDefinitionsRequest() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct GetPlayerStatisticDefinitionsResult : public PlayFabRequestCommon
        {
            std::list<PlayerStatisticDefinition> Statistics;

            GetPlayerStatisticDefinitionsResult() :
                PlayFabRequestCommon(),
                Statistics()
            {}

            GetPlayerStatisticDefinitionsResult(const GetPlayerStatisticDefinitionsResult& src) :
                PlayFabRequestCommon(),
                Statistics(src.Statistics)
            {}

            ~GetPlayerStatisticDefinitionsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Statistics")], Statistics);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
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
            Boxed<StatisticVersionArchivalStatus> ArchivalStatus;
            std::string ArchiveDownloadUrl;

            PlayerStatisticVersion() :
                PlayFabBaseModel(),
                StatisticName(),
                Version(),
                ScheduledActivationTime(),
                ActivationTime(),
                ScheduledDeactivationTime(),
                DeactivationTime(),
                ArchivalStatus(),
                ArchiveDownloadUrl()
            {}

            PlayerStatisticVersion(const PlayerStatisticVersion& src) :
                PlayFabBaseModel(),
                StatisticName(src.StatisticName),
                Version(src.Version),
                ScheduledActivationTime(src.ScheduledActivationTime),
                ActivationTime(src.ActivationTime),
                ScheduledDeactivationTime(src.ScheduledDeactivationTime),
                DeactivationTime(src.DeactivationTime),
                ArchivalStatus(src.ArchivalStatus),
                ArchiveDownloadUrl(src.ArchiveDownloadUrl)
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
                FromJsonUtilE(input[U("ArchivalStatus")], ArchivalStatus);
                FromJsonUtilS(input[U("ArchiveDownloadUrl")], ArchiveDownloadUrl);
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
                web::json::value each_ArchivalStatus; ToJsonUtilE(ArchivalStatus, each_ArchivalStatus); output[U("ArchivalStatus")] = each_ArchivalStatus;
                web::json::value each_ArchiveDownloadUrl; ToJsonUtilS(ArchiveDownloadUrl, each_ArchiveDownloadUrl); output[U("ArchiveDownloadUrl")] = each_ArchiveDownloadUrl;
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

        struct GetPolicyRequest : public PlayFabRequestCommon
        {
            std::string PolicyName;

            GetPolicyRequest() :
                PlayFabRequestCommon(),
                PolicyName()
            {}

            GetPolicyRequest(const GetPolicyRequest& src) :
                PlayFabRequestCommon(),
                PolicyName(src.PolicyName)
            {}

            ~GetPolicyRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PolicyName")], PolicyName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PolicyName; ToJsonUtilS(PolicyName, each_PolicyName); output[U("PolicyName")] = each_PolicyName;
                return output;
            }
        };

        struct PermissionStatement : public PlayFabBaseModel
        {
            std::string Resource;
            std::string Action;
            EffectType Effect;
            std::string Principal;
            std::string Comment;

            PermissionStatement() :
                PlayFabBaseModel(),
                Resource(),
                Action(),
                Effect(),
                Principal(),
                Comment()
            {}

            PermissionStatement(const PermissionStatement& src) :
                PlayFabBaseModel(),
                Resource(src.Resource),
                Action(src.Action),
                Effect(src.Effect),
                Principal(src.Principal),
                Comment(src.Comment)
            {}

            ~PermissionStatement() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Resource")], Resource);
                FromJsonUtilS(input[U("Action")], Action);
                FromJsonEnum(input[U("Effect")], Effect);
                FromJsonUtilS(input[U("Principal")], Principal);
                FromJsonUtilS(input[U("Comment")], Comment);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Resource; ToJsonUtilS(Resource, each_Resource); output[U("Resource")] = each_Resource;
                web::json::value each_Action; ToJsonUtilS(Action, each_Action); output[U("Action")] = each_Action;
                web::json::value each_Effect; ToJsonEnum(Effect, each_Effect); output[U("Effect")] = each_Effect;
                web::json::value each_Principal; ToJsonUtilS(Principal, each_Principal); output[U("Principal")] = each_Principal;
                web::json::value each_Comment; ToJsonUtilS(Comment, each_Comment); output[U("Comment")] = each_Comment;
                return output;
            }
        };

        struct GetPolicyResponse : public PlayFabRequestCommon
        {
            std::string PolicyName;
            std::list<PermissionStatement> Statements;

            GetPolicyResponse() :
                PlayFabRequestCommon(),
                PolicyName(),
                Statements()
            {}

            GetPolicyResponse(const GetPolicyResponse& src) :
                PlayFabRequestCommon(),
                PolicyName(src.PolicyName),
                Statements(src.Statements)
            {}

            ~GetPolicyResponse() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PolicyName")], PolicyName);
                FromJsonUtilO(input[U("Statements")], Statements);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PolicyName; ToJsonUtilS(PolicyName, each_PolicyName); output[U("PolicyName")] = each_PolicyName;
                web::json::value each_Statements; ToJsonUtilO(Statements, each_Statements); output[U("Statements")] = each_Statements;
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

            GetRandomResultTablesRequest() :
                PlayFabRequestCommon(),
                CatalogVersion()
            {}

            GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion)
            {}

            ~GetRandomResultTablesRequest() { }

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

        struct GetServerBuildInfoRequest : public PlayFabRequestCommon
        {
            std::string BuildId;

            GetServerBuildInfoRequest() :
                PlayFabRequestCommon(),
                BuildId()
            {}

            GetServerBuildInfoRequest(const GetServerBuildInfoRequest& src) :
                PlayFabRequestCommon(),
                BuildId(src.BuildId)
            {}

            ~GetServerBuildInfoRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BuildId")], BuildId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BuildId; ToJsonUtilS(BuildId, each_BuildId); output[U("BuildId")] = each_BuildId;
                return output;
            }
        };

        struct GetServerBuildInfoResult : public PlayFabRequestCommon
        {
            std::string BuildId;
            std::list<Region> ActiveRegions;
            Int32 MaxGamesPerHost;
            Int32 MinFreeGameSlots;
            std::string Comment;
            time_t Timestamp;
            std::string TitleId;
            Boxed<GameBuildStatus> Status;
            std::string ErrorMessage;

            GetServerBuildInfoResult() :
                PlayFabRequestCommon(),
                BuildId(),
                ActiveRegions(),
                MaxGamesPerHost(),
                MinFreeGameSlots(),
                Comment(),
                Timestamp(),
                TitleId(),
                Status(),
                ErrorMessage()
            {}

            GetServerBuildInfoResult(const GetServerBuildInfoResult& src) :
                PlayFabRequestCommon(),
                BuildId(src.BuildId),
                ActiveRegions(src.ActiveRegions),
                MaxGamesPerHost(src.MaxGamesPerHost),
                MinFreeGameSlots(src.MinFreeGameSlots),
                Comment(src.Comment),
                Timestamp(src.Timestamp),
                TitleId(src.TitleId),
                Status(src.Status),
                ErrorMessage(src.ErrorMessage)
            {}

            ~GetServerBuildInfoResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BuildId")], BuildId);
                FromJsonUtilE(input[U("ActiveRegions")], ActiveRegions);
                FromJsonUtilP(input[U("MaxGamesPerHost")], MaxGamesPerHost);
                FromJsonUtilP(input[U("MinFreeGameSlots")], MinFreeGameSlots);
                FromJsonUtilS(input[U("Comment")], Comment);
                FromJsonUtilT(input[U("Timestamp")], Timestamp);
                FromJsonUtilS(input[U("TitleId")], TitleId);
                FromJsonUtilE(input[U("Status")], Status);
                FromJsonUtilS(input[U("ErrorMessage")], ErrorMessage);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BuildId; ToJsonUtilS(BuildId, each_BuildId); output[U("BuildId")] = each_BuildId;
                web::json::value each_ActiveRegions; ToJsonUtilE(ActiveRegions, each_ActiveRegions); output[U("ActiveRegions")] = each_ActiveRegions;
                web::json::value each_MaxGamesPerHost; ToJsonUtilP(MaxGamesPerHost, each_MaxGamesPerHost); output[U("MaxGamesPerHost")] = each_MaxGamesPerHost;
                web::json::value each_MinFreeGameSlots; ToJsonUtilP(MinFreeGameSlots, each_MinFreeGameSlots); output[U("MinFreeGameSlots")] = each_MinFreeGameSlots;
                web::json::value each_Comment; ToJsonUtilS(Comment, each_Comment); output[U("Comment")] = each_Comment;
                web::json::value each_Timestamp; ToJsonUtilT(Timestamp, each_Timestamp); output[U("Timestamp")] = each_Timestamp;
                web::json::value each_TitleId; ToJsonUtilS(TitleId, each_TitleId); output[U("TitleId")] = each_TitleId;
                web::json::value each_Status; ToJsonUtilE(Status, each_Status); output[U("Status")] = each_Status;
                web::json::value each_ErrorMessage; ToJsonUtilS(ErrorMessage, each_ErrorMessage); output[U("ErrorMessage")] = each_ErrorMessage;
                return output;
            }
        };

        struct GetServerBuildUploadURLRequest : public PlayFabRequestCommon
        {
            std::string BuildId;

            GetServerBuildUploadURLRequest() :
                PlayFabRequestCommon(),
                BuildId()
            {}

            GetServerBuildUploadURLRequest(const GetServerBuildUploadURLRequest& src) :
                PlayFabRequestCommon(),
                BuildId(src.BuildId)
            {}

            ~GetServerBuildUploadURLRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BuildId")], BuildId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BuildId; ToJsonUtilS(BuildId, each_BuildId); output[U("BuildId")] = each_BuildId;
                return output;
            }
        };

        struct GetServerBuildUploadURLResult : public PlayFabRequestCommon
        {
            std::string URL;

            GetServerBuildUploadURLResult() :
                PlayFabRequestCommon(),
                URL()
            {}

            GetServerBuildUploadURLResult(const GetServerBuildUploadURLResult& src) :
                PlayFabRequestCommon(),
                URL(src.URL)
            {}

            ~GetServerBuildUploadURLResult() { }

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

        struct GetStoreItemsRequest : public PlayFabRequestCommon
        {
            std::string CatalogVersion;
            std::string StoreId;

            GetStoreItemsRequest() :
                PlayFabRequestCommon(),
                CatalogVersion(),
                StoreId()
            {}

            GetStoreItemsRequest(const GetStoreItemsRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion),
                StoreId(src.StoreId)
            {}

            ~GetStoreItemsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("StoreId")], StoreId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_StoreId; ToJsonUtilS(StoreId, each_StoreId); output[U("StoreId")] = each_StoreId;
                return output;
            }
        };

        struct StoreItem : public PlayFabBaseModel
        {
            std::string ItemId;
            std::map<std::string, Uint32> VirtualCurrencyPrices;
            std::map<std::string, Uint32> RealCurrencyPrices;
            web::json::value CustomData;
            Boxed<Uint32> DisplayPosition;

            StoreItem() :
                PlayFabBaseModel(),
                ItemId(),
                VirtualCurrencyPrices(),
                RealCurrencyPrices(),
                CustomData(),
                DisplayPosition()
            {}

            StoreItem(const StoreItem& src) :
                PlayFabBaseModel(),
                ItemId(src.ItemId),
                VirtualCurrencyPrices(src.VirtualCurrencyPrices),
                RealCurrencyPrices(src.RealCurrencyPrices),
                CustomData(src.CustomData),
                DisplayPosition(src.DisplayPosition)
            {}

            ~StoreItem() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("ItemId")], ItemId);
                FromJsonUtilP(input[U("VirtualCurrencyPrices")], VirtualCurrencyPrices);
                FromJsonUtilP(input[U("RealCurrencyPrices")], RealCurrencyPrices);
                CustomData = input[U("CustomData")];
                FromJsonUtilP(input[U("DisplayPosition")], DisplayPosition);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ItemId; ToJsonUtilS(ItemId, each_ItemId); output[U("ItemId")] = each_ItemId;
                web::json::value each_VirtualCurrencyPrices; ToJsonUtilP(VirtualCurrencyPrices, each_VirtualCurrencyPrices); output[U("VirtualCurrencyPrices")] = each_VirtualCurrencyPrices;
                web::json::value each_RealCurrencyPrices; ToJsonUtilP(RealCurrencyPrices, each_RealCurrencyPrices); output[U("RealCurrencyPrices")] = each_RealCurrencyPrices;
                output[U("CustomData")] = CustomData;
                web::json::value each_DisplayPosition; ToJsonUtilP(DisplayPosition, each_DisplayPosition); output[U("DisplayPosition")] = each_DisplayPosition;
                return output;
            }
        };

        struct StoreMarketingModel : public PlayFabBaseModel
        {
            std::string DisplayName;
            std::string Description;
            web::json::value Metadata;

            StoreMarketingModel() :
                PlayFabBaseModel(),
                DisplayName(),
                Description(),
                Metadata()
            {}

            StoreMarketingModel(const StoreMarketingModel& src) :
                PlayFabBaseModel(),
                DisplayName(src.DisplayName),
                Description(src.Description),
                Metadata(src.Metadata)
            {}

            ~StoreMarketingModel() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
                FromJsonUtilS(input[U("Description")], Description);
                Metadata = input[U("Metadata")];
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                web::json::value each_Description; ToJsonUtilS(Description, each_Description); output[U("Description")] = each_Description;
                output[U("Metadata")] = Metadata;
                return output;
            }
        };

        struct GetStoreItemsResult : public PlayFabRequestCommon
        {
            std::list<StoreItem> Store;
            Boxed<SourceType> Source;
            std::string CatalogVersion;
            std::string StoreId;
            Boxed<StoreMarketingModel> MarketingData;

            GetStoreItemsResult() :
                PlayFabRequestCommon(),
                Store(),
                Source(),
                CatalogVersion(),
                StoreId(),
                MarketingData()
            {}

            GetStoreItemsResult(const GetStoreItemsResult& src) :
                PlayFabRequestCommon(),
                Store(src.Store),
                Source(src.Source),
                CatalogVersion(src.CatalogVersion),
                StoreId(src.StoreId),
                MarketingData(src.MarketingData)
            {}

            ~GetStoreItemsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Store")], Store);
                FromJsonUtilE(input[U("Source")], Source);
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("StoreId")], StoreId);
                FromJsonUtilO(input[U("MarketingData")], MarketingData);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Store; ToJsonUtilO(Store, each_Store); output[U("Store")] = each_Store;
                web::json::value each_Source; ToJsonUtilE(Source, each_Source); output[U("Source")] = each_Source;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_StoreId; ToJsonUtilS(StoreId, each_StoreId); output[U("StoreId")] = each_StoreId;
                web::json::value each_MarketingData; ToJsonUtilO(MarketingData, each_MarketingData); output[U("MarketingData")] = each_MarketingData;
                return output;
            }
        };

        struct GetTaskInstanceRequest : public PlayFabRequestCommon
        {
            std::string TaskInstanceId;

            GetTaskInstanceRequest() :
                PlayFabRequestCommon(),
                TaskInstanceId()
            {}

            GetTaskInstanceRequest(const GetTaskInstanceRequest& src) :
                PlayFabRequestCommon(),
                TaskInstanceId(src.TaskInstanceId)
            {}

            ~GetTaskInstanceRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("TaskInstanceId")], TaskInstanceId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TaskInstanceId; ToJsonUtilS(TaskInstanceId, each_TaskInstanceId); output[U("TaskInstanceId")] = each_TaskInstanceId;
                return output;
            }
        };

        struct GetTaskInstancesRequest : public PlayFabRequestCommon
        {
            Boxed<NameIdentifier> TaskIdentifier;
            Boxed<TaskInstanceStatus> StatusFilter;
            Boxed<time_t> StartedAtRangeFrom;
            Boxed<time_t> StartedAtRangeTo;

            GetTaskInstancesRequest() :
                PlayFabRequestCommon(),
                TaskIdentifier(),
                StatusFilter(),
                StartedAtRangeFrom(),
                StartedAtRangeTo()
            {}

            GetTaskInstancesRequest(const GetTaskInstancesRequest& src) :
                PlayFabRequestCommon(),
                TaskIdentifier(src.TaskIdentifier),
                StatusFilter(src.StatusFilter),
                StartedAtRangeFrom(src.StartedAtRangeFrom),
                StartedAtRangeTo(src.StartedAtRangeTo)
            {}

            ~GetTaskInstancesRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("TaskIdentifier")], TaskIdentifier);
                FromJsonUtilE(input[U("StatusFilter")], StatusFilter);
                FromJsonUtilT(input[U("StartedAtRangeFrom")], StartedAtRangeFrom);
                FromJsonUtilT(input[U("StartedAtRangeTo")], StartedAtRangeTo);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TaskIdentifier; ToJsonUtilO(TaskIdentifier, each_TaskIdentifier); output[U("TaskIdentifier")] = each_TaskIdentifier;
                web::json::value each_StatusFilter; ToJsonUtilE(StatusFilter, each_StatusFilter); output[U("StatusFilter")] = each_StatusFilter;
                web::json::value each_StartedAtRangeFrom; ToJsonUtilT(StartedAtRangeFrom, each_StartedAtRangeFrom); output[U("StartedAtRangeFrom")] = each_StartedAtRangeFrom;
                web::json::value each_StartedAtRangeTo; ToJsonUtilT(StartedAtRangeTo, each_StartedAtRangeTo); output[U("StartedAtRangeTo")] = each_StartedAtRangeTo;
                return output;
            }
        };

        struct TaskInstanceBasicSummary : public PlayFabBaseModel
        {
            std::string TaskInstanceId;
            Boxed<NameIdentifier> TaskIdentifier;
            time_t StartedAt;
            Boxed<time_t> CompletedAt;
            Boxed<TaskInstanceStatus> Status;
            Boxed<double> PercentComplete;
            Boxed<double> EstimatedSecondsRemaining;
            std::string ScheduledByUserId;
            Boxed<ScheduledTaskType> Type;

            TaskInstanceBasicSummary() :
                PlayFabBaseModel(),
                TaskInstanceId(),
                TaskIdentifier(),
                StartedAt(),
                CompletedAt(),
                Status(),
                PercentComplete(),
                EstimatedSecondsRemaining(),
                ScheduledByUserId(),
                Type()
            {}

            TaskInstanceBasicSummary(const TaskInstanceBasicSummary& src) :
                PlayFabBaseModel(),
                TaskInstanceId(src.TaskInstanceId),
                TaskIdentifier(src.TaskIdentifier),
                StartedAt(src.StartedAt),
                CompletedAt(src.CompletedAt),
                Status(src.Status),
                PercentComplete(src.PercentComplete),
                EstimatedSecondsRemaining(src.EstimatedSecondsRemaining),
                ScheduledByUserId(src.ScheduledByUserId),
                Type(src.Type)
            {}

            ~TaskInstanceBasicSummary() { }

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
                FromJsonUtilE(input[U("Type")], Type);
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
                web::json::value each_Type; ToJsonUtilE(Type, each_Type); output[U("Type")] = each_Type;
                return output;
            }
        };

        struct GetTaskInstancesResult : public PlayFabRequestCommon
        {
            std::list<TaskInstanceBasicSummary> Summaries;

            GetTaskInstancesResult() :
                PlayFabRequestCommon(),
                Summaries()
            {}

            GetTaskInstancesResult(const GetTaskInstancesResult& src) :
                PlayFabRequestCommon(),
                Summaries(src.Summaries)
            {}

            ~GetTaskInstancesResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Summaries")], Summaries);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Summaries; ToJsonUtilO(Summaries, each_Summaries); output[U("Summaries")] = each_Summaries;
                return output;
            }
        };

        struct GetTasksRequest : public PlayFabRequestCommon
        {
            Boxed<NameIdentifier> Identifier;

            GetTasksRequest() :
                PlayFabRequestCommon(),
                Identifier()
            {}

            GetTasksRequest(const GetTasksRequest& src) :
                PlayFabRequestCommon(),
                Identifier(src.Identifier)
            {}

            ~GetTasksRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Identifier")], Identifier);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Identifier; ToJsonUtilO(Identifier, each_Identifier); output[U("Identifier")] = each_Identifier;
                return output;
            }
        };

        struct ScheduledTask : public PlayFabBaseModel
        {
            std::string TaskId;
            std::string Name;
            std::string Description;
            std::string Schedule;
            bool IsActive;
            Boxed<ScheduledTaskType> Type;
            web::json::value Parameter;
            Boxed<time_t> LastRunTime;
            Boxed<time_t> NextRunTime;

            ScheduledTask() :
                PlayFabBaseModel(),
                TaskId(),
                Name(),
                Description(),
                Schedule(),
                IsActive(),
                Type(),
                Parameter(),
                LastRunTime(),
                NextRunTime()
            {}

            ScheduledTask(const ScheduledTask& src) :
                PlayFabBaseModel(),
                TaskId(src.TaskId),
                Name(src.Name),
                Description(src.Description),
                Schedule(src.Schedule),
                IsActive(src.IsActive),
                Type(src.Type),
                Parameter(src.Parameter),
                LastRunTime(src.LastRunTime),
                NextRunTime(src.NextRunTime)
            {}

            ~ScheduledTask() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("TaskId")], TaskId);
                FromJsonUtilS(input[U("Name")], Name);
                FromJsonUtilS(input[U("Description")], Description);
                FromJsonUtilS(input[U("Schedule")], Schedule);
                FromJsonUtilP(input[U("IsActive")], IsActive);
                FromJsonUtilE(input[U("Type")], Type);
                Parameter = input[U("Parameter")];
                FromJsonUtilT(input[U("LastRunTime")], LastRunTime);
                FromJsonUtilT(input[U("NextRunTime")], NextRunTime);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TaskId; ToJsonUtilS(TaskId, each_TaskId); output[U("TaskId")] = each_TaskId;
                web::json::value each_Name; ToJsonUtilS(Name, each_Name); output[U("Name")] = each_Name;
                web::json::value each_Description; ToJsonUtilS(Description, each_Description); output[U("Description")] = each_Description;
                web::json::value each_Schedule; ToJsonUtilS(Schedule, each_Schedule); output[U("Schedule")] = each_Schedule;
                web::json::value each_IsActive; ToJsonUtilP(IsActive, each_IsActive); output[U("IsActive")] = each_IsActive;
                web::json::value each_Type; ToJsonUtilE(Type, each_Type); output[U("Type")] = each_Type;
                output[U("Parameter")] = Parameter;
                web::json::value each_LastRunTime; ToJsonUtilT(LastRunTime, each_LastRunTime); output[U("LastRunTime")] = each_LastRunTime;
                web::json::value each_NextRunTime; ToJsonUtilT(NextRunTime, each_NextRunTime); output[U("NextRunTime")] = each_NextRunTime;
                return output;
            }
        };

        struct GetTasksResult : public PlayFabRequestCommon
        {
            std::list<ScheduledTask> Tasks;

            GetTasksResult() :
                PlayFabRequestCommon(),
                Tasks()
            {}

            GetTasksResult(const GetTasksResult& src) :
                PlayFabRequestCommon(),
                Tasks(src.Tasks)
            {}

            ~GetTasksResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Tasks")], Tasks);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Tasks; ToJsonUtilO(Tasks, each_Tasks); output[U("Tasks")] = each_Tasks;
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

        struct IncrementPlayerStatisticVersionRequest : public PlayFabRequestCommon
        {
            std::string StatisticName;

            IncrementPlayerStatisticVersionRequest() :
                PlayFabRequestCommon(),
                StatisticName()
            {}

            IncrementPlayerStatisticVersionRequest(const IncrementPlayerStatisticVersionRequest& src) :
                PlayFabRequestCommon(),
                StatisticName(src.StatisticName)
            {}

            ~IncrementPlayerStatisticVersionRequest() { }

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

        struct IncrementPlayerStatisticVersionResult : public PlayFabRequestCommon
        {
            Boxed<PlayerStatisticVersion> StatisticVersion;

            IncrementPlayerStatisticVersionResult() :
                PlayFabRequestCommon(),
                StatisticVersion()
            {}

            IncrementPlayerStatisticVersionResult(const IncrementPlayerStatisticVersionResult& src) :
                PlayFabRequestCommon(),
                StatisticVersion(src.StatisticVersion)
            {}

            ~IncrementPlayerStatisticVersionResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("StatisticVersion")], StatisticVersion);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticVersion; ToJsonUtilO(StatisticVersion, each_StatisticVersion); output[U("StatisticVersion")] = each_StatisticVersion;
                return output;
            }
        };

        struct ListBuildsRequest : public PlayFabRequestCommon
        {

            ListBuildsRequest() :
                PlayFabRequestCommon()
            {}

            ListBuildsRequest(const ListBuildsRequest& src) :
                PlayFabRequestCommon()
            {}

            ~ListBuildsRequest() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct ListBuildsResult : public PlayFabRequestCommon
        {
            std::list<GetServerBuildInfoResult> Builds;

            ListBuildsResult() :
                PlayFabRequestCommon(),
                Builds()
            {}

            ListBuildsResult(const ListBuildsResult& src) :
                PlayFabRequestCommon(),
                Builds(src.Builds)
            {}

            ~ListBuildsResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Builds")], Builds);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Builds; ToJsonUtilO(Builds, each_Builds); output[U("Builds")] = each_Builds;
                return output;
            }
        };

        struct ListVirtualCurrencyTypesRequest : public PlayFabRequestCommon
        {

            ListVirtualCurrencyTypesRequest() :
                PlayFabRequestCommon()
            {}

            ListVirtualCurrencyTypesRequest(const ListVirtualCurrencyTypesRequest& src) :
                PlayFabRequestCommon()
            {}

            ~ListVirtualCurrencyTypesRequest() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct ListVirtualCurrencyTypesResult : public PlayFabRequestCommon
        {
            std::list<VirtualCurrencyData> VirtualCurrencies;

            ListVirtualCurrencyTypesResult() :
                PlayFabRequestCommon(),
                VirtualCurrencies()
            {}

            ListVirtualCurrencyTypesResult(const ListVirtualCurrencyTypesResult& src) :
                PlayFabRequestCommon(),
                VirtualCurrencies(src.VirtualCurrencies)
            {}

            ~ListVirtualCurrencyTypesResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("VirtualCurrencies")], VirtualCurrencies);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_VirtualCurrencies; ToJsonUtilO(VirtualCurrencies, each_VirtualCurrencies); output[U("VirtualCurrencies")] = each_VirtualCurrencies;
                return output;
            }
        };

        struct LookupUserAccountInfoRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string Email;
            std::string Username;
            std::string TitleDisplayName;

            LookupUserAccountInfoRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                Email(),
                Username(),
                TitleDisplayName()
            {}

            LookupUserAccountInfoRequest(const LookupUserAccountInfoRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                Email(src.Email),
                Username(src.Username),
                TitleDisplayName(src.TitleDisplayName)
            {}

            ~LookupUserAccountInfoRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("Email")], Email);
                FromJsonUtilS(input[U("Username")], Username);
                FromJsonUtilS(input[U("TitleDisplayName")], TitleDisplayName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_Email; ToJsonUtilS(Email, each_Email); output[U("Email")] = each_Email;
                web::json::value each_Username; ToJsonUtilS(Username, each_Username); output[U("Username")] = each_Username;
                web::json::value each_TitleDisplayName; ToJsonUtilS(TitleDisplayName, each_TitleDisplayName); output[U("TitleDisplayName")] = each_TitleDisplayName;
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

        struct LookupUserAccountInfoResult : public PlayFabRequestCommon
        {
            Boxed<UserAccountInfo> UserInfo;

            LookupUserAccountInfoResult() :
                PlayFabRequestCommon(),
                UserInfo()
            {}

            LookupUserAccountInfoResult(const LookupUserAccountInfoResult& src) :
                PlayFabRequestCommon(),
                UserInfo(src.UserInfo)
            {}

            ~LookupUserAccountInfoResult() { }

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

        struct ModifyMatchmakerGameModesRequest : public PlayFabRequestCommon
        {
            std::string BuildVersion;
            std::list<GameModeInfo> GameModes;

            ModifyMatchmakerGameModesRequest() :
                PlayFabRequestCommon(),
                BuildVersion(),
                GameModes()
            {}

            ModifyMatchmakerGameModesRequest(const ModifyMatchmakerGameModesRequest& src) :
                PlayFabRequestCommon(),
                BuildVersion(src.BuildVersion),
                GameModes(src.GameModes)
            {}

            ~ModifyMatchmakerGameModesRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BuildVersion")], BuildVersion);
                FromJsonUtilO(input[U("GameModes")], GameModes);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BuildVersion; ToJsonUtilS(BuildVersion, each_BuildVersion); output[U("BuildVersion")] = each_BuildVersion;
                web::json::value each_GameModes; ToJsonUtilO(GameModes, each_GameModes); output[U("GameModes")] = each_GameModes;
                return output;
            }
        };

        struct ModifyMatchmakerGameModesResult : public PlayFabRequestCommon
        {

            ModifyMatchmakerGameModesResult() :
                PlayFabRequestCommon()
            {}

            ModifyMatchmakerGameModesResult(const ModifyMatchmakerGameModesResult& src) :
                PlayFabRequestCommon()
            {}

            ~ModifyMatchmakerGameModesResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct ModifyServerBuildRequest : public PlayFabRequestCommon
        {
            std::string BuildId;
            Boxed<time_t> Timestamp;
            std::list<Region> ActiveRegions;
            Int32 MaxGamesPerHost;
            Int32 MinFreeGameSlots;
            std::string CommandLineTemplate;
            std::string ExecutablePath;
            std::string Comment;

            ModifyServerBuildRequest() :
                PlayFabRequestCommon(),
                BuildId(),
                Timestamp(),
                ActiveRegions(),
                MaxGamesPerHost(),
                MinFreeGameSlots(),
                CommandLineTemplate(),
                ExecutablePath(),
                Comment()
            {}

            ModifyServerBuildRequest(const ModifyServerBuildRequest& src) :
                PlayFabRequestCommon(),
                BuildId(src.BuildId),
                Timestamp(src.Timestamp),
                ActiveRegions(src.ActiveRegions),
                MaxGamesPerHost(src.MaxGamesPerHost),
                MinFreeGameSlots(src.MinFreeGameSlots),
                CommandLineTemplate(src.CommandLineTemplate),
                ExecutablePath(src.ExecutablePath),
                Comment(src.Comment)
            {}

            ~ModifyServerBuildRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BuildId")], BuildId);
                FromJsonUtilT(input[U("Timestamp")], Timestamp);
                FromJsonUtilE(input[U("ActiveRegions")], ActiveRegions);
                FromJsonUtilP(input[U("MaxGamesPerHost")], MaxGamesPerHost);
                FromJsonUtilP(input[U("MinFreeGameSlots")], MinFreeGameSlots);
                FromJsonUtilS(input[U("CommandLineTemplate")], CommandLineTemplate);
                FromJsonUtilS(input[U("ExecutablePath")], ExecutablePath);
                FromJsonUtilS(input[U("Comment")], Comment);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BuildId; ToJsonUtilS(BuildId, each_BuildId); output[U("BuildId")] = each_BuildId;
                web::json::value each_Timestamp; ToJsonUtilT(Timestamp, each_Timestamp); output[U("Timestamp")] = each_Timestamp;
                web::json::value each_ActiveRegions; ToJsonUtilE(ActiveRegions, each_ActiveRegions); output[U("ActiveRegions")] = each_ActiveRegions;
                web::json::value each_MaxGamesPerHost; ToJsonUtilP(MaxGamesPerHost, each_MaxGamesPerHost); output[U("MaxGamesPerHost")] = each_MaxGamesPerHost;
                web::json::value each_MinFreeGameSlots; ToJsonUtilP(MinFreeGameSlots, each_MinFreeGameSlots); output[U("MinFreeGameSlots")] = each_MinFreeGameSlots;
                web::json::value each_CommandLineTemplate; ToJsonUtilS(CommandLineTemplate, each_CommandLineTemplate); output[U("CommandLineTemplate")] = each_CommandLineTemplate;
                web::json::value each_ExecutablePath; ToJsonUtilS(ExecutablePath, each_ExecutablePath); output[U("ExecutablePath")] = each_ExecutablePath;
                web::json::value each_Comment; ToJsonUtilS(Comment, each_Comment); output[U("Comment")] = each_Comment;
                return output;
            }
        };

        struct ModifyServerBuildResult : public PlayFabRequestCommon
        {
            std::string BuildId;
            std::list<Region> ActiveRegions;
            Int32 MaxGamesPerHost;
            Int32 MinFreeGameSlots;
            std::string CommandLineTemplate;
            std::string ExecutablePath;
            std::string Comment;
            time_t Timestamp;
            std::string TitleId;
            Boxed<GameBuildStatus> Status;

            ModifyServerBuildResult() :
                PlayFabRequestCommon(),
                BuildId(),
                ActiveRegions(),
                MaxGamesPerHost(),
                MinFreeGameSlots(),
                CommandLineTemplate(),
                ExecutablePath(),
                Comment(),
                Timestamp(),
                TitleId(),
                Status()
            {}

            ModifyServerBuildResult(const ModifyServerBuildResult& src) :
                PlayFabRequestCommon(),
                BuildId(src.BuildId),
                ActiveRegions(src.ActiveRegions),
                MaxGamesPerHost(src.MaxGamesPerHost),
                MinFreeGameSlots(src.MinFreeGameSlots),
                CommandLineTemplate(src.CommandLineTemplate),
                ExecutablePath(src.ExecutablePath),
                Comment(src.Comment),
                Timestamp(src.Timestamp),
                TitleId(src.TitleId),
                Status(src.Status)
            {}

            ~ModifyServerBuildResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BuildId")], BuildId);
                FromJsonUtilE(input[U("ActiveRegions")], ActiveRegions);
                FromJsonUtilP(input[U("MaxGamesPerHost")], MaxGamesPerHost);
                FromJsonUtilP(input[U("MinFreeGameSlots")], MinFreeGameSlots);
                FromJsonUtilS(input[U("CommandLineTemplate")], CommandLineTemplate);
                FromJsonUtilS(input[U("ExecutablePath")], ExecutablePath);
                FromJsonUtilS(input[U("Comment")], Comment);
                FromJsonUtilT(input[U("Timestamp")], Timestamp);
                FromJsonUtilS(input[U("TitleId")], TitleId);
                FromJsonUtilE(input[U("Status")], Status);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BuildId; ToJsonUtilS(BuildId, each_BuildId); output[U("BuildId")] = each_BuildId;
                web::json::value each_ActiveRegions; ToJsonUtilE(ActiveRegions, each_ActiveRegions); output[U("ActiveRegions")] = each_ActiveRegions;
                web::json::value each_MaxGamesPerHost; ToJsonUtilP(MaxGamesPerHost, each_MaxGamesPerHost); output[U("MaxGamesPerHost")] = each_MaxGamesPerHost;
                web::json::value each_MinFreeGameSlots; ToJsonUtilP(MinFreeGameSlots, each_MinFreeGameSlots); output[U("MinFreeGameSlots")] = each_MinFreeGameSlots;
                web::json::value each_CommandLineTemplate; ToJsonUtilS(CommandLineTemplate, each_CommandLineTemplate); output[U("CommandLineTemplate")] = each_CommandLineTemplate;
                web::json::value each_ExecutablePath; ToJsonUtilS(ExecutablePath, each_ExecutablePath); output[U("ExecutablePath")] = each_ExecutablePath;
                web::json::value each_Comment; ToJsonUtilS(Comment, each_Comment); output[U("Comment")] = each_Comment;
                web::json::value each_Timestamp; ToJsonUtilT(Timestamp, each_Timestamp); output[U("Timestamp")] = each_Timestamp;
                web::json::value each_TitleId; ToJsonUtilS(TitleId, each_TitleId); output[U("TitleId")] = each_TitleId;
                web::json::value each_Status; ToJsonUtilE(Status, each_Status); output[U("Status")] = each_Status;
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

        struct RandomResultTable : public PlayFabBaseModel
        {
            std::string TableId;
            std::list<ResultTableNode> Nodes;

            RandomResultTable() :
                PlayFabBaseModel(),
                TableId(),
                Nodes()
            {}

            RandomResultTable(const RandomResultTable& src) :
                PlayFabBaseModel(),
                TableId(src.TableId),
                Nodes(src.Nodes)
            {}

            ~RandomResultTable() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("TableId")], TableId);
                FromJsonUtilO(input[U("Nodes")], Nodes);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TableId; ToJsonUtilS(TableId, each_TableId); output[U("TableId")] = each_TableId;
                web::json::value each_Nodes; ToJsonUtilO(Nodes, each_Nodes); output[U("Nodes")] = each_Nodes;
                return output;
            }
        };

        struct RefundPurchaseRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string OrderId;
            std::string Reason;

            RefundPurchaseRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                OrderId(),
                Reason()
            {}

            RefundPurchaseRequest(const RefundPurchaseRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                OrderId(src.OrderId),
                Reason(src.Reason)
            {}

            ~RefundPurchaseRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("OrderId")], OrderId);
                FromJsonUtilS(input[U("Reason")], Reason);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_OrderId; ToJsonUtilS(OrderId, each_OrderId); output[U("OrderId")] = each_OrderId;
                web::json::value each_Reason; ToJsonUtilS(Reason, each_Reason); output[U("Reason")] = each_Reason;
                return output;
            }
        };

        struct RefundPurchaseResponse : public PlayFabRequestCommon
        {
            std::string PurchaseStatus;

            RefundPurchaseResponse() :
                PlayFabRequestCommon(),
                PurchaseStatus()
            {}

            RefundPurchaseResponse(const RefundPurchaseResponse& src) :
                PlayFabRequestCommon(),
                PurchaseStatus(src.PurchaseStatus)
            {}

            ~RefundPurchaseResponse() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PurchaseStatus")], PurchaseStatus);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PurchaseStatus; ToJsonUtilS(PurchaseStatus, each_PurchaseStatus); output[U("PurchaseStatus")] = each_PurchaseStatus;
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

        struct RemoveServerBuildRequest : public PlayFabRequestCommon
        {
            std::string BuildId;

            RemoveServerBuildRequest() :
                PlayFabRequestCommon(),
                BuildId()
            {}

            RemoveServerBuildRequest(const RemoveServerBuildRequest& src) :
                PlayFabRequestCommon(),
                BuildId(src.BuildId)
            {}

            ~RemoveServerBuildRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("BuildId")], BuildId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_BuildId; ToJsonUtilS(BuildId, each_BuildId); output[U("BuildId")] = each_BuildId;
                return output;
            }
        };

        struct RemoveServerBuildResult : public PlayFabRequestCommon
        {

            RemoveServerBuildResult() :
                PlayFabRequestCommon()
            {}

            RemoveServerBuildResult(const RemoveServerBuildResult& src) :
                PlayFabRequestCommon()
            {}

            ~RemoveServerBuildResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct RemoveVirtualCurrencyTypesRequest : public PlayFabRequestCommon
        {
            std::list<VirtualCurrencyData> VirtualCurrencies;

            RemoveVirtualCurrencyTypesRequest() :
                PlayFabRequestCommon(),
                VirtualCurrencies()
            {}

            RemoveVirtualCurrencyTypesRequest(const RemoveVirtualCurrencyTypesRequest& src) :
                PlayFabRequestCommon(),
                VirtualCurrencies(src.VirtualCurrencies)
            {}

            ~RemoveVirtualCurrencyTypesRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("VirtualCurrencies")], VirtualCurrencies);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_VirtualCurrencies; ToJsonUtilO(VirtualCurrencies, each_VirtualCurrencies); output[U("VirtualCurrencies")] = each_VirtualCurrencies;
                return output;
            }
        };

        struct ResetCharacterStatisticsRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string CharacterId;

            ResetCharacterStatisticsRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                CharacterId()
            {}

            ResetCharacterStatisticsRequest(const ResetCharacterStatisticsRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                CharacterId(src.CharacterId)
            {}

            ~ResetCharacterStatisticsRequest() { }

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

        struct ResetCharacterStatisticsResult : public PlayFabRequestCommon
        {

            ResetCharacterStatisticsResult() :
                PlayFabRequestCommon()
            {}

            ResetCharacterStatisticsResult(const ResetCharacterStatisticsResult& src) :
                PlayFabRequestCommon()
            {}

            ~ResetCharacterStatisticsResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct UserCredentials : public PlayFabBaseModel
        {
            std::string Username;

            UserCredentials() :
                PlayFabBaseModel(),
                Username()
            {}

            UserCredentials(const UserCredentials& src) :
                PlayFabBaseModel(),
                Username(src.Username)
            {}

            ~UserCredentials() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Username")], Username);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Username; ToJsonUtilS(Username, each_Username); output[U("Username")] = each_Username;
                return output;
            }
        };

        struct ResetUsersRequest : public PlayFabRequestCommon
        {
            std::list<UserCredentials> Users;

            ResetUsersRequest() :
                PlayFabRequestCommon(),
                Users()
            {}

            ResetUsersRequest(const ResetUsersRequest& src) :
                PlayFabRequestCommon(),
                Users(src.Users)
            {}

            ~ResetUsersRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Users")], Users);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Users; ToJsonUtilO(Users, each_Users); output[U("Users")] = each_Users;
                return output;
            }
        };

        struct ResetUserStatisticsRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;

            ResetUserStatisticsRequest() :
                PlayFabRequestCommon(),
                PlayFabId()
            {}

            ResetUserStatisticsRequest(const ResetUserStatisticsRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId)
            {}

            ~ResetUserStatisticsRequest() { }

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

        struct ResetUserStatisticsResult : public PlayFabRequestCommon
        {

            ResetUserStatisticsResult() :
                PlayFabRequestCommon()
            {}

            ResetUserStatisticsResult(const ResetUserStatisticsResult& src) :
                PlayFabRequestCommon()
            {}

            ~ResetUserStatisticsResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct ResolvePurchaseDisputeRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string OrderId;
            std::string Reason;
            ResolutionOutcome Outcome;

            ResolvePurchaseDisputeRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                OrderId(),
                Reason(),
                Outcome()
            {}

            ResolvePurchaseDisputeRequest(const ResolvePurchaseDisputeRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                OrderId(src.OrderId),
                Reason(src.Reason),
                Outcome(src.Outcome)
            {}

            ~ResolvePurchaseDisputeRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("OrderId")], OrderId);
                FromJsonUtilS(input[U("Reason")], Reason);
                FromJsonEnum(input[U("Outcome")], Outcome);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_OrderId; ToJsonUtilS(OrderId, each_OrderId); output[U("OrderId")] = each_OrderId;
                web::json::value each_Reason; ToJsonUtilS(Reason, each_Reason); output[U("Reason")] = each_Reason;
                web::json::value each_Outcome; ToJsonEnum(Outcome, each_Outcome); output[U("Outcome")] = each_Outcome;
                return output;
            }
        };

        struct ResolvePurchaseDisputeResponse : public PlayFabRequestCommon
        {
            std::string PurchaseStatus;

            ResolvePurchaseDisputeResponse() :
                PlayFabRequestCommon(),
                PurchaseStatus()
            {}

            ResolvePurchaseDisputeResponse(const ResolvePurchaseDisputeResponse& src) :
                PlayFabRequestCommon(),
                PurchaseStatus(src.PurchaseStatus)
            {}

            ~ResolvePurchaseDisputeResponse() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PurchaseStatus")], PurchaseStatus);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PurchaseStatus; ToJsonUtilS(PurchaseStatus, each_PurchaseStatus); output[U("PurchaseStatus")] = each_PurchaseStatus;
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

        struct RunTaskRequest : public PlayFabRequestCommon
        {
            Boxed<NameIdentifier> Identifier;

            RunTaskRequest() :
                PlayFabRequestCommon(),
                Identifier()
            {}

            RunTaskRequest(const RunTaskRequest& src) :
                PlayFabRequestCommon(),
                Identifier(src.Identifier)
            {}

            ~RunTaskRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Identifier")], Identifier);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Identifier; ToJsonUtilO(Identifier, each_Identifier); output[U("Identifier")] = each_Identifier;
                return output;
            }
        };

        struct RunTaskResult : public PlayFabRequestCommon
        {
            std::string TaskInstanceId;

            RunTaskResult() :
                PlayFabRequestCommon(),
                TaskInstanceId()
            {}

            RunTaskResult(const RunTaskResult& src) :
                PlayFabRequestCommon(),
                TaskInstanceId(src.TaskInstanceId)
            {}

            ~RunTaskResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("TaskInstanceId")], TaskInstanceId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_TaskInstanceId; ToJsonUtilS(TaskInstanceId, each_TaskInstanceId); output[U("TaskInstanceId")] = each_TaskInstanceId;
                return output;
            }
        };

        struct SendAccountRecoveryEmailRequest : public PlayFabRequestCommon
        {
            std::string Email;

            SendAccountRecoveryEmailRequest() :
                PlayFabRequestCommon(),
                Email()
            {}

            SendAccountRecoveryEmailRequest(const SendAccountRecoveryEmailRequest& src) :
                PlayFabRequestCommon(),
                Email(src.Email)
            {}

            ~SendAccountRecoveryEmailRequest() { }

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

        struct SendAccountRecoveryEmailResult : public PlayFabRequestCommon
        {

            SendAccountRecoveryEmailResult() :
                PlayFabRequestCommon()
            {}

            SendAccountRecoveryEmailResult(const SendAccountRecoveryEmailResult& src) :
                PlayFabRequestCommon()
            {}

            ~SendAccountRecoveryEmailResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct SetPublishedRevisionRequest : public PlayFabRequestCommon
        {
            Int32 Version;
            Int32 Revision;

            SetPublishedRevisionRequest() :
                PlayFabRequestCommon(),
                Version(),
                Revision()
            {}

            SetPublishedRevisionRequest(const SetPublishedRevisionRequest& src) :
                PlayFabRequestCommon(),
                Version(src.Version),
                Revision(src.Revision)
            {}

            ~SetPublishedRevisionRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilP(input[U("Revision")], Revision);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_Revision; ToJsonUtilP(Revision, each_Revision); output[U("Revision")] = each_Revision;
                return output;
            }
        };

        struct SetPublishedRevisionResult : public PlayFabRequestCommon
        {

            SetPublishedRevisionResult() :
                PlayFabRequestCommon()
            {}

            SetPublishedRevisionResult(const SetPublishedRevisionResult& src) :
                PlayFabRequestCommon()
            {}

            ~SetPublishedRevisionResult() { }

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

        struct SetupPushNotificationRequest : public PlayFabRequestCommon
        {
            std::string Name;
            std::string Platform;
            std::string Key;
            std::string Credential;
            bool OverwriteOldARN;

            SetupPushNotificationRequest() :
                PlayFabRequestCommon(),
                Name(),
                Platform(),
                Key(),
                Credential(),
                OverwriteOldARN()
            {}

            SetupPushNotificationRequest(const SetupPushNotificationRequest& src) :
                PlayFabRequestCommon(),
                Name(src.Name),
                Platform(src.Platform),
                Key(src.Key),
                Credential(src.Credential),
                OverwriteOldARN(src.OverwriteOldARN)
            {}

            ~SetupPushNotificationRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("Name")], Name);
                FromJsonUtilS(input[U("Platform")], Platform);
                FromJsonUtilS(input[U("Key")], Key);
                FromJsonUtilS(input[U("Credential")], Credential);
                FromJsonUtilP(input[U("OverwriteOldARN")], OverwriteOldARN);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Name; ToJsonUtilS(Name, each_Name); output[U("Name")] = each_Name;
                web::json::value each_Platform; ToJsonUtilS(Platform, each_Platform); output[U("Platform")] = each_Platform;
                web::json::value each_Key; ToJsonUtilS(Key, each_Key); output[U("Key")] = each_Key;
                web::json::value each_Credential; ToJsonUtilS(Credential, each_Credential); output[U("Credential")] = each_Credential;
                web::json::value each_OverwriteOldARN; ToJsonUtilP(OverwriteOldARN, each_OverwriteOldARN); output[U("OverwriteOldARN")] = each_OverwriteOldARN;
                return output;
            }
        };

        struct SetupPushNotificationResult : public PlayFabRequestCommon
        {
            std::string ARN;

            SetupPushNotificationResult() :
                PlayFabRequestCommon(),
                ARN()
            {}

            SetupPushNotificationResult(const SetupPushNotificationResult& src) :
                PlayFabRequestCommon(),
                ARN(src.ARN)
            {}

            ~SetupPushNotificationResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("ARN")], ARN);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_ARN; ToJsonUtilS(ARN, each_ARN); output[U("ARN")] = each_ARN;
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

        struct UpdateCatalogItemsRequest : public PlayFabRequestCommon
        {
            std::string CatalogVersion;
            Boxed<bool> SetAsDefaultCatalog;
            std::list<CatalogItem> Catalog;

            UpdateCatalogItemsRequest() :
                PlayFabRequestCommon(),
                CatalogVersion(),
                SetAsDefaultCatalog(),
                Catalog()
            {}

            UpdateCatalogItemsRequest(const UpdateCatalogItemsRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion),
                SetAsDefaultCatalog(src.SetAsDefaultCatalog),
                Catalog(src.Catalog)
            {}

            ~UpdateCatalogItemsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilP(input[U("SetAsDefaultCatalog")], SetAsDefaultCatalog);
                FromJsonUtilO(input[U("Catalog")], Catalog);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_SetAsDefaultCatalog; ToJsonUtilP(SetAsDefaultCatalog, each_SetAsDefaultCatalog); output[U("SetAsDefaultCatalog")] = each_SetAsDefaultCatalog;
                web::json::value each_Catalog; ToJsonUtilO(Catalog, each_Catalog); output[U("Catalog")] = each_Catalog;
                return output;
            }
        };

        struct UpdateCatalogItemsResult : public PlayFabRequestCommon
        {

            UpdateCatalogItemsResult() :
                PlayFabRequestCommon()
            {}

            UpdateCatalogItemsResult(const UpdateCatalogItemsResult& src) :
                PlayFabRequestCommon()
            {}

            ~UpdateCatalogItemsResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct UpdateCloudScriptRequest : public PlayFabRequestCommon
        {
            std::list<CloudScriptFile> Files;
            bool Publish;
            std::string DeveloperPlayFabId;

            UpdateCloudScriptRequest() :
                PlayFabRequestCommon(),
                Files(),
                Publish(),
                DeveloperPlayFabId()
            {}

            UpdateCloudScriptRequest(const UpdateCloudScriptRequest& src) :
                PlayFabRequestCommon(),
                Files(src.Files),
                Publish(src.Publish),
                DeveloperPlayFabId(src.DeveloperPlayFabId)
            {}

            ~UpdateCloudScriptRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Files")], Files);
                FromJsonUtilP(input[U("Publish")], Publish);
                FromJsonUtilS(input[U("DeveloperPlayFabId")], DeveloperPlayFabId);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Files; ToJsonUtilO(Files, each_Files); output[U("Files")] = each_Files;
                web::json::value each_Publish; ToJsonUtilP(Publish, each_Publish); output[U("Publish")] = each_Publish;
                web::json::value each_DeveloperPlayFabId; ToJsonUtilS(DeveloperPlayFabId, each_DeveloperPlayFabId); output[U("DeveloperPlayFabId")] = each_DeveloperPlayFabId;
                return output;
            }
        };

        struct UpdateCloudScriptResult : public PlayFabRequestCommon
        {
            Int32 Version;
            Int32 Revision;

            UpdateCloudScriptResult() :
                PlayFabRequestCommon(),
                Version(),
                Revision()
            {}

            UpdateCloudScriptResult(const UpdateCloudScriptResult& src) :
                PlayFabRequestCommon(),
                Version(src.Version),
                Revision(src.Revision)
            {}

            ~UpdateCloudScriptResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilP(input[U("Version")], Version);
                FromJsonUtilP(input[U("Revision")], Revision);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Version; ToJsonUtilP(Version, each_Version); output[U("Version")] = each_Version;
                web::json::value each_Revision; ToJsonUtilP(Revision, each_Revision); output[U("Revision")] = each_Revision;
                return output;
            }
        };

        struct UpdatePlayerStatisticDefinitionRequest : public PlayFabRequestCommon
        {
            std::string StatisticName;
            Boxed<StatisticResetIntervalOption> VersionChangeInterval;
            Boxed<StatisticAggregationMethod> AggregationMethod;

            UpdatePlayerStatisticDefinitionRequest() :
                PlayFabRequestCommon(),
                StatisticName(),
                VersionChangeInterval(),
                AggregationMethod()
            {}

            UpdatePlayerStatisticDefinitionRequest(const UpdatePlayerStatisticDefinitionRequest& src) :
                PlayFabRequestCommon(),
                StatisticName(src.StatisticName),
                VersionChangeInterval(src.VersionChangeInterval),
                AggregationMethod(src.AggregationMethod)
            {}

            ~UpdatePlayerStatisticDefinitionRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("StatisticName")], StatisticName);
                FromJsonUtilE(input[U("VersionChangeInterval")], VersionChangeInterval);
                FromJsonUtilE(input[U("AggregationMethod")], AggregationMethod);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_StatisticName; ToJsonUtilS(StatisticName, each_StatisticName); output[U("StatisticName")] = each_StatisticName;
                web::json::value each_VersionChangeInterval; ToJsonUtilE(VersionChangeInterval, each_VersionChangeInterval); output[U("VersionChangeInterval")] = each_VersionChangeInterval;
                web::json::value each_AggregationMethod; ToJsonUtilE(AggregationMethod, each_AggregationMethod); output[U("AggregationMethod")] = each_AggregationMethod;
                return output;
            }
        };

        struct UpdatePlayerStatisticDefinitionResult : public PlayFabRequestCommon
        {
            Boxed<PlayerStatisticDefinition> Statistic;

            UpdatePlayerStatisticDefinitionResult() :
                PlayFabRequestCommon(),
                Statistic()
            {}

            UpdatePlayerStatisticDefinitionResult(const UpdatePlayerStatisticDefinitionResult& src) :
                PlayFabRequestCommon(),
                Statistic(src.Statistic)
            {}

            ~UpdatePlayerStatisticDefinitionResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Statistic")], Statistic);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Statistic; ToJsonUtilO(Statistic, each_Statistic); output[U("Statistic")] = each_Statistic;
                return output;
            }
        };

        struct UpdatePolicyRequest : public PlayFabRequestCommon
        {
            std::string PolicyName;
            std::list<PermissionStatement> Statements;
            bool OverwritePolicy;

            UpdatePolicyRequest() :
                PlayFabRequestCommon(),
                PolicyName(),
                Statements(),
                OverwritePolicy()
            {}

            UpdatePolicyRequest(const UpdatePolicyRequest& src) :
                PlayFabRequestCommon(),
                PolicyName(src.PolicyName),
                Statements(src.Statements),
                OverwritePolicy(src.OverwritePolicy)
            {}

            ~UpdatePolicyRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PolicyName")], PolicyName);
                FromJsonUtilO(input[U("Statements")], Statements);
                FromJsonUtilP(input[U("OverwritePolicy")], OverwritePolicy);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PolicyName; ToJsonUtilS(PolicyName, each_PolicyName); output[U("PolicyName")] = each_PolicyName;
                web::json::value each_Statements; ToJsonUtilO(Statements, each_Statements); output[U("Statements")] = each_Statements;
                web::json::value each_OverwritePolicy; ToJsonUtilP(OverwritePolicy, each_OverwritePolicy); output[U("OverwritePolicy")] = each_OverwritePolicy;
                return output;
            }
        };

        struct UpdatePolicyResponse : public PlayFabRequestCommon
        {
            std::string PolicyName;
            std::list<PermissionStatement> Statements;

            UpdatePolicyResponse() :
                PlayFabRequestCommon(),
                PolicyName(),
                Statements()
            {}

            UpdatePolicyResponse(const UpdatePolicyResponse& src) :
                PlayFabRequestCommon(),
                PolicyName(src.PolicyName),
                Statements(src.Statements)
            {}

            ~UpdatePolicyResponse() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PolicyName")], PolicyName);
                FromJsonUtilO(input[U("Statements")], Statements);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PolicyName; ToJsonUtilS(PolicyName, each_PolicyName); output[U("PolicyName")] = each_PolicyName;
                web::json::value each_Statements; ToJsonUtilO(Statements, each_Statements); output[U("Statements")] = each_Statements;
                return output;
            }
        };

        struct UpdateRandomResultTablesRequest : public PlayFabRequestCommon
        {
            std::string CatalogVersion;
            std::list<RandomResultTable> Tables;

            UpdateRandomResultTablesRequest() :
                PlayFabRequestCommon(),
                CatalogVersion(),
                Tables()
            {}

            UpdateRandomResultTablesRequest(const UpdateRandomResultTablesRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion),
                Tables(src.Tables)
            {}

            ~UpdateRandomResultTablesRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilO(input[U("Tables")], Tables);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_Tables; ToJsonUtilO(Tables, each_Tables); output[U("Tables")] = each_Tables;
                return output;
            }
        };

        struct UpdateRandomResultTablesResult : public PlayFabRequestCommon
        {

            UpdateRandomResultTablesResult() :
                PlayFabRequestCommon()
            {}

            UpdateRandomResultTablesResult(const UpdateRandomResultTablesResult& src) :
                PlayFabRequestCommon()
            {}

            ~UpdateRandomResultTablesResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct UpdateStoreItemsRequest : public PlayFabRequestCommon
        {
            std::string CatalogVersion;
            std::string StoreId;
            Boxed<StoreMarketingModel> MarketingData;
            std::list<StoreItem> Store;

            UpdateStoreItemsRequest() :
                PlayFabRequestCommon(),
                CatalogVersion(),
                StoreId(),
                MarketingData(),
                Store()
            {}

            UpdateStoreItemsRequest(const UpdateStoreItemsRequest& src) :
                PlayFabRequestCommon(),
                CatalogVersion(src.CatalogVersion),
                StoreId(src.StoreId),
                MarketingData(src.MarketingData),
                Store(src.Store)
            {}

            ~UpdateStoreItemsRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("CatalogVersion")], CatalogVersion);
                FromJsonUtilS(input[U("StoreId")], StoreId);
                FromJsonUtilO(input[U("MarketingData")], MarketingData);
                FromJsonUtilO(input[U("Store")], Store);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_CatalogVersion; ToJsonUtilS(CatalogVersion, each_CatalogVersion); output[U("CatalogVersion")] = each_CatalogVersion;
                web::json::value each_StoreId; ToJsonUtilS(StoreId, each_StoreId); output[U("StoreId")] = each_StoreId;
                web::json::value each_MarketingData; ToJsonUtilO(MarketingData, each_MarketingData); output[U("MarketingData")] = each_MarketingData;
                web::json::value each_Store; ToJsonUtilO(Store, each_Store); output[U("Store")] = each_Store;
                return output;
            }
        };

        struct UpdateStoreItemsResult : public PlayFabRequestCommon
        {

            UpdateStoreItemsResult() :
                PlayFabRequestCommon()
            {}

            UpdateStoreItemsResult(const UpdateStoreItemsResult& src) :
                PlayFabRequestCommon()
            {}

            ~UpdateStoreItemsResult() { }

            void FromJson(web::json::value& input) override
            {
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                return output;
            }
        };

        struct UpdateTaskRequest : public PlayFabRequestCommon
        {
            Boxed<NameIdentifier> Identifier;
            std::string Name;
            std::string Description;
            std::string Schedule;
            bool IsActive;
            ScheduledTaskType Type;
            web::json::value Parameter;

            UpdateTaskRequest() :
                PlayFabRequestCommon(),
                Identifier(),
                Name(),
                Description(),
                Schedule(),
                IsActive(),
                Type(),
                Parameter()
            {}

            UpdateTaskRequest(const UpdateTaskRequest& src) :
                PlayFabRequestCommon(),
                Identifier(src.Identifier),
                Name(src.Name),
                Description(src.Description),
                Schedule(src.Schedule),
                IsActive(src.IsActive),
                Type(src.Type),
                Parameter(src.Parameter)
            {}

            ~UpdateTaskRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilO(input[U("Identifier")], Identifier);
                FromJsonUtilS(input[U("Name")], Name);
                FromJsonUtilS(input[U("Description")], Description);
                FromJsonUtilS(input[U("Schedule")], Schedule);
                FromJsonUtilP(input[U("IsActive")], IsActive);
                FromJsonEnum(input[U("Type")], Type);
                Parameter = input[U("Parameter")];
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_Identifier; ToJsonUtilO(Identifier, each_Identifier); output[U("Identifier")] = each_Identifier;
                web::json::value each_Name; ToJsonUtilS(Name, each_Name); output[U("Name")] = each_Name;
                web::json::value each_Description; ToJsonUtilS(Description, each_Description); output[U("Description")] = each_Description;
                web::json::value each_Schedule; ToJsonUtilS(Schedule, each_Schedule); output[U("Schedule")] = each_Schedule;
                web::json::value each_IsActive; ToJsonUtilP(IsActive, each_IsActive); output[U("IsActive")] = each_IsActive;
                web::json::value each_Type; ToJsonEnum(Type, each_Type); output[U("Type")] = each_Type;
                output[U("Parameter")] = Parameter;
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

        struct UpdateUserTitleDisplayNameRequest : public PlayFabRequestCommon
        {
            std::string PlayFabId;
            std::string DisplayName;

            UpdateUserTitleDisplayNameRequest() :
                PlayFabRequestCommon(),
                PlayFabId(),
                DisplayName()
            {}

            UpdateUserTitleDisplayNameRequest(const UpdateUserTitleDisplayNameRequest& src) :
                PlayFabRequestCommon(),
                PlayFabId(src.PlayFabId),
                DisplayName(src.DisplayName)
            {}

            ~UpdateUserTitleDisplayNameRequest() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("PlayFabId")], PlayFabId);
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_PlayFabId; ToJsonUtilS(PlayFabId, each_PlayFabId); output[U("PlayFabId")] = each_PlayFabId;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                return output;
            }
        };

        struct UpdateUserTitleDisplayNameResult : public PlayFabRequestCommon
        {
            std::string DisplayName;

            UpdateUserTitleDisplayNameResult() :
                PlayFabRequestCommon(),
                DisplayName()
            {}

            UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src) :
                PlayFabRequestCommon(),
                DisplayName(src.DisplayName)
            {}

            ~UpdateUserTitleDisplayNameResult() { }

            void FromJson(web::json::value& input) override
            {
                FromJsonUtilS(input[U("DisplayName")], DisplayName);
            }

            web::json::value ToJson() const override
            {
                web::json::value output;
                web::json::value each_DisplayName; ToJsonUtilS(DisplayName, each_DisplayName); output[U("DisplayName")] = each_DisplayName;
                return output;
            }
        };

    }
}

#endif
