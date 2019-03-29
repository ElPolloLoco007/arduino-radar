/*
	Name:       Display.cpp
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#include "Display.h"	

DisplayClass::DisplayClass()
{}

void DisplayClass::intro(LiquidCrystal_I2C lcd)
{
	lcd.setCursor(0, 0); //First line
	lcd.print("RADAR PROJECT   ");
	lcd.setCursor(0, 1); //Second line
	lcd.print("Version 2.0     ");
}

void DisplayClass::degree(LiquidCrystal_I2C lcd, int counter, int distance, int temperature)
{
	if (counter == 9 || counter == 99)
	{
		lcd.clear();
	}

	//Casting it to string
	String tmpRange = "Range:" + (String)distance + "cm" + "  ";

	if (distance > 200) {
		//out of range
		tmpRange = "Range:" + String((char)176) + "    ";
	}
	lcd.setCursor(0, 0); //First line
	lcd.print(String("Angle:") + String(counter) + String((char)223) + String("  "));
	lcd.setCursor(11, 0); //First line
	lcd.print(String("C:") + String(temperature) + String((char)223));
	lcd.setCursor(0, 1); //Second line
	lcd.print(tmpRange);
}

DisplayClass Display;


