#include "../headers/ComplexOp.h"

ComplexOp::ComplexOp(double realPart, double imaginaryPart)
    : real(realPart),
      imaginary(imaginaryPart) {
}


ComplexOp ComplexOp::operator+(const ComplexOp &operand2) const {
  return ComplexOp(real + operand2.real, imaginary + operand2.imaginary);
}

ComplexOp ComplexOp::operator-(const ComplexOp &operand2) const {
  return ComplexOp(real - operand2.real, imaginary - operand2.imaginary);
}

ComplexOp ComplexOp::operator*(const ComplexOp &operand2) const {
  //  FOIL Complex Formula
  double first = this->real * operand2.real;
  double outers = this->real * operand2.imaginary;
  double inners = this->imaginary * operand2.real;
  double lasts = this->imaginary * operand2.imaginary;
  double realResult = first - lasts;
  double imaginaryResult = outers + inners;

  return ComplexOp(realResult, imaginaryResult);
}

bool ComplexOp::operator==(const ComplexOp &inputComplexOp) const {
  if (inputComplexOp.real == this->real
      && inputComplexOp.imaginary == this->imaginary) {
    return true;
  }

  return false;
}

std::ostream &operator<<(std::ostream &output,
                         const ComplexOp &inputComplexOp) {
  output << '(' << inputComplexOp.real << ", " << inputComplexOp.imaginary
         << 'i' << ')';
  return output;
}

std::istream &operator>>(std::istream &input, ComplexOp &inputComplexOp) {
  input >> inputComplexOp.real;
  input >> inputComplexOp.imaginary;

  return input;
}
