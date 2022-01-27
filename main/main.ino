#include "AiEsp32RotaryEncoder.h"
#include "Arduino.h"

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define LED_PIN 2
bool blinkState = false;




void setup() {
  Serial.begin(115200);
  encoder_init();

  mpu6050_init();
  bleHID_init();

}


void loop() {
  rotary_loop();
  mpu6050_read();
   bleHID_control();

}
