#include <iostream>
#include "../headers/DateAndTime.h" // include definition of class Date from Date.h

using namespace std;

DateAndTime::DateAndTime(int m,
                         int d,
                         int y,
                         int hour,
                         int minute,
                         int second) {
  month = verifyMonth(m);
  day = verifyDay(d);
  year = y;

  setTime(hour, minute, second);
}   // end constructor Date

const array<int, DateAndTime::MONTH_YEAR + 1> DateAndTime::DaysPerMonth =
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

unsigned int DateAndTime::verifyDay(unsigned int checkDay) const {
  if (checkDay > 0 && checkDay <= DaysPerMonth[month]) {
    return checkDay;
  }

  if (month == 2 && checkDay == 29 &&
      (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
    return checkDay;
  }

  throw invalid_argument("Invalid day for current month and year");
}

unsigned int DateAndTime::verifyMonth(unsigned int checkMonth) const {
  if (checkMonth > 0 && checkMonth <= MONTH_YEAR) {
    return checkMonth;
  }
  throw invalid_argument("Invalid month");
}

void DateAndTime::nextDay(void) {
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
void DateAndTime::print() {
  cout << month << '/' << day << '/' << year;
}   // end function print



void DateAndTime::setTime(int h, int m, int s) {
  setHour(h);   // set private field hour
  setMinute(m);   // set
  setSecond(s);   // set
}   // end function setTime

// set hour value
void DateAndTime::setHour(int h) {
  if (h >= 0 && h < 24) hour = h;
  else
    throw invalid_argument("hour must be 0-23");
}   // end function setHour

// set minute value
void DateAndTime::setMinute(int m) {
  if (m >= 0 && m < 60) minute = m;
  else
    throw invalid_argument("minute must be 0-59");
}   // end function setMinute

// set second value
void DateAndTime::setSecond(int s) {
  if (s >= 0 && s < 60) second = s;
  else
    throw invalid_argument("second must be 0-59");
}   // end function setSecond

// return hour value
unsigned int DateAndTime::getHour() const {
  return hour;
}   // end function getHour

// return minute value
unsigned DateAndTime::getMinute() const {
  return minute;
}   // end function getMinute

// return second value
unsigned DateAndTime::getSecond() const {
  return second;
}   // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void DateAndTime::printUniversal() const {
  cout << setfill('0') << setw(2) << day << "/"
       << setfill('0') << setw(2) << month << "/"
       << setfill('0') << setw(4) << year << "   "
       << setfill('0') << setw(2) << getHour() << ":"
       << setw(2) << getMinute() << ":" << setw(2) << getSecond()
       << std::endl;
}   // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void DateAndTime::printStandard() const {
  cout << setfill('0') << setw(2) << day << "/"
       << setfill('0') << setw(2) << month << "/"
       << setfill('0') << setw(4) << year << "   "
       << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
       << ":" << setfill('0') << setw(2) << getMinute()
       << ":" << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM")
       << std::endl;
}   // end function printStandard

void DateAndTime::tick(void) {
  if (second + 1 > 59) {
    second = 0;

    if (minute + 1 > 59) {
      minute = 0;

      hour = (hour + 1 > 24) ? 0 : hour + 1;
      // If hour = 0 next day
      if (hour == 0) {
        nextDay();
      }
    } else {
      minute += 1;
    }

    return;
  }

  second += 1;
}
