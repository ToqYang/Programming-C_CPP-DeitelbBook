#include <stdio.h>


/**
 * main - (Using %g with Various Precisions)
 *
 * Return: 0 if is success
 */
int main(void)
{
	puts("Number: 9876.12345");
	printf("Precision: %.1g\n", 9876.12345);
	printf("Precision: %.2g\n", 9876.12345);
	printf("Precision: %.3g\n", 9876.12345);
	printf("Precision: %.4g\n", 9876.12345);
	printf("Precision: %.5g\n", 9876.12345);
	printf("Precision: %.6g\n", 9876.12345);
	printf("Precision: %.7g\n", 9876.12345);
	printf("Precision: %.8g\n", 9876.12345);
	printf("Precision: %.9g\n", 9876.12345);

	return (0);
}
