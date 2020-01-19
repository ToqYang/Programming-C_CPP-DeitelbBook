#include <stdio.h>
#include <math.h>

int Is_Correct(double side1, double side2, double side3);

/**
 * (Sides of a Right Triangle)
 * main - Ask to the sides and verify that it will be corrects
 * Return: 0 if is success
 */
int main(void)
{
	double side_One = 0, side_Two = 0, side_Three = 0;
	int verify = 0;

	puts("Enter los values in x^2\nEnter the side A.");
	scanf("%lf", &side_One);
	puts("Enter the side B.");
	scanf("%lf", &side_Two);
	puts("Enter the side C");
	scanf("%lf", &side_Three);

	verify = Is_Correct(side_One, side_Two, side_Three);

	printf("(True: 1 False:0) %d\n", verify);

	return (0);
}

/**
 * Is_Correct - Verify if the sides of a triangle is correct
 * Return: 0 if is correct and 1 if it isn't corrects
 */
int Is_Correct(double side1, double side2, double side3)
{
	/* Theorem of pytaghoras a^2 + b^2 = c^2 */
	if ( (pow(side1, 2) + pow(side2, 2)) == pow(side3, 2) )
		return (1);
	return (0);
}
