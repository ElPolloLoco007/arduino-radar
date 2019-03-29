/*
	Name:       OffLed.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _OFFLED_h
#define _OFFLED_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#include "Led.h"
#include "Config.h"
#else
#include "WProgram.h"
#endif

class OffLedClass : public LedClass
{
public:
	OffLedClass();
	void setState(int pState) override;
	int getState() const override;
	void blink() override;
};
extern OffLedClass OffLed;

#endif

