/*
 * gpio.c
 *
 * Created: 27-09-2025 5.12.40 PM
 *  Author: HP
 */ 
#include <avr/io.h>
void timer0_int()
{
	TCCR0A|=(1<<WGM01);
	OCR0A=249;
	TCNT0=0;
	TCCR0B|=(1<<CS00);
	TCCR0B|=(1<<CS01);
	TIFR0|=(1<<OCF0A);
}

void Anshad(uint16_t ms)
{
	timer0_int();
	while(ms--)
	{
		while (!(TIFR0&(1<<OCF0A)))
		{
		}
		TIFR0|=(1<<OCF0A);
	}
}
