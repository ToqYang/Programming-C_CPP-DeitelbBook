#include <stdio.h>
#include <math.h>

double area(double side1, double side2, double side3);

/**
 * (Sides of a Triangle)
 * main - Take the sides of a triangle and print yours area
 * Return: 0 if is success
 */
int main(void)
{
	double side_One = 0, side_Two = 0, side_Three = 0, are = 0;

	puts("Enter los values in x^2\nEnter the side A.");
	scanf("%lf", &side_One);
	puts("Enter the side B.");
	scanf("%lf", &side_Two);
	puts("Enter the side C");
	scanf("%lf", &side_Three);

	are = area(side_One, side_Two, side_Three);

	printf("The area is: %.1lf\n", are);

	return (0);
}

/**
 * area - Verify if the sides are corrects and show the area
 * Return: (double) Area of a triangle, otherwise return -1
 */
double area(double side1, double side2, double side3)
{
	/* Theorem of pytaghoras a^2 + b^2 = c^2 */
	if ( (pow(side1, 2) + pow(side2, 2)) == pow(side3, 2) )
		return ( (side1 * side2) / 2 );
	return (-1);
}
