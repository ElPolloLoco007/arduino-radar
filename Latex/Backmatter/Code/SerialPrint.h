/*
	Name:       SerialPrint.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _SERIALPRINT_h
#define _SERIALPRINT_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

class SerialPrintClass
{
public:
	void print(int pTest, String pLeftRight, int pCounter, int pDistance, int pTemperature);
};
extern SerialPrintClass SerialPrint;

#endif

