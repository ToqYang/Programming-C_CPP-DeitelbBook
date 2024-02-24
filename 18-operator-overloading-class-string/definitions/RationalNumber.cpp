#include "../headers/RationalNumber.h"

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}

void RationalNumber::simplifiedFraction(void) {
  int x = this->numerator;
  int y = this->denominator;

  for (int i = 1; (i <= x && i <= y); i++) {
    if (x % i == 0 && y % i == 0) {
      x /= i;
      y /= i;
      i = 1;
    }
  }

  this->numerator = x;
  this->denominator = y;
}

void RationalNumber::simplifiedFractionResult(void) {
  int x = this->result_numerator;
  int y = this->result_denominator;

  for (int i = 1; (i <= x && i <= y); i++) {
    if (x % i == 0 && y % i == 0) {
      x /= i;
      y /= i;
      i = 1;
    }
  }

  this->result_numerator = x;
  this->result_denominator = y;
}

RationalNumber::RationalNumber(int x, int y) {
  numerator = x;
  denominator = y;

  RationalNumber::simplifiedFraction();
}

RationalNumber RationalNumber::operator+(const RationalNumber &op2) const {
  RationalNumber tmp(this->numerator, this->denominator);
  if (tmp.denominator == op2.denominator) {
    tmp.result_numerator = tmp.numerator + op2.numerator;
    tmp.result_denominator = op2.denominator;
    return tmp;
  }

  int lcm_rational = lcm(tmp.denominator, op2.denominator);

  int numerator_a =
      tmp.denominator == lcm_rational ?
      tmp.numerator :
      tmp.numerator * (lcm_rational / tmp.denominator);
  int numerator_b =
      op2.denominator == lcm_rational ? op2.numerator : (op2.numerator
          * (lcm_rational / op2.denominator));

  tmp.result_numerator = numerator_a + numerator_b;
  tmp.result_denominator = lcm_rational;

  tmp.simplifiedFractionResult();

  return tmp;
}

RationalNumber RationalNumber::operator-(const RationalNumber &op2) const {
  RationalNumber tmp(this->numerator, this->denominator);
  if (tmp.denominator == op2.denominator) {
    tmp.result_numerator = tmp.numerator + op2.numerator;
    tmp.result_denominator = op2.denominator;
    return tmp;
  }

  int lcm_rational = lcm(tmp.denominator, op2.denominator);

  int numerator_a =
      tmp.denominator == lcm_rational ?
      tmp.numerator :
      tmp.numerator * (lcm_rational / tmp.denominator);
  int numerator_b =
      op2.denominator == lcm_rational ? op2.numerator : (op2.numerator
          * (lcm_rational / op2.denominator));

  tmp.result_numerator = numerator_a - numerator_b;
  tmp.result_denominator = lcm_rational;

  tmp.simplifiedFractionResult();

  return tmp;
}

RationalNumber RationalNumber::operator*(const RationalNumber &op2) const {
  RationalNumber tmp(this->numerator, this->denominator);
  tmp.result_numerator = tmp.numerator * op2.numerator;
  tmp.result_denominator = tmp.denominator * op2.denominator;

  tmp.simplifiedFractionResult();
  return tmp;
}

RationalNumber RationalNumber::operator/(const RationalNumber &op2) const {
  RationalNumber tmp(this->numerator, this->denominator);
  tmp.result_numerator = tmp.numerator * op2.denominator;
  tmp.result_denominator = tmp.denominator * op2.numerator;

  tmp.simplifiedFractionResult();
  return tmp;
}

void RationalNumber::displayFloating(void) const {
  std::cout
      << static_cast<float>(this->result_numerator / this->result_denominator)
      << std::endl;
}

std::ostream &operator<<(std::ostream &output, const RationalNumber &op2) {
  output << op2.result_numerator << "/" << op2.result_denominator << std::endl;
  return output;
}
