// BasePlusCommissionEmployee member-function definitions.
#include <iostream>
#include <stdexcept>
#include "../../headers/payroll/BasePlusCommissionEmployee.h"
using namespace std;
// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first,
    const string &last,
    const string &ssn,
    double sales,
    double rate,
    double salary,
    Date *birthDate)
    : CommissionEmployee(first, last, ssn, sales, rate, birthDate) {
  setBaseSalary(salary); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary) {
  if (salary >= 0.0) baseSalary = salary;
  else
    throw invalid_argument("Salary must be >= 0.0");
} // end function setBaseSalary
// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const {
  return baseSalary;
} // end function getBaseSalary
// calculate earnings;
// override virtual function earnings in CommissionEmployee \
//
//
double BasePlusCommissionEmployee::earnings() const {
  Date today(12, 27, 2001);
  /*double preEarnimg =
      strcmp(today.print(), Employee::birthDate.print()) == 0 ? 100 : 0;
  preEarnimg += getBaseSalary() + CommissionEmployee::earnings();

  return preEarnimg;*/
  return getBaseSalary() + CommissionEmployee::earnings();
} // end function earnings

// print BasePlusCommissionEmployee's information
void BasePlusCommissionEmployee::print() const {
  cout << "base-salaried ";
  CommissionEmployee::print(); // code reuse cout << "; base salary: " << getBaseSalary();
} // end function print