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


#ifndef MEMORYMAP_H_
#define MEMORYMAP_H_

/****************************************************************************
 * Included Files
 ****************************************************************************/


/****************************************************************************
 * Definitions
 ****************************************************************************/

/* --- STM32F4 specific peripheral definitions ----------------------------- */


#define PERIPHERAL_BASE                     ((uint32_t)0x40000000)
#define PERIPHERAL_BASE_APB1                (PERIPHERAL_BASE + 0x00000)
#define PERIPHERAL_BASE_APB2                (PERIPHERAL_BASE + 0x10000)
#define PERIPHERAL_BASE_AHB1                (PERIPHERAL_BASE + 0x20000)
#define PERIPHERAL_BASE_AHB2                ((uint32_t)0x50000000)
#define PERIPHERAL_BASE_AHB3                ((uint32_t)0xA0000000)

/* STM32F40x and STM32F41x register boundary addresses */

/* AHB3 */
#define FSMC_BASE                           (PERIPHERAL_BASE_AHB3 + 0x00000)

/* AHB2 */

#define RNG_BASE                            (PERIPHERAL_BASE_AHB2 + 0x60800)
#define HASH_BASE                           (PERIPHERAL_BASE_AHB2 + 0x60400)
#define CRYP_BASE                           (PERIPHERAL_BASE_AHB2 + 0x60000)
#define DCMI_BASE                           (PERIPHERAL_BASE_AHB2 + 0x50000)
#define USB_OTG_FS_BASE                     (PERIPHERAL_BASE_AHB2 + 0x00000)

/* AHB1 */

#define USB_OTG_HS_BASE                     (PERIPHERAL_BASE_AHB1 + 0x20000)
#define ETHERNET_MAC_BASE                   (PERIPHERAL_BASE_AHB1 + 0x08000)
#define DMA2_BASE                           (PERIPHERAL_BASE_AHB1 + 0x06400)
#define DMA1_BASE                           (PERIPHERAL_BASE_AHB1 + 0x06000)
#define BKPSRAM_BASE                        (PERIPHERAL_BASE_AHB1 + 0x04000)
#define FLASH_REG_BASE                      (PERIPHERAL_BASE_AHB1 + 0x03C00)
#define RCC_BASE                            (PERIPHERAL_BASE_AHB1 + 0x03800)
#define CRC_BASE                            (PERIPHERAL_BASE_AHB1 + 0x03000)
#define GPIOI_BASE                          (PERIPHERAL_BASE_AHB1 + 0x02000)
#define GPIOH_BASE                          (PERIPHERAL_BASE_AHB1 + 0x01C00)
#define GPIOG_BASE                          (PERIPHERAL_BASE_AHB1 + 0x01800)
#define GPIOF_BASE                          (PERIPHERAL_BASE_AHB1 + 0x01400)
#define GPIOE_BASE                          (PERIPHERAL_BASE_AHB1 + 0x01000)
#define GPIOD_BASE                          (PERIPHERAL_BASE_AHB1 + 0x00C00)
#define GPIOC_BASE                          (PERIPHERAL_BASE_AHB1 + 0x00800)
#define GPIOB_BASE                          (PERIPHERAL_BASE_AHB1 + 0x00400)
#define GPIOA_BASE                          (PERIPHERAL_BASE_AHB1 + 0x00000)

/* APB2 */

#define TIM11_BASE                          (PERIPHERAL_BASE_APB2 + 0x04800)
#define TIM10_BASE                          (PERIPHERAL_BASE_APB2 + 0x04400)
#define TIM9_BASE                           (PERIPHERAL_BASE_APB2 + 0x04000)
#define EXTI_BASE                           (PERIPHERAL_BASE_APB2 + 0x03C00)
#define SYSCFG_BASE                         (PERIPHERAL_BASE_APB2 + 0x03800)
#define SPI1_BASE                           (PERIPHERAL_BASE_APB2 + 0x03000)
#define SDIO_BASE                           (PERIPHERAL_BASE_APB2 + 0x02C00)
#define ADC_BASE                            (PERIPHERAL_BASE_APB2 + 0x02000)
#define USART6_BASE                         (PERIPHERAL_BASE_APB2 + 0x01400)
#define USART1_BASE                         (PERIPHERAL_BASE_APB2 + 0x01000)
#define TIM8_BASE                           (PERIPHERAL_BASE_APB2 + 0x00400)
#define TIM1_BASE                           (PERIPHERAL_BASE_APB2 + 0x00000)

/* APB1 */

#define DAC_BASE                            (PERIPHERAL_BASE_APB1 + 0x07400)
#define PWR_BASE                            (PERIPHERAL_BASE_APB1 + 0x07000)
#define CAN2_BASE                           (PERIPHERAL_BASE_APB1 + 0x06800)
#define CAN1_BASE                           (PERIPHERAL_BASE_APB1 + 0x06400)
#define I2C3_BASE                           (PERIPHERAL_BASE_APB1 + 0x05C00)
#define I2C2_BASE                           (PERIPHERAL_BASE_APB1 + 0x05800)
#define I2C1_BASE                           (PERIPHERAL_BASE_APB1 + 0x05400)
#define UART5_BASE                          (PERIPHERAL_BASE_APB1 + 0x05000)
#define UART4_BASE                          (PERIPHERAL_BASE_APB1 + 0x04C00)
#define USART3_BASE                         (PERIPHERAL_BASE_APB1 + 0x04800)
#define USART2_BASE                         (PERIPHERAL_BASE_APB1 + 0x04400)
#define I2S3ext_BASE                        (PERIPHERAL_BASE_APB1 + 0x04000)
#define SPI3_BASE                           (PERIPHERAL_BASE_APB1 + 0x03C00)
#define SPI2_BASE                           (PERIPHERAL_BASE_APB1 + 0x03800)
#define I2S2ext_BASE                        (PERIPHERAL_BASE_APB1 + 0x03400)
#define IWDG_BASE                           (PERIPHERAL_BASE_APB1 + 0x03000)
#define WWDG_BASE                           (PERIPHERAL_BASE_APB1 + 0x02C00)
#define RTC_BASE                            (PERIPHERAL_BASE_APB1 + 0x02800)
#define TIM14_BASE                          (PERIPHERAL_BASE_APB1 + 0x02000)
#define TIM13_BASE                          (PERIPHERAL_BASE_APB1 + 0x01C00)
#define TIM12_BASE                          (PERIPHERAL_BASE_APB1 + 0x01800)
#define TIM7_BASE                           (PERIPHERAL_BASE_APB1 + 0x01400)
#define TIM6_BASE                           (PERIPHERAL_BASE_APB1 + 0x01000)
#define TIM5_BASE                           (PERIPHERAL_BASE_APB1 + 0x00C00)
#define TIM4_BASE                           (PERIPHERAL_BASE_APB1 + 0x00800)
#define TIM3_BASE                           (PERIPHERAL_BASE_APB1 + 0x00400)
#define TIM2_BASE                           (PERIPHERAL_BASE_APB1 + 0x00000)

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Inline functions
 ****************************************************************************/

/****************************************************************************
 * Public Variables
 ****************************************************************************/

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/






#endif /* MEMORYMAP_H_ */
