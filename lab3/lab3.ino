/*
*     Лабораторная работа 3
*     "Бегущая строка"
*     Автор: laprinulka
*     Дата создания: 15.04.2015
*/

#include <SPI.h>

#define SS_PIN 10

void setup(){
	pinMode(SS_PIN, OUTPUT);
}

void loop(){
	for (int i=0; i<8; i++){
		digitalWrite(SS_PIN, LOW);
		SPI.transfer(1<<i);
		digitalWrite(SS_PIN, HIGH);
	}
}
