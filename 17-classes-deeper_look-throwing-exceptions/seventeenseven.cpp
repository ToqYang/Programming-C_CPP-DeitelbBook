#include "headers/TimeTick.h"

int main() {
  TimeTick t1(23, 58, 0);   // hour and minute specified; second defaulted
  cout << "Start with:" << endl;
  t1.printUniversal();  // 00:00:00
  cout << "\n";
  t1.printStandard();   // 12:00:00 AM

  // a. seconds
  cout << "\nSeconds:" << endl;
  t1.tick();
  t1.printUniversal();  // 00:00:00
  cout << " - ";
  t1.printStandard();   // 12:00:00 AM
  cout << "\n\n";

  cout << "\n---------------" << endl;

  // b. Minutes
  cout << "Minutes:" << endl;
  for (int mins = 0; mins < 60; mins++) {
    for (int sec = 0; sec < 60; sec++) {
      t1.tick();
      t1.printUniversal();  // 00:00:00
      cout << " - ";
      t1.printStandard();   // 12:00:00 AM
      cout << "\n\n";
    }
  }
  cout << "\n---------------" << endl;

  // b. hours
  cout << "Hours:" << endl;
  for (int hours = 0; hours < 2; hours++) {
    for (int mins = 0; mins < 60; mins++) {
      for (int sec = 0; sec < 60; sec++) {
        t1.tick();
        t1.printUniversal();    // 00:00:00
        cout << " - ";
        t1.printStandard();   // 12:00:00 AM
        cout << "\n\n";
      }
    }
  }
  cout << "\n---------------" << endl;

  return 0;
}
