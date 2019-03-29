/*
	Name:       UltraSonic.h
	Created:	02.11.2018 14:27:34
	Author:     Helgi og Anna
	Version:    1.5
*/

#ifndef _ULTRASONIC_h
#define _ULTRASONIC_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#include "Config.h"
#include <NewPing.h>
#else
#include "WProgram.h"
#endif

class UltraSonicClass
{
private:
	unsigned long duration;
	int distance;
	const float speedofsound0C = 331.3;
	const float constant = 0.6;
	float speedOfSound;

public:
	UltraSonicClass();
	//Setters
	void setSpeedOfSound(int temperature);
	void setDistance(float speedOfSound);
	//Getters
	float getSpeedOfSound() { return speedOfSound; }
	int getDistance() { return distance; }
};
extern UltraSonicClass UltraSonic;

#endif

