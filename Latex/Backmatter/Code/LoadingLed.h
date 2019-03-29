/*
	Name:       LoadingLed.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _LOADINGLED_h
#define _LOADINGLED_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#include "Led.h"
#include "Config.h"
#else
#include "WProgram.h"
#endif

class LoadingLedClass : public LedClass
{
public:
	LoadingLedClass();
	void setState(int pState) override;
	int getState() const override;
	void blink() override;
};
extern LoadingLedClass LoadingLed;

#endif

