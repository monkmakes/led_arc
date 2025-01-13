// Requires Adafruit NeoPixel library - 1.12.3 installed

#include <Adafruit_NeoPixel.h>

const int PIN = 6;
const int NUMPIXELS = 10;

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); 
  pixels.clear(); 
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(random(255), random(255), random(255)));
    pixels.show(); 
    delay(100);
  }
}

void loop() {
}
