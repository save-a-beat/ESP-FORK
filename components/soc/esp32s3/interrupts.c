/*
 * SPDX-FileCopyrightText: 2020-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "soc/interrupts.h"

const char *const esp_isr_names[ETS_MAX_INTR_SOURCE] = {
    [0] = "WIFI_MAC",
    [1] = "WIFI_NMI",
    [2] = "WIFI_PWR",
    [3] = "WIFI_BB",
    [4] = "BT_MAC",
    [5] = "BT_BB",
    [6] = "BT_BB_NMI",
    [7] = "RWBT",
    [8] = "RWBLE",
    [9] = "RWBT_NMI",
    [10] = "RWBLE_NMI",
    [11] = "I2C_MASTER",
    [12] = "SLC0",
    [13] = "SLC1",
    [14] = "UHCI0",
    [15] = "UHCI1",
    [16] = "GPIO",
    [17] = "GPIO_NMI",
    [18] = "GPIO_INTR_2",
    [19] = "GPIO_NMI_2",
    [20] = "SPI1",
    [21] = "SPI2",
    [22] = "SPI3",
    [24] = "LCD_CAM",
    [25] = "I2S0",
    [26] = "I2S1",
    [27] = "UART0",
    [28] = "UART1",
    [29] = "UART2",
    [30] = "SDIO_HOST",
    [31] = "PWM0",
    [32] = "PWM1",
    [35] = "LEDC",
    [36] = "EFUSE",
    [37] = "TWAI",
    [38] = "USB",
    [39] = "RTC_CORE",
    [40] = "RMT",
    [41] = "PCNT",
    [42] = "I2C_EXT0",
    [43] = "I2C_EXT1",
    [44] = "SPI2_DMA",
    [45] = "SPI3_DMA",
    [47] = "WDT",
    [48] = "TIMER1",
    [49] = "TIMER2",
    [50] = "TG0_T0_LEVEL",
    [51] = "TG0_T1_LEVEL",
    [52] = "TG0_WDT_LEVEL",
    [53] = "TG1_T0_LEVEL",
    [54] = "TG1_T1_LEVEL",
    [55] = "TG1_WDT_LEVEL",
    [56] = "CACHE_IA",
    [57] = "SYSTIMER_TARGET0",
    [58] = "SYSTIMER_TARGET1",
    [59] = "SYSTIMER_TARGET2",
    [60] = "SPI_MEM_REJECT_CACHE",
    [61] = "DCACHE_PRELOAD0",
    [62] = "ICACHE_PRELOAD0",
    [63] = "DCACHE_SYNC0",
    [64] = "ICACHE_SYNC0",
    [65] = "APB_ADC",
    [66] = "DMA_IN_CH0",
    [67] = "DMA_IN_CH1",
    [68] = "DMA_IN_CH2",
    [69] = "DMA_IN_CH3",
    [70] = "DMA_IN_CH4",
    [71] = "DMA_OUT_CH0",
    [72] = "DMA_OUT_CH1",
    [73] = "DMA_OUT_CH2",
    [74] = "DMA_OUT_CH3",
    [75] = "DMA_OUT_CH4",
    [76] = "RSA",
    [77] = "SHA",
    [78] = "AES",
    [79] = "FROM_CPU_INTR0",
    [80] = "FROM_CPU_INTR1",
    [81] = "FROM_CPU_INTR2",
    [82] = "FROM_CPU_INTR3",
    [83] = "ASSIST_DEBUG",
    [84] = "DMA_APBPERI_PMS",
    [85] = "CORE0_IRAM0_PMS",
    [86] = "CORE0_DRAM0_PMS",
    [87] = "CORE0_PIF_PMS",
    [88] = "CORE0_PIF_PMS_SIZE",
    [89] = "CORE1_IRAM0_PMS",
    [90] = "CORE1_DRAM0_PMS",
    [91] = "CORE1_PIF_PMS",
    [92] = "CORE1_PIF_PMS_SIZE",
    [93] = "BACKUP_PMS_VIOLATE",
    [94] = "CACHE_CORE0_ACS",
    [95] = "CACHE_CORE1_ACS",
    [96] = "USB_SERIAL_JTAG",
    [97] = "PERI_BACKUP",
    [98] = "DMA_EXTMEM_REJECT",
};