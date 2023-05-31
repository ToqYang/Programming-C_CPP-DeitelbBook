#ifndef DATEANDTIME_H
#define DATEANDTIME_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <array>

class DateAndTime {
 public:
  static const int MONTH_YEAR = 12;
  static const std::array<int, MONTH_YEAR + 1> DaysPerMonth;

  explicit DateAndTime(int = 1, int = 1, int = 2000, int = 0, int = 0, int = 0);

  unsigned int verifyDay(unsigned int) const;
  unsigned int verifyMonth(unsigned int) const;
  void nextDay(void);
  void print();

  // set functions
  void setTime(int, int, int);  // set hour, minute, second
  void setHour(int);  // set hour (after validation)
  void setMinute(int);  // set minute (after validation)
  void setSecond(int);  // set second (after validation)

  void tick(void);

  // get functions
  unsigned int getHour() const;   // return hour
  unsigned int getMinute() const;   // return minute
  unsigned int getSecond() const;   // return second

  void printUniversal() const;  // output time in universal-time format
  void printStandard() const;   // output time in standard-time format


 private:
  unsigned int month;
  unsigned int day;
  unsigned int year;  // end class Date

  unsigned int hour;  // 0 - 23 (24-hour clock format)
  unsigned int minute;  // 0 - 59
  unsigned int second;  // 0 - 59
};

#endif  //  DATEANDTIME_H
