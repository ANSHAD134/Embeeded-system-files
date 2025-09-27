/*
 * timer0_CTM.c
 *
 * Created: 19-09-2025 8.37.15 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
	DDRB|=(1<<DDB5);
	TCCR0A|=(1<<WGM01); //CTC MODE
	OCR0A=200; //SETPOINT EQUAL TO 200
	TCNT0=0; //INITIAL VALUE OF TIMER IS 0
	TCCR0B|=(1<<CS00); 
	TCCR0B|=(1<<CS02); //PRESCALAR OF 1024
	TIFR0 |=(1<<OCF0A); //WRITING 1 TO OCF0A OF TIFR0 REGISTER TO TO RESET IT
    /* Replace with your application code */
    while (1) 
    {
		PORTB^=(1<<PORTB5);
		for(int i=0;i<156;i++)
		
		{
			while(!(TIFR0&(1<<OCF0A)));
			{
				
			}
			TIFR0 |=(1<<OCF0A);
		}
    }
}

