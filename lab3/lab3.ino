/*
*     Лабораторная работа 3
*     "Бегущая строка"
*     Автор: laprinulka
*     Дата создания: 15.04.2015
*/

#include <SPI.h>

#define SS_PIN 10

byte digit[10] ={
  0b00111111,
  0b00000110,
  0b01011011,
  0b01100111,
  0b01001110,
  0b01111101,
  0b00000111,
  0b01111111,
  0b01110111
};


void setup(){
	pinMode(SS_PIN, OUTPUT);
	SPI.begin();
}

void loop(){
	for (int i=0; i<8; i++){
		digitalWrite(SS_PIN, LOW);
		SPI.transfer(digit[i]);
		digitalWrite(SS_PIN, HIGH);
		delay(500);
	}
}


