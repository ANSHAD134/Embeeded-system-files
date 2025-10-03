/*
 * timer0_overflow_interrupt.c
 *
 * Created: 29-09-2025 8.48.19 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
volatile uint16_t count=0;

ISR(TIMER0_OVF_vect)   //INTERRUPUT SERVICE ROUTINE (TIMER_OVF_VECT "ADDRESS" FOR TIMER OVERFLOW INTERRUPT)
{
	if (count>=977)
	{
		PORTB^=(1<<PORTB5);
		count=0;
	}
	count++;
}

int main(void)
{
	DDRB|=(1<<DDB5);
	TCCR0A=0; //normal mode
	TCCR0B|=(1<<CS00)|(1<<CS01); //64 prescalar
	TIMSK0|=(1<<TOIE0); //enabling timer overflow interrupt for timer 0 in normal mode
	sei();   //Enable global interrupt
    /* Replace with your application code */
    while (1) 
    {
    }
}

