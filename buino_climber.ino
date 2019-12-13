#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;
#include <string.h>
#include "Bitmaps.h"

void setup() {
  gb.begin();
  gb.titleScreen(F("Buino Climber"));
}

void loop() {
  if (gb.update()) {
    // gb.display.drawBitmap(44, 30, buino_up_0);
    initScreen();
  }
}
