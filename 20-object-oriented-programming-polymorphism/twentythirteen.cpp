#include "headers/package/Package.h"
#include "headers/package/TwoDayPackage.h"
#include "headers/package/OvernightPackage.h"
#include <vector>
#include <iostream>
#include <iomanip>

int main(void) {
  Package
      pkg1("Calle 100 #34 - 76",
           "John",
           "Doe 1",
           "Bogotá",
           "Cundinamarca",
           110784,
           110767,
           1.5,
           2.0);

  TwoDayPackage
      pkg2("Calle 100 #34 - 76",
           "John",
           "Doe 2",
           "Bogotá",
           "Cundinamarca",
           110784,
           110767,
           20.5,
           8.2,
           2.0);

  OvernightPackage
      pkg3("Calle 100 #34 - 76",
           "John",
           "Doe 3",
           "Bogotá",
           "Cundinamarca",
           110784,
           110767,
           1.5,
           8.5,
           2.0);

  pkg1.print();
  std::vector <Package *> packages(3);
  packages[0] = &pkg1;
  packages[1] = &pkg2;
  packages[2] = &pkg3;


  for (int i = 0; i < packages.size(); i++) {
    std::cout << "\n\nPackage " << i << " : \n";
    packages[i]->print();
  }

  return 0;
}