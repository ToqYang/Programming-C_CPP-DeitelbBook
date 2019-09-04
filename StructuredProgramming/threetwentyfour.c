#include <stdio.h>

/**
 * (Tabular Output) Write a program that uses looping to print the following table of values.
 * Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.
 */

/**
 * main - Print the power number.
 * Return: 0
 */

int main( void )
{
	int base, expo, counter, power;

	base = 0;
	expo = 0;
	counter = 1;
	power = 0;

	printf( "N\tN2\tN3\tN4\n" );

	while ( counter <= 10 )
	{

		base = counter;
		power = base;
		expo = 2;

		printf( "%d\t", counter );

		while ( expo <= 4 )
		{
		       power *= base;

		       printf( "%d\t", power );
		       expo++;
		}

		printf( "\n" );
		counter++;
	}

	printf( "\n" );

	return (0);
}
