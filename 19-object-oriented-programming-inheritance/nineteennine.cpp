#include "headers/Package.h"
#include "headers/TwoDayPackage.h"
#include "headers/OvernightPackage.h"

int main() {
  Package
      pkg1("Calle 100 #34 - 76",
           "John",
           "Doe 1",
           "Bogotá",
           "Cundinamarca",
           110784,
           110767);

  TwoDayPackage
      pkg2("Calle 100 #34 - 76",
           "John",
           "Doe 2",
           "Bogotá",
           "Cundinamarca",
           110784,
           110767,
           20.5);

  OvernightPackage
      pkg3("Calle 100 #34 - 76",
           "John",
           "Doe 3",
           "Bogotá",
           "Cundinamarca",
           110784,
           110767,
           1.5);

  std::cout << "STANDARD:\n";
  pkg1.setWeight(20.5);
  pkg1.setCostPerOunce(1.5);
  pkg1.print();
  std::cout << "====================\n\n\n";

  std::cout << "TWO DAYS PACKAGE:\n";
  pkg2.setWeight(20.5);
  pkg2.setCostPerOunce(1.5);
  pkg2.print();
  std::cout << "====================\n\n\n";

  std::cout << "OVERNIGHT PACKAGE:\n";
  pkg3.setWeight(20.5);
  pkg3.setCostPerOunce(1.5);
  pkg3.print();
  std::cout << "====================\n\n\n";

  return 0;
}
