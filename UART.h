#ifndef UART_H
#define UART_H

#include <avr/io.h>
#include <avr/interrupt.h>

#define F_CPU 4915200UL //4.9152 MHz
#define BAUD 9600
#define MYUBRR F_CPU/16/BAUD-1

void UART_init(uint16_t ubrr);

void UART_transmit(uint8_t data);
uint8_t UART_receive(void);

void UART_send_string(const char* str);

#endif // UART_H