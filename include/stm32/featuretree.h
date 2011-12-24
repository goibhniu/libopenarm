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


#ifndef FEATURETREE_H_
#define FEATURETREE_H_

/****************************************************************************
 * Included Files
 ****************************************************************************/


/****************************************************************************
 * Definitions
 ****************************************************************************/
#ifdef STM32L151C6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32L151C8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32L151CB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32L151R6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32L151R8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32L151RB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32L151V8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32L151VB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32L152C6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32L152C8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32L152CB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32L152R6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32L152R8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32L152RB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32L152V8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32L152VB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F100C4
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00004000 /* 16KB */
#define RAM_SIZE                                0x00001000 /* 4KB  */
#endif
#ifdef STM32F100C6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#define RAM_SIZE                                0x00001000 /* 4KB  */
#endif
#ifdef STM32F100C8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F100CB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F100R4
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00004000 /* 16KB */
#define RAM_SIZE                                0x00001000 /* 4KB  */
#endif
#ifdef STM32F100R6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#define RAM_SIZE                                0x00001000 /* 4KB  */
#endif
#ifdef STM32F100R8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F100RB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F100RC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F100RD
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00060000 /* 384KB */
#endif
#ifdef STM32F100RE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F100V8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F100VB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F100VC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F100VD
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00060000 /* 384KB */
#endif
#ifdef STM32F100VE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F100ZC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F100ZD
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00060000 /* 384KB */
#endif
#ifdef STM32F100ZE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F101C4
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00004000 /* 16KB */
#define RAM_SIZE                                0x00001000 /* 4KB  */
#endif
#ifdef STM32F101C6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32F101C8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F101CB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F101R4
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00004000 /* 16KB */
#define RAM_SIZE                                0x00001000 /* 4KB  */
#endif
#ifdef STM32F101R6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32F101R8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F101RB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F101RC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F101RD
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00060000 /* 384KB */
#endif
#ifdef STM32F101RE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F101RF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F101RG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F101T4
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00004000 /* 16KB */
#define RAM_SIZE                                0x00001000 /* 4KB  */
#endif
#ifdef STM32F101T6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32F101T8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F101TB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F101V8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F101VB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F101VC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F101VD
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00060000 /* 384KB */
#endif
#ifdef STM32F101VE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F101VF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F101VG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F101ZC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F101ZD
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00060000 /* 384KB */
#endif
#ifdef STM32F101ZE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F101ZG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F102C4
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00004000 /* 16KB */
#endif
#ifdef STM32F102C6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32F102C8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F102CB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F102R4
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00004000 /* 16KB */
#endif
#ifdef STM32F102R6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32F102R8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F102RB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F103C4
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00004000 /* 16KB */
#endif
#ifdef STM32F103C6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32F103C8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F103CB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F103R4
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00004000 /* 16KB */
#endif
#ifdef STM32F103R6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32F103R8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F103RB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F103RC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F103RD
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00060000 /* 384KB */
#endif
#ifdef STM32F103RE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F103RF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F103RG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F103T4
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00004000 /* 16KB */
#endif
#ifdef STM32F103T6
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00008000 /* 32KB */
#endif
#ifdef STM32F103T8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F103TB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F103V8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F103VB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F103VC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F103VD
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00060000 /* 384KB */
#endif
#ifdef STM32F103VE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F103VF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F103VG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F103ZC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F103ZD
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00060000 /* 384KB */
#endif
#ifdef STM32F103ZE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F103ZF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F103ZG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F105R8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F105RB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F105RC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F105V8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /* 64KB */
#endif
#ifdef STM32F105VB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F105VC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F107RB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F107RC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F107VB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F107VC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F205RB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F205RC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F205RE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F205RF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F205RG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F205VB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /* 128KB */
#endif
#ifdef STM32F205VC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F205VE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F205VF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F205VG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F205ZC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F205ZE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F205ZF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F205ZG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F207IC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F207IE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F207IF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F207IG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F207VC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F207VE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F207VF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F207VG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F207ZC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /* 256KB */
#endif
#ifdef STM32F207ZE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F207ZF
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x000C0000 /* 768KB */
#endif
#ifdef STM32F207ZG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F215RE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F215RG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F215VE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F215VG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F215ZE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F215ZG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F217IE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F217IG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F217VE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F217VG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F217ZE
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#endif
#ifdef STM32F217ZG
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#endif
#ifdef STM32F405RG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#define HAVE_RNG                                1
#define MAX_CPU_FREQUENCY                       0x0A037A00
#endif
#ifdef STM32F405VG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#define HAVE_FSMC                               1
#define HAVE_RNG                                1
#define MAX_CPU_FREQUENCY                       0x0A037A00
#endif
#ifdef STM32F405ZG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#define HAVE_FSMC                               1
#define HAVE_RNG                                1
#define MAX_CPU_FREQUENCY                       0x0A037A00
#endif
#ifdef STM32F407IE
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#define HAVE_FSMC                               1
#define HAVE_ETHERNET                           1
#define HAVE_DCMI                               1
#define HAVE_RNG                                1
#define MAX_CPU_FREQUENCY                       0x0A037A00
#endif
#ifdef STM32F407IG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#define HAVE_FSMC                               1
#define HAVE_ETHERNET                           1
#define HAVE_DCMI                               1
#define HAVE_RNG                                1
#define MAX_CPU_FREQUENCY                       0x0A037A00
#endif
#ifdef STM32F407VE
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /* 512KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#define HAVE_FSMC                               1
#define HAVE_ETHERNET                           1
#define HAVE_DCMI                               1
#define HAVE_RNG                                1
#define MAX_CPU_FREQUENCY                       0x0A037A00
#endif
#ifdef STM32F407VG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#define HAVE_FSMC                               1
#define HAVE_ETHERNET                           1
#define HAVE_DCMI                               1
#define HAVE_RNG                                1
#define MAX_CPU_FREQUENCY                       0x0A037A00
#if !defined  (HSI_VALUE)
  #define HSI_VALUE    ((uint32_t)16000000) /*!< Value of the Internal oscillator in Hz*/
#endif /* HSI_VALUE */
#endif
#ifdef STM32F407ZE
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /*  512KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#define HAVE_FSMC                               1
#define HAVE_ETHERNET                           1
#define HAVE_DCMI                               1
#define HAVE_RNG                                1
#define MAX_CPU_FREQUENCY                       0x0A037A00
#endif
#ifdef STM32F407ZG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#define HAVE_FSMC                               1
#define HAVE_ETHERNET                           1
#define HAVE_DCMI                               1
#define HAVE_RNG                                1
#define MAX_CPU_FREQUENCY                       0x0A037A00
#endif
#ifdef STM32F415RG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#endif
#ifdef STM32F415VG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#endif
#ifdef STM32F415ZG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#endif
#ifdef STM32F417IE
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /*  512KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#endif
#ifdef STM32F417IG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#endif
#ifdef STM32F417VE
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /*  512KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#endif
#ifdef STM32F417VG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#endif
#ifdef STM32F417ZE
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00080000 /*  512KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#endif
#ifdef STM32F417ZG
#define STM32F4XX                               1
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00100000 /* 1024KB */
#define RAM_SIZE                                0x00030000 /*  192KB */
#endif
#ifdef STM32W108C8
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00010000 /*   64KB */
#endif
#ifdef STM32W108CB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /*  128KB */
#endif
#ifdef STM32W108CC
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00040000 /*  256KB */
#endif
#ifdef STM32W108CZ
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x030000
#endif
#ifdef STM32W108HB
#define FLASH_BASE                              0x08000000
#define RAM_BASE                                0x20000000
#define FLASH_SIZE                              0x00020000 /*  128KB */
#endif
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






#endif /* FEATURETREE_H_ */
