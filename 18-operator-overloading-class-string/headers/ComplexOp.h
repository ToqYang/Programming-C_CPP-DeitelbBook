#ifndef COMPLEXOP_H
#define COMPLEXOP_H

#include <iostream>
#include <stdexcept>

class ComplexOp {
  friend std::ostream &operator<<(std::ostream &, const ComplexOp &);
  friend std::istream &operator>>(std::istream &, ComplexOp &);

 public:
  explicit ComplexOp(double = 0.0, double = 0.0);
  ComplexOp operator+(const ComplexOp &) const;
  ComplexOp operator-(const ComplexOp &) const;
  ComplexOp operator*(const ComplexOp &) const;
  bool operator==(const ComplexOp &) const;
  bool operator!=(const ComplexOp &inputArr) const {
    return !(*this == inputArr);
  }


 private:
  double real;
  double imaginary;
};  // end class Complex #endif

#endif  //  ComplexOp
