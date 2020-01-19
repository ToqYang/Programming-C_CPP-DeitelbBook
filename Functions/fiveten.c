#include <stdio.h>
#include <math.h>

/**
 * (Rounding Numbers)
 * main - Print ceil numbers
 * Return: 0 if is success
 */

int main(void)
{
	float x = 0, y = 0;

	while (x != -1)
	{ 
		x = 0;
		puts("\nEnter the number.");
		scanf("%f", &x);

		/* Round numbers */
		y = ceil(x + .5);

		printf("Original number: %.2f\n", x);
		printf("Number: %.2f\n", y);
	 }

	return (0);
}
