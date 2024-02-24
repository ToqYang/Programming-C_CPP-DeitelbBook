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
                            double additional_fee,
                            double cost_per_ounce,
                            double weight);
  virtual double calculateCosts(void) const override;
  virtual void print(void) const override;

 private:
  double additional_fee;
};

#endif    //  OVERNIGHTPACKAGE_H_
