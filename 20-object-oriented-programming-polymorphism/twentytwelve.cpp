// Fig. 20.17: fig20_17.cpp
// Processing Employee derived-class objects individually
// and polymorphically using dynamic binding.
#include <iostream>
#include <iomanip>
#include <vector>
#include "./headers/payroll/Employee.h"
#include "./headers/payroll/SalariedEmployee.h"
#include "./headers/payroll/CommissionEmployee.h"
#include "./headers/payroll/BasePlusCommissionEmployee.h"
#include "./headers/payroll/Date.h"

using namespace std;

void virtualViaPointer(const Employee *const); // prototype
void virtualViaReference(const Employee &); // prototype

int main() {
  // set floating-point output formatting
  cout << fixed << setprecision(2);
  // create derived-class objects
  Date e1( 12, 27, 2000 );
  Date e2( 12, 27, 2001 );
  Date e3( 12, 27, 1997 );
  SalariedEmployee salariedEmployee("John", "Smith", "111-11-1111", 800, &e1);
  CommissionEmployee
      commissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06, &e2);
  BasePlusCommissionEmployee
      basePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300, &e3);

  cout
      << "Employees processed individually using static binding:\n\n"; // output each Employee’s information and earnings using static binding
  salariedEmployee.print();
  cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
  commissionEmployee.print();
  cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
  basePlusCommissionEmployee.print();
  cout << "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";

  // create vector of three base-class pointers
  vector <Employee *> employees(4);
  employees[0] = &salariedEmployee;
  employees[1] = &commissionEmployee;
  employees[2] = &basePlusCommissionEmployee;

  cout
      << "Employees processed individually using static binding:\n\n"; // output each Employee’s information and earnings using static binding
  salariedEmployee.print();
  cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
  commissionEmployee.print();
  cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
  basePlusCommissionEmployee.print();
  cout << "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";
}
// call Employee virtual functions print and earnings off a
// base-class pointer using dynamic binding
void virtualViaPointer(const Employee *const baseClassPtr) {
  baseClassPtr->print();
  cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
} // end function virtualViaPointer
// call Employee virtual functions print and earnings off a
// base-class reference using dynamic binding
void virtualViaReference(const Employee &baseClassRef) {
  baseClassRef.print();
  cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
} // end function virtualViaReference