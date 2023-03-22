#include "../headers/Date.h"


/**
 * Date - Constructor about Date Class
 * @month: (string) month where is located
 * @day: (string) month where is located
 * @year: (string) year where is located
 *
 */
Date::Date(int d, int m, int y) : day(d), month(m), year(y)
{

}


/**
 * set_month - Sanitize the value of month
 * @month: (string) month where is located
 *
 */
void Date::set_month(int m)
{
  if (m >= 0 && m <= 12)
    month = m;
  else {
    month = 1;
    std::cerr << "Enter the number of the 1-12" << std::endl;
  }
}

/**
 * set_day - Sanitize the value of day
 * @day: (string) month where is located
 *
 */
void Date::set_day(int d)
{
  if (d > 0 && d <= 31)
    day = d;
  else {
    day = 1;
    std::cerr << "Enter the number of the 0-31" << std::endl;
  }
}


/**
 * set_year - Sanitize the value of year
 * @year: (string) year where is located
 *
 */
void Date::set_year(int y)
{
  if (y >= 1900 && y <= 2100)
    year = y;
  else {
    year = 2020;
    std::cerr << "Enter the number of the 1900-2100" << std::endl;
  }
}

/**
 * get_month - Show the month
 *
 * Return: (int) month of the year
 */
int Date::get_month(void) const
{
  return month;
}


/**
 * get_day - Show the day
 *
 * Return: (int) day of the year
 */
int Date::get_day(void) const
{
  return day;
}


/**
 * get_year - Show year
 *
 * Return: (int) Year
 */
int Date::get_year(void) const
{
  return year;
}


/**
 * DisplayDate - Show date format
 *
 */
void Date::DisplayDate(void)
{
  std::cout << get_day() << "/" << get_month() << "/" << get_year()
            << std::endl;
}