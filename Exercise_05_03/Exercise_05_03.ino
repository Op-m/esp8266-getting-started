#include <Wire.h>  
#include "SSD1306Wire.h"

SSD1306Wire  display(0x3c, D3, D4);

// Optional: declare counter and show it on the display
// uint16_t ...

void setup() {
  // Initialize the driver
  display.init();

  // Set the font type here
  // display. ...
  
  // Set the drawing color once
  display.setColor(WHITE);
}

void loop() {
  // Clear the frame buffer
  display.clear();
  
  // Draw the text and optionally add a counter
  // display. ....

  // Write the frame buffer to the display.
  display.display();

  // Optional: Increase counter
  //...++

}

