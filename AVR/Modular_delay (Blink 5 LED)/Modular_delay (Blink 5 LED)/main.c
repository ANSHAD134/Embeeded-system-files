/*
 * Modular_delay (Blink 5 LED).c
 *
 * Created: 27-09-2025 4.29.19 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include "gpio.h"
#include <stdint.h>


int main(void)
{
	DDRB|=(1<<DDB1);
	DDRB|=(1<<DDB2);
	DDRB|=(1<<DDB3);
	DDRB|=(1<<DDB4);
	DDRB|=(1<<DDB5);
    /* Replace with your application code */
    while (1) 
    {
	PORTB^=(1<<PORTB1);
	PORTB^=(1<<PORTB2);
	PORTB^=(1<<PORTB3);
	PORTB^=(1<<PORTB4);
	PORTB^=(1<<PORTB5);
	Anshad(2000);
    }
}

