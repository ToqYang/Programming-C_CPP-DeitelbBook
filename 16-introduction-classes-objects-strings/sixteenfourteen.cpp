#include "headers/Species.h"


/**
 * main - (Species Class)
 *
 * Return: (int) 0 If is success
 */
int main(void)
{
  // Make two objects
  Species species1("Gorila de Montaña", "2020", 1000, 10);

  species1.DisplayMessage();
  std::cout << std::endl;
  species1.CalculatePopulation(2020);

  return 0;
}
