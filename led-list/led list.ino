#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 32
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
    pixels.begin();
}

void loop() {
    pixels.clear();
    for(int i=0, i<NUMPIXELS, i++) {
        pixels.setPixelColor(i, pixels.Color(0, 150, 0));
        pixels.show();
        delay(500);
    }
} 