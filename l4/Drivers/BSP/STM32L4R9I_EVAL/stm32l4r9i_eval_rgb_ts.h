/**
  ******************************************************************************
  * @file    stm32l4r9i_eval_rgb_ts.h
  * @brief   This file contains the common defines and functions prototypes for
  *          the stm32l4r9i_eval_rgb_ts.c driver.
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
#ifndef __STM32L4R9I_EVAL_RGB_TS_H
#define __STM32L4R9I_EVAL_RGB_TS_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4r9i_eval.h"
/* Include touch screen FT5336 component Driver */
#include "../Components/ft5336/ft5336.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32L4R9I_EVAL
  * @{
  */

/** @defgroup STM32L4R9I_EVAL_TS STM32L4R9I_EVAL TS
  * @{
  */

/** @defgroup STM32L4R9I_EVAL_RGB_TS STM32L4R9I_EVAL RGB TS
  * @{
  */

/** @defgroup STM32L4R9I_EVAL_RGB_TS_Imported_Variables Imported Variables
  * @{
  */
/**
 *  @brief Table for touchscreen event information display on LCD :
 *  table indexed on enum @ref TS_TouchEventTypeDef information
 */
extern char * ts_event_string_tab[TOUCH_EVENT_NB_MAX];

/**
 *  @brief Table for touchscreen gesture Id information display on LCD : table indexed
 *  on enum @ref TS_GestureIdTypeDef information
 */
extern char * ts_gesture_id_string_tab[GEST_ID_NB_MAX];
/**
  * @}
  */

/** @addtogroup STM32L4R9I_EVAL_RGB_TS_Exported_Functions
  * @{
  */
uint8_t BSP_RGB_TS_Init(uint16_t ts_SizeX, uint16_t ts_SizeY);
uint8_t BSP_RGB_TS_DeInit(void);
uint8_t BSP_RGB_TS_GetState(TS_StateTypeDef *TS_State);

#if (TS_MULTI_TOUCH_SUPPORTED == 1)
uint8_t BSP_RGB_TS_Get_GestureId(TS_StateTypeDef *TS_State);
#endif /* TS_MULTI_TOUCH_SUPPORTED == 1 */

uint8_t BSP_RGB_TS_ITConfig(void);
uint8_t BSP_RGB_TS_ITGetStatus(void);
void    BSP_RGB_TS_ITClear(void);
uint8_t BSP_RGB_TS_ResetTouchData(TS_StateTypeDef *TS_State);

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

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __STM32L4R9I_EVAL_RGB_TS_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
