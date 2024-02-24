#ifndef OVERNIGHTPACKAGE_H_
#define OVERNIGHTPACKAGE_H_

#include <iostream>
#include <string>

class OvernightPackage : public Package {
 public:
  explicit OvernightPackage(std::string addr,
                            std::string first_name,
                            std::string last_name,
                            std::string city,
                            std::string state,
                            unsigned int zip_s,
                            unsigned int zip_rec,
                            double additional_fee);
  double calculateCosts(void) const;
  void print(void) const;

 private:
  double additional_fee;
};

#endif    //  OVERNIGHTPACKAGE_H_
