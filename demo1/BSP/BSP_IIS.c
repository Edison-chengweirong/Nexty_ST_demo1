/*
 * BSP_IIS.c
 *
 *  Created on: Oct 20, 2023
 *      Author: edison
 */
#include "BSP_IIS.h"

# if 0
#define BUFFER_SIZE (4)
//static uint32_t simpleBuf[BUFFER_SIZE];
uint32_t dma[4];
uint32_t val24;
int val32;


/* USER CODE BEGIN 0 */
unsigned cb_cnt=0;
//I2S接收完成回调函数
void HAL_I2S_RxCpltCallback(I2S_HandleTypeDef *hi2s)
{
	if(hi2s==&hi2s2){
		cb_cnt++;//回调次数计数
		//将两个32整型合并为一个
		//dat32 example: 0000fffb 00004f00
			val24=(dma[0]<<8)+(dma[1]>>8);
		//将24位有符号整型扩展到32位
		if(val24 & 0x800000){//negative
			val32=0xff000000 | val24;
		}else{//positive
			val32=val24;
		}
		//以采样频率的十分之一，串口发送采样值
//		if(cb_cnt%10==0)
//			printf("%d\r\n",val32);
	}
}
/* USER CODE END 0 */
#endif
