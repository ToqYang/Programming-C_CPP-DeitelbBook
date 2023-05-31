#include <iostream>
#include "../headers/Date.h" // include definition of class Date from Date.h

using namespace std;

Date::Date(int m, int d, int y) {
  month = verifyMonth(m);
  day = verifyDay(d);
  year = y;
}   // end constructor Date

const array<int, Date::MONTH_YEAR + 1> Date::DaysPerMonth =
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

unsigned int Date::verifyDay(unsigned int checkDay) const {
  if (checkDay > 0 && checkDay <= DaysPerMonth[month]) {
    return checkDay;
  }

  if (month == 2 && checkDay == 29 &&
      (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
    return checkDay;
  }

  throw invalid_argument("Invalid day for current month and year");
}

unsigned int Date::verifyMonth(unsigned int checkMonth) const {
  if (checkMonth > 0 && checkMonth <= MONTH_YEAR) {
    return checkMonth;
  }
  throw invalid_argument("Invalid month");
}

void Date::nextDay(void) {
  // Next day.
  int newDay = day + 1;
  int newMonth = month;
  int newYear = year;
  int isNextMonth = 0;

  try {
    newDay = verifyDay(newDay);
  } catch (invalid_argument &e) {
    newDay = 1;
    // if its invalid day
    isNextMonth = 1;
  }
  // Next month.
  try {
    newMonth = isNextMonth ? month + 1 : month;
    newMonth = verifyMonth(newMonth);
  } catch (invalid_argument &e) {
    newMonth = 1;
    newYear += 1;
  }

  day = newDay;
  month = newMonth;
  year = newYear;
}

// print Date in the format mm/dd/yyyy
void Date::print() {
  cout << month << '/' << day << '/' << year;
}   // end function print
