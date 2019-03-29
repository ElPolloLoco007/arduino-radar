/*
	Name:       Temperature.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _TEMPERATURE_h
#define _TEMPERATURE_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#include "Config.h"
#else
#include "WProgram.h"
#endif

class TemperatureClass
{
private:
	float temperatureCelsius;
	float voltage;
	int reading;

public:
	int getTemperature() { return temperatureCelsius; }
	void setTemperature();
};
extern TemperatureClass Temperature;

#endif

