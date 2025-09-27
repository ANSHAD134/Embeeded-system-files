/*
 * Modular_delay.c
 *
 * Created: 26-09-2025 8.20.55 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include "Anshad.h"
#include<stdint.h>

int main(void)
{
	DDRB|=(1<<DDB5);
    /* Replace with your application code */
    while (1) 
    {
		PORTB^=(1<<PORTB5);
		Anshad(2000);
    }
}

