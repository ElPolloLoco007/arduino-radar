/*
	Name:       PowerOnOff.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _POWERONOFF_h
#define _POWERONOFF_h

#if defined(ARDUINO) && ARDUINO >= 100

#include "arduino.h"
#include "ServoMotor.h"
#include "Display.h"
#include "Temperature.h"
#include "UltraSonic.h"
#include "OffLed.h"
#include "OnLed.h"
#include "RGBLed.h"
#include "SerialPrint.h"

#else
#include "WProgram.h"
#endif

class PowerOnOffClass
{
private:
	//objects
	ServoMotorClass sm;
	DisplayClass display;
	TemperatureClass temperature;
	UltraSonicClass ultraSonic;
	OnLedClass onLed;
	OffLedClass offLed;
	RGBLedClass rgb;
	SerialPrintClass serialPrint;

	//For serialPrint
	//-------------------
	int test = 1;
	String leftRight = "right";
	//-------------------

	int state = LOW;
	bool everythingOn = true;
	int counter = 0;

	int tmp;
	const int max = 170;
	const int min = 0;
	bool up = true;

public:
	PowerOnOffClass();
	void run(Servo s, LiquidCrystal_I2C lcd);
	void servoDirection(Servo s, int state, LiquidCrystal_I2C lcd);
};
extern PowerOnOffClass PowerOnOff;

#endif