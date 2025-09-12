/*
 * Blink_Bitwise.c
 *
 * Created: 10-09-2025 9.53.41 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB|=(1<<DDB5);
    /* Replace with your application code */
    while (1) 
    {
		PORTB|=(1<<PORTB5);
		_delay_ms(1000);
		PORTB&=~(1<<PORTB5);
		_delay_ms(1000);
    }
}

