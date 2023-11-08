/*
 * BSP_KEY.h
 *
 *  Created on: Oct 12, 2023
 *      Author: edison
 */

#ifndef BSP_KEY_H_
#define BSP_KEY_H_

#include "main.h"
#include "BSP_LED.h"

#define KEY_PIN GPIO_PIN_13
#define KEY_PORT GPIOC

#define KEY_PRES 1


uint8_t KEY_Scan(uint8_t mode);
#endif /* BSP_KEY_H_ */
