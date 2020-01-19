#include <stdio.h>

float findMaximum(float a, float b, float c, float d);

/**
 * main - (Find the Maximum)
 * Return: 0 If is success
 */
int main(void)
{
	float num1 = 0.007, num2 = 1.6, num3 =0.009, num4 = 0.00007;	
	num1 = findMaximum(num1, num2, num3, num4);

	printf("The num greatest is: %f\n", num1);

	return (0);
}

/**
 * findMaximum - Compare 4 floats and find the greatest
 * @a: First float
 * @b: Second float
 * @c: Third float
 * @d: Four float
 * Return: Greatest float
 */
float findMaximum(float a, float b, float c, float d)
{
	float precision = 0.00001, greatest = a;

	if ((greatest - b) < precision)
		greatest = b;
	if ((greatest - c) < precision)
		greatest = c;
	if ((greatest - d) < precision)
		greatest = d;

	return (greatest);
}
