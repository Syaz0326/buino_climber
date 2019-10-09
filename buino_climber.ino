#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;

void setup() {
  gb.begin();
  gb.titleScreen(F("Buino Climber"));
}

void loop() {
  if (gb.update()) {
    gb.display.println(F("Buino Climber"));
  }
}
