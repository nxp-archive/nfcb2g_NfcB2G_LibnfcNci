/******************************************************************************
 *
 *  Copyright (C) 1999-2012 Broadcom Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/
/******************************************************************************
 *
 *  The original Work has been changed by NXP Semiconductors.
 *
 *  Copyright (C) 2015 NXP Semiconductors
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/
#ifndef __CONFIG_H
#define __CONFIG_H

#ifdef __cplusplus
extern "C"
{
#endif

int GetStrValue(const char* name, char* p_value, unsigned long len);
int GetNumValue(const char* name, void* p_value, unsigned long len);

#ifdef __cplusplus
};
#endif

#define NAME_POLLING_TECH_MASK          "POLLING_TECH_MASK"
#define NAME_REGISTER_VIRTUAL_SE        "REGISTER_VIRTUAL_SE"
#define NAME_APPL_TRACE_LEVEL           "APPL_TRACE_LEVEL"
#define NAME_USE_RAW_NCI_TRACE          "USE_RAW_NCI_TRACE"
#define NAME_LOGCAT_FILTER              "LOGCAT_FILTER"
#define NAME_LPTD_CFG                   "LPTD_CFG"
#define NAME_SCREEN_OFF_POWER_STATE     "SCREEN_OFF_POWER_STATE"
#define NAME_PREINIT_DSP_CFG            "PREINIT_DSP_CFG"
#define NAME_DTA_START_CFG              "DTA_START_CFG"
#if(NXP_EXTNS != TRUE)
#define NAME_TRANSPORT_DRIVER           "TRANSPORT_DRIVER"
#define NAME_POWER_CONTROL_DRIVER       "POWER_CONTROL_DRIVER"
#endif
#define NAME_PROTOCOL_TRACE_LEVEL       "PROTOCOL_TRACE_LEVEL"
#define NAME_UART_PORT                  "UART_PORT"
#define NAME_UART_BAUD                  "UART_BAUD"
#define NAME_UART_PARITY                "UART_PARITY"
#define NAME_UART_STOPBITS              "UART_STOPBITS"
#define NAME_UART_DATABITS              "UART_DATABITS"
#define NAME_CLIENT_ADDRESS             "BCMI2CNFC_ADDRESS"
#define NAME_NFA_DM_START_UP_CFG        "NFA_DM_START_UP_CFG"
#define NAME_NFA_DM_CFG                 "NFA_DM_CFG"
#define NAME_NFA_DM_LP_CFG              "NFA_DM_LP_CFG"
#define NAME_LOW_SPEED_TRANSPORT        "LOW_SPEED_TRANSPORT"
#define NAME_NFC_WAKE_DELAY             "NFC_WAKE_DELAY"
#define NAME_NFC_WRITE_DELAY            "NFC_WRITE_DELAY"
#define NAME_PERF_MEASURE_FREQ          "REPORT_PERFORMANCE_MEASURE"
#define NAME_READ_MULTI_PACKETS         "READ_MULTIPLE_PACKETS"
#define NAME_POWER_ON_DELAY             "POWER_ON_DELAY"
#define NAME_PRE_POWER_OFF_DELAY        "PRE_POWER_OFF_DELAY"
#define NAME_POST_POWER_OFF_DELAY       "POST_POWER_OFF_DELAY"
#define NAME_CE3_PRE_POWER_OFF_DELAY    "CE3_PRE_POWER_OFF_DELAY"
#define NAME_NFA_STORAGE                "NFA_STORAGE"
#define NAME_NFA_DM_START_UP_VSC_CFG    "NFA_DM_START_UP_VSC_CFG"
#define NAME_NFA_DTA_START_UP_VSC_CFG   "NFA_DTA_START_UP_VSC_CFG"
#define NAME_UICC_LISTEN_TECH_MASK      "UICC_LISTEN_TECH_MASK"
#define NAME_P2P_LISTEN_TECH_MASK       "P2P_LISTEN_TECH_MASK"
#define NAME_UICC_LISTEN_TECH_EX_MASK   "UICC_LISTEN_TECH_EXCLUDE_MASK"
#if (NXP_EXTNS == TRUE)
#define NAME_APPL_DTA_MODE              "APPL_DTA_MODE"
#define NAME_DEFAULT_AID_ROUTE          "DEFAULT_AID_ROUTE"
#define NAME_DEFAULT_DESFIRE_ROUTE      "DEFAULT_DESFIRE_ROUTE"
#define NAME_DEFAULT_MIFARE_CLT_ROUTE   "DEFAULT_MIFARE_CLT_ROUTE"
#define NAME_DEFAULT_AID_PWR_STATE      "DEFAULT_AID_PWR_STATE"
#define NAME_DEFAULT_DESFIRE_PWR_STATE  "DEFAULT_DESFIRE_PWR_STATE"
#define NAME_DEFAULT_MIFARE_CLT_PWR_STATE  "DEFAULT_MIFARE_CLT_PWR_STATE"
#define NAME_CHECK_DEFAULT_PROTO_SE_ID  "NXP_CHECK_DEFAULT_PROTO_SE_ID"
#define NAME_NFA_DM_DISC_NTF_TIMEOUT    "NFA_DM_DISC_NTF_TIMEOUT"
#define NAME_NXP_FWD_FUNCTIONALITY_ENABLE   "NXP_FWD_FUNCTIONALITY_ENABLE"
#define NAME_HOST_LISTEN_TECH_MASK      "HOST_LISTEN_TECH_MASK"
#define NAME_DEFAULT_FELICA_CLT_ROUTE    "DEFAULT_FELICA_CLT_ROUTE"
#define NAME_DEFAULT_FELICA_CLT_PWR_STATE    "DEFAULT_FELICA_CLT_PWR_STATE"
#define NAME_NFA_CONFIG_FORMAT          "NFA_CONFIG_FORMAT"
#endif
#if(NFC_NXP_CHIP_TYPE != PN547C2)
#define NAME_DEFAULT_OFFHOST_ROUTE            "DEFAULT_OFFHOST_ROUTE"
#endif
#define NAME_SNOOZE_MODE_CFG            "SNOOZE_MODE_CFG"
#define NAME_NFA_DM_DISC_DURATION_POLL  "NFA_DM_DISC_DURATION_POLL"
#define NAME_SPD_DEBUG                  "SPD_DEBUG"
#define NAME_SPD_MAXRETRYCOUNT          "SPD_MAX_RETRY_COUNT"
#define NAME_SPI_NEGOTIATION            "SPI_NEGOTIATION"
#define NAME_AID_FOR_EMPTY_SELECT       "AID_FOR_EMPTY_SELECT"
#define NAME_PRESERVE_STORAGE           "PRESERVE_STORAGE"
#define NAME_NFA_MAX_EE_SUPPORTED       "NFA_MAX_EE_SUPPORTED"
#define NAME_NFCC_ENABLE_TIMEOUT        "NFCC_ENABLE_TIMEOUT"
#define NAME_NFA_DM_PRE_DISCOVERY_CFG   "NFA_DM_PRE_DISCOVERY_CFG"
#define NAME_POLL_FREQUENCY             "POLL_FREQUENCY"
#define NAME_XTAL_HARDWARE_ID           "XTAL_HARDWARE_ID"
#define NAME_XTAL_FREQUENCY             "XTAL_FREQUENCY"
#define NAME_XTAL_FREQ_INDEX            "XTAL_FREQ_INDEX"
#define NAME_XTAL_PARAMS_CFG            "XTAL_PARAMS_CFG"
#define NAME_EXCLUSIVE_SE_ACCESS        "EXCLUSIVE_SE_ACCESS"
#define NAME_DBG_NO_UICC_IDLE_TIMEOUT_TOGGLING  "DBG_NO_UICC_IDLE_TIMEOUT_TOGGLING"
#define NAME_PRESENCE_CHECK_ALGORITHM   "PRESENCE_CHECK_ALGORITHM"
#define NAME_ALLOW_NO_NVM               "ALLOW_NO_NVM"
#define NAME_DEVICE_HOST_WHITE_LIST     "DEVICE_HOST_WHITE_LIST"
#define NAME_POWER_OFF_MODE             "POWER_OFF_MODE"
#define NAME_GLOBAL_RESET               "DO_GLOBAL_RESET"
#define NAME_NCI_HAL_MODULE             "NCI_HAL_MODULE"
#define NAME_NFA_POLL_BAIL_OUT_MODE     "NFA_POLL_BAIL_OUT_MODE"
#define NAME_NFA_PROPRIETARY_CFG        "NFA_PROPRIETARY_CFG"
#if(NXP_EXTNS == TRUE)
#define NAME_NXP_WM_MAX_WTX_COUNT                     "NXP_WM_MAX_WTX_COUNT"
#define NAME_NXP_NFCC_STANDBY_TIMEOUT                 "NXP_NFCC_STANDBY_TIMEOUT"
#define NAME_NXP_CP_TIMEOUT                           "NXP_CP_TIMEOUT"
#define NAME_NXP_CORE_SCRN_OFF_AUTONOMOUS_ENABLE      "NXP_CORE_SCRN_OFF_AUTONOMOUS_ENABLE"
#define NAME_NXP_ALLOW_WIRED_IN_MIFARE_DESFIRE_CLT    "NXP_ALLOW_WIRED_IN_MIFARE_DESFIRE_CLT"
#define NAME_NXP_NFCC_RF_FIELD_EVENT_TIMEOUT          "NXP_NFCC_RF_FIELD_EVENT_TIMEOUT"
#define NAME_NXP_CE_ROUTE_STRICT_DISABLE              "NXP_CE_ROUTE_STRICT_DISABLE"
#define NAME_NXP_NFC_CHIP                             "NXP_NFC_CHIP"
#if(NXP_NFCC_ROUTING_BLOCK_BIT==TRUE)
#define NAME_NXP_PROP_BLACKLIST_ROUTING               "NXP_PROP_BLACKLIST_ROUTING"
#endif
#if(NXP_ESE_DUAL_MODE_PRIO_SCHEME == NXP_ESE_WIRED_MODE_TIMEOUT)
#define NAME_NXP_MIFARE_DESFIRE_DISABLE               "NXP_MIFARE_DESFIRE_DISABLE"
#endif
#if(NFC_NXP_STAT_DUAL_UICC_EXT_SWITCH == TRUE)
#define NAME_NXP_DUAL_UICC_ENABLE                     "NXP_DUAL_UICC_ENABLE"
#endif
#define NAME_NXP_DEFAULT_NFCEE_TIMEOUT                "NXP_DEFAULT_NFCEE_TIMEOUT"
#define NAME_NXP_DEFAULT_NFCEE_DISC_TIMEOUT           "NXP_DEFAULT_NFCEE_DISC_TIMEOUT"
#if(NXP_NFCC_ESE_UICC_CONCURRENT_ACCESS_PROTECTION == TRUE)
#define NAME_NXP_NFCC_PASSIVE_LISTEN_TIMEOUT          "NXP_NFCC_PASSIVE_LISTEN_TIMEOUT"
#endif
#if(NXP_ESE_JCOP_DWNLD_PROTECTION == TRUE)
#define NAME_OS_DOWNLOAD_TIMEOUT_VALUE                "OS_DOWNLOAD_TIMEOUT_VALUE"
#endif
#define NAME_NXP_HCEF_CMD_RSP_TIMEOUT_VALUE           "NXP_HCEF_CMD_RSP_TIMEOUT_VALUE"
#define NAME_NXP_DWP_INTF_RESET_ENABLE                "NXP_DWP_INTF_RESET_ENABLE"
#if (NXP_WIRED_MODE_STANDBY == TRUE)
#define NAME_NXP_ESE_POWER_DH_CONTROL                 "NXP_ESE_POWER_DH_CONTROL"
#endif
#define NAME_NXP_EMVCO_POLL_PROFILE                   "NXP_EMVCO_POLL_PROFILE"
#define NAME_NXP_NFC_AID_TABLE                        "NXP_NFC_AID_TABLE"
#endif

#define                     LPTD_PARAM_LEN (40)

// default configuration
#define default_transport       "/dev/bcm2079x"
#define default_storage_location "/data/nfc"

struct tUART_CONFIG {
    int     m_iBaudrate;            // 115200
    int     m_iDatabits;            // 8
    int     m_iParity;              // 0 - none, 1 = odd, 2 = even
    int     m_iStopbits;
};

extern struct tUART_CONFIG  uartConfig;
#define MAX_CHIPID_LEN  (16)
void    readOptionalConfigExt(const char* option);

/* Snooze mode configuration structure */
typedef struct
{
    unsigned char   snooze_mode;            /* Snooze Mode */
    unsigned char   idle_threshold_dh;      /* Idle Threshold Host */
    unsigned char   idle_threshold_nfcc;    /* Idle Threshold NFCC   */
    unsigned char   nfc_wake_active_mode;   /* NFC_LP_ACTIVE_LOW or NFC_LP_ACTIVE_HIGH */
    unsigned char   dh_wake_active_mode;    /* NFC_LP_ACTIVE_LOW or NFC_LP_ACTIVE_HIGH */
} tSNOOZE_MODE_CONFIG;
#endif
