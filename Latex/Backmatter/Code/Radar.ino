/*
	Name:       Radar.ino
	Created:	02.11.2018 14:27:34
	Authors:    Helgi Poulsen og Anna Thomsen
	Version:    2.0
*/

//Header files
//-----------------------------
#include "SerialPrint.h"
#include <NewPing.h>
#include "Config.h"
#include "Display.h"
#include "PowerOnOff.h"
#include "LoadingLed.h"
#include <Servo.h>
#include <Wire.h>  
#include <LiquidCrystal_I2C.h>
//-----------------------------

//Objects from libraries
//-----------------------------
LiquidCrystal_I2C lcd(0x27, 2, 16);
Servo servo;
//-----------------------------
LoadingLedClass load;
DisplayClass display;
PowerOnOffClass powerOnOff;
ServoMotorClass servoMotor;
//-----------------------------

// The setup() function runs once each time the micro-controller starts
void setup()
{
	Serial.begin(9600);
	//For printing on PLX-DAQ (Excel)
	Serial.println("CLEARDATA");
	Serial.println("LABEL,Time,Started Time,Test,Left/Right,Angle,Range,Temperature");
	Serial.println("RESETTIMER");
	//Servo-----
	servo.attach(DigitalPins::SERVO); //Attach servo with pin
	servo.write(0); //Setting servo starting position
	//Led-------	
	load.blink(); //Loading blinking lights
	//Display---
	lcd.init(); //Initialize display
	lcd.begin(16, 2);   // iInit the LCD for 16 chars 2 lines  
	lcd.backlight(); //Turn on display
	display.intro(lcd); //Showing intro on display
}

// Add the main program code into the continuous loop() function
void loop()
{
	powerOnOff.run(servo, lcd);
}
