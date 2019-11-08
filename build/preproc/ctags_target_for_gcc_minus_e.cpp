# 1 "/Users/syaz/git/buino_climber/buino_climber.ino"
# 2 "/Users/syaz/git/buino_climber/buino_climber.ino" 2
# 3 "/Users/syaz/git/buino_climber/buino_climber.ino" 2
# 4 "/Users/syaz/git/buino_climber/buino_climber.ino" 2
Gamebuino gb;

void setup() {
  gb.begin();
  gb.titleScreen((reinterpret_cast<const __FlashStringHelper *>(
# 8 "/Users/syaz/git/buino_climber/buino_climber.ino" 3
                (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 8 "/Users/syaz/git/buino_climber/buino_climber.ino"
                "Buino Climber"
# 8 "/Users/syaz/git/buino_climber/buino_climber.ino" 3
                ); &__c[0];}))
# 8 "/Users/syaz/git/buino_climber/buino_climber.ino"
                )));
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
      gb.display.drawFastVLine(x - 1, 0, 84);
      gb.display.drawFastVLine(x + 9, 0, 84);
    }
    gb.display.drawBitmap(44, 30, buino_up_0);
  }
}
