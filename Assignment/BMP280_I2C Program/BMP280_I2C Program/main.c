/*
 * BMP280_I2C Program.c
 *
 * Created: 02-12-2025 8.12.56 PM
 * Author : HP
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>
#include "lcd.h"
#include "i2c.h"
#include "bmp.h"


int main(void)
{
	float Temperature, Pressure;
	
	I2C_init();										// Initialize I2C
	lcd_init();										// Initialize LCD
    BMP_init();										// Initialize BMP280
	lcd_clear();									// clear_lcd
	lcd_set_cursor(0,0);							// Set first line
	lcd_print("TEMP:");								// Print Temperature
	lcd_set_cursor(1,0);							// Set second line
	lcd_print("Pres:");								// Print Pressure
	
    while (1) 
    {
		// ===== Read BMP280 sensor =====//
		Temperature = BMP_readTemperature();		// Read temperature
		Pressure = BMP_readPressure();				// Read pressure
		
		// ===== Print Temperature and Pressure in LCD ======//
		
		lcd_set_cursor(0,5);
		lcd_print_float(Temperature);				// Print Temperature value
		lcd_data(0xDF);								// Prints degree symbol
		lcd_print("C");								// Print C
		
		lcd_set_cursor(1,5);
		lcd_print_float(Pressure / 100.0f);			// Print Temperature value
		lcd_print(" hPa");							// Print hPa (hectopascal)
		
		_delay_ms(1000);							// Wait for 1 second
    }
}

