/*
 * BSP_LED.h
 *
 *  Created on: Oct 12, 2023
 *      Author: edison
 */

#ifndef BSP_LED_H_
#define BSP_LED_H_

#include "main.h"

#define Green_LED_PIN     GPIO_PIN_5
#define Green_LED_PORT    GPIOA


void BSP_Green_LED_ON();
void BSP_Green_LED_OFF();
void BSP_Green_LED_TOG();
#endif /* BSP_LED_H_ */
