/*
	Name:       OffLed.cpp
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#include "OffLed.h"


OffLedClass::OffLedClass()
{
	pinMode(DigitalPins::OFFLED, OUTPUT);
}

void OffLedClass::setState(int pState)
{
	state = pState;
}

int OffLedClass::getState() const
{
	return state;
}

void OffLedClass::blink()
{}

OffLedClass OffLed;

