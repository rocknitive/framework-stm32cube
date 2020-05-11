/**
  ******************************************************************************
  * @file    stm32l4r9i_eval_ospi_ram.h
  * @author  MCD Application Team
  * @brief   This file contains the common defines and functions prototypes for
  *          the stm32l4r9i_eval_ospi_ram.c driver.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32L4R9I_EVAL_OSPI_RAM_H
#define __STM32L4R9I_EVAL_OSPI_RAM_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include "../Components/iss66wvh8m8/iss66wvh8m8.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32L4R9I_EVAL
  * @{
  */

/** @addtogroup STM32L4R9I_EVAL_OSPI_RAM
  * @{
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup STM32L4R9I_EVAL_OSPI_RAM_Exported_Constants Exported Constants
  * @{
  */
/* OSPI Error codes */
#define OSPI_RAM_OK            ((uint8_t)0x00)
#define OSPI_RAM_ERROR         ((uint8_t)0x01)

/**
  * @}
  */

/* Exported types ------------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/
/** @defgroup STM32L4R9I_EVAL_OSPI_RAM_Exported_Functions Exported Functions
  * @{
  */
uint8_t BSP_OSPI_RAM_Init                  (void);
uint8_t BSP_OSPI_RAM_DeInit                (void);
uint8_t BSP_OSPI_RAM_Read                  (uint8_t* pData, uint32_t ReadAddr, uint32_t Size);
uint8_t BSP_OSPI_RAM_Read_DMA              (uint8_t* pData, uint32_t ReadAddr, uint32_t Size);
uint8_t BSP_OSPI_RAM_Write                 (uint8_t* pData, uint32_t WriteAddr, uint32_t Size);
uint8_t BSP_OSPI_RAM_Write_DMA             (uint8_t* pData, uint32_t WriteAddr, uint32_t Size);
uint8_t BSP_OSPI_RAM_EnableMemoryMappedMode(void);
uint8_t BSP_OSPI_RAM_EnterDeepPowerDown    (void);
uint8_t BSP_OSPI_RAM_LeaveDeepPowerDown    (void);
void    BSP_OSPI_RAM_DMA_IRQHandler        (void);
void    BSP_OSPI_RAM_IRQHandler            (void);

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __STM32L4R9I_EVAL_OSPI__RAM_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
