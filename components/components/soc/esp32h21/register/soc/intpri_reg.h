/**
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** INTPRI_CORE0_CPU_INT_ENABLE_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_ENABLE_REG (DR_REG_INTPRI_BASE + 0x0)
/** INTPRI_CORE0_CPU_INT_ENABLE : R/W; bitpos: [31:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_INT_ENABLE    0xFFFFFFFFU
#define INTPRI_CORE0_CPU_INT_ENABLE_M  (INTPRI_CORE0_CPU_INT_ENABLE_V << INTPRI_CORE0_CPU_INT_ENABLE_S)
#define INTPRI_CORE0_CPU_INT_ENABLE_V  0xFFFFFFFFU
#define INTPRI_CORE0_CPU_INT_ENABLE_S  0

/** INTPRI_CORE0_CPU_INT_TYPE_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_TYPE_REG (DR_REG_INTPRI_BASE + 0x4)
/** INTPRI_CORE0_CPU_INT_TYPE : R/W; bitpos: [31:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_INT_TYPE    0xFFFFFFFFU
#define INTPRI_CORE0_CPU_INT_TYPE_M  (INTPRI_CORE0_CPU_INT_TYPE_V << INTPRI_CORE0_CPU_INT_TYPE_S)
#define INTPRI_CORE0_CPU_INT_TYPE_V  0xFFFFFFFFU
#define INTPRI_CORE0_CPU_INT_TYPE_S  0

/** INTPRI_CORE0_CPU_INT_EIP_STATUS_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_EIP_STATUS_REG (DR_REG_INTPRI_BASE + 0x8)
/** INTPRI_CORE0_CPU_INT_EIP_STATUS : RO; bitpos: [31:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_INT_EIP_STATUS    0xFFFFFFFFU
#define INTPRI_CORE0_CPU_INT_EIP_STATUS_M  (INTPRI_CORE0_CPU_INT_EIP_STATUS_V << INTPRI_CORE0_CPU_INT_EIP_STATUS_S)
#define INTPRI_CORE0_CPU_INT_EIP_STATUS_V  0xFFFFFFFFU
#define INTPRI_CORE0_CPU_INT_EIP_STATUS_S  0

/** INTPRI_CORE0_CPU_INT_PRI_0_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_0_REG (DR_REG_INTPRI_BASE + 0xc)
/** INTPRI_CORE0_CPU_PRI_0_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_0_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_0_MAP_M  (INTPRI_CORE0_CPU_PRI_0_MAP_V << INTPRI_CORE0_CPU_PRI_0_MAP_S)
#define INTPRI_CORE0_CPU_PRI_0_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_0_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_1_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_1_REG (DR_REG_INTPRI_BASE + 0x10)
/** INTPRI_CORE0_CPU_PRI_1_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_1_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_1_MAP_M  (INTPRI_CORE0_CPU_PRI_1_MAP_V << INTPRI_CORE0_CPU_PRI_1_MAP_S)
#define INTPRI_CORE0_CPU_PRI_1_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_1_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_2_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_2_REG (DR_REG_INTPRI_BASE + 0x14)
/** INTPRI_CORE0_CPU_PRI_2_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_2_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_2_MAP_M  (INTPRI_CORE0_CPU_PRI_2_MAP_V << INTPRI_CORE0_CPU_PRI_2_MAP_S)
#define INTPRI_CORE0_CPU_PRI_2_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_2_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_3_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_3_REG (DR_REG_INTPRI_BASE + 0x18)
/** INTPRI_CORE0_CPU_PRI_3_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_3_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_3_MAP_M  (INTPRI_CORE0_CPU_PRI_3_MAP_V << INTPRI_CORE0_CPU_PRI_3_MAP_S)
#define INTPRI_CORE0_CPU_PRI_3_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_3_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_4_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_4_REG (DR_REG_INTPRI_BASE + 0x1c)
/** INTPRI_CORE0_CPU_PRI_4_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_4_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_4_MAP_M  (INTPRI_CORE0_CPU_PRI_4_MAP_V << INTPRI_CORE0_CPU_PRI_4_MAP_S)
#define INTPRI_CORE0_CPU_PRI_4_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_4_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_5_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_5_REG (DR_REG_INTPRI_BASE + 0x20)
/** INTPRI_CORE0_CPU_PRI_5_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_5_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_5_MAP_M  (INTPRI_CORE0_CPU_PRI_5_MAP_V << INTPRI_CORE0_CPU_PRI_5_MAP_S)
#define INTPRI_CORE0_CPU_PRI_5_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_5_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_6_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_6_REG (DR_REG_INTPRI_BASE + 0x24)
/** INTPRI_CORE0_CPU_PRI_6_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_6_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_6_MAP_M  (INTPRI_CORE0_CPU_PRI_6_MAP_V << INTPRI_CORE0_CPU_PRI_6_MAP_S)
#define INTPRI_CORE0_CPU_PRI_6_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_6_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_7_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_7_REG (DR_REG_INTPRI_BASE + 0x28)
/** INTPRI_CORE0_CPU_PRI_7_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_7_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_7_MAP_M  (INTPRI_CORE0_CPU_PRI_7_MAP_V << INTPRI_CORE0_CPU_PRI_7_MAP_S)
#define INTPRI_CORE0_CPU_PRI_7_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_7_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_8_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_8_REG (DR_REG_INTPRI_BASE + 0x2c)
/** INTPRI_CORE0_CPU_PRI_8_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_8_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_8_MAP_M  (INTPRI_CORE0_CPU_PRI_8_MAP_V << INTPRI_CORE0_CPU_PRI_8_MAP_S)
#define INTPRI_CORE0_CPU_PRI_8_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_8_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_9_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_9_REG (DR_REG_INTPRI_BASE + 0x30)
/** INTPRI_CORE0_CPU_PRI_9_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_9_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_9_MAP_M  (INTPRI_CORE0_CPU_PRI_9_MAP_V << INTPRI_CORE0_CPU_PRI_9_MAP_S)
#define INTPRI_CORE0_CPU_PRI_9_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_9_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_10_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_10_REG (DR_REG_INTPRI_BASE + 0x34)
/** INTPRI_CORE0_CPU_PRI_10_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_10_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_10_MAP_M  (INTPRI_CORE0_CPU_PRI_10_MAP_V << INTPRI_CORE0_CPU_PRI_10_MAP_S)
#define INTPRI_CORE0_CPU_PRI_10_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_10_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_11_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_11_REG (DR_REG_INTPRI_BASE + 0x38)
/** INTPRI_CORE0_CPU_PRI_11_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_11_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_11_MAP_M  (INTPRI_CORE0_CPU_PRI_11_MAP_V << INTPRI_CORE0_CPU_PRI_11_MAP_S)
#define INTPRI_CORE0_CPU_PRI_11_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_11_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_12_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_12_REG (DR_REG_INTPRI_BASE + 0x3c)
/** INTPRI_CORE0_CPU_PRI_12_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_12_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_12_MAP_M  (INTPRI_CORE0_CPU_PRI_12_MAP_V << INTPRI_CORE0_CPU_PRI_12_MAP_S)
#define INTPRI_CORE0_CPU_PRI_12_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_12_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_13_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_13_REG (DR_REG_INTPRI_BASE + 0x40)
/** INTPRI_CORE0_CPU_PRI_13_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_13_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_13_MAP_M  (INTPRI_CORE0_CPU_PRI_13_MAP_V << INTPRI_CORE0_CPU_PRI_13_MAP_S)
#define INTPRI_CORE0_CPU_PRI_13_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_13_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_14_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_14_REG (DR_REG_INTPRI_BASE + 0x44)
/** INTPRI_CORE0_CPU_PRI_14_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_14_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_14_MAP_M  (INTPRI_CORE0_CPU_PRI_14_MAP_V << INTPRI_CORE0_CPU_PRI_14_MAP_S)
#define INTPRI_CORE0_CPU_PRI_14_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_14_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_15_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_15_REG (DR_REG_INTPRI_BASE + 0x48)
/** INTPRI_CORE0_CPU_PRI_15_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_15_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_15_MAP_M  (INTPRI_CORE0_CPU_PRI_15_MAP_V << INTPRI_CORE0_CPU_PRI_15_MAP_S)
#define INTPRI_CORE0_CPU_PRI_15_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_15_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_16_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_16_REG (DR_REG_INTPRI_BASE + 0x4c)
/** INTPRI_CORE0_CPU_PRI_16_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_16_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_16_MAP_M  (INTPRI_CORE0_CPU_PRI_16_MAP_V << INTPRI_CORE0_CPU_PRI_16_MAP_S)
#define INTPRI_CORE0_CPU_PRI_16_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_16_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_17_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_17_REG (DR_REG_INTPRI_BASE + 0x50)
/** INTPRI_CORE0_CPU_PRI_17_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_17_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_17_MAP_M  (INTPRI_CORE0_CPU_PRI_17_MAP_V << INTPRI_CORE0_CPU_PRI_17_MAP_S)
#define INTPRI_CORE0_CPU_PRI_17_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_17_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_18_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_18_REG (DR_REG_INTPRI_BASE + 0x54)
/** INTPRI_CORE0_CPU_PRI_18_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_18_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_18_MAP_M  (INTPRI_CORE0_CPU_PRI_18_MAP_V << INTPRI_CORE0_CPU_PRI_18_MAP_S)
#define INTPRI_CORE0_CPU_PRI_18_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_18_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_19_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_19_REG (DR_REG_INTPRI_BASE + 0x58)
/** INTPRI_CORE0_CPU_PRI_19_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_19_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_19_MAP_M  (INTPRI_CORE0_CPU_PRI_19_MAP_V << INTPRI_CORE0_CPU_PRI_19_MAP_S)
#define INTPRI_CORE0_CPU_PRI_19_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_19_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_20_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_20_REG (DR_REG_INTPRI_BASE + 0x5c)
/** INTPRI_CORE0_CPU_PRI_20_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_20_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_20_MAP_M  (INTPRI_CORE0_CPU_PRI_20_MAP_V << INTPRI_CORE0_CPU_PRI_20_MAP_S)
#define INTPRI_CORE0_CPU_PRI_20_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_20_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_21_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_21_REG (DR_REG_INTPRI_BASE + 0x60)
/** INTPRI_CORE0_CPU_PRI_21_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_21_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_21_MAP_M  (INTPRI_CORE0_CPU_PRI_21_MAP_V << INTPRI_CORE0_CPU_PRI_21_MAP_S)
#define INTPRI_CORE0_CPU_PRI_21_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_21_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_22_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_22_REG (DR_REG_INTPRI_BASE + 0x64)
/** INTPRI_CORE0_CPU_PRI_22_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_22_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_22_MAP_M  (INTPRI_CORE0_CPU_PRI_22_MAP_V << INTPRI_CORE0_CPU_PRI_22_MAP_S)
#define INTPRI_CORE0_CPU_PRI_22_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_22_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_23_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_23_REG (DR_REG_INTPRI_BASE + 0x68)
/** INTPRI_CORE0_CPU_PRI_23_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_23_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_23_MAP_M  (INTPRI_CORE0_CPU_PRI_23_MAP_V << INTPRI_CORE0_CPU_PRI_23_MAP_S)
#define INTPRI_CORE0_CPU_PRI_23_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_23_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_24_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_24_REG (DR_REG_INTPRI_BASE + 0x6c)
/** INTPRI_CORE0_CPU_PRI_24_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_24_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_24_MAP_M  (INTPRI_CORE0_CPU_PRI_24_MAP_V << INTPRI_CORE0_CPU_PRI_24_MAP_S)
#define INTPRI_CORE0_CPU_PRI_24_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_24_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_25_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_25_REG (DR_REG_INTPRI_BASE + 0x70)
/** INTPRI_CORE0_CPU_PRI_25_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_25_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_25_MAP_M  (INTPRI_CORE0_CPU_PRI_25_MAP_V << INTPRI_CORE0_CPU_PRI_25_MAP_S)
#define INTPRI_CORE0_CPU_PRI_25_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_25_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_26_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_26_REG (DR_REG_INTPRI_BASE + 0x74)
/** INTPRI_CORE0_CPU_PRI_26_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_26_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_26_MAP_M  (INTPRI_CORE0_CPU_PRI_26_MAP_V << INTPRI_CORE0_CPU_PRI_26_MAP_S)
#define INTPRI_CORE0_CPU_PRI_26_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_26_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_27_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_27_REG (DR_REG_INTPRI_BASE + 0x78)
/** INTPRI_CORE0_CPU_PRI_27_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_27_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_27_MAP_M  (INTPRI_CORE0_CPU_PRI_27_MAP_V << INTPRI_CORE0_CPU_PRI_27_MAP_S)
#define INTPRI_CORE0_CPU_PRI_27_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_27_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_28_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_28_REG (DR_REG_INTPRI_BASE + 0x7c)
/** INTPRI_CORE0_CPU_PRI_28_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_28_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_28_MAP_M  (INTPRI_CORE0_CPU_PRI_28_MAP_V << INTPRI_CORE0_CPU_PRI_28_MAP_S)
#define INTPRI_CORE0_CPU_PRI_28_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_28_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_29_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_29_REG (DR_REG_INTPRI_BASE + 0x80)
/** INTPRI_CORE0_CPU_PRI_29_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_29_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_29_MAP_M  (INTPRI_CORE0_CPU_PRI_29_MAP_V << INTPRI_CORE0_CPU_PRI_29_MAP_S)
#define INTPRI_CORE0_CPU_PRI_29_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_29_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_30_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_30_REG (DR_REG_INTPRI_BASE + 0x84)
/** INTPRI_CORE0_CPU_PRI_30_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_30_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_30_MAP_M  (INTPRI_CORE0_CPU_PRI_30_MAP_V << INTPRI_CORE0_CPU_PRI_30_MAP_S)
#define INTPRI_CORE0_CPU_PRI_30_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_30_MAP_S  0

/** INTPRI_CORE0_CPU_INT_PRI_31_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_PRI_31_REG (DR_REG_INTPRI_BASE + 0x88)
/** INTPRI_CORE0_CPU_PRI_31_MAP : R/W; bitpos: [3:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_PRI_31_MAP    0x0000000FU
#define INTPRI_CORE0_CPU_PRI_31_MAP_M  (INTPRI_CORE0_CPU_PRI_31_MAP_V << INTPRI_CORE0_CPU_PRI_31_MAP_S)
#define INTPRI_CORE0_CPU_PRI_31_MAP_V  0x0000000FU
#define INTPRI_CORE0_CPU_PRI_31_MAP_S  0

/** INTPRI_CORE0_CPU_INT_THRESH_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_THRESH_REG (DR_REG_INTPRI_BASE + 0x8c)
/** INTPRI_CORE0_CPU_INT_THRESH : R/W; bitpos: [7:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_INT_THRESH    0x000000FFU
#define INTPRI_CORE0_CPU_INT_THRESH_M  (INTPRI_CORE0_CPU_INT_THRESH_V << INTPRI_CORE0_CPU_INT_THRESH_S)
#define INTPRI_CORE0_CPU_INT_THRESH_V  0x000000FFU
#define INTPRI_CORE0_CPU_INT_THRESH_S  0

/** INTPRI_CPU_INTR_FROM_CPU_0_REG register
 *  register description
 */
#define INTPRI_CPU_INTR_FROM_CPU_0_REG (DR_REG_INTPRI_BASE + 0x90)
/** INTPRI_CPU_INTR_FROM_CPU_0 : R/W; bitpos: [0]; default: 0;
 *  Need add description
 */
#define INTPRI_CPU_INTR_FROM_CPU_0    (BIT(0))
#define INTPRI_CPU_INTR_FROM_CPU_0_M  (INTPRI_CPU_INTR_FROM_CPU_0_V << INTPRI_CPU_INTR_FROM_CPU_0_S)
#define INTPRI_CPU_INTR_FROM_CPU_0_V  0x00000001U
#define INTPRI_CPU_INTR_FROM_CPU_0_S  0

/** INTPRI_CPU_INTR_FROM_CPU_1_REG register
 *  register description
 */
#define INTPRI_CPU_INTR_FROM_CPU_1_REG (DR_REG_INTPRI_BASE + 0x94)
/** INTPRI_CPU_INTR_FROM_CPU_1 : R/W; bitpos: [0]; default: 0;
 *  Need add description
 */
#define INTPRI_CPU_INTR_FROM_CPU_1    (BIT(0))
#define INTPRI_CPU_INTR_FROM_CPU_1_M  (INTPRI_CPU_INTR_FROM_CPU_1_V << INTPRI_CPU_INTR_FROM_CPU_1_S)
#define INTPRI_CPU_INTR_FROM_CPU_1_V  0x00000001U
#define INTPRI_CPU_INTR_FROM_CPU_1_S  0

/** INTPRI_CPU_INTR_FROM_CPU_2_REG register
 *  register description
 */
#define INTPRI_CPU_INTR_FROM_CPU_2_REG (DR_REG_INTPRI_BASE + 0x98)
/** INTPRI_CPU_INTR_FROM_CPU_2 : R/W; bitpos: [0]; default: 0;
 *  Need add description
 */
#define INTPRI_CPU_INTR_FROM_CPU_2    (BIT(0))
#define INTPRI_CPU_INTR_FROM_CPU_2_M  (INTPRI_CPU_INTR_FROM_CPU_2_V << INTPRI_CPU_INTR_FROM_CPU_2_S)
#define INTPRI_CPU_INTR_FROM_CPU_2_V  0x00000001U
#define INTPRI_CPU_INTR_FROM_CPU_2_S  0

/** INTPRI_CPU_INTR_FROM_CPU_3_REG register
 *  register description
 */
#define INTPRI_CPU_INTR_FROM_CPU_3_REG (DR_REG_INTPRI_BASE + 0x9c)
/** INTPRI_CPU_INTR_FROM_CPU_3 : R/W; bitpos: [0]; default: 0;
 *  Need add description
 */
#define INTPRI_CPU_INTR_FROM_CPU_3    (BIT(0))
#define INTPRI_CPU_INTR_FROM_CPU_3_M  (INTPRI_CPU_INTR_FROM_CPU_3_V << INTPRI_CPU_INTR_FROM_CPU_3_S)
#define INTPRI_CPU_INTR_FROM_CPU_3_V  0x00000001U
#define INTPRI_CPU_INTR_FROM_CPU_3_S  0

/** INTPRI_DATE_REG register
 *  register description
 */
#define INTPRI_DATE_REG (DR_REG_INTPRI_BASE + 0xa0)
/** INTPRI_DATE : R/W; bitpos: [27:0]; default: 35660416;
 *  Need add description
 */
#define INTPRI_DATE    0x0FFFFFFFU
#define INTPRI_DATE_M  (INTPRI_DATE_V << INTPRI_DATE_S)
#define INTPRI_DATE_V  0x0FFFFFFFU
#define INTPRI_DATE_S  0

/** INTPRI_CLOCK_GATE_REG register
 *  register description
 */
#define INTPRI_CLOCK_GATE_REG (DR_REG_INTPRI_BASE + 0xa4)
/** INTPRI_CLK_EN : R/W; bitpos: [0]; default: 1;
 *  Need add description
 */
#define INTPRI_CLK_EN    (BIT(0))
#define INTPRI_CLK_EN_M  (INTPRI_CLK_EN_V << INTPRI_CLK_EN_S)
#define INTPRI_CLK_EN_V  0x00000001U
#define INTPRI_CLK_EN_S  0

/** INTPRI_CORE0_CPU_INT_CLEAR_REG register
 *  register description
 */
#define INTPRI_CORE0_CPU_INT_CLEAR_REG (DR_REG_INTPRI_BASE + 0xa8)
/** INTPRI_CORE0_CPU_INT_CLEAR : R/W; bitpos: [31:0]; default: 0;
 *  Need add description
 */
#define INTPRI_CORE0_CPU_INT_CLEAR    0xFFFFFFFFU
#define INTPRI_CORE0_CPU_INT_CLEAR_M  (INTPRI_CORE0_CPU_INT_CLEAR_V << INTPRI_CORE0_CPU_INT_CLEAR_S)
#define INTPRI_CORE0_CPU_INT_CLEAR_V  0xFFFFFFFFU
#define INTPRI_CORE0_CPU_INT_CLEAR_S  0

#ifdef __cplusplus
}
#endif
