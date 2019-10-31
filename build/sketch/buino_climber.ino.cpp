#include <Arduino.h>
#line 1 "/Users/syaz/git/buino_climber/buino_climber.ino"
#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;

#line 5 "/Users/syaz/git/buino_climber/buino_climber.ino"
void setup();
#line 10 "/Users/syaz/git/buino_climber/buino_climber.ino"
void loop();
#line 5 "/Users/syaz/git/buino_climber/buino_climber.ino"
void setup() {
  gb.begin();
  gb.titleScreen(F("Buino Climber"));
}

void loop() {
  if (gb.update()) {
    gb.display.println(F("Buino Climber"));
  }
}

