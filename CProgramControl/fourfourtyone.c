#include <stdio.h>

/**
 * (Tax Plan Alternatives; The “FairTax”) There are many proposals to make taxation fairer.
 * Check out the FairTax initiative in the United States at www.fairtax.org
 */

/**
 * main - Print the value of the products with taxes
 * Return: 0 if is success
 */

int main(void)
{
	int value = 0, total = 0;

	do {
		puts("\nEnter the value of the product.");
		scanf("%d", &value);

		total = ( ( value * 27 ) / 100 );
		
		printf("\nTotal product is: %d", total);
		total = 0;

	} while (value != -1);

	return (0);
}
