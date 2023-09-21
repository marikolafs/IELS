#include <Arduino.h>
#line 1 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
#include <Adafruit_Circuit_Playground.h>
#include <Adafruit_CircuitPlayground.h>

#define CLICKTHRESHOLD = 8

unsigned long previousMillis = 0;
const long interval[] = {25, 15, 10, 6};
int neoPixelNumber = 0;
int gameLevel = 0;

boolean ledState = LOW;
boolean tapDetectResetTimer = LOW;
boolean directionState = LOW;
boolean justStartet = HIGH;
boolean gameOver = HIGH;
int missesPlayerRight = 0;
int missesPlayerLeft = 0;
int hitsInARow = 0;
int maxHitsInARowPerGameLevel = 8;
bool leftButtonPressed;
bool rightButtonPressed;
bool lockoutLeftButton = LOW;
bool lockoutRightButton = LOW;

const int brightness = 10;
int ledPin;
int detectedTap = LOW;
unsigned long previousMillisTapDetector = 0;
const long tapDetectResetDuration = 100;

#line 31 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void updateTapDetector();
#line 49 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void TapDetector();
#line 53 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void setup();
#line 68 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void showIntro();
#line 107 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void updateGameState();
#line 123 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void playGame(void);
#line 216 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void updateScore(void);
#line 243 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void gameOverPlayerRight(void);
#line 251 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void gameOverPlayerLeft(void);
#line 259 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void loop();
#line 31 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
void updateTapDetector(){
    if(detectedTap){
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
        digitalWrite(6, detectedTap);
    }
}

void TapDetector(){
    detectedTap = HIGH;
}

void setup(){
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(brightness);
  CircuitPlayground.clearPixels();
  CircuitPlayground.setAccelRange(LIS3DH_RANGE_2_G);   // 2, 4, 8 or 16 G!
  CircuitPlayground.setAccelTap(1, 8);

  attachInterrupt(digitalPinToInterrupt(7), TapDetector, FALLING);

  ledPin = 6;
  pinMode(ledPin, OUTPUT);

  digitalWrite(6, detectedTap);
}

void showIntro(){
    unsigned long currentMillis = millis();

    if(currentMillis - previousMillis >= interval[0]){
        previousMillis = currentMillis;

        if(ledState == LOW){
            ledState = HIGH;

            if(neoPixelNumber == 9 || neoPixelNumber == 0){
                CircuitPlayground.clearPixels();
                CircuitPlayground.setPixelColor(neoPixelNumber, 255, 0, 0);
            } else {
                CircuitPlayground.setPixelColor(neoPixelNumber, 0, 0, 255);
            }

            if(directionState == LOW){

                if(neoPixelNumber < 9){
                    neoPixelNumber = neoPixelNumber + 1;
                } else {
                    neoPixelNumber = neoPixelNumber - 1;
                    directionState = HIGH;
                }
            } else {
                if(neoPixelNumber > 0){
                    neoPixelNumber = neoPixelNumber - 1;
                } else {
                    neoPixelNumber = neoPixelNumber + 1;
                    directionState = LOW;
                }
            }
        } else {
            ledState = LOW;
        }
    }

}

void updateGameState(){
    if(gameOver) showIntro();

    if((CircuitPlayground.leftButton() && gameOver) || (CircuitPlayground.rightButton() && gameOver)){
        CircuitPlayground.clearPixels();
        gameOver = LOW;
        missesPlayerLeft = 0;
        missesPlayerRight = 0;
        gameLevel = 0;
        neoPixelNumber = 1;
        directionState = LOW;
    }

    if(!gameOver) playGame();
}

void playGame(void){
    unsigned long currentMillis = millis();

    if(currentMillis - previousMillis >= interval[gameLevel]){
        previousMillis = currentMillis;

        if(!CircuitPlayground.rightButton()) lockoutRightButton = LOW;
        if(!CircuitPlayground.leftButton()) lockoutLeftButton = LOW;

        if(CircuitPlayground.rightButton() && neoPixelNumber < 9) lockoutRightButton = HIGH;
        if(CircuitPlayground.leftButton() && neoPixelNumber > 0) lockoutLeftButton = HIGH;

        if(ledState == LOW){
            ledState = HIGH;

            if(neoPixelNumber == 9){
                CircuitPlayground.clearPixels();

                if((CircuitPlayground.rightButton() && !lockoutRightButton) || detectedTap){
                    lockoutRightButton = HIGH;
                    CircuitPlayground.setPixelColor(neoPixelNumber, 0, 255, 0);
                    hitsInARow = hitsInARow + 1;

                    if(hitsInARow == maxHitsInARowPerGameLevel){
                        hitsInARow = 0;

                        if(gameLevel < 3){
                            gameLevel = gameLevel + 1;
                            delay(50);
                        } else {
                            gameLevel = 0;
                        }
                    }
                } else {
                    CircuitPlayground.setPixelColor(neoPixelNumber, 255, 0, 0);
                    missesPlayerRight = missesPlayerRight + 1;
                    hitsInARow = 0;
                    updateScore();
                }
            } else if(neoPixelNumber == 0){
                CircuitPlayground.clearPixels();

                if((CircuitPlayground.leftButton() && !lockoutLeftButton) || detectedTap){
                    lockoutLeftButton = HIGH;
                    CircuitPlayground.setPixelColor(neoPixelNumber, 0, 255, 0);
                    hitsInARow = hitsInARow + 1;

                    if(hitsInARow == maxHitsInARowPerGameLevel){
                        hitsInARow = 0;

                        if(gameLevel > 3){
                            gameLevel = gameLevel + 1;
                            delay(50);
                        } else {
                            gameLevel = 0;
                        }
                    }
                } else {
                    CircuitPlayground.setPixelColor(neoPixelNumber, 255, 0, 0);
                    missesPlayerLeft = missesPlayerLeft + 1;
                    hitsInARow = 0;
                    updateScore();
                }
            } else {
                if(gameLevel == 0) CircuitPlayground.setPixelColor(neoPixelNumber, 0, 0, 255);
                if(gameLevel == 1) CircuitPlayground.setPixelColor(neoPixelNumber, 255, 255, 0);
                if(gameLevel == 2) CircuitPlayground.setPixelColor(neoPixelNumber, 0, 255, 255);
                if(gameLevel == 3) CircuitPlayground.setPixelColor(neoPixelNumber, 255, 255, 255);
            }

            if(directionState == LOW){
                
                if(neoPixelNumber < 9){
                    neoPixelNumber = neoPixelNumber + 1;
                } else {
                    neoPixelNumber = neoPixelNumber - 1;
                    directionState = HIGH;
                }
            } else {

                if(neoPixelNumber > 0){
                    neoPixelNumber = neoPixelNumber - 1;
                } else {
                    neoPixelNumber = neoPixelNumber + 1;
                    directionState = LOW;
                }
            }
        } else {
            ledState = LOW;
        }
    }
}

void updateScore(void){

    for(int i = 0; i < missesPlayerRight; i++)
    CircuitPlayground.setPixelColor(9 - i, 255, 0, 0);

    if(missesPlayerRight == 5){
        CircuitPlayground.clearPixels();
        delay(50);
    }
   
   for(int i = 0; i < missesPlayerLeft; i++)
   CircuitPlayground.setPixelColor(i, 255, 0, 0);
    if(missesPlayerLeft == 5){
        CircuitPlayground.clearPixels();
        delay(50);
    }
    delay(3000);

    if(missesPlayerRight == 5){
        gameOverPlayerRight();
    } else if(missesPlayerLeft == 5){
        gameOverPlayerLeft();
    } else {
        CircuitPlayground.clearPixels();
    }
}

void gameOverPlayerRight(void){
    for(int i = 0; i < missesPlayerLeft; i++)
    CircuitPlayground.setPixelColor(i, 0, 255, 0);
    delay(5000);
    gameOver = HIGH;
    CircuitPlayground.clearPixels();
}

void gameOverPlayerLeft(void){
    for(int i = 0; i < missesPlayerRight; i++)
    CircuitPlayground.setPixelColor(9 - i, 0, 255, 0);
    delay(5000);
    gameOver = HIGH;
    CircuitPlayground.clearPixels();
}

void loop(){
    updateTapDetector();
    updateGameState();
}
