/*
 * Timer0_Overflow_Interrupt in CTC Mode.c
 *
 * Created: 30-09-2025 6.39.29 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
volatile uint16_t count=0;


ISR(TIMER0_COMPA_vect)
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
	TCCR0A|=(1<<WGM01);
	OCR0A=255;
	TCCR0B|=(1<<CS00)|(1<<CS01);
	TIMSK0|=(1<<OCIE0A);
	sei();
    /* Replace with your application code */
    while (1) 
    {
    }
}

