# 1 "C:\\Users\\Maria\\Downloads\\IELS\\led list 2\\led list 2.ino"
# 2 "C:\\Users\\Maria\\Downloads\\IELS\\led list 2\\led list 2.ino" 2



Adafruit_NeoPixel pixels(32, 6, ((1 << 6) | (1 << 4) | (0 << 2) | (2)) /*|< Transmit as G,R,B*/ + 0x0000 /*|< 800 KHz data transmission*/);


void setup() {

  pixels.begin();
}

void loop() {
  pixels.clear();

  for(int i=0; i<32; i++) {

    pixels.setPixelColor(i, pixels.Color(100, 255, 50));

    pixels.show();

    delay(30);
  }
}
