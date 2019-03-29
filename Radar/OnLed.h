/*
	Name:       OnLed.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _ONLED_h
#define _ONLED_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#include "Config.h"
#include "Led.h"
#else
#include "WProgram.h"
#endif

class OnLedClass : public LedClass
{
public:
	OnLedClass();
	void setState(int pState) override;
	int getState() const override;
	void blink() override;
};
extern OnLedClass OnLed;

#endif

