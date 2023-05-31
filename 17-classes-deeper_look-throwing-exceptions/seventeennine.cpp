#include <iostream>
#include "headers/DateAndTime.h" // include definition of class Date from Date.h

using namespace std;

int main() {
  DateAndTime t1(10, 12, 2004, 23, 58, 0);

  cout << "Hours:" << endl;
  for (int hours = 0; hours < 30; hours++) {
    for (int mins = 0; mins < 60; mins++) {
      for (int sec = 0; sec < 60; sec++) {
        t1.tick();
      }
    }

    t1.printUniversal();
    t1.printStandard();
    cout << "\n\n";
  }
  cout << "\n---------------" << endl;

  return 0;
}
