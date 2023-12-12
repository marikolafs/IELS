#include <Arduino.h>
#line 1 "C:\\Users\\Maria\\Downloads\\IELS\\buzzer\\buzzer.ino"
#include <PololuBuzzer.h>

PololuBuzzer buzzer;
const lowBatterySound[] PROGMEM = "!L16 V8 defgecd";

#line 6 "C:\\Users\\Maria\\Downloads\\IELS\\buzzer\\buzzer.ino"
void setup();
#line 10 "C:\\Users\\Maria\\Downloads\\IELS\\buzzer\\buzzer.ino"
void lowBattery();
#line 20 "C:\\Users\\Maria\\Downloads\\IELS\\buzzer\\buzzer.ino"
void loop();
#line 6 "C:\\Users\\Maria\\Downloads\\IELS\\buzzer\\buzzer.ino"
void setup(){

}

void lowBattery(){

    if(batteryLevel <= 5){
        buzzer.playFromProgramSpace(lowBatterySound);
        delay(2000);
        buzzer.stopPlaying();
    }

}

void loop(){
    batteryLevel = 4;
    lowBattery();
}
