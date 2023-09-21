#include <Arduino.h>
#line 1 "C:\\Users\\Maria\\Downloads\\IELS\\led list 2\\led list 2.ino"
#include <Adafruit_NeoPixel.h>
#define PIN        6 
#define NUMPIXELS 32 

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


#line 8 "C:\\Users\\Maria\\Downloads\\IELS\\led list 2\\led list 2.ino"
void setup();
#line 13 "C:\\Users\\Maria\\Downloads\\IELS\\led list 2\\led list 2.ino"
void loop();
#line 8 "C:\\Users\\Maria\\Downloads\\IELS\\led list 2\\led list 2.ino"
void setup() {

  pixels.begin(); 
}

void loop() {
  pixels.clear(); 
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(100, 255, 50));

    pixels.show();  

    delay(300);  
  } 
}
