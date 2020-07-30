#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Pattern of random numbers
 *
 * a) 3, 6, 9, 12, 15, 18, 21, 24, 27, 30.
 * b) 3, 5, 7, 9, 11, 13, 15, 17, 19.
 * c) 3, 8, 13, 18, 23, 28, 33
 *
 * Return: 0 if is success
 */
int main(void)
{
	srand(time(0));

	/* Generate first pseudorandom num and after
	        apply the patterns */
	printf("Multiples of 3: %d\n", (1 + rand() % 9) * 3);
	printf("Primes:: %d\n", (1 + rand() % 9) * 3 + 2);
	printf("Multiples of 5: %d\n", (1 + rand() % 9) * 3 + 5);

	return (0);
}
