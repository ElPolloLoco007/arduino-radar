/*
	Name:       UltraSonic.cpp
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#include "UltraSonic.h"


UltraSonicClass::UltraSonicClass()
{
	pinMode(DigitalPins::TRIGGER, OUTPUT); // Sets the triggerPin as an Output
	pinMode(DigitalPins::ECHO, INPUT); // Sets the echoPin as an Input	
}

void UltraSonicClass::setSpeedOfSound(int temperature)
{
	//Simplified formula for +35°C to −35°C
	//Speed of sound in air in m/s : c = 331.3 + (0.6 × ϑ)   = m/s
	speedOfSound = speedofsound0C + (constant * temperature);
}

void UltraSonicClass::setDistance(float speedOfSound)
{
	//Library------------------------------
	//NewPing sonar(12, 13, 200);
	//distance = sonar.ping_cm();
	//-------------------------------------

	digitalWrite(DigitalPins::TRIGGER, LOW);
	delayMicroseconds(4);
	// Sets the trigPin on HIGH state for 10 micro seconds
	digitalWrite(DigitalPins::TRIGGER, HIGH);
	delayMicroseconds(10);
	digitalWrite(DigitalPins::TRIGGER, LOW);
	// Reads the echoPin, returns the sound wave travel time in microseconds	
	duration = pulseIn(DigitalPins::ECHO, HIGH);
	// Calculating the distance cm
	float tmp = speedOfSound / 10000;
	distance = duration * tmp / 2;
}

UltraSonicClass UltraSonic;
