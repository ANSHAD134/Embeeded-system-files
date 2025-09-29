/*
 * Modular_delay (Blink 5 LED).c
 *
 * Created: 29-09-2025 5.50.06 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include "delay.h"
#include "gpio.h"
#include <stdint.h>

int main(void)
{
	gpio_init();
    /* Replace with your application code */
    while (1) 
    {
		PORTB^=(1<<PORTB1);
		PORTB^=(1<<PORTB2);
		PORTB^=(1<<PORTB3);
		PORTB^=(1<<PORTB4);
		PORTB^=(1<<PORTB5);
		delay(2000);
    }
}

