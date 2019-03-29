/*
	Name:       ServoMotor.cpp
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#include "ServoMotor.h"


void ServoMotorClass::rotate(Servo pServo, int counter)
{
	//Rotating the servo
	pServo.write(counter);
}

ServoMotorClass ServoMotor;

