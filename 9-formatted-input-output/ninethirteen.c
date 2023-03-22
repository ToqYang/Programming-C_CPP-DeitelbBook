#include <stdio.h>


/**
 * main -(Reading an Integer with Each scanf Conversion Specifier)
 *
 * Return: 0 if is success
 */
int main(void)
{
	long int x = 437;
	long unsigned int f = 437;

	printf("Format hd: %hd\n", 437);
	printf("Format i: %i\n", 437);
	printf("Format d: %d\n", 437);
	printf("Format ld: %ld\n", x);
	printf("Format lu: %lu\n", f);
	printf("Format u: %u\n", 437);
	printf("Format o: %o\n", 437);
	printf("Format x: %x\n", 437);

	return (0);
}
