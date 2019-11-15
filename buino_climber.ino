#include <SPI.h>
#include <Gamebuino.h>
#include "Bitmaps.h"
Gamebuino gb;

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
