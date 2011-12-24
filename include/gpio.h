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


#ifndef GPIO_H_
#define GPIO_H_

/****************************************************************************
 * Included Files
 ****************************************************************************/


/****************************************************************************
 * Definitions
 ****************************************************************************/

#define GPIOA_MODER                     (uint32_t *)(GPIOA_BASE + 0x00)
#define GPIOA_OTYPER                    (uint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_OSPEEDR                   (uint32_t *)(GPIOA_BASE + 0x08)
#define GPIOA_PUPDR                     (uint32_t *)(GPIOA_BASE + 0x0C)
#define GPIOA_IDR                       (uint32_t *)(GPIOA_BASE + 0x10)
#define GPIOA_ODR                       (uint32_t *)(GPIOA_BASE + 0x14)
#define GPIOA_BSRR                      (uint32_t *)(GPIOA_BASE + 0x18)
#define GPIOA_LCKR                      (uint32_t *)(GPIOA_BASE + 0x1C)
#define GPIOA_AFRL                      (uint32_t *)(GPIOA_BASE + 0x20)
#define GPIOA_AFRH                      (uint32_t *)(GPIOA_BASE + 0x24)

#define GPIOB_MODER                     (uint32_t *)(GPIOB_BASE + 0x00)
#define GPIOB_OTYPER                    (uint32_t *)(GPIOB_BASE + 0x04)
#define GPIOB_OSPEEDR                   (uint32_t *)(GPIOB_BASE + 0x08)
#define GPIOB_PUPDR                     (uint32_t *)(GPIOB_BASE + 0x0C)
#define GPIOB_IDR                       (uint32_t *)(GPIOB_BASE + 0x10)
#define GPIOB_ODR                       (uint32_t *)(GPIOB_BASE + 0x14)
#define GPIOB_BSRR                      (uint32_t *)(GPIOB_BASE + 0x18)
#define GPIOB_LCKR                      (uint32_t *)(GPIOB_BASE + 0x1C)
#define GPIOB_AFRL                      (uint32_t *)(GPIOB_BASE + 0x20)
#define GPIOB_AFRH                      (uint32_t *)(GPIOB_BASE + 0x24)

#define GPIOC_MODER                     (uint32_t *)(GPIOC_BASE + 0x00)
#define GPIOC_OTYPER                    (uint32_t *)(GPIOC_BASE + 0x04)
#define GPIOC_OSPEEDR                   (uint32_t *)(GPIOC_BASE + 0x08)
#define GPIOC_PUPDR                     (uint32_t *)(GPIOC_BASE + 0x0C)
#define GPIOC_IDR                       (uint32_t *)(GPIOC_BASE + 0x10)
#define GPIOC_ODR                       (uint32_t *)(GPIOC_BASE + 0x14)
#define GPIOC_BSRR                      (uint32_t *)(GPIOC_BASE + 0x18)
#define GPIOC_LCKR                      (uint32_t *)(GPIOC_BASE + 0x1C)
#define GPIOC_AFRL                      (uint32_t *)(GPIOC_BASE + 0x20)
#define GPIOC_AFRH                      (uint32_t *)(GPIOC_BASE + 0x24)

#define GPIOD_MODER                     (uint32_t *)(GPIOD_BASE + 0x00)
#define GPIOD_OTYPER                    (uint32_t *)(GPIOD_BASE + 0x04)
#define GPIOD_OSPEEDR                   (uint32_t *)(GPIOD_BASE + 0x08)
#define GPIOD_PUPDR                     (uint32_t *)(GPIOD_BASE + 0x0C)
#define GPIOD_IDR                       (uint32_t *)(GPIOD_BASE + 0x10)
#define GPIOD_ODR                       (uint32_t *)(GPIOD_BASE + 0x14)
#define GPIOD_BSRR                      (uint32_t *)(GPIOD_BASE + 0x18)
#define GPIOD_LCKR                      (uint32_t *)(GPIOD_BASE + 0x1C)
#define GPIOD_AFRL                      (uint32_t *)(GPIOD_BASE + 0x20)
#define GPIOD_AFRH                      (uint32_t *)(GPIOD_BASE + 0x24)

#define GPIOE_MODER                     (uint32_t *)(GPIOE_BASE + 0x00)
#define GPIOE_OTYPER                    (uint32_t *)(GPIOE_BASE + 0x04)
#define GPIOE_OSPEEDR                   (uint32_t *)(GPIOE_BASE + 0x08)
#define GPIOE_PUPDR                     (uint32_t *)(GPIOE_BASE + 0x0C)
#define GPIOE_IDR                       (uint32_t *)(GPIOE_BASE + 0x10)
#define GPIOE_ODR                       (uint32_t *)(GPIOE_BASE + 0x14)
#define GPIOE_BSRR                      (uint32_t *)(GPIOE_BASE + 0x18)
#define GPIOE_LCKR                      (uint32_t *)(GPIOE_BASE + 0x1C)
#define GPIOE_AFRL                      (uint32_t *)(GPIOE_BASE + 0x20)
#define GPIOE_AFRH                      (uint32_t *)(GPIOE_BASE + 0x24)

#define GPIOF_MODER                     (uint32_t *)(GPIOF_BASE + 0x00)
#define GPIOF_OTYPER                    (uint32_t *)(GPIOF_BASE + 0x04)
#define GPIOF_OSPEEDR                   (uint32_t *)(GPIOF_BASE + 0x08)
#define GPIOF_PUPDR                     (uint32_t *)(GPIOF_BASE + 0x0C)
#define GPIOF_IDR                       (uint32_t *)(GPIOF_BASE + 0x10)
#define GPIOF_ODR                       (uint32_t *)(GPIOF_BASE + 0x14)
#define GPIOF_BSRR                      (uint32_t *)(GPIOF_BASE + 0x18)
#define GPIOF_LCKR                      (uint32_t *)(GPIOF_BASE + 0x1C)
#define GPIOF_AFRL                      (uint32_t *)(GPIOF_BASE + 0x20)
#define GPIOF_AFRH                      (uint32_t *)(GPIOF_BASE + 0x24)

#define GPIOG_MODER                     (uint32_t *)(GPIOG_BASE + 0x00)
#define GPIOG_OTYPER                    (uint32_t *)(GPIOG_BASE + 0x04)
#define GPIOG_OSPEEDR                   (uint32_t *)(GPIOG_BASE + 0x08)
#define GPIOG_PUPDR                     (uint32_t *)(GPIOG_BASE + 0x0C)
#define GPIOG_IDR                       (uint32_t *)(GPIOG_BASE + 0x10)
#define GPIOG_ODR                       (uint32_t *)(GPIOG_BASE + 0x14)
#define GPIOG_BSRR                      (uint32_t *)(GPIOG_BASE + 0x18)
#define GPIOG_LCKR                      (uint32_t *)(GPIOG_BASE + 0x1C)
#define GPIOG_AFRL                      (uint32_t *)(GPIOG_BASE + 0x20)
#define GPIOG_AFRH                      (uint32_t *)(GPIOG_BASE + 0x24)

#define GPIOH_MODER                     (uint32_t *)(GPIOH_BASE + 0x00)
#define GPIOH_OTYPER                    (uint32_t *)(GPIOH_BASE + 0x04)
#define GPIOH_OSPEEDR                   (uint32_t *)(GPIOH_BASE + 0x08)
#define GPIOH_PUPDR                     (uint32_t *)(GPIOH_BASE + 0x0C)
#define GPIOH_IDR                       (uint32_t *)(GPIOH_BASE + 0x10)
#define GPIOH_ODR                       (uint32_t *)(GPIOH_BASE + 0x14)
#define GPIOH_BSRR                      (uint32_t *)(GPIOH_BASE + 0x18)
#define GPIOH_LCKR                      (uint32_t *)(GPIOH_BASE + 0x1C)
#define GPIOH_AFRL                      (uint32_t *)(GPIOH_BASE + 0x20)
#define GPIOH_AFRH                      (uint32_t *)(GPIOH_BASE + 0x24)

#define GPIOI_MODER                     (uint32_t *)(GPIOI_BASE + 0x00)
#define GPIOI_OTYPER                    (uint32_t *)(GPIOI_BASE + 0x04)
#define GPIOI_OSPEEDR                   (uint32_t *)(GPIOI_BASE + 0x08)
#define GPIOI_PUPDR                     (uint32_t *)(GPIOI_BASE + 0x0C)
#define GPIOI_IDR                       (uint32_t *)(GPIOI_BASE + 0x10)
#define GPIOI_ODR                       (uint32_t *)(GPIOI_BASE + 0x14)
#define GPIOI_BSRR                      (uint32_t *)(GPIOI_BASE + 0x18)
#define GPIOI_LCKR                      (uint32_t *)(GPIOI_BASE + 0x1C)
#define GPIOI_AFRL                      (uint32_t *)(GPIOI_BASE + 0x20)
#define GPIOI_AFRH                      (uint32_t *)(GPIOI_BASE + 0x24)

#define  GPIO_Pin_0         ((uint16_t)0x0001)  /* Pin 0 selected */
#define  GPIO_Pin_1         ((uint16_t)0x0002)  /* Pin 1 selected */
#define  GPIO_Pin_2         ((uint16_t)0x0004)  /* Pin 2 selected */
#define  GPIO_Pin_3         ((uint16_t)0x0008)  /* Pin 3 selected */
#define  GPIO_Pin_4         ((uint16_t)0x0010)  /* Pin 4 selected */
#define  GPIO_Pin_5         ((uint16_t)0x0020)  /* Pin 5 selected */
#define  GPIO_Pin_6         ((uint16_t)0x0040)  /* Pin 6 selected */
#define  GPIO_Pin_7         ((uint16_t)0x0080)  /* Pin 7 selected */
#define  GPIO_Pin_8         ((uint16_t)0x0100)  /* Pin 8 selected */
#define  GPIO_Pin_9         ((uint16_t)0x0200)  /* Pin 9 selected */
#define  GPIO_Pin_10        ((uint16_t)0x0400)  /* Pin 10 selected */
#define  GPIO_Pin_11        ((uint16_t)0x0800)  /* Pin 11 selected */
#define  GPIO_Pin_12        ((uint16_t)0x1000)  /* Pin 12 selected */
#define  GPIO_Pin_13        ((uint16_t)0x2000)  /* Pin 13 selected */
#define  GPIO_Pin_14        ((uint16_t)0x4000)  /* Pin 14 selected */
#define  GPIO_Pin_15        ((uint16_t)0x8000)  /* Pin 15 selected */

#define GPIO_PinSource0            (uint8_t)0x00
#define GPIO_PinSource1            (uint8_t)0x01
#define GPIO_PinSource2            (uint8_t)0x02
#define GPIO_PinSource3            (uint8_t)0x03
#define GPIO_PinSource4            (uint8_t)0x04
#define GPIO_PinSource5            (uint8_t)0x05
#define GPIO_PinSource6            (uint8_t)0x06
#define GPIO_PinSource7            (uint8_t)0x07
#define GPIO_PinSource8            (uint8_t)0x08
#define GPIO_PinSource9            (uint8_t)0x09
#define GPIO_PinSource10           (uint8_t)0x0A
#define GPIO_PinSource11           (uint8_t)0x0B
#define GPIO_PinSource12           (uint8_t)0x0C
#define GPIO_PinSource13           (uint8_t)0x0D
#define GPIO_PinSource14           (uint8_t)0x0E
#define GPIO_PinSource15           (uint8_t)0x0F

#define  Bit_RESET                      0x0
#define  Bit_SET                        0x1

#define  GPIO_PuPd_NOPULL   0x00
#define  GPIO_PuPd_UP       0x01
#define  GPIO_PuPd_DOWN     0x02

#define  GPIO_MODE_IN            0x00
#define  GPIO_MODE_OUT           0x01
#define  GPIO_MODE_AF            0x02
#define  GPIO_MODE_AN            0x03

#define  GPIO_Speed_2MHz         0x00
#define  GPIO_Speed_25MHz        0x01
#define  GPIO_Speed_50MHz        0x02
#define  GPIO_Speed_100MHz       0x03

#define  GPIO_AF_AF0                     0x00
#define  GPIO_AF_AF1                     0x01
#define  GPIO_AF_AF2                     0x02
#define  GPIO_AF_AF3                     0x03
#define  GPIO_AF_AF4                     0x04
#define  GPIO_AF_AF5                     0x05
#define  GPIO_AF_AF6                     0x06
#define  GPIO_AF_AF7                     0x07
#define  GPIO_AF_AF8                     0x08
#define  GPIO_AF_AF9                     0x09
#define  GPIO_AF_AF10                    0x0A
#define  GPIO_AF_AF11                    0x0B
#define  GPIO_AF_AF12                    0x0C
#define  GPIO_AF_AF13                    0x0D
#define  GPIO_AF_AF14                    0x0E
#define  GPIO_AF_AF15                    0x0F

#define  GPIO_AF_SYS                    GPIO_AF_AF0
#define  GPIO_AF_TIM1                   GPIO_AF_AF1
#define  GPIO_AF_TIM2                   GPIO_AF_AF1
#define  GPIO_AF_TIM3                   GPIO_AF_AF2
#define  GPIO_AF_TIM4                   GPIO_AF_AF2
#define  GPIO_AF_TIM5                   GPIO_AF_AF2
#define  GPIO_AF_TIM8                   GPIO_AF_AF3
#define  GPIO_AF_TIM9                   GPIO_AF_AF3
#define  GPIO_AF_TIM10                  GPIO_AF_AF3
#define  GPIO_AF_TIM11                  GPIO_AF_AF3
#define  GPIO_AF_I2C1                   GPIO_AF_AF4
#define  GPIO_AF_I2C2                   GPIO_AF_AF4
#define  GPIO_AF_I2C3                   GPIO_AF_AF4
#define  GPIO_AF_SPI1                   GPIO_AF_AF5
#define  GPIO_AF_SPI2                   GPIO_AF_AF5
#define  GPIO_AF_I2S2                   GPIO_AF_AF5
#define  GPIO_AF_I2S2ext                GPIO_AF_AF5
#define  GPIO_AF_SPI3                   GPIO_AF_AF6
#define  GPIO_AF_I2Sext                 GPIO_AF_AF6
#define  GPIO_AF_I2S3                   GPIO_AF_AF6
#define  GPIO_AF_USART1                 GPIO_AF_AF7
#define  GPIO_AF_USART2                 GPIO_AF_AF7
#define  GPIO_AF_USART3                 GPIO_AF_AF7
#define  GPIO_AF_I2S3ext                GPIO_AF_AF7
#define  GPIO_AF_UART4                  GPIO_AF_AF8
#define  GPIO_AF_UART5                  GPIO_AF_AF8
#define  GPIO_AF_USART6                 GPIO_AF_AF8
#define  GPIO_AF_CAN1                   GPIO_AF_AF9
#define  GPIO_AF_CAN2                   GPIO_AF_AF9
#define  GPIO_AF_TIM12                  GPIO_AF_AF9
#define  GPIO_AF_TIM13                  GPIO_AF_AF9
#define  GPIO_AF_TIM14                  GPIO_AF_AF9
#define  GPIO_AF_OTG_HS                 GPIO_AF_AF10
#define  GPIO_AF_ETH                    GPIO_AF_AF11
#define  GPIO_AF_FSMC                   GPIO_AF_AF12
#define  GPIO_AF_SDIO                   GPIO_AF_AF12
#define  GPIO_AF_OTG_FS                 GPIO_AF_AF12
#define  GPIO_AF_DCMI                   GPIO_AF_AF13
#define  GPIO_AF_EVENTOUT               GPIO_AF_AF15

/* Bit Mask Definitions */

/* Mode Register */

#define  GPIO_MODER_MODER0               (uint32_t )0x00000003
#define  GPIO_MODER_MODER1               (uint32_t )0x0000000C
#define  GPIO_MODER_MODER2               (uint32_t )0x00000030
#define  GPIO_MODER_MODER3               (uint32_t )0x000000C0
#define  GPIO_MODER_MODER4               (uint32_t )0x00000300
#define  GPIO_MODER_MODER5               (uint32_t )0x00000C00
#define  GPIO_MODER_MODER6               (uint32_t )0x00003000
#define  GPIO_MODER_MODER7               (uint32_t )0x0000C000
#define  GPIO_MODER_MODER8               (uint32_t )0x00030000
#define  GPIO_MODER_MODER9               (uint32_t )0x000C0000
#define  GPIO_MODER_MODER10              (uint32_t )0x00300000
#define  GPIO_MODER_MODER11              (uint32_t )0x00C00000
#define  GPIO_MODER_MODER12              (uint32_t )0x03000000
#define  GPIO_MODER_MODER13              (uint32_t )0x0C000000
#define  GPIO_MODER_MODER14              (uint32_t )0x30000000
#define  GPIO_MODER_MODER15              (uint32_t )0xC0000000

/* Output Type Register */
#define GPIO_OTYPER_OT0                     (uint32_t)0x00000001
#define GPIO_OTYPER_OT1                     (uint32_t)0x00000002
#define GPIO_OTYPER_OT2                     (uint32_t)0x00000004
#define GPIO_OTYPER_OT3                     (uint32_t)0x00000008
#define GPIO_OTYPER_OT4                     (uint32_t)0x00000010
#define GPIO_OTYPER_OT5                     (uint32_t)0x00000020
#define GPIO_OTYPER_OT6                     (uint32_t)0x00000040
#define GPIO_OTYPER_OT7                     (uint32_t)0x00000080
#define GPIO_OTYPER_OT8                     (uint32_t)0x00000100
#define GPIO_OTYPER_OT9                     (uint32_t)0x00000200
#define GPIO_OTYPER_OT10                    (uint32_t)0x00000400
#define GPIO_OTYPER_OT11                    (uint32_t)0x00000800
#define GPIO_OTYPER_OT12                    (uint32_t)0x00001000
#define GPIO_OTYPER_OT13                    (uint32_t)0x00002000
#define GPIO_OTYPER_OT14                    (uint32_t)0x00004000
#define GPIO_OTYPER_OT15                    (uint32_t)0x00008000

/* Output Speed Register */

#define  GPIO_OSPEEDR_OSPEEDR0               (uint32_t )0x00000003
#define  GPIO_OSPEEDR_OSPEEDR1               (uint32_t )0x0000000C
#define  GPIO_OSPEEDR_OSPEEDR2               (uint32_t )0x00000030
#define  GPIO_OSPEEDR_OSPEEDR3               (uint32_t )0x000000C0
#define  GPIO_OSPEEDR_OSPEEDR4               (uint32_t )0x00000300
#define  GPIO_OSPEEDR_OSPEEDR5               (uint32_t )0x00000C00
#define  GPIO_OSPEEDR_OSPEEDR6               (uint32_t )0x00003000
#define  GPIO_OSPEEDR_OSPEEDR7               (uint32_t )0x0000C000
#define  GPIO_OSPEEDR_OSPEEDR8               (uint32_t )0x00030000
#define  GPIO_OSPEEDR_OSPEEDR9               (uint32_t )0x000C0000
#define  GPIO_OSPEEDR_OSPEEDR10              (uint32_t )0x00300000
#define  GPIO_OSPEEDR_OSPEEDR11              (uint32_t )0x00C00000
#define  GPIO_OSPEEDR_OSPEEDR12              (uint32_t )0x03000000
#define  GPIO_OSPEEDR_OSPEEDR13              (uint32_t )0x0C000000
#define  GPIO_OSPEEDR_OSPEEDR14              (uint32_t )0x30000000
#define  GPIO_OSPEEDR_OSPEEDR15              (uint32_t )0xC0000000

/* Output Speed Register */

#define  GPIO_PUPDR_PUPDR0               (uint32_t )0x00000003
#define  GPIO_PUPDR_PUPDR1               (uint32_t )0x0000000C
#define  GPIO_PUPDR_PUPDR2               (uint32_t )0x00000030
#define  GPIO_PUPDR_PUPDR3               (uint32_t )0x000000C0
#define  GPIO_PUPDR_PUPDR4               (uint32_t )0x00000300
#define  GPIO_PUPDR_PUPDR5               (uint32_t )0x00000C00
#define  GPIO_PUPDR_PUPDR6               (uint32_t )0x00003000
#define  GPIO_PUPDR_PUPDR7               (uint32_t )0x0000C000
#define  GPIO_PUPDR_PUPDR8               (uint32_t )0x00030000
#define  GPIO_PUPDR_PUPDR9               (uint32_t )0x000C0000
#define  GPIO_PUPDR_PUPDR10              (uint32_t )0x00300000
#define  GPIO_PUPDR_PUPDR11              (uint32_t )0x00C00000
#define  GPIO_PUPDR_PUPDR12              (uint32_t )0x03000000
#define  GPIO_PUPDR_PUPDR13              (uint32_t )0x0C000000
#define  GPIO_PUPDR_PUPDR14              (uint32_t )0x30000000
#define  GPIO_PUPDR_PUPDR15              (uint32_t )0xC0000000

/****************************************************************************
 * Public Types
 ****************************************************************************/
typedef struct GPIO_port {
    uint32_t MODER;
    uint32_t OTYPER;
    uint32_t OSPEEDR;
    uint32_t PUPDR;
    uint32_t IDR;
    uint32_t ODR;
    uint32_t BSRR;
    uint32_t LCKR;
    uint32_t AFRL;
    uint32_t AFRH;
} GPIO_Port;
/****************************************************************************
 * Inline functions
 ****************************************************************************/

/****************************************************************************
 * Public Variables
 ****************************************************************************/
#define GPIOA           ((GPIO_Port *)GPIOA_BASE)
#define GPIOB           ((GPIO_Port *)GPIOB_BASE)
#define GPIOC           ((GPIO_Port *)GPIOC_BASE)
#define GPIOD           ((GPIO_Port *)GPIOD_BASE)
#define GPIOE           ((GPIO_Port *)GPIOE_BASE)
#define GPIOF           ((GPIO_Port *)GPIOF_BASE)
#define GPIOG           ((GPIO_Port *)GPIOG_BASE)
#define GPIOH           ((GPIO_Port *)GPIOH_BASE)
#define GPIOI           ((GPIO_Port *)GPIOI_BASE)
/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/






#endif /* GPIO_H_ */
