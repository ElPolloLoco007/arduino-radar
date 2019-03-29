/*
	Name:       PowerOnOff.cpp
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

#include "PowerOnOff.h"

PowerOnOffClass::PowerOnOffClass()
{
	pinMode(DigitalPins::POWERONOFF, INPUT_PULLUP); //Decleare the PowerOnOff button as a INPUT_PULLUP
	tmp = max;
}

void PowerOnOffClass::run(Servo s, LiquidCrystal_I2C lcd)
{
	state = digitalRead(DigitalPins::POWERONOFF);

	if (state == HIGH)
	{
		everythingOn = !everythingOn; // setting bool to the opposite value
		//Setting states on leds
		onLed.setState(everythingOn);
		offLed.setState(!everythingOn);

		//Writing the states of the leds
		digitalWrite(DigitalPins::ONLED, onLed.getState());
		digitalWrite(DigitalPins::OFFLED, offLed.getState());

		//Displaying intro screen
		display.intro(lcd);

		//loop running as long as state = HIGH
		while (state)
		{
			servoDirection(s, everythingOn, lcd); // moving the servo
			state = digitalRead(DigitalPins::POWERONOFF); // getting state	of button			
		}
	}
}

void PowerOnOffClass::servoDirection(Servo s, int state, LiquidCrystal_I2C lcd)
{
	if (state == HIGH)
	{
		delay(100); //For making the servo move a little bit slower

		//Take temperature every 10 degrees and setting the speed of sound
		if (counter % 10 == 0)
		{
			temperature.setTemperature();
			ultraSonic.setSpeedOfSound(temperature.getTemperature());
		}
		//Setting distance
		ultraSonic.setDistance(ultraSonic.getSpeedOfSound());
		//displaying distance with rgb led
		rgb.x(ultraSonic.getDistance());
		//Showing info on display
		display.degree(lcd, counter, ultraSonic.getDistance(), temperature.getTemperature());

		//Getting data to excel
		//------------------------------
		serialPrint.print(test, leftRight, counter, ultraSonic.getDistance(), temperature.getTemperature());
		//------------------------------

		//Servo going up from 0 to 170 until reaching max
		if (up)
		{
			leftRight = "right";
			if (counter == max)
			{
				up = false;
			}
			sm.rotate(s, counter);
		}
		//Servo going down from 170 to 0 until reaching minimum
		else
		{
			leftRight = "left";
			if (counter == min)
			{
				up = true;
				++test;
			}
			sm.rotate(s, counter);
		}
		//Counter going up or down depending on boolean up
		(up) ? ++counter : --counter;
	}
}

PowerOnOffClass PowerOnOff;



