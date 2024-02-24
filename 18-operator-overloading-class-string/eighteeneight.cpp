#include "./headers/ComplexOp.h"

int main() {
  ComplexOp x;
  ComplexOp w;
  ComplexOp y(4.3, 8.2);
  ComplexOp z(3.3, 1.1);

  std::cout << "x: " << x;
  std::cout << "\ny: " << y;
  std::cout << "\nz: " << z;

  x = y + z;
  std::cout << "\n\nx = y + z:" << std::endl;
  std::cout << x;
  std::cout << " = " << y;
  std::cout << " + " << z;
  std::cout << std::endl;

  x = y - z;
  std::cout << "\n\nx = y - z:" << std::endl;
  std::cout << x;
  std::cout << " = " << y;
  std::cout << " - " << z;
  std::cout << std::endl;

  x = y * z;
  w = y * z;
  std::cout << "\n\nx = y * z:" << std::endl;
  std::cout << x;
  std::cout << " = " << y;
  std::cout << " * " << z;
  std::cout << std::endl;

  std::cout << "Input 7, 2:\n";
  std::cin >> x;
  std::cout << x;

  std::cout << "Equal operator (w == x): " << (x == w) << std::endl;
  std::cout << "Not Equal operator (x != z): " << (x != z) << std::endl;

  return 0;
}
