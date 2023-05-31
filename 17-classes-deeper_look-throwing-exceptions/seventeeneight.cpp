#include <iostream>
#include "headers/Date.h"   //  include definition of class Date from Date.h

using namespace std;

int main() {
  Date date1(10, 12, 2004);
  Date date2;

  cout << "date1 = ";
  date1.print();
  cout << "\ndate2 = ";
  date2.print();

  date2 = date1;    // default memberwise assignment
  cout << "\n\nAfter default memberwise assignment, date2 = ";
  date2.print();
  cout << endl;

  //  Next 1 day
  cout << "\n\nStart date = ";
  date1.print();
  date1.nextDay();
  cout << "\nAfter next day(m-d-y) = ";
  date1.print();
  cout << endl;

  // Next 1 month
  cout << "\n\nStart date = ";
  date1.print();

  for (int daysAfter = 1; daysAfter <= 30; daysAfter++) {
    date1.nextDay();
  }
  cout << "\nAfter 30 days(m-d-y) = ";
  date1.print();
  cout << endl;

  //  Next 1 year
  cout << "\n\nStart date = ";
  date1.print();

  for (int daysAfter = 1; daysAfter <= 60; daysAfter++) {
    date1.nextDay();
    cout << "\nAfter 60 days(m-d-y) day(" << daysAfter << ") = ";
    date1.print();
    cout << endl;
  }

  return 0;
}
