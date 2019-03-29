/*
	Name:       RGBLed.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _RGBLED_h
#define _RGBLED_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#include "Config.h"
#else
#include "WProgram.h"
#endif

class RGBLedClass
{
public:
	RGBLedClass();
	void x(int distance);
};
extern RGBLedClass RGBLed;

#endif

