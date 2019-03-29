/*
	Name:       Display.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _DISPLAY_h
#define _DISPLAY_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#include "Temperature.h"
#include <Wire.h>  
#include <LiquidCrystal_I2C.h>
#include "string.h"
#else
#include "WProgram.h"
#endif
//LiquidCrystal_I2C lcd(0x27, 2, 16);

class DisplayClass
{
private:
	TemperatureClass temperature;

public:
	DisplayClass();
	void intro(LiquidCrystal_I2C lcd);
	void degree(LiquidCrystal_I2C lcd, int counter, int distance, int temperature);
};
extern DisplayClass Display;

#endif

