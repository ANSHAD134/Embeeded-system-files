/*
 * DC Motor_Rotation.c
 *
 * Created: 12-09-2025 3.29.08 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void MotorCW() {
	PORTB|=(1<<PORTB4);
	PORTB&=~(1<<PORTB5);
	_delay_ms(7000);
}

void MotorCCW() {
	PORTB|=(1<<PORTB5);
	PORTB&=~(1<<PORTB4);
	_delay_ms(4000);
}

void Motorstp() {
	PORTB&=~(1<<PORTB4);
	PORTB&=~(1<<PORTB5);
	_delay_ms(2000);
}

int main(void)
{
	DDRB|=(1<<DDB4);
	DDRB|=(1<<DDB5);
    /* Replace with your application code */
    while (1) 
    {
		MotorCW();
		Motorstp();
		MotorCCW();
		Motorstp();
    }
}

