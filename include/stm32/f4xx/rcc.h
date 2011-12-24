/****************************************************************************
 *
 *   Copyright (C) 2011  lhousner . All rights reserved.
 *   Author: lhousner
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name Mjolinir nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/


#ifndef STM32F4XX_RCC_H_
#define STM32F4XX_RCC_H_

/****************************************************************************
 * Included Files
 ****************************************************************************/
#include "memorymap.h"

/****************************************************************************
 * Definitions
 ****************************************************************************/
#if !defined  (HSI_VALUE)
  #define HSI_VALUE    ((uint32_t)16000000) /*!< Value of the Internal oscillator in Hz*/
#endif /* HSI_VALUE */

#define RCC_CR                          (uint32_t *)(RCC_BASE + 0x00)
#define RCC_PLLCFGR                     (uint32_t *)(RCC_BASE + 0x04)
#define RCC_CFGR                        (uint32_t *)(RCC_BASE + 0x08)
#define RCC_CIR                         (uint32_t *)(RCC_BASE + 0x0C)
#define RCC_AHB1RSTR                    (uint32_t *)(RCC_BASE + 0x10)
#define RCC_AHB2RSTR                    (uint32_t *)(RCC_BASE + 0x14)
#define RCC_AHB3RSTR                    (uint32_t *)(RCC_BASE + 0x18)
#define RCC_APB1RSTR                    (uint32_t *)(RCC_BASE + 0x20)
#define RCC_APB2RSTR                    (uint32_t *)(RCC_BASE + 0x24)
#define RCC_AHB1ENR                     (uint32_t *)(RCC_BASE + 0x30)
#define RCC_AHB2ENR                     (uint32_t *)(RCC_BASE + 0x34)
#define RCC_AHB3ENR                     (uint32_t *)(RCC_BASE + 0x38)
#define RCC_APB1ENR                     (uint32_t *)(RCC_BASE + 0x40)
#define RCC_APB2ENR                     (uint32_t *)(RCC_BASE + 0x44)
#define RCC_AHB1LPENR                   (uint32_t *)(RCC_BASE + 0x50)
#define RCC_AHB2LPENR                   (uint32_t *)(RCC_BASE + 0x54)
#define RCC_AHB3LPENR                   (uint32_t *)(RCC_BASE + 0x58)
#define RCC_APB1LPENR                   (uint32_t *)(RCC_BASE + 0x60)
#define RCC_APB2LPENR                   (uint32_t *)(RCC_BASE + 0x64)
#define RCC_BDCR                        (uint32_t *)(RCC_BASE + 0x70)
#define RCC_CSR                         (uint32_t *)(RCC_BASE + 0x74)
#define RCC_SSCGR                       (uint32_t *)(RCC_BASE + 0x80)
#define RCC_PLLI2SCFGR                  (uint32_t *)(RCC_BASE + 0x84)

typedef struct {
  uint32_t      CR;                     /* 0x00 - 0x03 */
  uint32_t      PLLCFGR;                /* 0x04 - 0x07 */
  uint32_t      CFGR;                   /* 0x08 - 0x0B */
  uint32_t      CIR;                    /* 0x0C - 0x0F */
  uint32_t      AHB1RSTR;               /* 0x10 - 0x13 */
  uint32_t      AHB2RSTR;               /* 0x14 - 0x17 */
  uint32_t      AHB3RSTR;               /* 0x18 - 0x1B */
  uint32_t      RESERVED0;              /* 0x1C - 0x1F */
  uint32_t      APB1RSTR;               /* 0x20 - 0x23 */
  uint32_t      APB2RSTR;               /* 0x24 - 0x27 */
  uint32_t      RESERVED1[2];           /* 0x28 - 0x2F */
  uint32_t      AHB1ENR;                /* 0x30 - 0x33 */
  uint32_t      AHB2ENR;                /* 0x34 - 0x37 */
  uint32_t      AHB3ENR;                /* 0x38 - 0x3B */
  uint32_t      RESERVED2;              /* 0x3C - 0x3F */
  uint32_t      APB1ENR;                /* 0x40 - 0x43 */
  uint32_t      APB2ENR;                /* 0x44 - 0x47 */
  uint32_t      RESERVED3[2];           /* 0x48 - 0x4F */
  uint32_t      AHB1LPENR;              /* 0x50 - 0x53 */
  uint32_t      AHB2LPENR;              /* 0x54 - 0x57 */
  uint32_t      AHB3LPENR;              /* 0x58 - 0x5B */
  uint32_t      RESERVED4;              /* 0x5C - 0x5F */
  uint32_t      APB1LPENR;              /* 0x60 - 0x63 */
  uint32_t      APB2LPENR;              /* 0x64 - 0x67 */
  uint32_t      RESERVED5[2];           /* 0x68 - 0x6F */
  uint32_t      BDCR;                   /* 0x70 - 0x73 */
  uint32_t      CSR;                    /* 0x74 - 0x77 */
  uint32_t      RESERVED6[2];           /* 0x78 - 0x7F */
  uint32_t      SSCGR;                  /* 0x80 - 0x83 */
  uint32_t      PLLI2SCFGR;             /* 0x84 - 0x87 */
} RCC_Type;

/* Register Bits Definitions */

/* RCC clock control register (RCC_CR) */

#define RCC_CR_HSION                     ((uint32_t)0x00000001)
#define RCC_CR_HSIRDY                    ((uint32_t)0x00000002)
#define RCC_CR_HSITRM                    ((uint32_t)0x000000F8)
#define RCC_CR_HSICAL                    ((uint32_t)0x0000FF00)
#define RCC_CR_HSEON                     ((uint32_t)0x00010000)
#define RCC_CR_HSERDY                    ((uint32_t)0x00020000)
#define RCC_CR_HSEBYP                    ((uint32_t)0x00040000)
#define RCC_CR_CSSON                     ((uint32_t)0x00080000)
#define RCC_CR_PLLON                     ((uint32_t)0x01000000)
#define RCC_CR_PLLRDY                    ((uint32_t)0x02000000)
#define RCC_CR_PLLI2SON                  ((uint32_t)0x04000000)
#define RCC_CR_PLLI2SRDY                 ((uint32_t)0x08000000)

/* RCC PLL configuration register (RCC_PLLCFGR) */

#define RCC_PLLCFGR_PLLM                 ((uint32_t)0x0000003F)
#define RCC_PLLCFGR_PLLN                 ((uint32_t)0x00007FC0)
#define RCC_PLLCFGR_PLLP                 ((uint32_t)0x00030000)
#define RCC_PLLCFGR_PLLSRC               ((uint32_t)0x00400000)
#define RCC_PLLCFGR_PLLQ                 ((uint32_t)0x0F000000)

/* RCC clock configuration register (RCC_CFGR) Bitmask definitions*/

#define RCC_CFGR_SW                      (uint32_t)0x00000003
#define RCC_CFGR_SWS                     (uint32_t)0x0000000C
#define RCC_CFGR_HPRE                    (uint32_t)0x000000F0
#define RCC_CFGR_PPRE1                   (uint32_t)0x00001C00
#define RCC_CFGR_PPRE2                   (uint32_t)0x0000E000
#define RCC_CFGR_RTCPRE                  (uint32_t)0x001F0000
#define RCC_CFGR_MCO1                    (uint32_t)0x00600000
#define RCC_CFGR_I2SSRC                  (uint32_t)0x00800000
#define RCC_CFGR_MCO1PRE                 (uint32_t)0x07000000
#define RCC_CFGR_MCO2PRE                 (uint32_t)0x38000000
#define RCC_CFGR_MCO2                    (uint32_t)0xC0000000

/* RCC clock interrupt register (RCC_CIR) */



/* RCC AHB1 peripheral reset register (RCC_AHB1RSTR) */

/* RCC AHB1 peripheral clock register (RCC_AHB1ENR) */

#define RCC_AHB1Periph_GPIOA             ((uint32_t)0x00000001)
#define RCC_AHB1Periph_GPIOB             ((uint32_t)0x00000002)
#define RCC_AHB1Periph_GPIOC             ((uint32_t)0x00000004)
#define RCC_AHB1Periph_GPIOD             ((uint32_t)0x00000008)
#define RCC_AHB1Periph_GPIOE             ((uint32_t)0x00000010)
#define RCC_AHB1Periph_GPIOF             ((uint32_t)0x00000020)
#define RCC_AHB1Periph_GPIOG             ((uint32_t)0x00000040)
#define RCC_AHB1Periph_GPIOH             ((uint32_t)0x00000080)
#define RCC_AHB1Periph_GPIOI             ((uint32_t)0x00000100)
#define RCC_AHB1Periph_CRC               ((uint32_t)0x00001000)
#define RCC_AHB1Periph_FLITF             ((uint32_t)0x00008000)
#define RCC_AHB1Periph_SRAM1             ((uint32_t)0x00010000)
#define RCC_AHB1Periph_SRAM2             ((uint32_t)0x00020000)
#define RCC_AHB1Periph_BKPSRAM           ((uint32_t)0x00040000)
#define RCC_AHB1Periph_DMA1              ((uint32_t)0x00200000)
#define RCC_AHB1Periph_DMA2              ((uint32_t)0x00400000)
#define RCC_AHB1Periph_ETH_MAC           ((uint32_t)0x02000000)
#define RCC_AHB1Periph_ETH_MAC_Tx        ((uint32_t)0x04000000)
#define RCC_AHB1Periph_ETH_MAC_Rx        ((uint32_t)0x08000000)
#define RCC_AHB1Periph_ETH_MAC_PTP       ((uint32_t)0x10000000)
#define RCC_AHB1Periph_OTG_HS            ((uint32_t)0x20000000)
#define RCC_AHB1Periph_OTG_HS_ULPI       ((uint32_t)0x40000000)

/* RCC AHB2 peripheral clock enable register (RCC_AHB2ENR) */

#define RCC_AHB2Periph_DCMI              ((uint32_t)0x00000001)
#define RCC_AHB2Periph_CRYP              ((uint32_t)0x00000010)
#define RCC_AHB2Periph_HASH              ((uint32_t)0x00000020)
#define RCC_AHB2Periph_RNG               ((uint32_t)0x00000040)
#define RCC_AHB2Periph_OTG_FS            ((uint32_t)0x00000080)

#define RCC_AHB3Periph_FSMC               ((uint32_t)0x00000001)

#define RCC_APB1Periph_TIM2              ((uint32_t)0x00000001)
#define RCC_APB1Periph_TIM3              ((uint32_t)0x00000002)
#define RCC_APB1Periph_TIM4              ((uint32_t)0x00000004)
#define RCC_APB1Periph_TIM5              ((uint32_t)0x00000008)
#define RCC_APB1Periph_TIM6              ((uint32_t)0x00000010)
#define RCC_APB1Periph_TIM7              ((uint32_t)0x00000020)
#define RCC_APB1Periph_TIM12             ((uint32_t)0x00000040)
#define RCC_APB1Periph_TIM13             ((uint32_t)0x00000080)
#define RCC_APB1Periph_TIM14             ((uint32_t)0x00000100)
#define RCC_APB1Periph_WWDG              ((uint32_t)0x00000800)
#define RCC_APB1Periph_SPI2              ((uint32_t)0x00004000)
#define RCC_APB1Periph_SPI3              ((uint32_t)0x00008000)
#define RCC_APB1Periph_USART2            ((uint32_t)0x00020000)
#define RCC_APB1Periph_USART3            ((uint32_t)0x00040000)
#define RCC_APB1Periph_UART4             ((uint32_t)0x00080000)
#define RCC_APB1Periph_UART5             ((uint32_t)0x00100000)
#define RCC_APB1Periph_I2C1              ((uint32_t)0x00200000)
#define RCC_APB1Periph_I2C2              ((uint32_t)0x00400000)
#define RCC_APB1Periph_I2C3              ((uint32_t)0x00800000)
#define RCC_APB1Periph_CAN1              ((uint32_t)0x02000000)
#define RCC_APB1Periph_CAN2              ((uint32_t)0x04000000)
#define RCC_APB1Periph_PWR               ((uint32_t)0x10000000)
#define RCC_APB1Periph_DAC               ((uint32_t)0x20000000)

#define RCC_APB2Periph_TIM1              ((uint32_t)0x00000001)
#define RCC_APB2Periph_TIM8              ((uint32_t)0x00000002)
#define RCC_APB2Periph_USART1            ((uint32_t)0x00000010)
#define RCC_APB2Periph_USART6            ((uint32_t)0x00000020)
#define RCC_APB2Periph_ADC               ((uint32_t)0x00000100)
#define RCC_APB2Periph_ADC1              ((uint32_t)0x00000100)
#define RCC_APB2Periph_ADC2              ((uint32_t)0x00000200)
#define RCC_APB2Periph_ADC3              ((uint32_t)0x00000400)
#define RCC_APB2Periph_SDIO              ((uint32_t)0x00000800)
#define RCC_APB2Periph_SPI1              ((uint32_t)0x00001000)
#define RCC_APB2Periph_SYSCFG            ((uint32_t)0x00004000)
#define RCC_APB2Periph_TIM9              ((uint32_t)0x00010000)
#define RCC_APB2Periph_TIM10             ((uint32_t)0x00020000)
#define RCC_APB2Periph_TIM11             ((uint32_t)0x00040000)
/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Inline functions
 ****************************************************************************/

/****************************************************************************
 * Public Variables
 ****************************************************************************/
#define RCC                             ((RCC_Type *)RCC_BASE)
/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/






#endif /* STM32F4XX_RCC_H_ */
