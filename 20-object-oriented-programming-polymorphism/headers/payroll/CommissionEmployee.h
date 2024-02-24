// CommissionEmployee class derived from Employee.
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ standard string class
#include "Employee.h" // Employee class definition

class CommissionEmployee : public Employee {
 public:
  CommissionEmployee(const std::string &, const std::string &,
                     const std::string &, double = 0.0, double = 0.0, Date *birthDate = nullptr);
  virtual ~CommissionEmployee() {} // virtual destructor 15
  void setCommissionRate(double); // set commission rate
  double getCommissionRate() const; // return commission rate

  void setGrossSales(double); // set gross sales amount
  double getGrossSales() const; // return gross sales amount

  // keyword virtual signals intent to override
  virtual double earnings() const override; // calculate earnings
  virtual void print() const override; // print object
 private:
  double grossSales; // gross weekly sales
  double commissionRate; // commission percentage
}; // end class CommissionEmployee

#endif // COMMISSION_H