# 1 "/Users/syaz/git/buino_climber/buino_climber.ino"
# 2 "/Users/syaz/git/buino_climber/buino_climber.ino" 2
# 3 "/Users/syaz/git/buino_climber/buino_climber.ino" 2
Gamebuino gb;

void setup() {
  gb.begin();
  gb.titleScreen((reinterpret_cast<const __FlashStringHelper *>(
# 7 "/Users/syaz/git/buino_climber/buino_climber.ino" 3
                (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 7 "/Users/syaz/git/buino_climber/buino_climber.ino"
                "Buino Climber"
# 7 "/Users/syaz/git/buino_climber/buino_climber.ino" 3
                ); &__c[0];}))
# 7 "/Users/syaz/git/buino_climber/buino_climber.ino"
                )));
}

void loop() {
  if (gb.update()) {
    gb.display.println((reinterpret_cast<const __FlashStringHelper *>(
# 12 "/Users/syaz/git/buino_climber/buino_climber.ino" 3
                      (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 12 "/Users/syaz/git/buino_climber/buino_climber.ino"
                      "Buino Climber"
# 12 "/Users/syaz/git/buino_climber/buino_climber.ino" 3
                      ); &__c[0];}))
# 12 "/Users/syaz/git/buino_climber/buino_climber.ino"
                      )));
  }
}
