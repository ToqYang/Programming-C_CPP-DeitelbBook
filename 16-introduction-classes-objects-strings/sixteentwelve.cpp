#include "headers/Inventory.h"


/**
 * main - (Inventory Class)
 *
 * Return: (int) 0 If is success
 */
int main(void)
{
  // create two Inventory objects
  Inventory product1("Computers", 5);
  Inventory product2("Cellphone add", 20);
  Inventory product3("Computers red", 20);

  // Do operations
  product2.Purchase(1);
  product3.Sale(5);

  // Display info
  product2.DisplayMessage();
  product3.DisplayMessage();

  return 0;
}
// end main
