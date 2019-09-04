#include <stdio.h>

/**
 * Counting 9s) Write a program that reads an integer (5 digits or fewer)
 * and determines and prints how many digits in the integer are 9s.
 */

int main( void )
{
	int number, num, c_Nine, c_Zero;

	number = 0;
	num = 0;
	c_Nine = 0;
	// Initializes in 10000 for find the 5 first number
	c_Zero = 10000;

	printf( "Enter the number of 5 digits or fewer: " );
	scanf( "%d", &number );

	// Loop until counter, This arrive to 0.
	while ( c_Zero > 0 )
	{
		// Take number per number.
		// Module to find the last after of two numbers.
		num = ( ( number / c_Zero ) % 10 );

		// Num find is 9 count sum 1 at the counter of nine's.
		if ( num == 9 )
			c_Nine++;

		// Count 0 decrement for it follow find the other numbers
		c_Zero /= 10;
	}

	printf( "The number of 9s is: %d\n", c_Nine );

	return (0);
}
