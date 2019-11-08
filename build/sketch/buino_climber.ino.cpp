#include <Arduino.h>
#line 1 "/Users/syaz/git/buino_climber/buino_climber.ino"
#include <SPI.h>
#include <Gamebuino.h>
#include "Bitmaps.h"
Gamebuino gb;

#line 6 "/Users/syaz/git/buino_climber/buino_climber.ino"
void setup();
#line 11 "/Users/syaz/git/buino_climber/buino_climber.ino"
void loop();
#line 6 "/Users/syaz/git/buino_climber/buino_climber.ino"
void setup() {
  gb.begin();
  gb.titleScreen(F("Buino Climber"));
}

void loop() {
  if (gb.update()) {
    int offset_left = 20;
    int offset_top = 1;
    int margin = 3;
    for (size_t i = 0; i < 5; i++) {
      int x = offset_left + (i * 9) + 3 * i;
      int y = offset_top;
      gb.display.drawBitmap(x, y, window_1);
      gb.display.drawFastVLine(x , 0, 84);
      gb.display.drawFastVLine(x + 8, 0, 84);
    }
    gb.display.drawBitmap(44, 30, buino_up_0);
  }
}

