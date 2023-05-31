#ifndef DATE_H
#define DATE_H

#include <array>

// class Date definition
class Date {
 public:
  static const int MONTH_YEAR = 12;
  static const std::array<int, MONTH_YEAR + 1> DaysPerMonth;

  explicit Date(int = 1, int = 1, int = 2000);
  unsigned int verifyDay(unsigned int) const;
  unsigned int verifyMonth(unsigned int) const;
  void nextDay(void);
  void print();

 private:
  unsigned int month;
  unsigned int day;
  unsigned int year;
};

#endif  // DATE_H
