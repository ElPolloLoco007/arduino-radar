/*
	Name:       LoadingLed.cpp
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#include "LoadingLed.h"

LoadingLedClass::LoadingLedClass()
{
	pinMode(DigitalPins::LOADINGLED, OUTPUT);
}

void LoadingLedClass::setState(int pState)
{}

int LoadingLedClass::getState() const
{
	return 0;
}

void LoadingLedClass::blink()
{
	for (int i = 0; i < 20; i++)
	{
		delay(30);
		digitalWrite(3, HIGH);
		delay(30);
		digitalWrite(3, LOW);
	}
}

LoadingLedClass LoadingLed;

