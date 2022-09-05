#ifndef __COMMON_H
#define __COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/* AGILE UPGRADE */
#include <stdio.h>

#define AGILE_UPGRADE_ENABLE_LOG
#define AGILE_UPGRADE_LOG_PRINTF printf
#define AGILE_UPGRADE_USING_CRC_TAB_CONST

#define AGILE_UPGRADE_ENABLE_AES
#define AGILE_UPGRADE_AES_IV  "0123456789ABCDEF"
#define AGILE_UPGRADE_AES_KEY "0123456789ABCDEF0123456789ABCDEF"

#define AGILE_UPGRADE_ENABLE_FASTLZ
#define AGILE_UPGRADE_ENABLE_QUICKLZ
//#define AGILE_UPGRADE_ENABLE_FAL
#define AGILE_UPGRADE_ENABLE_FILE
// #define AGILE_UPGRADE_ENABLE_VERSION_COMPARE

/* TINYCRYPT */
#define TINY_CRYPT_AES
#define TINY_CRYPT_AES_ROM_TABLES

/* QUICKLZ */
#define QLZ_COMPRESSION_LEVEL 3

#ifdef __cplusplus
}
#endif

#endif
