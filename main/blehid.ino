

#include <BleMouse.h>
BleMouse bleMouse;

void bleHID_init() {

  Serial.println("Starting BLE work!");
  bleMouse.begin();
}

void bleHID_control(){
  if (bleMouse.isConnected()) {
    Serial.println("Left click");
    bleMouse.click(MOUSE_LEFT);
    delay(500);

    Serial.println("Right click");
    bleMouse.click(MOUSE_RIGHT);
    delay(500);

    Serial.println("Scroll wheel click");
    bleMouse.click(MOUSE_MIDDLE);
    delay(500);

    Serial.println("Back button click");
    bleMouse.click(MOUSE_BACK);
    delay(500);

    Serial.println("Forward button click");
    bleMouse.click(MOUSE_FORWARD);
    delay(500);

    Serial.println("Click left+right mouse button at the same time");
    bleMouse.click(MOUSE_LEFT | MOUSE_RIGHT);
    delay(500);

    Serial.println("Click left+right mouse button and scroll wheel at the same time");
    bleMouse.click(MOUSE_LEFT | MOUSE_RIGHT | MOUSE_MIDDLE);
    delay(500);

  }
  }
