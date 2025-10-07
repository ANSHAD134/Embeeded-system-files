/*
 * interrupt0_LED blink using pushbutton.c
 *
 * Created: 03-10-2025 8.39.38 PM
 * Author : HP
 */
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

ISR(INT0_vect)   //Interrupt service routine for INT0
{
	PORTB^=(1<<PORTB5); //Toggle PB5
	_delay_ms(5000);	
}
int main(void)
{
	DDRD&=~(1<<DDD2);  //Making PD2 as input
	DDRB|=(1<<DDB5);   //Making PB5 as output
	DDRB|=(1<<DDB4);   //PB4 as OUTPUT
	PORTD|=(1<<PORTD2);  //Enable internal pull up to make PD2 normally high
	
	EIMSK|=(1<<INT0);   //Enable INT0 at EIMSK Register
 	EICRA|=(1<<ISC01);  //Enable Falling edge detection in EICRA Register
	sei();   //Enable global Interrupt at SREG
    /* Replace with your application code */
    while (1) 
    {
		PORTB^=(1<<PORTB4);
		_delay_ms(2000);
    }
}

