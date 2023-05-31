#include "./headers/Rectangle.h"

int main() {
  Rectangle rect(3.0, 2.0);
  rect.print();

  Rectangle rect2(3.0, 22);
  rect2.print();

  Rectangle rect3(-1, 18.5);
  rect3.print();

  return 0;
}
