#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      4

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

int brightness = 0;
int direction = 1;

void setup() {
  //Serial.begin(9600);
  pixels.begin();
  pixels.setBrightness(127);
  pixels.show();
}

void loop() {
  change();
}

void change() {
  setRandomColor(0);
  setRandomColor(1);
  setRandomColor(2);
  setRandomColor(3);
  pixels.show();
  delay(random(50, 1000));
  //delay(70);
}

void setRandomColor(int pIdx) {
  int r = random(0, 255);
  int g = random(0, 255);
  int b = random(0, 255);  
  pixels.setPixelColor(pIdx, r, g, b);
}
