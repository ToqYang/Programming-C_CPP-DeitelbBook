#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void multipleByReference(int *countref);
void multipleByValue(int count);


/**
 * main - Show pass to value and reference
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
  int f = 0, s = 0;

  cout << "Pass to value" << endl;
  cin >> f;

  cout << "Pass to reference" << endl;
  cin >> s;

  cout << "Numbers before\nFirstNumber: " << f << "\nSecondNumber: "
  << s << endl << endl;

  multipleByValue(f);
  multipleByReference(&s);

  cout << "\nNumbers after\nFirstNumber: " << f << "\nSecondNumber: "
  << s << endl << endl;

  return 0;
}


/**
 * multipleByValue - Pass count to value
 * @count: (int) Number to multiply
 *
 * Return: (int) Pass the number
 */
void multipleByValue(int count)
{
  count *= count;
  cout << count << endl;
}


/**
 * multipleByReference - Pass count to reference
 * @count: (int) Number to multiply
 *
 * Return: (int) Pass the number
 */
void multipleByReference(int *countref)
{
  *countref *= *countref;
  cout << *countref << endl;
}
