#include <Adafruit_CircuitPlayground.h>

#define CLICKTHRESHOLD 5

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

unsigned long previousMillis = 0;
const long interval[] = {25, 15, 10, 6};
int neoPixelNumber = 0;
int gameLevel = 0;

boolean ledState = LOW;
boolean tapDetectResetTimer = LOW;
boolean directionState = LOW;
boolean justStarted = HIGH;
boolean gameOver = HIGH;
int missesPlayerRight = 0;
int missesPlayerLeft = 0;
int hitsInARow = 0;
int maxHitsInARowPerGameLevel = 5;
bool leftButtonPressed;
bool rightButtonPressed;
bool lockoutRightButton = LOW;
bool lockoutLeftButton = LOW;
const int brightness = 5;

// int ledPin;
int detectedTap = LOW;
unsigned long previousMillisTapDetector = 0;
const long tapDetectResetDuration = 100;

void updateTapDetector(){
    if (detectedTap){
        unsigned long currentMillisTapDetector = millis();

        if(currentMillisTapDetector - previousMillisTapDetector >= tapDetectResetDuration){
            previousMillisTapDetector = currentMillisTapDetector;

            if(tapDetectResetTimer == LOW){
                tapDetectResetTimer = HIGH;
            } else {
                tapDetectResetTimer = LOW;
                detectedTap = LOW;
            }
        }
        digitalWrite(13, detectedTap);
    }
}

void setup(){
    pixels.begin();
    pixels.setBrightness(brightness);
    pixels.clear();

}

void loop(){

}