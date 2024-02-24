#include "../../headers/package/Package.h"
#include "../../headers/package/OvernightPackage.h"

OvernightPackage::OvernightPackage(std::string addr,
                                   std::string first_name,
                                   std::string last_name,
                                   std::string city,
                                   std::string state,
                                   unsigned int zip_s,
                                   unsigned int zip_rec,
                                   double additional_fee,
                                   double cost_per_ounce,
                                   double weight) :
    Package(addr, first_name, last_name, city,
            state, zip_s, zip_rec, cost_per_ounce, weight) {
  this->additional_fee = additional_fee;
}

double OvernightPackage::calculateCosts() const {
  return (Package::calculateCosts() + (this->additional_fee * weight));
}

void OvernightPackage::print(void) const {
  std::cout << "\nName: " << this->name << "\nAddress: " << this->address
            << "\nCity-State(" << this->city << " - " << this->state << ")"
            << "\nRecipient: " << this->zip_recipient << "\nSender: "
            << this->zip_sender << std::endl;
  std::cout << "\n\nWeight: " << this->getWeight() << "\nCost Per Ounce: "
            << this->getCostPerOunce() << "\nadditional fee: "
            << this->additional_fee
            << "\nCalculate cost: " << this->calculateCosts()
            << std::endl;
}
