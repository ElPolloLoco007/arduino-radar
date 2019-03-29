/*
	Name:       OnLed.cpp
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#include "OnLed.h"


OnLedClass::OnLedClass()
{
	pinMode(DigitalPins::ONLED, OUTPUT);
}

void OnLedClass::setState(int pState)
{
	state = pState;
}

int OnLedClass::getState() const
{
	return state;
}

void OnLedClass::blink()
{}

OnLedClass OnLed;

