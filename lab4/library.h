#ifndef library_h
#define library_h

void testDrive(int out1, int out2, int out3, int out4);
void leftMotorForward();
void leftMotorBack();
void leftMotorForwardPWM(byte pwmDuty);
void leftMotorBackPWM(byte pwmDuty);
void rightMotorForwardPWM(byte pwmDuty);
void rightMotorBackPWM(byte pwmDuty);
void leftMotorStop();
void rightMotorForward();
void rightMotorBack();
void rightMotorStop();

#endif