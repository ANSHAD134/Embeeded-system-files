/*
 * timer0_program (PRESCALR 1024).c
 *
 * Created: 19-09-2025 7.55.46 PM
 * Author : HP
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>

void delay_1s(void)
{
	unsigned int i;
	unsigned int count=61;
	for (i=0;i<count;i++)
	{
		TCNT0=0;
		TCCR0A=0;
		TCCR0B|=(1<<CS02) | (1<<CS00);
		TIFR0|=(1<<TOV0);
		while (!(TIFR0 & (1 << TOV0)));
	}
}

int main(void)
{
	DDRB|=(1<<DDB5);
	/* Replace with your application code */
	while (1)
	{
		PORTB^=(1<<PORTB5);
		delay_1s();
	}
}

