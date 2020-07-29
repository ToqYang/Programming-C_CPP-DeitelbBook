#include <stdio.h>

void display_bits(unsigned int n);
unsigned int package_characters(char a, char b, char c, char d);


/**
 * main - (Packing Characters into an Integer)
 *
 * Return: 0 if is Success
 */
int main(void)
{
	char e = 'a', f = 'b', g = 'c', h = 'd';
	unsigned int m = 0;

	puts("Initial values");
	display_bits(e);
	display_bits(f);
	display_bits(g);
	display_bits(h);
	puts("--------------\n\n");

	m = package_characters(e, f, g, h);

	display_bits(m);

	return (0);
}


/**
 * package_characters - Wrap char in a unsigned int
 * @a: (char) Character
 * @b: (char) Character
 * @c: (char) Character
 * @d: (char) Character
 *
 * Return: Number Package
 */
unsigned int package_characters(char a, char b, char c, char d)
{
	unsigned int pack = a;

	puts("Inside");
	display_bits(pack);

	pack <<= 8;
	pack |= b;
	display_bits(pack);

	pack <<= 8;
	pack |= c;
	display_bits(pack);

	pack <<= 8;
	pack |= d;
	display_bits(pack);
	puts("------------------\n");

	return (pack);
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
