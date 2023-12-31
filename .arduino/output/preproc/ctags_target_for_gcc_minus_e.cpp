# 1 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
int bankBalance = 1000;
priceList [5] = {fullCharge, upToCharge, chargeUntilStop, chargeUntilTime, batteryService, BatteryReplacement};

unsigned long interval3 = 500;
unsigned long interval2 = 3000;
unsigned long interval1 = 5000;

speedReadings[60] = {};

unsigned long previousMillis = 0;
int secondsOverPercentage = 0;

int chargingCycles = 0;


void setup(){

}

int buttonChargePercent(){
     if(buttonState) {
         startPress = millis();

         //print/vis på display buttoncount/valgt prosent   
     } else {
        endPress = millis();
        holdTime = endPress - startPress;

        if(holdTime >= interval1) {
            charge = 30;
        } else if(holdTime >= interval2) {
            charge = 50;
        } else if(holdTime <= interval3) {
            charge = 70;
        }
     }
     return holdTime, buttonCount;
}

int buttonChargeTime(){
     if(buttonState) {
         startPress = millis();

         //print/vis på display buttoncount/valgt prosent   
     } else {
        endPress = millis();
        holdTime = endPress - startPress;

        if(holdTime >= interval1) {
            chargeTime = 450000;
            price = 75;
        } else if(holdTime >= interval2) {
            charge = 300000;
            price = 50;
        } else if(holdTime <= interval3) {
            charge = 150000;
            price = 25;
        }
     }
     return holdTime, buttonCount;
}


switch (priceList) {
    case fullCharge:
     price = 100;
     while (batteryLevel < 100) {
        batteryLevel = batterLevel + 1;
        delay(5000);
      }
      chargingCycles = chargingCycles + 1;
      break;

    case upToCharge:
     buttonChargePercent();
     price = 0;
     while(batteryLevel < charge) {
        price = price + 2;
        batteryLevel = batteryLevel + 1;
        delay(5000);
     }
     chargingCycles = chargingCycles + 1;
     break;

     case chargeUntilStop:
     previousBatteryLevel = batteryLevel;
     while(buttonState == 0x1) {
        batteryLevel = batteryLevel + 1;
        delay(5000);
     }
     price = batteryLevel - previousBatteryLevel;
     chargingCycles = chargingCycles + 1;
     break;

     case chargeUntilTime:
     buttonChargeTime();
     unsigned long startCharging = millis();
     while(batteryLevel < 100) {
        while(startCharging < chargeTime) {
            batteryLevel = batteryLevel + 1;
            delay(5000);

        }
     }
     chargingCycles = chargingCycles + 1;
     break;

     case batteryService:
     while(batteryHealth < 80) {
        batteryHealth = batteryHealth + 1;
        delay(2000);
        price = 200;
     }
     break;

     case batteryReplacement:
     delay(60000);
     batteryHealth = 100;
     price = 300;
     secondsOverPercentage = 0;
     break;
}

void speedometer() {
    // gjennomsnittshastighet 60 sek
    // makshastighet
    // sek kjørt over 70%


    currentMillis = millis();

    if(currentMillis - previousMillis > 60000){
        totalSpeed = 0;
        for(int i = 1; i < 61; i++){
            toatalSpeed = totalSpeed + array[i-1]
            if(array[i] > array[i -1]){
                maxSpeed = array[i];
            }
        }
        averageSpeed = totalSpeed/60;

        for(int i = 0; i < 61; i++){
            if(speed >= 280){
              secondsOverPercentage = secondsOverPercentage + 1;
            }
        }
    }
    previousMillis = currentMillis;

    if(secondsOverPercentage % 1 == 0) {
        batteryHealth = batteryHealth - 1;
    }
}

void bank(){
    // opprett bankkonto, tillat +-
    bankBalance

}

void standardDisplay(){

    display.clear();
    currentMillis = millis();
    if(currentMillis - previousMillis >= 10000){
        if(currentMillis - previousMillis <= 1000){
            display.clear();
            display.print((reinterpret_cast<const __FlashStringHelper *>(
# 168 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino" 3
                         (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 168 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
                         "BL: % "
# 168 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino" 3
                         ); &__c[0];}))
# 168 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
                         )));
            display.gotoXY(5, 0);
            display.print(batteryLevel);
            display.gotoXY(0, 1);
            display.print((reinterpret_cast<const __FlashStringHelper *>(
# 172 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino" 3
                         (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 172 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
                         "BH: % "
# 172 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino" 3
                         ); &__c[0];}))
# 172 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
                         )));
            display.gotoXY(5, 1);
            display.print(batteryHealth);
        } else if (currentMillis - previousMillis <= 2000){
            display.clear();
            display.print((reinterpret_cast<const __FlashStringHelper *>(
# 177 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino" 3
                         (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 177 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
                         "CC: "
# 177 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino" 3
                         ); &__c[0];}))
# 177 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
                         )));
            display.gotoXY(5, 0);
            display.print(chargingCycles);
            display.gotoXY(0, 1);
            display.print((reinterpret_cast<const __FlashStringHelper *>(
# 181 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino" 3
                         (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 181 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
                         "BB: kr "
# 181 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino" 3
                         ); &__c[0];}))
# 181 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
                         )));
            display.gotoXY(5, 1);
            display.print(bankBalance);
        } else {
            display.clear();
            display.print((reinterpret_cast<const __FlashStringHelper *>(
# 186 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino" 3
                         (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 186 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
                         "SP: m/s "
# 186 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino" 3
                         ); &__c[0];}))
# 186 "C:\\Users\\Maria\\Downloads\\IELS\\slay\\slay.ino"
                         )));
            display.gotoXY(5, 0);
            display.print(averageSpeed);
            display.gotoXY(0, 1);
            display.print(F"DI: m ");
            display.gotoXY(5, 1);
            display.print(distance);
        }
        previousMillis = currentMillis;

        }
    }
}

void display(){
    switch(displayType){

        case standard:
        standardDisplay();
        break;

        case: chargingStation:
        display.clear();
        display.print("bank balance:");
        display.gotoXY(0, 1);
        display.print(bankBalance);
        display.gotoXY(5, 1);
        display.print("$");
        break;

        case: idk annet?

    }
}


void loop(){

}


// teams + powerpoint, ta opp video
