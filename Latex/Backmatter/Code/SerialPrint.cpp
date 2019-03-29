/*
	Name:       SerialPrint.cpp
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#include "SerialPrint.h"

void SerialPrintClass::print(int pTest, String pLeftRight, int pCounter, int pDistance, int pTemperature)
{
	Serial.print("DATA,TIME,TIMER,");
	Serial.print(pTest);
	Serial.print(",");
	Serial.print(pLeftRight);
	Serial.print(",");
	Serial.print(pCounter);
	Serial.print(",");
	Serial.print(pDistance);
	Serial.print(",");
	Serial.println(pTemperature);
}

SerialPrintClass SerialPrint;

