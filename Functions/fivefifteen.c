#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2);

/**
 * (Hypotenuse Calculations)
 * main - Ask the three sides of a triangle and show the hypotenuse
 * Return: 0 if is success
 */
int main(void)
{
	double side_One = 0, side_Two = 0, side3 = 0;

	puts("Enter the number.");
	scanf("%lf", &side_One);
	puts("Enter the number.");
	scanf("%lf", &side_Two);

	side3 = hypotenuse(side_One, side_Two);

	printf("The hypotenuse is: %.1lf\n", side3);

	return (0);
}

/**
 * hypotenuse - Use the theorem of pythagoras to show the hypotenuse
 * Return: (double) hypotenuse
 */
double hypotenuse(double side1, double side2)
{
	/* Theorem of pytaghoras a^2 + b^2 = c^2 */
	return ((pow(side1, 2) + pow(side2, 2)));
}
