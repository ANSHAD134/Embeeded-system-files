/*
 * UART_Hello World.c
 *
 * Created: 18-10-2025 6.05.31 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void uart_init(void)
{
	UCSR0B|=(1<<TXEN0);    // Enable transmission
	UCSR0C|=(1<<UCSZ01)|(1<<UCSZ00);   // 8-bit data mode
	UBRR0H=0;
	UBRR0L=103;  // set baud rate as 9600
}

void uart_Transmitt(char *data)
{
	while(*data)
	{
	while(!(UCSR0A&(1<<UDRE0)));   // wait until UDR0 is ready
	UDR0 = *data;
	data++;
}
}


int main(void)
{
	uart_init();
    /* Replace with your application code */
    while (1) 
    {
		uart_Transmitt("Hello World\n");
		_delay_ms(1000);
    }
}

