void initScreen() {
  drawBackground();
  running();
}

void drawBackground() {
  // windows offset & margin
  int offset_left = 20;
  int offset_bottom = 4;
  int margin_x = 3;
  int margin_y = 1;
  int window_height = 6;
  int window_width = 9;

  for (size_t i = 0; i < 5; i++) {
    int x = offset_left + (i * window_width) + margin_x * i;
    int y = 48 - offset_bottom - window_height;
    // draw vlines
    gb.display.drawFastVLine(x , 0, 48);
    gb.display.drawFastVLine(x + 8, 0, 48);
    // draw windows
    while(y >= 0) {
      gb.display.drawBitmap(x, y, window_3);  // 9x6の窓画像
      y -= window_height + margin_y;
    }
    gb.display.drawBitmap(x, y, window_3);  // 9x6の窓画像
  }
}

void running() {
}