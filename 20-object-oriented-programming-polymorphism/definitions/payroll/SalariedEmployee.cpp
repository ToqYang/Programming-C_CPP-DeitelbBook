// SalariedEmployee class member-function definitions.
#include <iostream>
#include <stdexcept>
#include "../../headers/payroll/SalariedEmployee.h" // SalariedEmployee class definition
using namespace std;
// constructor
SalariedEmployee::SalariedEmployee(const string &first,
                                   const string &last,
                                   const string &ssn,
                                   double salary,
                                   Date *birthDate) : Employee(first, last, ssn, birthDate) {
  setWeeklySalary(salary);
} // end SalariedEmployee constructor
// set salary
void SalariedEmployee::setWeeklySalary(double salary) {
  if (salary >= 0.0) weeklySalary = salary;
  else
    throw invalid_argument("Weekly salary must be >= 0.0");
} // end function setWeeklySalary
// return salary
double SalariedEmployee::getWeeklySalary() const {
  return weeklySalary;
} // end function getWeeklySalary
// calculate earnings;
// override pure virtual function earnings in Employee
double SalariedEmployee::earnings() const {
  Date today(12, 27, 2001);
  double preEarning =
      std::strcmp(today.print().c_str(), this->birthDate->print().c_str()) == 0 ? 100 : 0;
  preEarning += getWeeklySalary();
  return preEarning;
} // end function earnings
// print SalariedEmployee's information
void SalariedEmployee::print() const {
  cout << "salaried employee: ";
  Employee::print(); // reuse abstract base-class print function
  cout << "\nweekly salary: " << getWeeklySalary();
}