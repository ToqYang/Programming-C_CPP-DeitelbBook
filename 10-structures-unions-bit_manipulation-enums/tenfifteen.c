#include <stdio.h>
#include <limits.h>

void display_bits(unsigned int n);
void reverse_bits(unsigned int n);


/**
 * main - (Unpacking Characters from an Integer)
 *
 * Return: 0 if is Success
 */
int main(void)
{
	unsigned int m = 6382179;

	display_bits(m);
	reverse_bits(m);

	return (0);
}


/**
 * reverse_bits - Toggle bits of a number
 * n: (unsigned int) bits toggled
 *
 */
void reverse_bits(unsigned int n)
{
	display_bits(~n);
}


/**
 * display_bits - Show the bits based in a mask
 * @n: (unsigned int) Char showed in integer version
 *
 */
void display_bits(unsigned int n)
{
	/* Evaluate if a Machine is of 32-64 bits.
	   -1 to Take the Number and not the Sign */
	unsigned int mask = 1 << (CHAR_BIT * sizeof(unsigned int) - 1);

	printf("\nNumber: %u\n", n);

	for (int i = 1; i <= 32; ++i) {
		putchar(n & mask ? '1' : '0');
		n <<= 1;

		if (i % 8 == 0)
			putchar(32);
	}
	puts("");
}
