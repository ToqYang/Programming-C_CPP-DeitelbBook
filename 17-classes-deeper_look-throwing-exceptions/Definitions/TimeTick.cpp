#include "../headers/TimeTick.h"
//     include definition of class Time from Time.h
//     Time constructor initializes each data member
TimeTick::TimeTick(int hour, int minute, int second) {
  setTime(hour, minute, second);      //     validate and set time
}     //     end Time constructor
//     set new Time value using universal time
void TimeTick::setTime(int h, int m, int s) {
  setHour(h);     //     set private field hour
  setMinute(m);     //     set
  setSecond(s);     //     set
}     //     end function setTime

//     set hour value
void TimeTick::setHour(int h) {
  if (h >= 0 && h < 24) hour = h;
  else
    throw invalid_argument("hour must be 0-23");
}     //     end function setHour
//     set minute value
void TimeTick::setMinute(int m) {
  if (m >= 0 && m < 60) minute = m;
  else
    throw invalid_argument("minute must be 0-59");
}     //     end function setMinute

//     set second value
void TimeTick::setSecond(int s) {
  if (s >= 0 && s < 60) second = s;
  else
    throw invalid_argument("second must be 0-59");
}     //     end function setSecond
//     return hour value
unsigned int TimeTick::getHour() const {
  return hour;
}     //     end function getHour
//     return minute value
unsigned TimeTick::getMinute() const {
  return minute;
}     //     end function getMinute
//     return second value
unsigned TimeTick::getSecond() const {
  return second;
}     //     end function getSecond
//     print Time in universal-time format (HH:MM:SS)
void TimeTick::printUniversal() const {
  cout << setfill('0') << setw(2) << getHour() << ":"
       << setw(2) << getMinute() << ":" << setw(2) << getSecond();
}     //     end function printUniversal
//     print Time in standard-time format (HH:MM:SS AM or PM)
void TimeTick::printStandard() const {
  cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
       << setfill('0') << setw(2) << getMinute()
       << ":" << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM");
}     //     end function printStandard

void TimeTick::tick(void) {
  if (second + 1 > 59) {
    second = 0;

    if (minute + 1 > 59) {
      minute = 0;

      hour = (hour + 1 > 24) ? 0 : hour + 1;
    } else {
      minute += 1;
    }

    return;
  }

  second += 1;
}
