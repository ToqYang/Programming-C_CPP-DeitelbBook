#include <stdio.h>

void display_bits(unsigned int n);
void unpackage_characters(unsigned int n);


/**
 * main - (Unpacking Characters from an Integer)
 *
 * Return: 0 if is Success
 */
int main(void)
{
	unsigned int m = 1633837924;

	unpackage_characters(m);

	return (0);
}


/**
 * unpackage_characters - Unpack unsigned integer
 * n: (unsigned int) Number to unpack
 *
 * Return: One Character
 */
void unpackage_characters(unsigned int n)
{
	unsigned int mask1 = 4278190080, mask2 = 16711680;
	unsigned int mask3 = 65280, mask4 = 256;
	char a = 'a', b = 'b', c = 'c', d = 'd';

	puts("Inside");

	d |= mask1;
	display_bits(n);
	n >>= 8;

	c = n | mask2;
	display_bits(n);
	n >>= 8;

	b = n | mask3;
	display_bits(n);
	n >>= 8;

	a = n | mask4;
	display_bits(n);
	puts("------------------\n");

	printf("%c\n", a);
	printf("%c\n", b);
	printf("%c\n", c);
	printf("%c\n", d);
}


/**
 * display_bits - Show the bits based in a mask
 * @n: (unsigned int) Char showed in integer version
 *
 */
void display_bits(unsigned int n)
{
	unsigned int mask = 1 << 31;

	printf("\nLetter: %c\nNumber: %u\n", n, n);

	for (int i = 1; i <= 32; ++i) {
		putchar(n & mask ? '1' : '0');
		n <<= 1;

		if (i % 8 == 0)
			putchar(32);
	}
	puts("");
}
