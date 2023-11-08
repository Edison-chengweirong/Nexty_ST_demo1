/*
 * BSP_KEY.c
 *
 *  Created on: Oct 12, 2023
 *      Author: edison
 */
#include "BSP_KEY.h"

/*
 * BSP_KEY.c
 * 按键读取函数
 *  Created on: Oct 20, 2023
 *      Author: edison
 */
uint8_t KEY_Scan(uint8_t mode)
{
 static uint8_t key_up=1;//按键按松开标志
 uint8_t KEY = HAL_GPIO_ReadPin(KEY_PORT, KEY_PIN);
 if(mode)
 {
  key_up=1;  //支持连按
 }

 if(key_up&&(KEY==0))
 {
  HAL_Delay(10);//去抖动
  key_up=0;
  if(KEY==0)
  return KEY_PRES;
 }
 else if(KEY==1)
 key_up=1;
 return 0;// 无按键按下
}

