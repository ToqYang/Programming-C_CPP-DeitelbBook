#include "../Headers/Complex.h"

/**
 * Complex - Constructor
 * @z1r: (double) First part real
 * @z1i: (double) First part imaginary
 * @z2r: (double) Second part real
 * @z2i: (double) Second part imaginary
 * @imagin: (double) Number imaginary
 *
 */
Complex::Complex(double z1r, double z1i, double z2r, double z2i)
    : z1(z1r), z2(z1i), z3(z2r), z4(z2i)
{
}

/**
 * Complex - Add numbers complex
 */
Complex::void add()
{
  realPart = z1 + z3;
  imaginePart = z2 + z4;
}

/**
 * Complex - Substract numbers complex
*/
Complex::void sub()
{
  realPart = z1 - z3;
  imaginePart = z2 - z4;
}

/**
 * Complex - Print Numbers
*/
Complex::void print()
{
  std::cout << "(" << realPart << ", " << imaginePart << "i)";
}
