// CommissionEmployee class member-function definitions.
#include <iostream>
#include <stdexcept>
#include "../../headers/payroll/CommissionEmployee.h" // CommissionEmployee class definition
using namespace std;

// constructor
CommissionEmployee::CommissionEmployee(const string &first,
                                       const string &last,
                                       const string &ssn,
                                       double sales,
                                       double rate,
                                       Date *birthDate) : Employee(first,
                                                                  last,
                                                                  ssn, birthDate) {
  setGrossSales(sales);
  setCommissionRate(rate);
} // end CommissionEmployee constructor
// set gross sales amount
void CommissionEmployee::setGrossSales(double sales) {
  if (sales >= 0.0) grossSales = sales;
  else
    throw invalid_argument("Gross sales must be >= 0.0");
} // end function setGrossSales
// return gross sales amount
double CommissionEmployee::getGrossSales() const {
  return grossSales;
} // end function getGrossSales
// set commission rate
void CommissionEmployee::setCommissionRate(double rate) {
  if (rate > 0.0 && rate < 1.0) commissionRate = rate;
  else
    throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
} // end function setCommissionRate
// return commission rate
double CommissionEmployee::getCommissionRate() const {
  return commissionRate;
} // end function getCommissionRate
// calculate earnings; override pure virtual function earnings in Employee
double CommissionEmployee::earnings() const {
  // Simulate Date.today
  Date today( 12, 27, 2001);
  /*double preEarnimg = strcmp(today.print(), Employee::birthDate.print()) == 0 ? 100 : 0;
  preEarnimg += getCommissionRate() * getGrossSales();

  return preEarnimg;
   */
  return getCommissionRate() * getGrossSales();
} // end function earnings
// print CommissionEmployee's information
void CommissionEmployee::print() const {
  cout << "commission employee: ";
  Employee::print(); // code reuse
  cout << "\ngross sales: " << getGrossSales()
       << "; commission rate: " << getCommissionRate();
} // end function print