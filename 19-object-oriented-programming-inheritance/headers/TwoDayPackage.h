#ifndef TWODAYPACKAGE_H_
#define TWODAYPACKAGE_H_

#include <iostream>
#include <string>

class TwoDayPackage : public Package {
 public:
  explicit TwoDayPackage(std::string addr,
                         std::string first_name,
                         std::string last_name,
                         std::string city,
                         std::string state,
                         unsigned int zip_s,
                         unsigned int zip_rec,
                         double flat_fee);
  double calculateCosts(void) const;
  void print(void) const;

 private:
  double flat_fee;
};

#endif    //  TWODAYPACKAGE_H_
