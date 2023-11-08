/*
 * BSP_UART.h
 *
 *  Created on: Oct 24, 2023
 *      Author: edison
 */

#ifndef BSP_UART_H_
#define BSP_UART_H_

#include "usart.h"
#include <string.h>
#include "stm32f4xx_hal.h"
#include <stdio.h>

#define RXBUFFERSIZE  256     //最大接收字节数

extern char RxBuffer[RXBUFFERSIZE];   //接收数据
extern uint8_t aRxBuffer;			//接收中断缓冲

void usart_orderfun();


#endif /* BSP_UART_H_ */
