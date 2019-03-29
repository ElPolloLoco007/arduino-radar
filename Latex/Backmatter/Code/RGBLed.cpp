/*
	Name:       RGBLed.cpp
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#include "RGBLed.h"

RGBLedClass::RGBLedClass()
{
	pinMode(DigitalPins::RGBGreen, OUTPUT);
	pinMode(DigitalPins::RGBRed, OUTPUT);
	pinMode(DigitalPins::RGBBlue, OUTPUT);
}

void RGBLedClass::state(int distance)
{
	//0-255 brightness

	//Red
	if (distance < 10) {
		//off
		analogWrite(DigitalPins::RGBGreen, 0);
		analogWrite(DigitalPins::RGBBlue, 0);
		//on
		analogWrite(DigitalPins::RGBRed, 255);
	}
	//Green
	if (distance > 10 && distance < 100) {
		//off
		analogWrite(DigitalPins::RGBRed, 0);
		analogWrite(DigitalPins::RGBGreen, 0);
		//on
		analogWrite(DigitalPins::RGBBlue, 255);
	}
	//Blue
	if (distance > 100) {
		//off
		analogWrite(DigitalPins::RGBBlue, 0);
		analogWrite(DigitalPins::RGBRed, 0);
		//on
		analogWrite(DigitalPins::RGBGreen, 255);
	}
}

RGBLedClass RGBLed;

