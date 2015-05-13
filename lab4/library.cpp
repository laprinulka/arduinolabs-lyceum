#include <Arduino.h>
#include "library.h"

void testDrive(int out1, int out2, int out3, int out4){
	digitalWrite(OUT1, out1);
	digitalWrite(OUT2, out2);
	digitalWrite(OUT3, out3);
	digitalWrite(OUT4, out4);
}

void leftMotorForward(){
	digitalWrite(OUT1,LOW);
	digitalWrite(OUT2,HIGH);
}

void leftMotorBack(){
	digitalWrite(OUT2,LOW);
	digitalWrite(OUT1,HIGH);
}

void leftMotorForwardPWM(byte pwmDuty){
	digitalWrite(OUT1,LOW);
	analogWrite(OUT2,pwmDuty);
}

void leftMotorBackPWM(byte pwmDuty){
	digitalWrite(OUT2,LOW);
	analogWrite(OUT1,pwmDuty);
}

void rightMotorForwardPWM(byte pwmDuty){}
void rightMotorBackPWM(byte pwmDuty){}

void leftMotorStop(){}
void rightMotorForward(){}
void rightMotorBack(){}
void rightMotorStop(){}
