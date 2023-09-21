# 1 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino"
# 2 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino" 2
# 3 "C:\\Users\\Maria\\Downloads\\IELS\\github\\led list 2\\1dPong\\1dPong.ino" 2



unsigned long previousMillis = 0;
const long interval[] = {25, 15, 10, 6};
int neoPixelNumber = 0;
int gameLevel = 0;

boolean ledState = 0x0;
boolean tapDetectResetTimer = 0x0;
boolean directionState = 0x0;
boolean justStartet = 0x1;
boolean gameOver = 0x1;
int missesPlayerRight = 0;
int missesPlayerLeft = 0;
int hitsInARow = 0;
int maxHitsInARowPerGameLevel = 8;
bool leftButtonPressed;
bool rightButtonPressed;
bool lockoutLeftButton = 0x0;
bool lockoutRightButton = 0x0;

const int brightness = 10;
int ledPin;
int detectedTap = 0x0;
unsigned long previousMillisTapDetector = 0;
const long tapDetectResetDuration = 100;

void updateTapDetector(){
    if(detectedTap){
        unsigned long currentMillisTapDetector = millis();

        if(currentMillisTapDetector - previousMillisTapDetector >= tapDetectResetDuration){
            previousMillisTapDetector = currentMillisTapDetector;

            if(tapDetectResetTimer == 0x0){
                tapDetectResetTimer = 0x1;
            } else {
                tapDetectResetTimer = 0x0;
                detectedTap = 0x0;
            }
        }
        digitalWrite(6, detectedTap);
    }
}

void TapDetector(){
    detectedTap = 0x1;
}

void setup(){
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(brightness);
  CircuitPlayground.clearPixels();
  CircuitPlayground.setAccelRange(LIS3DH_RANGE_2_G); // 2, 4, 8 or 16 G!
  CircuitPlayground.setAccelTap(1, 8);

  attachInterrupt(((7) == 2 ? 0 : ((7) == 3 ? 1 : -1)), TapDetector, 2);

  ledPin = 6;
  pinMode(ledPin, 0x1);

  digitalWrite(6, detectedTap);
}

void showIntro(){
    unsigned long currentMillis = millis();

    if(currentMillis - previousMillis >= interval[0]){
        previousMillis = currentMillis;

        if(ledState == 0x0){
            ledState = 0x1;

            if(neoPixelNumber == 9 || neoPixelNumber == 0){
                CircuitPlayground.clearPixels();
                CircuitPlayground.setPixelColor(neoPixelNumber, 255, 0, 0);
            } else {
                CircuitPlayground.setPixelColor(neoPixelNumber, 0, 0, 255);
            }

            if(directionState == 0x0){

                if(neoPixelNumber < 9){
                    neoPixelNumber = neoPixelNumber + 1;
                } else {
                    neoPixelNumber = neoPixelNumber - 1;
                    directionState = 0x1;
                }
            } else {
                if(neoPixelNumber > 0){
                    neoPixelNumber = neoPixelNumber - 1;
                } else {
                    neoPixelNumber = neoPixelNumber + 1;
                    directionState = 0x0;
                }
            }
        } else {
            ledState = 0x0;
        }
    }

}

void updateGameState(){
    if(gameOver) showIntro();

    if((CircuitPlayground.leftButton() && gameOver) || (CircuitPlayground.rightButton() && gameOver)){
        CircuitPlayground.clearPixels();
        gameOver = 0x0;
        missesPlayerLeft = 0;
        missesPlayerRight = 0;
        gameLevel = 0;
        neoPixelNumber = 1;
        directionState = 0x0;
    }

    if(!gameOver) playGame();
}

void playGame(void){
    unsigned long currentMillis = millis();

    if(currentMillis - previousMillis >= interval[gameLevel]){
        previousMillis = currentMillis;

        if(!CircuitPlayground.rightButton()) lockoutRightButton = 0x0;
        if(!CircuitPlayground.leftButton()) lockoutLeftButton = 0x0;

        if(CircuitPlayground.rightButton() && neoPixelNumber < 9) lockoutRightButton = 0x1;
        if(CircuitPlayground.leftButton() && neoPixelNumber > 0) lockoutLeftButton = 0x1;

        if(ledState == 0x0){
            ledState = 0x1;

            if(neoPixelNumber == 9){
                CircuitPlayground.clearPixels();

                if((CircuitPlayground.rightButton() && !lockoutRightButton) || detectedTap){
                    lockoutRightButton = 0x1;
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
                    lockoutLeftButton = 0x1;
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

            if(directionState == 0x0){

                if(neoPixelNumber < 9){
                    neoPixelNumber = neoPixelNumber + 1;
                } else {
                    neoPixelNumber = neoPixelNumber - 1;
                    directionState = 0x1;
                }
            } else {

                if(neoPixelNumber > 0){
                    neoPixelNumber = neoPixelNumber - 1;
                } else {
                    neoPixelNumber = neoPixelNumber + 1;
                    directionState = 0x0;
                }
            }
        } else {
            ledState = 0x0;
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
    gameOver = 0x1;
    CircuitPlayground.clearPixels();
}

void gameOverPlayerLeft(void){
    for(int i = 0; i < missesPlayerRight; i++)
    CircuitPlayground.setPixelColor(9 - i, 0, 255, 0);
    delay(5000);
    gameOver = 0x1;
    CircuitPlayground.clearPixels();
}

void loop(){
    updateTapDetector();
    updateGameState();
}
