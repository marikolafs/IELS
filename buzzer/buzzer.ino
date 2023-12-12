#include <PololuBuzzer.h>

PololuBuzzer buzzer;
const char lowBatterySound[] PROGMEM = "!L16 V8 defgecd";

bool lowBatteryStatus = false;

void setup(){

}

void lowBattery(){

    if(batteryLevel <= 5 && lowBatteryStatus = false){
        buzzer.playFromProgramSpace(lowBatterySound);
        delay(2000);
        buzzer.stopPlaying();
        lowBatteryStatus = true;
    }

}

void loop(){
    batteryLevel = 4;
    lowBattery();
}