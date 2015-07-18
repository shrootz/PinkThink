// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

//pin on the Arduino is connected to the NeoPixels
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      2

// DON'T CHANGE: initializes number of pixels and values
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second
int red = 0;

void setup() {
  Serial.begin(9600);
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {
  int test = Serial.available();
  Serial.print(test);
  if (test>0){
    Serial.print("hi");
    int Key=Serial.read();
    Serial.print(Key);
    if(Key==1){
      pixels.setPixelColor(0, pixels.Color(150,0,0));
      pixels.setPixelColor(1, pixels.Color(150,0,0));
      pixels.show(); // This sends the updated pixel color to the hardware.
      delay(delayval); // Delay for a period of time (in milliseconds).
    }
    Key==0;
  }
  delay(1000);
  // Set pixels 1 color
  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
  // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
//  if (red == 1){
//    pixels.setPixelColor(0, pixels.Color(150,0,0));
//    pixels.setPixelColor(1, pixels.Color(150,0,0));
//    pixels.show(); // This sends the updated pixel color to the hardware.
//    delay(delayval); // Delay for a period of time (in milliseconds).
//  }




  
//  //Fade color spectrum
//  for(int i = 150; i >= 50; i-=5){
//    pixels.setPixelColor(0, pixels.Color(0,i,i-50));
//    pixels.setPixelColor(1, pixels.Color(i,i-50,0));
//
//    pixels.show(); // This sends the updated pixel color to the hardware.
//
//    delay(delayval); // Delay for a period of time (in milliseconds).
//  }

  //Code for fading in and fading out
  //http://forums.adafruit.com/viewtopic.php?f=47&p=217773
  
}


//int led =13;
//
//void setup() {
//  Serial.begin(9600);
//  pinMode(led,OUTPUT);
//}
//
//void loop() {
//  if (Serial.available()>0){
//    int Key=Serial.read();
//    if(Key==1)
//      Close();
//    else if(Key==2)
//      Open();
//  }
//}
//
//void Open(){
//digitalWrite(led, HIGH);
//delay(200);
//}
//
//void Close(){
//digitalWrite(led, LOW);
//delay(200);
//}
