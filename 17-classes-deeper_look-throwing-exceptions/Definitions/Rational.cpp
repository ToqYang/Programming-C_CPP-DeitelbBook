#include "../headers/Rational.h"

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}

void Rational::simplifiedFraction(void) {
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

void Rational::simplifiedFractionResult(void) {
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

Rational::Rational(int x, int y) {
  numerator = x;
  denominator = y;

  Rational::simplifiedFraction();
}

void Rational::add(int x, int y) {
  if (this->denominator == y) {
    this->result_numerator = this->numerator + x;
    this->result_denominator = y;
    return;
  }

  int lcm_rational = lcm(this->denominator, y);

  std::cout << (this->numerator == lcm_rational) << std::endl;
  std::cout << (x == lcm_rational) << std::endl;

  int numerator_a =
          this->denominator == lcm_rational ?
          this->numerator :
          this->numerator * (lcm_rational / this->denominator);
  int numerator_b = y == lcm_rational ? x : (x * (lcm_rational / y));

  this->result_numerator = numerator_a + numerator_b;
  this->result_denominator = lcm_rational;

  Rational::simplifiedFractionResult();
}

void Rational::sub(int x, int y) {
  if (this->denominator == y) {
    this->result_numerator = this->numerator + x;
    this->result_denominator = y;
    return;
  }

  int lcm_rational = lcm(this->denominator, y);

  std::cout << (this->numerator == lcm_rational) << std::endl;
  std::cout << (x == lcm_rational) << std::endl;

  int numerator_a =
          this->denominator == lcm_rational ?
          this->numerator :
          this->numerator * (lcm_rational / this->denominator);
  int numerator_b = y == lcm_rational ? x : (x * (lcm_rational / y));

  this->result_numerator = numerator_a - numerator_b;
  this->result_denominator = lcm_rational;

  Rational::simplifiedFractionResult();
}

void Rational::mul(int x, int y) {
  this->result_numerator = this->numerator * x;
  this->result_denominator = this->denominator * y;

  Rational::simplifiedFractionResult();
}

void Rational::div(int x, int y) {
  this->result_numerator = this->numerator * y;
  this->result_denominator = this->denominator * x;

  Rational::simplifiedFractionResult();
}

void Rational::displayFloating(void) const {
  std::cout
    << static_cast<float>(this->result_numerator / this->result_denominator)
    << std::endl;
}

void Rational::displayResult(void) const {
  std::cout
    << this->result_numerator << "/" << this->result_denominator << std::endl;
}
