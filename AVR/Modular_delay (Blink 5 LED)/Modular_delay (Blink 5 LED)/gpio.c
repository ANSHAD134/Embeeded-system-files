/*
 * gpio.c
 *
 * Created: 29-09-2025 5.54.25 PM
 *  Author: HP
 */ 
#include <avr/io.h>
#include "gpio.h"

void gpio_init(void)
{
	
DDRB|=(1<<DDB1);
DDRB|=(1<<DDB2);
DDRB|=(1<<DDB3);
DDRB|=(1<<DDB4);
DDRB|=(1<<DDB5);

}