#include "../headers/Time.h"

Time::Time(void) {
  time_t curr_time;
  curr_time = time(NULL);

  tm *tm_local = localtime(&curr_time);

  this->hour = tm_local->tm_hour;
  this->min = tm_local->tm_min;
  this->sec = tm_local->tm_sec;
}

void Time::DisplayTime(void) const {
  std::cout << "Current local time : " <<
  this->hour << ":" << this->min << ":" << this->sec << std::endl;
}
