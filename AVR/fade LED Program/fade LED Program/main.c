/*
 * fade LED Program.c
 *
 * Created: 29-09-2025 6.44.27 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD|=(1<<DDD6);
	TCCR0A|=(1<<WGM00);
	TCCR0A|=(1<<WGM01);
	TCCR0A|=(1<<COM0A1);
	TCCR0B|=(1<<CS00);
	TCCR0B|=(1<<CS01);
	OCR0A=200;
	uint8_t brightness;
    /* Replace with your application code */
    while (1) 
    {
		for(brightness=0; brightness<255; brightness++)
		{
			OCR0A=brightness;
			_delay_ms(20);
		}
		for(brightness=0; brightness>0; brightness--)
		{
			OCR0A=brightness;
			_delay_ms(20);
		}
    }
}

