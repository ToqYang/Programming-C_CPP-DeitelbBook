#include "headers/Rational.h"

int main() {
  Rational rfr2(3, 12);
  rfr2.add(5, 2);
  rfr2.displayResult();
  rfr2.displayFloating();

  Rational rfr3(1, 4);
  rfr3.sub(1, 5);
  rfr3.displayResult();
  rfr3.displayFloating();

  Rational rfr4(3, 4);
  rfr4.mul(2, 5);
  rfr4.displayResult();
  rfr4.displayFloating();

  Rational rfr5(1, 4);
  rfr5.div(5, 4);
  rfr5.displayResult();
  rfr5.displayFloating();

  return 0;
}
