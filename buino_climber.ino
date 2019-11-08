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
    int offset = 10;
    int margin = 3;
    for (size_t i = 0; i < 5; i++) {
      int x = offset + (i * 10) + 3 * i;
      int y = offset;
      gb.display.drawBitmap(x, y, window_1);
      gb.display.drawFastVLine(x + 12, 0, 84);
      gb.display.drawFastVLine(x + 10, 0, 84);
    }
    gb.display.drawBitmap(30, 30, buino_up_0);
  }
}
