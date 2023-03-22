#include "headers/Heart.h"


/**
 * main - (Computerization of Health Records)
 *
 * Return: (int) if is success
 */
int main(void)
{
  HeartRates me("Santiago", "Yanguas", 30, 4, 2001);

  // Look my heart rate
  me.DisplayHeartRates();

  return 0;
}
