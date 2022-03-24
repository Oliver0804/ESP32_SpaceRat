#include "AiEsp32RotaryEncoder.h"
#include "Arduino.h"

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define LED_PIN 2
bool blinkState = false;


// I2Cdev and MPU6050 must be installed as libraries, or else the .cpp/.h files
// for both classes must be in the include path of your project
#include "I2Cdev.h"
#include "MPU6050.h"
MPU6050 accelgyro;
int16_t ax, ay, az;
int16_t gx, gy, gz;
int16_t offset_ax, offset_ay , offset_az;


void setup() {
  Serial.begin(115200);
  encoder_init();

  mpu6050_init();
  bleHID_init();
  initOffset(5);
}


void loop() {
  rotary_loop();
  //mpu6050_read(1);
//  bleHID_control();
   //Serial.print(ax); Serial.print("\t");
}

void rat2hid(){
  
  }
