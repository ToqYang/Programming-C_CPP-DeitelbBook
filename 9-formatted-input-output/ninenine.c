#include <stdio.h>

/**
 * main - (Rounding  Floating-Point  Numbers)
 *        When the format is passed of the range
 *        fill with 0
 *
 * Return: 0 if is success
 */
int main(void)
{
	puts("Number: 100.453627");
	printf("Tenth: %.10lf\n", 100.453627);
	printf("One Hundredth: %.100lf\n", 100.453627);
	printf("One Thousandth: %.1000lf\n", 100.453627);
	printf("Ten Thousandth: %.10000lf\n", 100.453627);

	return (0);
}
