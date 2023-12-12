#include <Arduino.h>
#line 1 "C:\\Users\\Maria\\Downloads\\IELS\\case-lading\\case-lading.ino"
#line 1 "C:\\Users\\Maria\\Downloads\\IELS\\case-lading\\case-lading.ino"
long buttonHoldTime();
#line 12 "C:\\Users\\Maria\\Downloads\\IELS\\case-lading\\case-lading.ino"
int buttonTimeCharge(long holdTime);
#line 28 "C:\\Users\\Maria\\Downloads\\IELS\\case-lading\\case-lading.ino"
int buttonChargePercent(int holdTime);
#line 49 "C:\\Users\\Maria\\Downloads\\IELS\\case-lading\\case-lading.ino"
void loop();
#line 1 "C:\\Users\\Maria\\Downloads\\IELS\\case-lading\\case-lading.ino"
long buttonHoldTime(){
  if(buttonA.isPressed()){
    startPress = millis();
  }
  else {
    endPress = millis();
    holdTime = endPress - startPress;
  }
  return holdTime;
}

int buttonTimeCharge(long holdTime){
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

switch 



void setup(){

}

void loop(){

}
