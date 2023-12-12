#include <PololuBuzzer.h>

PololuBuzzer buzzer;
const lowBatterySound[] PROGMEM = "!L16 V8 defgecd";

void setup(){

}

void lowBattery(){
    
    if(batteryLevel <= 5){
        buzzer.playFromProgramSpace(lowBatterySound);
    }

}

void loop(){
    
}