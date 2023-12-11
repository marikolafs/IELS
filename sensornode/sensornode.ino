#include "Zumo32U4IRsender.h"

#define DEVICE_ID 0x01
#define DIRECTION RIGHT_IR

Zumo32U4IRsender ZumoIrSender(DEVICE_ID, DIRECTION);

void setup() {
  

}

void loop() {

  ZumoIrSender.send(0x11);
  delay(1000);

}


/*
 * Zumo32u4SendIR.ino
 * 
 * Example of how to use the Zumo32U4IRsender library to send data using the IR LED
 
#include <Zumo32u4IRsender.h>

#define DEVICE_ID 42 // ID of the device, used to identify the robot

uint64_t lastTime = 0;

// Initialize the IR sender with the device ID and side to be used
Zumo32U4IRsender ZumoIrSender(DEVICE_ID, RIGHT_IR);

void setup(){
    Serial.begin(9600);
    delay(3000);  // wait for serial window conection, used for debuging
    Serial.println(F("START " __FILE__ " from " __DATE__ "\r\n"));

}

void loop(){
    if(millis()-lastTime > 1000){
        lastTime = millis();
        uint8_t data = random(255);
        Serial.print("Sending:");
        Serial.println(data);
        ZumoIrSender.send(data);
    }
}
*/


#include <Keypad.h>

const int ROW_NUM = 4; //four rows
const int COLUMN_NUM = 4; //three columns

char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3', 'A'},
  {'4','5','6', 'B'},
  {'7','8','9', 'C'},
  {'*','0','#', 'D'}
};

int force = A0;
int forceReading;
const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;

byte pin_rows[ROW_NUM] = {8, 7, 6, 5};
byte pin_column[COLUMN_NUM] = {4, 3, 2, 1};

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
}

void sonic(){
  digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
}

void forceReader(){
  forceReading = analogRead(force);
  Serial.print("Force = ");
  Serial.println(forceReading);
}

void keypadReader(){
  char key = keypad.getKey();

  if (key){
    Serial.print("key: ");
    Serial.println(key);
  }
}

void loop()
{
  void keypadReader();
}