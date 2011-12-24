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


#ifndef STM32F4XX_USART_H_
#define STM32F4XX_USART_H_

/****************************************************************************
 * Included Files
 ****************************************************************************/
#include "memorymap.h"

/****************************************************************************
 * Definitions
 ****************************************************************************/
typedef struct{
  uint32_t      SR;     /* 0x00 - 0x03 */
  uint32_t      DR;     /* 0x04 - 0x07 */
  uint32_t      BRR;    /* 0x08 - 0x0B */
  uint32_t      CR1;    /* 0x0C - 0x0F */
  uint32_t      CR2;    /* 0x10 - 0x13 */
  uint32_t      CR3;    /* 0x14 - 0x17 */
  uint32_t      GTPR;   /* 0x18 - 0x1B */
}USART_Type;

/* Register Bit mask Definitions */

/* USART Status Register (USART_SR) */

#define USART_SR_PE             ((uint32_t)0x00000001)
#define USART_SR_FE             ((uint32_t)0x00000002)
#define USART_SR_NF             ((uint32_t)0x00000004)
#define USART_SR_ORE            ((uint32_t)0x00000008)
#define USART_SR_IDLE           ((uint32_t)0x00000010)
#define USART_SR_RXNE           ((uint32_t)0x00000020)
#define USART_SR_TC             ((uint32_t)0x00000040)
#define USART_SR_TXE            ((uint32_t)0x00000080)
#define USART_SR_LBD            ((uint32_t)0x00000100)
#define USART_SR_CTS            ((uint32_t)0x00000200)

/* USART Data register (USART_DR) */

#define USART_DR_MASK           ((uint32_t)0x000000FF)

/* USART Baud rate register (USART_BRR) */

#define USART_BRR_DIV_Fraction  ((uint32_t)0x0000000F)
#define USART_BRR_DIV_Mantissa  ((uint32_t)0x0000FFF0)

/* USART Control register 1 (USART_CR1) */

#define USART_CR1_SBK           ((uint32_t)0x00000001)
#define USART_CR1_RWU           ((uint32_t)0x00000002)
#define USART_CR1_RE            ((uint32_t)0x00000004)
#define USART_CR1_TE            ((uint32_t)0x00000008)
#define USART_CR1_IDLEIE        ((uint32_t)0x00000010)
#define USART_CR1_RXNEIE        ((uint32_t)0x00000020)
#define USART_CR1_TCIE          ((uint32_t)0x00000040)
#define USART_CR1_TXEIE         ((uint32_t)0x00000080)
#define USART_CR1_PEIE          ((uint32_t)0x00000100)
#define USART_CR1_PS            ((uint32_t)0x00000200)
#define USART_CR1_PCE           ((uint32_t)0x00000400)
#define USART_CR1_WAKE          ((uint32_t)0x00000800)
#define USART_CR1_M             ((uint32_t)0x00001000)
#define USART_CR1_UE            ((uint32_t)0x00002000)
#define USART_CR1_OVER8         ((uint32_t)0x00008000)

/* USART Control register 2 (USART_CR2) */

#define USART_CR2_ADD           ((uint32_t)0x0000000F) /* Bit 0-3   */
#define USART_CR2_LBDL          ((uint32_t)0x00000020) /* Bit 5     */
#define USART_CR2_LBDIE         ((uint32_t)0x00000040) /* Bit 6     */
#define USART_CR2_LBCL          ((uint32_t)0x00000100) /* Bit 8     */
#define USART_CR2_CPHA          ((uint32_t)0x00000200) /* Bit 9     */
#define USART_CR2_CPOL          ((uint32_t)0x00000400) /* Bit 10    */
#define USART_CR2_CLKEN         ((uint32_t)0x00000800) /* Bit 11    */
#define USART_CR2_STOP          ((uint32_t)0x00003000) /* Bit 12-13 */
#define USART_CR2_LINEN         ((uint32_t)0x00004000) /* Bit 14    */

/* USART Control register 3 (USART_CR3) */

#define USART_CR3_EIE           ((uint32_t)0x00000001) /* Bit 0     */
#define USART_CR3_IREN          ((uint32_t)0x00000002) /* Bit 1     */
#define USART_CR3_IRLP          ((uint32_t)0x00000004) /* Bit 2     */
#define USART_CR3_HDSEL         ((uint32_t)0x00000008) /* Bit 3     */
#define USART_CR3_NACK          ((uint32_t)0x00000010) /* Bit 4     */
#define USART_CR3_SCEN          ((uint32_t)0x00000020) /* Bit 5     */
#define USART_CR3_DMAR          ((uint32_t)0x00000040) /* Bit 6     */
#define USART_CR3_DMAT          ((uint32_t)0x00000080) /* Bit 7     */
#define USART_CR3_RTSE          ((uint32_t)0x00000100) /* Bit 8     */
#define USART_CR3_CTSE          ((uint32_t)0x00000200) /* Bit 9     */
#define USART_CR3_CTSIE         ((uint32_t)0x00000400) /* Bit 10    */
#define USART_CR3_ONEBIT        ((uint32_t)0x00000800) /* Bit 11    */

/* USART Guard time and prescaler register (USART_GTPR) */

#define USART_GTPR_PSC          ((uint32_t)0x000000FF) /* Bit 0-7    */
#define USART_GTPR_GT           ((uint32_t)0x0000FF00) /* Bit 8-15   */


/****************************************************************************
 * Register Settings
 ****************************************************************************/

#define CR1_CLEAR_MASK                          ((uint16_t)0x160C)
#define CR2_CLEAR_MASK                          ((uint16_t)0x0F00)
#define CR3_CLEAR_MASK                          ((uint16_t)0x0300)
#define USART_WordLength_8b                     ((uint16_t)0x0000)
#define USART_WordLength_9b                     ((uint16_t)0x1000)
#define USART_Parity_No                         ((uint16_t)0x0000)
#define USART_Parity_Even                       ((uint16_t)0x0400)
#define USART_Parity_Odd                        ((uint16_t)0x0600)
#define USART_Mode_Tx                           ((uint16_t)0x0008)
#define USART_Mode_Rx                           ((uint16_t)0x0004)
#define USART_StopBits_1                        ((uint16_t)0x0000)
#define USART_StopBits_0_5                      ((uint16_t)0x1000)
#define USART_StopBits_2                        ((uint16_t)0x2000)
#define USART_StopBits_1_5                      ((uint16_t)0x3000)
#define USART_HardwareFlowControl_None          ((uint16_t)0x0000)
#define USART_HardwareFlowControl_RTS           ((uint16_t)0x0100)
#define USART_HardwareFlowControl_CTS           ((uint16_t)0x0200)
#define USART_HardwareFlowControl_RTS_CTS       ((uint16_t)0x0300)
/****************************************************************************
 * Inline functions
 ****************************************************************************/

/****************************************************************************
 * Public Variables
 ****************************************************************************/
#define USART1          ((USART_Type *)USART1_BASE)
#define USART2          ((USART_Type *)USART2_BASE)
#define USART3          ((USART_Type *)USART3_BASE)
#define UART4           ((USART_Type *)UART4_BASE)
#define UART5           ((USART_Type *)UART5_BASE)
#define USART6          ((USART_Type *)USART6_BASE)
/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/






#endif /* STM32F4XX_USART_H_ */
