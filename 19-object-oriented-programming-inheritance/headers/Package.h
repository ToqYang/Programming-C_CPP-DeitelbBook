#ifndef HEADERS_PACKAGE_H_
#define HEADERS_PACKAGE_H_

#include <iostream>
#include <string>

class Package {
 public:
  explicit Package(std::string addr,
                   std::string first_name,
                   std::string last_name,
                   std::string city,
                   std::string state,
                   unsigned int zip_s,
                   unsigned int zip_rec);
  double calculateCosts(void) const;

  void setWeight(double);
  double getWeight(void) const;

  void setCostPerOunce(double);
  double getCostPerOunce(void) const;

  void print(void) const;

 protected:
  std::string address, name, city, state;
  unsigned int zip_sender, zip_recipient;
  double weight;
  double cost_per_ounce;
};

#endif    //  HEADERS_PACKAGE_H_
