#include <stdio.h>


void display_bits(unsigned int number);

/**
 * main - (Right Shifting Integers)
 *        4 bits
 *
 * Return: 0 if is Success
 */
int main(void)
{
	unsigned int n = 1024;
	display_bits(n);
	n >>= 4;
	display_bits(n);
	printf("\nNumber: %u\n", n);

	return (0);
}


/**
 * display_bits - Show the bit to bit the number
 * @number: (unsigned int) Contain the value to comparate
 *
 */
void display_bits(unsigned int number)
{
	unsigned int mask = 1 << 31;

	printf("\n%10u = ", number);

	for (unsigned int i = 1; i <= 32; ++i) {
		putchar(number & mask ? '1' : '0');
		number <<= 1;

		if (i % 8 == 0)
			putchar(32);
	}
	puts("");
}
