#include <iostream>

using std::cin;
using std::cout;
using std::endl;


/**
 * Product: Calculate the product of the numbers
 *
 * @p: (class) Template to a product
 */
template <class p>
p product(p one, p two)
{
  return (one * two);
}


/**
 * main - Show template function
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
  int f = 0;
  float s = 0.0f;

  cout << "Enter integer product" << endl;
  cin >> f;

  cout << "Enter floating point" << endl;
  cin >> s;

  cout << "Template with integers: " << product(f, f) << endl;
  cout << "Template with floats: " << product(s, s)  << endl;

  return 0;
}
