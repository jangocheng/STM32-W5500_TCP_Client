#ifndef __USART1_H
#define	__USART1_H

#include "stm32f10x.h"
#include <stdio.h>
#include "NVIC_CONFIG.H"





void USART1_Config(uint32_t BaudRate);
int fputc(int ch, FILE *f);
int fgetc(FILE *f);
void sendUart1OneByte(uint8_t byteData);
void sendUart1BytesBuf(uint8_t* bytesBuf, uint16_t bytesBufLength);


#endif /* __USART1_H */
