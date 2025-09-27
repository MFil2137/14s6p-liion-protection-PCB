/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32c0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define bat_current_Pin GPIO_PIN_0
#define bat_current_GPIO_Port GPIOA
#define OC_alert_Pin GPIO_PIN_1
#define OC_alert_GPIO_Port GPIOA
#define charge_ok_Pin GPIO_PIN_2
#define charge_ok_GPIO_Port GPIOA
#define mcu_ok_Pin GPIO_PIN_3
#define mcu_ok_GPIO_Port GPIOA
#define ntc3_Pin GPIO_PIN_6
#define ntc3_GPIO_Port GPIOA
#define ntc4_Pin GPIO_PIN_7
#define ntc4_GPIO_Port GPIOA
#define ntc1_Pin GPIO_PIN_0
#define ntc1_GPIO_Port GPIOB
#define ntc2_Pin GPIO_PIN_1
#define ntc2_GPIO_Port GPIOB
#define ref2_5v_Pin GPIO_PIN_2
#define ref2_5v_GPIO_Port GPIOB
#define oled_com_Pin GPIO_PIN_11
#define oled_com_GPIO_Port GPIOA
#define ex1_Pin GPIO_PIN_15
#define ex1_GPIO_Port GPIOA
#define ex2_Pin GPIO_PIN_3
#define ex2_GPIO_Port GPIOB
#define ex3_Pin GPIO_PIN_4
#define ex3_GPIO_Port GPIOB
#define ex4_Pin GPIO_PIN_5
#define ex4_GPIO_Port GPIOB
#define ex5_Pin GPIO_PIN_8
#define ex5_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
