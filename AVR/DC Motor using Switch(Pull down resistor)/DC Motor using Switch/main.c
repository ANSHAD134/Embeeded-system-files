/*
 * DC Motor using Switch.c
 *
 * Created: 15-09-2025 9.45.11 PM
 * Author : HP
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB |= (1<<DDB5);
	DDRB |= (1<<DDB4);
	DDRD &= ~(1<<DDD2);
	/* Replace with your application code */
	while (1)
	{
		if (PIND&(1<<PIND2))
		{
		PORTB|=(1<<PORTB5);
		PORTB&=~(1<<PORTB4);
		_delay_ms(5000); //cw
		PORTB&=~(1<<PORTB4);
		PORTB&=~(1<<PORTB5);
		_delay_ms(2000); //stop
		PORTB|=(1<<PORTB4);
		PORTB&=~(1<<PORTB5);
		_delay_ms(5000); //ccw
		PORTB&=~(1<<PORTB4);
		PORTB&=~(1<<PORTB5);
		_delay_ms(2000); //stop
		}
		else{
			PORTB&=~(1<<PORTB4);
			PORTB&=~(1<<PORTB5); //stop
		}
		
	}
}