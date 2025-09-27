/*
 * Anshad.c
 *
 * Created: 26-09-2025 8.28.34 PM
 *  Author: HP
 */ 
#include <avr/io.h>
void timer0_int()
{
	TCCR0A|=(1<<WGM01);  //CTC MODE
	OCR0A=249;   //for count 250 setpoint
	TCNT0=0;     // making timer counter 0
	TCCR0B|=(1<<CS00);
	TCCR0B|=(1<<CS01);   // prescalar 64
	TIFR0|=(1<<OCF0A);   // setting flag to 0 by writing one
} 

void Anshad(uint16_t ms)  // define Anshad
{
	 timer0_int();
	while(ms--)    // create delay for "ms" milliseconds
	{
		while(!(TIFR0&(1<<OCF0A)))  // 1ms loop
		{
			
		}
		TIFR0|=(1<<OCF0A);
	}
}