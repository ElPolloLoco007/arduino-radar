/*
	Name:       ServoMotor.h
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#ifndef _SERVOMOTOR_h
#define _SERVOMOTOR_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"

#include <Servo.h>

#else
#include "WProgram.h"
#endif

class ServoMotorClass
{
public:
	void rotate(Servo pServo, int counter);
};
extern ServoMotorClass ServoMotor;

#endif

