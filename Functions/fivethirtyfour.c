#include <stdio.h>

int power(int base, int exponent);

/**
 * main - 
 * Return: 0 if is success
 */
int main(void)
{
	int res = 0;

	res = power(3, 4);

	printf("The power is: %d\n", res);

	return (0);
}

int power(int base, int exponent)
{
	if (exponent <= 0)
		return (1);
	return base * power(base, exponent - 1);
}
