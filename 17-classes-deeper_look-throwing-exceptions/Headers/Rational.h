#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {
 public:
  explicit Rational(int x = 2, int y = 4);
  void displayFloating(void) const;
  void displayResult(void) const;
  void simplifiedFraction(void);
  void simplifiedFractionResult(void);
  void add(int, int);
  void sub(int, int);
  void mul(int, int);
  void div(int, int);
 private:
  int numerator;
  int denominator;
  int result_numerator;
  int result_denominator;
};

#endif   // RATIONAL_H
