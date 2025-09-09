/*
 * LED ON or OFF using Switch.c
 *
 * Created: 09-09-2025 6.43.14 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0b00000000;
	PORTC=0b00000001;
	
	DDRD=0b00001000;
	
    /* Replace with your application code */
    while (1) 
    {
		if (PINC==0b00000000)
		{
			PORTD=0b00001000;
		}
		else {
			PORTD=0b00000000;
    }
}
}
