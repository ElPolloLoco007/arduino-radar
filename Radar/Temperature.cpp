/*
	Name:       Temperature.cpp
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#include "Temperature.h"


void TemperatureClass::setTemperature()
{
	reading = analogRead(AnalogPins::TEMPERATURE);
	voltage = reading * 5.0;
	voltage /= 1024.0;

	
	temperatureCelsius = (voltage - 0.5) * 100;  //converting from 10 mv per degree wit 500 mV offset
	//to degrees ((voltage - 500mV) times 100)
}

TemperatureClass Temperature;

