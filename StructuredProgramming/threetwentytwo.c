#include <stdio.h>

/**
 * (Checking if a Number is Prime) A prime number is any natural number greater
 * than 1 thatis divisible only by 1 and by itself.
 * Write a C program that reads an integer and determines whetherit is a prime number or not
 */

// main - Print number prime
// Return: 0

int main( void )
{
	int pr_Number, n, count, prime;

	prime = 0;
	count = 0;
	pr_Number = 0;

	printf( "Enter the prime number: " );
	scanf( "%d", &pr_Number );

	if ( pr_Number > 1)
	{
		for ( n = 1; n <= pr_Number; n++ )
		{
			if ( pr_Number % n == 0 )
			{
				count += 1;
			}
		}

		if ( count == 2 )
		{
			printf( "%d is a number prime.\n", pr_Number );
		}
		else
		{
			printf( "%d not is a number prime.\n", pr_Number );
		}

	}

	return (0);
}
