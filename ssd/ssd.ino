/*#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH = 128
#define SCREEN_HEIGHT = 64

#define OLED_DC     8
#define OLED_CS     10
#define OLED_RESET  9
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &SPI, OLED_DC, OLED_RESET, OLED_CS);*/

int buttonState = 0;

void setup(){

serial.begin(9600);
pinmode(2, INPUT);


}

void loop(){

buttonState = digitalRead(2);
serial.println(buttonState);
delay(10);

}
