#include "headers/BMI.h"


/**
 * main - (Target-Heart-Rate Calculator)
 *
 * Return: (int) if is success
 */
int main(void)
{
  HealthProfile me("Santiago", "Yanguas", 30, 4, 2001);

  // Look my heart rate
  me.set_BMI(1.73, 50);
  me.DisplayHealthProfile();

  return 0;
}
