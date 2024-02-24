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
  SalariedEmployee salariedEmployee("John", "Smith", "111-11-1111", 800);
  CommissionEmployee
      commissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06);
  BasePlusCommissionEmployee
      basePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300);

  cout
      << "Employees processed individually using static binding:\n\n"; // output each Employee’s information and earnings using static binding
  salariedEmployee.print();
  cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
  commissionEmployee.print();
  cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
  basePlusCommissionEmployee.print();
  cout << "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";

  // create vector of three base-class pointers
  vector <Employee *> employees(3);
  employees[0] = &salariedEmployee;
  employees[1] = &commissionEmployee;
  employees[2] = &basePlusCommissionEmployee;

  // initialize vector with pointers to Employees
  cout << "Employees processed polymorphically via dynamic binding:\n\n";
  // call virtualViaPointer to print each Employee's information
  // and earnings using dynamic binding
  cout << "Virtual function calls made off base-class pointers:\n\n";
  for (const Employee *employeePtr : employees)
    virtualViaPointer(employeePtr);
  // call virtualViaReference to print each Employee's information
  // and earnings using dynamic binding
  cout << "Virtual function calls made off base-class references:\n\n";

  for (const Employee *employeePtr : employees)
    virtualViaReference(*employeePtr); // note dereferencing

  Date d1( 12, 27, 2010 ); // December 27, 2010
  Date d2; // defaults to January 1, 1900
  
  cout << "d1 is " << d1 << "\nd2 is " << d2;
  cout << "\n\nd1 += 7 is " << ( d1 += 7 );
  
  d2.setDate( 2, 28, 2008 );
  cout<<"\n\n d2is"<<d2;
  cout << "\n++d2 is " << ++d2 << " (leap year allows 29th)";
  
  Date d3( 7, 13, 2010 );
  cout << "\n\nTesting the prefix increment operator:\n" << " d3is" << d3 <<endl;
  cout << "++d3 is " << ++d3 << endl;
  cout<<" d3is"<<d3;

  cout << "\n\nTesting the postfix increment operator:\n" << " d3 is " << d3 << endl;
  cout << "d3++ is " << d3++ << endl;
  cout << " d3 is " << d3 << endl;
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