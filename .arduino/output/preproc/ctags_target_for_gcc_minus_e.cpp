# 1 "C:\\Users\\Maria\\Downloads\\IELS\\buzzer\\buzzer.ino"
# 2 "C:\\Users\\Maria\\Downloads\\IELS\\buzzer\\buzzer.ino" 2

PololuBuzzer buzzer;
const lowBatterySound[] 
# 4 "C:\\Users\\Maria\\Downloads\\IELS\\buzzer\\buzzer.ino" 3
                       __attribute__((__progmem__)) 
# 4 "C:\\Users\\Maria\\Downloads\\IELS\\buzzer\\buzzer.ino"
                               = "!L16 V8 defgecd";

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
