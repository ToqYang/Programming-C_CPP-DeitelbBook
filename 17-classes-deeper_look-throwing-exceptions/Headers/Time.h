#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <ctime>

class Time {
 public:
    Time(void);
    void DisplayTime(void) const;
 private:
    int min;
    int hour;
    int sec;
};

#endif   // TIME_H
