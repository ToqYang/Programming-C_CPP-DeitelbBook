#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#include <iostream>

class RationalNumber {
  friend std::ostream &operator<<(std::ostream &, const RationalNumber &);

 public:
  explicit RationalNumber(int x = 2, int y = 4);
  void displayFloating(void) const;
  void displayResult(void) const;
  void simplifiedFraction(void);
  void simplifiedFractionResult(void);
  RationalNumber operator+(const RationalNumber&) const;
  RationalNumber operator-(const RationalNumber &) const;
  RationalNumber operator*(const RationalNumber &) const;
  RationalNumber operator/(const RationalNumber &) const;

 private:
  int numerator;
  int denominator;
  int result_numerator;
  int result_denominator;
};


#endif  // RATIONALNUMBER_H_
