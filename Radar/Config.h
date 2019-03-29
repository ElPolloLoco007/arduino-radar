/*
	Name:       Config.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _CONFIG_h
#define _CONFIG_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

namespace DigitalPins
{
	//Main button
	const int POWERONOFF = 2;
	//on off loading leds
	const int LOADINGLED = 3;
	const int OFFLED = 4;
	const int ONLED = 5;
	//Servo engine
	const int SERVO = 8;
	//RGB Module 
	const int RGBGreen = 9;
	const int RGBRed = 10;
	const int RGBBlue = 11;
	//Ultrasonic
	const int TRIGGER = 12;
	const int ECHO = 13;
}

namespace AnalogPins
{
	//Temperature sensor
	const int TEMPERATURE = 0;
}

#endif

