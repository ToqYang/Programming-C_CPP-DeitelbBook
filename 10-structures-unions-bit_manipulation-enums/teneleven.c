#include <stdio.h>

void power_func(unsigned int base, unsigned int exp);

/**
 * main - (Left Shifting Integers)
 *        Make power function
 *
 * Return: 0 if is Success
 */
int main(void)
{
	unsigned int b = 2, e = 10;

	power_func(b, e);

	return (0);
}


/**
 * power_func - Power function with bitwise
 * @base: (unsigned int) Base of the number
 * @exp: (unsigned int) Exponent of the number
 *
 */
void power_func(unsigned int base, unsigned int exp)
{
	unsigned int res = base << (exp - 1);

	printf("Power %u^%u = %u\n", base, exp, res);
}
