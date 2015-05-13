#include "library.h"

#define OUT1 5
#define OUT2 6
#define OUT3 9
#define OUT4 10

void setup(){
	pinMode(OUT1, OUTPUT);
	pinMode(OUT2, OUTPUT);
	pinMode(OUT3, OUTPUT);
	pinMode(OUT4, OUTPUT);
}

void loop(){
	leftMotorForwardPWM(250);
	rightMotorForwardPWM(250);
	delay(2000);
	leftMotorBackPWM(120);
	rightMotorBackPWM(120);
	delay(2000);
}