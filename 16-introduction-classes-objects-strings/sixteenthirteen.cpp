#include "headers/Invoice.h"


/**
 * main - (Invoice Class) Of a Computer
 *
 * Return: (int) if is success
 */
int main(void)
{
  Invoice firstProduct("Lz0", "This is a laptop", 5, 1000);
  Invoice secondProduct("i5", "This is a proccesor", 5, 100);

  // Show the items
  firstProduct.DisplayMessage();
  secondProduct.DisplayMessage();

  return 0;
}
