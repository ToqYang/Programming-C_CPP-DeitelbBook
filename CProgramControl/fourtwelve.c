#include <stdio.h>

/*
 * (Prime Numbers) Write a program to calculate and print a list of all prime numbers * from 1 to 100.
 */

/*
 * main - Print primes of 1 to 100
 * Return:0 if is success
 */

int main(void)
{
	int count, isprime, multiples;

	count = 2;
	isprime = 1;
	multiples = 2;

	/* Lopp to numbers 1 to 100 */
	for ( ; count <= 100; count++ )
	{
		/* Loop for know the multiples */
		isprime = 1;
		multiples = 2;
		while ( multiples <= 100 )
		{
			/* Conditional for know if is multiple and sum if is prime number */
			if (count % multiples == 0 )
				isprime++;

			multiples++;
		}

		if ( isprime < 3 )
		{
			printf("%d ", count);
		}
			
	}
	putchar(10);

	return (0);
}
