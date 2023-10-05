#include <Servo.h>

const int servo1 = 9;
const int servo2 = 10;
int potensiometer1 = A0;
int potensiometer2 = A1;

int pos = 0;
int val1;
int val2;

Servo firstServo;
Servo secondServo;

void setup(){

firstServo.attach(servo1);
secondServo.attach(servo2);

}

void loop(){

val1 = analogRead(potensiometer1);
val1 = map(val1, 0, 1023, 0, 180);
firstServo.write(val1);
delay(15);

val2 = analogRead(potensiometer2);
val2 = map(val2, 0, 1023, 0, 180);
secondServo.write(val2);
delay(15);

}