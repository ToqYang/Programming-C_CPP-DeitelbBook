#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

class Complex {
 public:
  explicit Complex(double = 0, double = 0, double = 0, double = 0);

  void add(void);

  void sub(void);

  void print(void);

  void ~Complex(void);

 private:
  double z1;
  double z2;
  double z3;
  double z4;
  double realPart;
  double imaginePart;
};

#endif  // COMPLEX_H
