/*
 * BSP_UART.c
 *
 *  Created on: Oct 24, 2023
 *      Author: edison
 */
#include "BSP_UART.h"

extern UART_HandleTypeDef huart1;   //声明串口
 
uint8_t uart_oder=0;

char RxBuffer[RXBUFFERSIZE];   //接收数据
uint8_t aRxBuffer;			//接收中断缓冲
static uint8_t Uart1_Rx_Cnt = 0;		//接收缓冲计数


char Rx_SIG[RXBUFFERSIZE];   //接收数据

char *uart_order1="ledon\r\n";
char *uart_order2="ledoff";

#if 1
 /*
 *		串口中断回调函数
 *  	Created on: Oct 25, 2023
 *      Author: edison
 */
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(huart);
  /* NOTE: This function Should not be modified, when the callback is needed,
           the HAL_UART_TxCpltCallback could be implemented in the user file
  */
 
	if(Uart1_Rx_Cnt >= 255)  //溢出判断
	{
		Uart1_Rx_Cnt = 0;
		memset(RxBuffer,0x00,sizeof(RxBuffer));
		HAL_UART_Transmit(&huart1, (uint8_t *)"数据溢出", 10,0xFFFF); 	
	}
	else
	{
		strcpy(Rx_SIG,RxBuffer);   //Rx_SIG赋值

		RxBuffer[Uart1_Rx_Cnt++] = aRxBuffer;   //接收数据转存
		if((RxBuffer[Uart1_Rx_Cnt-1] == 0x0A)&&(RxBuffer[Uart1_Rx_Cnt-2] == 0x0D)) //判断结束位
		{
			HAL_UART_Transmit(&huart1, (uint8_t *)&RxBuffer, Uart1_Rx_Cnt,0xFFFF); //将收到的信息发送出去

            while(HAL_UART_GetState(&huart1) == HAL_UART_STATE_BUSY_TX);//检测UART发送结束
            Uart1_Rx_Cnt = 0;
			memset(RxBuffer,0x00,sizeof(RxBuffer)); //清空数组
			uart_oder = 1;
		}
	}
	
	HAL_UART_Receive_IT(&huart1, (uint8_t *)&aRxBuffer, 1);   //再开启接收中断
}
#endif


 /*
  *	 	重定向c库函数printf到DEBUG_USARTx 函数功能:
  *  	Created on: Oct 25, 2023
  *      Author: edison
 */
int fputc(int ch, FILE *f)
{
  HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1, 0xffff);
  return ch;
}
 
/*
 *		重定向c库函数getchar,scanf到DEBUG_USARTx 
 *    	Created on: Oct 25, 2023
 *      Author: edison
 */
int fgetc(FILE *f)
{
  uint8_t ch = 0;
  HAL_UART_Receive(&huart1, &ch, 1, 0xffff);
  return ch;
}


/*
 *		串口指令识别
 *    	Created on: Oct 25, 2023
 *      Author: edison
 */

void usart_orderfun()
{
	if(Rx_SIG == uart_order1)
	{
			uart_oder = 1;
	}

}
