#include "../../headers/package/Package.h"

Package::Package(std::string addr,
                 std::string first_name,
                 std::string last_name,
                 std::string city,
                 std::string state,
                 unsigned int zip_s,
                 unsigned int zip_rec,
                 double cost_per_ounce,
                 double weight) {
  this->address = addr;
  this->name = first_name + " " + last_name;
  this->city = city;
  this->state = state;
  this->zip_recipient = zip_rec;
  this->zip_sender = zip_s;
  this->setCostPerOunce(cost_per_ounce);
  this->setWeight(weight);
}

void Package::setWeight(double w) {
  if (w >= 0) {
    this->weight = w;
    return;
  }
  throw std::invalid_argument("Only positive numbers Weight.");
}

double Package::getWeight() const {
  return weight;
}

void Package::setCostPerOunce(double cost) {
  if (cost >= 0) {
    this->cost_per_ounce = cost;
    return;
  }
  throw std::invalid_argument("Only positive numbers to Costs Per Ounce.");
}

double Package::getCostPerOunce() const {
  return this->cost_per_ounce;
}

double Package::calculateCosts() const {
  return this->cost_per_ounce * this->weight;
}

void Package::print(void) const  {
  std::cout << "\nName: " << this->name << "\nAddress: " << this->address
            << "\nCity-State(" << this->city << " - " << this->state << ")"
            << "\nRecipient: " << this->zip_recipient << "\nSender: "
            << this->zip_sender << std::endl;
  std::cout << "\n\nWeight: " << this->getWeight() << "\nCost Per Ounce: "
            << this->getCostPerOunce() << "\nCalculate cost: "
            << this->calculateCosts() << std::endl;
}
