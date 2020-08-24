#include "headers/Date.h"


/**
 * main - (Date  Class)
 *
 * Return: (int) 0 If is success
 */
int main(void)
{
  // create Date class
  Date today(14, 8, 2020);

  // Display Date
  today.DisplayDate();

  // Set new date
  today.set_day(0);
  today.set_month(13);
  today.set_year(1800);

  // Display new date
  today.DisplayDate();

  return 0;
}