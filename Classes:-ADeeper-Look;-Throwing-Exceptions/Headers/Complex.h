#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <math>

class Complex
{
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

#endif