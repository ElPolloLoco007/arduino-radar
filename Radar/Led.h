/*
	Name:       Led.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _LED_h
#define _LED_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#include "Config.h"

#else
#include "WProgram.h"
#endif

class LedClass
{

protected:
	int state;

public:
	LedClass() {}

	virtual void setState(int pState) = 0;
	virtual int getState() const { return 0; }
	virtual void blink() = 0;
};

#endif

