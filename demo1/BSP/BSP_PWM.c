/*
 * BSP_PWM.c
 *
 *  Created on: Nov 3, 2023
 *      Author: edison
 */
#include "BSP_PWM.h"

uint16_t duty_num1 = 10;
uint8_t  pwm_flag=0;


void BSP_pwhLED_put()
{
#if 1

	HAL_Delay(20);
	if(pwm_flag == 0)
	{
		duty_num1=duty_num1+10;
		if(duty_num1 > 500)
		{
			pwm_flag=1;
		}
	}
	else if(pwm_flag ==1 )
	{
		duty_num1=duty_num1-10;
		if(duty_num1 < 10)
		{
			pwm_flag=0;
		}
	}

	__HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_2,duty_num1);

#endif

}
