#include <Servo.h>

const int servo1 = 9;
const int servo2 = 10;
int potensiometer = A0;
const int t = 1000;

int pos = 0;
int val;

Servo servo;

void setup(){

//servo.attach(servo1);
servo.attach(servo2);

}

void loop(){

for(pos = 0; pos <= 180; pos += 1){
    servo.write(pos);
    delay(15);
}

for(pos = 180; pos >= 0; pos -= 1){
    servo.write(pos);
    delay(15);
}

}