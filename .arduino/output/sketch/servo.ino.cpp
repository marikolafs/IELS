#include <Arduino.h>
#line 1 "C:\\Users\\Maria\\Downloads\\IELS\\servo\\servo.ino"
#include <Servo.h>

const int servo1 = 9;
const int servo2 = 10;
const int t = 1000;

int pos = 0;

Servo servo;

#line 11 "C:\\Users\\Maria\\Downloads\\IELS\\servo\\servo.ino"
void setup();
#line 18 "C:\\Users\\Maria\\Downloads\\IELS\\servo\\servo.ino"
void loop();
#line 11 "C:\\Users\\Maria\\Downloads\\IELS\\servo\\servo.ino"
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
