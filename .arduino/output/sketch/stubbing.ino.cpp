#include <Arduino.h>
#line 1 "C:\\Users\\Maria\\Downloads\\IELS\\stubbing\\stubbing.ino"
#include <Wire.h>
#include <Zumo32U4.h>

bool lowBattery = false;

void setup(){

}

float calculateSpeed() {
  float encoderCounts = (encoders.getCountsAndResetLeft() + encoders.getCountsAndResetRight()) / 2

  unsigned long time_since_driving = millis();

  antallCm = encoderCounts  / 82; // dette er farten 
  totalCm = totalCm + antallCm
  //TotalM = totalCm / 100 // gjør om fra cm til m
  return antallCm

  //float velocity = 0.0195 * maxSpeed; // v = r * w
}


float calculateDistance() {
  encoderTicks = (encoders.getCountsAndResetLeft() + encoders.getCountsAndResetRight()) / 2;
  distance = (encoderTicks / counts_per_revolution) * omkrets;
  totalDistance = totalDistance + distance;
  return totalDistance;
}

void displaySpeedDistance(){
  display.clear();
  display.print("speed: ");
  display.gotoXY(0,1);
  display.print(antallCm);
  display.gotoXY(1, 0);
  display.print("distance: ");
  display.gotoXY(1, 1);
  display.print(totalDistance);
}

void averageSpeed(){

}

void maxSpeed(){

}

int secondsOverSpeedLimit(){

}

float batterycalculation() {
  float batteryCalculations = 100 - totalDistance + chargedbatterym; // 100 - totalm + chargedbatterym
  batteryPercentage = round(batteryCalculations);
  if (batteryPercentage % 5 == 0 || batteryPercentage != prevBatteryPercentage) {
    prevBatteryPercentage = batteryPercentage;
  }
}


void chargeByBacking(){

}

void emergencyChargeByBacking(){

}

void displayBattery(){

}

int batteryHealth(){

}

void randomMalfunction(){

}

void payment(){
    bankBalance = bankBalance - price;
}

void batteryService(){
    while(batteryHealth < 80){

        batteryHealth = batteryHealth + 1;
        delay(2000);
    }
    price = 200;
    payment();
}

void batteryReplacement(){
    delay(60000);
    batteryHealth = 100;
    price = 300;
    payment();
    secondsOverPercentage = 0,
}

void lowBatteryMode(){
    if(batteryPercentage < 10 && lowBattery == false){
        buzzer.playFromProgramSpace(lowBatterySound);
        display.print("low battery");
        delay(500);
        display.clear();
        lowBattery = true;
    } else {
        lowBattery = false;
    }

}

void extraLowBatteryMode(){
    if(batteryPercentage < 5){
        currentMillis = millis();
        if(currentMillis - previousMillis < 15000){
            buzzer.playFromProgramSpace(lowBatteryBeep);
        }
    }

}


void loop(){

}


