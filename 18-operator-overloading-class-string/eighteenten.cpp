#include "headers/RationalNumber.h"

int main() {
  RationalNumber rfr1(3, 12);
  RationalNumber rfr2(5, 2);
  RationalNumber rfr3;

  rfr3 = rfr1 + rfr2;
  std::cout << rfr3;

  RationalNumber rfr4(1, 4);
  RationalNumber rfr5(1, 5);
  rfr3 = rfr4 - rfr5;
  std::cout << rfr3;

  RationalNumber rfr6(3, 4);
  RationalNumber rfr7(2, 5);
  rfr3 = rfr6 * rfr7;
  std::cout << rfr3;

  RationalNumber rfr8(1, 4);
  RationalNumber rfr9(5, 4);
  rfr3 = rfr6 / rfr7;
  std::cout << rfr3;

  return 0;
}
