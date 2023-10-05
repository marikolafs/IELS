#include <Servo.h>

const int servo1 = 9;
const int servo2 = 10;

int rotasjonsVerdi = 90;
int rotasjonsverdiUnder = 90; 

int sensors[] = {sensor1, sensor2, sensor3, sensor4};
int sensorCount = 4; 
int valuelist[] = {0, 0, 0, 0};
int sensorMax[] = {100, 100, 100, 100};

Servo firstServo;
Servo secondServo;

void setup(){

    firstServo.attach(servo1);
    secondServo.attach(servo2);


    Serial.begin(9600);

    for(int i = 0; i < sensorCount; i ++){
        pinMode(sensors[i], INPUT);
    }

    while(millis() < 5000){
        for(int i = 0; i < 4; i++){
            sensorValue = analogRead(sensors[i]);

             if(sensorValue > sensorMax[i]){

                sensorMax[i] = sensorValue; 
         }

        }
    }
}



void loop(){

   for(int i = 0; i < 4; i ++){
    valuelist[i] = analogRead(sensors[i]);
    valuelist[i] = map(valuelist[i], 0, sensorMax[i], 0, 100);
   }

   if((valuelist[0] + valuelist[3]) - (valuelist[1] + valuelist[2]) > 7){

    rotasjonsVerdi -= 2;
    rotasjonsverdiUnder +=2;

   } else if((valuelist[1] + valuelist[2]) - (valuelist[0] + valuelist[3]) > 7){

    rotasjonsVerdi +=2;
    rotasjonsverdiUnder -=2;

   }

   firstServo.write(rotasjonsVerdi);
   secondServo.write(rotasjonsverdiUnder);


}