/*
 * BSP_LED.c
 *
 *  Created on: Oct 12, 2023
 *      Author: edison
 */

#include "BSP_LED.h"



/*
 * void Green_LED_Blinking()
 *
 * 绿色灯亮
 *  Created on: Oct 12, 2023
 *      Author: edison
 */
void BSP_Green_LED_ON()
{
	HAL_GPIO_WritePin(Green_LED_PORT, Green_LED_PIN, GPIO_PIN_SET);
}


/*
 * void Green_LED_Blinking()
 *
 * 绿色灯灭
 *  Created on: Oct 12, 2023
 *      Author: edison
 */
void BSP_Green_LED_OFF()
{
	HAL_GPIO_WritePin(Green_LED_PORT, Green_LED_PIN, GPIO_PIN_RESET);
}


/*
 * void Green_LED_Blinking()
 *
 * 灯状态翻转
 *  Created on: Oct 12, 2023
 *      Author: edison
 */
void BSP_Green_LED_TOG()
{
	HAL_GPIO_TogglePin(Green_LED_PORT, Green_LED_PIN);
}
