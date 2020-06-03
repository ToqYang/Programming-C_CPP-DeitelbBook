#include <stdio.h>
// a) Define symbolic constant and the value is 10 
#define SIZE 10

int main(void)
{
  // b) Define array with Size and default value 0
  double myarr[SIZE] = {0};

  // c) Refer to element four
  printf("%lf\n", myarr[4]);

  // d) Assign 1.667 at the nine element
  myarr[9] = 1.667;

  // d) Assign 3.333 at the seven element
  myarr[7] = 3.333;

  printf("myarr[6]= %.2lf\nmyarr[9]= %.2lf\n",
	 myarr[6], myarr[9]);

  // Show all the array
  for (int x = 0; x < SIZE; x++)
    printf("myarr[%d] = %.2lf\n", x, myarr[x]);
  
  return (0);
}
