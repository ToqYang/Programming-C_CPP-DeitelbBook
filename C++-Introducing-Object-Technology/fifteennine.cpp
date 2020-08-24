#include <iostream>

using std::cin;
using std::cout;
using std::endl;


/**
 * Product: Exchange the numbers, chars or float
 *
 * @d: (class) Data type to exchange
 */
template <class d>
void swap(d one, d two)
{
  cout << "Before\nFirst Data: " << one << "\nSecond data: " << two << endl;

  d tmp = one;
  one = two;
  two = tmp;

  cout << "\nAfter\nFirst Data: " << one << "\nSecond data: " << two << endl;
}


/**
 * main - Show the swap with different data types
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
  int a = 5, b = 10;
  char c = 'a', d = 'b';
  float e = 10.0f, f = 20.0f;

  swap(a, b);
  cout << endl;

  swap(c, d);
  cout << endl;

  swap(e, f);
  cout << endl;

  return 0;
}
