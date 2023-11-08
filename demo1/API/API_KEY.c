/*
 * API_KEY.c
 *
 *  Created on: Oct 20, 2023
 *      Author: edison
 */

#include "API_KEY.h"

/*
 * API_KEY.c
 *void API_KEY_CALLBACK()
 *按键接口函数
 *  Created on: Oct 20, 2023
 *      Author: edison
 */
void API_KEY()
{
	API_KEY_CALLBACK();
} 

/*
 * API_KEY.c
 *void API_KEY_ACCTION()
 *按键按下MCU执行的动作，修改按键功能内容
 *  Created on: Oct 20, 2023
 *      Author: edison
 */
void API_KEY_ACCTION()
{
	BSP_Green_LED_TOG();//LED状态翻转
}

/*
 * API_KEY.c
 *void API_KEY_CALLBACK()
 *按键回调函数接口
 *  Created on: Oct 20, 2023
 *      Author: edison
 */
void API_KEY_CALLBACK()
{
 uint8_t KEY_STATE = 0; 
 KEY_STATE = KEY_Scan(0);  //得到键值
  switch(KEY_STATE)
  {     
   case KEY_PRES:  //如果按键按下
    API_KEY_ACCTION();
    break;

   default:
	HAL_Delay(10);
  }
}


