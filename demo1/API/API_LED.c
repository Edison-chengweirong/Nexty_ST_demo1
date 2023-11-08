/*
 * API_LED.c
 *
 *LED的相关接口函数
 *  Created on: Oct 12, 2023
 *      Author: edison
 */

#include "API_LED.h"

/*
 * void Green_LED_Blinking()
 * API
 * LED闪烁接口函数
 *  Created on: Oct 12, 2023
 *      Author: edison
 */
void API_Green_LED_Blinking()
{
	  BSP_Green_LED_ON();
      HAL_Delay(100);
	  BSP_Green_LED_OFF();
	  HAL_Delay(100);
}


/*
 * void Green_LED_Blinking()
 * API
 * 关闭LED灯接口函数
 *  Created on: Oct 12, 2023
 *      Author: edison
 */
void API_Green_LED_OFF()
{
	BSP_Green_LED_OFF();
}


/*
 * void Green_LED_Blinking()
 * API
 * 打开LED灯接口函数
 *  Created on: Oct 12, 2023
 *      Author: edison
 */
void API_Green_LED_ON()
{
	BSP_Green_LED_ON();
}


/*
 * void Green_LED_Blinking()
 * API
 * LED灯接口函数翻转状态函数
 *  Created on: Oct 12, 2023
 *      Author: edison
 */
void API_Green_LED_TOG()
{
	 BSP_Green_LED_TOG();
}
