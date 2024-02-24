// SalariedEmployee class derived
#ifndef SALARIED_H
#define SALARIED_H
#include <string> // C++ standard
#include "Employee.h" // Employee

class SalariedEmployee : public Employee {
 public:
  SalariedEmployee(const std::string &, const std::string &,
                   const std::string &, double = 0.0, Date *birthDate = nullptr);
  virtual ~SalariedEmployee() {} // virtual destructor

  void setWeeklySalary(double); // set weekly salary
  double getWeeklySalary() const; // return weekly salary

  // keyword virtual signals intent to override
  virtual double earnings() const override; // calculate earnings
  virtual void print() const override; // print object
 private:
  double weeklySalary; // salary per week
}; // end class SalariedEmployee

#endif // SALARIED_H