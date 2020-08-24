#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * rectArea - Calculate the Area of a Rectangle
 * @base: (int) Width of the rectangle
 * @height: (int) Of the rectangle
 *
 * Return: (int) Area of a rectangle
 */
inline int rectArea(int base, int height)
{
  return (base * height);
}


/**
 * main - Show the function inline
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
  int b = 0, h = 0;

  cout << "Enter the base" << endl;
  cin >> b;

  cout << "Enter the height" << endl;
  cin >> h;

  cout << "Area is: " << rectArea(b, h) << endl;

  return 0;
}

