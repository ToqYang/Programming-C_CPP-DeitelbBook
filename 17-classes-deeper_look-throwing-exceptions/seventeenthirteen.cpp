#include "./headers/Rectangle.h"

int main() {
  RectangleTwo rect(0.0, 3.0, 0.0, 2.0, '*', '*');
  rect.print();

  RectangleTwo rect2(0.0, 3.0, 0.0, 22, '*', '*');
  rect2.print();

  RectangleTwo rect3(-2, -1, 0.0, 18.5, '*', '*');
  rect3.print();

  RectangleTwo rect4(0.0, 3.0, 0.0, 2.0, '*', '*');
  rect4.print();
  rect4.draw();

  return 0;
}
