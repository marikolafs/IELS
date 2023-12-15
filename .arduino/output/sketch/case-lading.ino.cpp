#include <Arduino.h>
#line 1 "C:\\Users\\Maria\\Downloads\\IELS\\case-lading\\case-lading.ino"
#include <Wire.h>
#include <Zumo32U4.h>
#include "PololuOLEDHelpers.h"
#include <LSM6.h>

Zumo32U4ButtonA buttonA;
Zumo32U4ButtonB buttonB;

//buttonstate
bool buttonStateA;
bool previousButtonStateA = false;

// variables to buttonHoldTime
unsigned long startPress;
unsigned long endPress;
unsigned long holdTime;

// variables to buttonChargeTime
unsigned long interval3 = 200;
unsigned long interval1 = 5000;

int chargeTime;
int price;

// variables to pricelist
int bankBalance = 1000;
int priceList[6] = {fullCharge, upToCharge, chargeUntilStop, chargeUntilTime, batteryService, batteryReplacement}
int listCount = 6;

//variables to buttonchargepercent
int chargePercent;

//variables to switch case
int buttonCountB = 0;


long buttonHoldTime(){
    //måler hvor lenge knapp A holdes nede

  if(buttonA.isPressed()){

    startPress = millis();
  } else {

    endPress = millis();
    holdTime = endPress - startPress;
  }

  return holdTime;
}

int buttonTimeCharge(long holdTime){
    //finner hvor lenge bilen skal lades utifra hvor lenge A ble holdt

  if (holdTime >= interval1) {

    chargeTime = 450000;
    price = 75;
  }

  if(holdTime > interval3 && holdTime < interval1) {

    chargeTime = 300000;
    price = 50;
  }

  if (holdTime <= interval3 && holdTime > 0) {

    chargeTime = 150000;
    price = 25;
  }

  return chargeTime, price;
}

int buttonChargePercent(int holdTime){
    //finner hvor mye prosent skal lades utifra hvor lenge A ble holdt

  if (holdTime >= interval1) {

    chargePercent = 30; 
  }

  if(holdTime > interval3 && holdTime < interval1 ) {

    chargePercent = 50;
  }

  if(holdTime <= interval3 && holdTime > 0) {

    chargePercent = 70;
  } 

  return chargePercent;
}

void payment(){
//trekker pris fra bankkonto
    bankBalance = bankBalance - price;
//går ut av switch caset i tilfelle det er mindre enn 0 på konto
    if(bankBalance < 0){

        break;
    }
}

switch (priceList) {

    case fullCharge:
    //lader bilen til 100%
    price = 100;

    if(bankBalance >=100) {

        while(batteryPercentage < 100) {

            batteryPercentage = batteryPercentage + 1;
            delay(5000);
        }
    }

    chargingCycles = chargingCycles + 1; 
    payment();
    break;

    case upToCharge:
    //lader bilen opp til 30%, 50% eller 70% etter knappetrykk
    Serial.print("to charge your device 30% hold A for 5 seconds");
    Serial.print("to charge your device 50% hold A for approximately 2 seconds");
    Serial.print("to charge your device 70% press A once");
    buttonChargePercent(holdTime);
    price = 0;

    while(batteryPercentage < chargePercent && bankBlance > price){

        price = price + 2;
        batteryPercentage = batteryPercentage +1;
        delay(5000),
    }

    chargingCycles = chargingCycles + 1;
    payment();
    break;

    case chargeUntilStop:
    //lader bilen kontinuerlig så lenge knapp holdes nede
    previousBatterPercentage = batterPercentage;

    while(buttonState == HIGH && bankBalance > price){

        batteryPercentage = batteryPercentage + 1;
        price = price + 1;
        delay(5000);
    }

    price = batteryPercentage - previousBatteryPercentage;
    chargingCycles = chargingCycles + 1;
    payment();
    break;

    case chargeUntilTime:
    //lader bilen i 2.5 min, 5 min eller 7.5 min etter knappetrykk
    Serial.print("to charge your device for 2.5 min hold A for 5 seconds");
    Serial.print("to charge your device for 5 min hold A for approximately 2 seconds");
    Serial.print("to charge your device for 7.5 min press A once");
    buttonTimeCharge(holdTime);
    unsigned long startCharging = millis();

    while(batteryPercentage < 100 && startCharging < chargeTime && bankBalance >= price){

        batteryPercentage = batteryPercentage + 1;
        delay(5000);
    }

    chargingCycles = chargingCycles + 1; 
    payment();
    break;

    case batteryService:
    //setter batteryHealth opp til 80%
    while(batteryHealth < 80){

        batteryHealth = batteryHealth + 1;
        delay(2000);
    }

    price = 200;
    payment();
    break;

    case batteryReplacement:
    //erstatter batteri / restarter variabler knyttet til batteriskade
    delay(60000);
    batteryHealth = 100;
    price = 300;
    payment();
    secondsOverPercentage = 0,
    break;

    default:
    //melding ved feil inntasting
    Serial.print("Invalid command. Choose between fullCharge, upToCharge, chargeUntilStop, chargeUntilTime, batteryService, or batteryReplacement.");

}

void setup(){

  Serial.begin(9600);

}

void loop(){

    Serial.print("To start charging type which option you would prefer.")
    Serial.print("fullCharge, upToCharge, chargeUntilStop, chargeUntilTime, batteryService, or batteryReplacement.");

    if (Serial.available() > 0) {
      char priceList = Serial.read();
      switch(priceList);
      Serial.print("Thank you!");
  }

}