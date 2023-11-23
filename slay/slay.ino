int bankBalance = 1000;
priceList [5] = {fullCharge, upToCharge, chargeUntilStop, chargeUntilTime, batteryService, BatteryReplacement};

unsigned long interval3 = 500;
unsigned long interval2 = 3000;
unsigned long interval1 = 5000;

const int 


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
      break;

    case upToCharge: 
     buttonChargePercent();
     price = 0;
     while(batteryLevel < charge) {
        price = price + 2;
        batteryLevel = batteryLevel + 1;
        delay(5000);
     }
     break;

     case chargeUntilStop:
     previousBatteryLevel = batteryLevel;
     while(buttonState == HIGH) {
        batteryLevel = batteryLevel + 1;
        delay(5000);
     }
     price = batteryLevel - previousBatteryLevel;
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
     break;
}

void setup(){

}

void speedometer() {
    // gjennomsnittshastighet 60 sek
    // makshastighet
    // sek kjørt over 70%

    while(speed > 280) {
        timeOverSpeedPercentage = millis();
        // ha en effekt på battery health
    }

    if(currentMillis - previousMillis > 60000){
        totalSpeed = 0;
        for(int i = 1, i < arraysize+1, i++){
            toatalSpeed = totalSpeed + array[i-1]
            if(array[i] > array[i -1]){
                maxSpeed = array[i];
            }
        }
        averageSpeed = totalSpeed/arraysize
    }

    array[] = {sensorReadings}
}

void bank(){
    // opprett bankkonto, tillat +-
    bankBalance

}


void loop(){
// switch for display?
}