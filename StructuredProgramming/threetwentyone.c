#include <stdio.h>

/**
 * (Preincrementing vs Postincrementing) Write a program that demonstrates the difference 
 * between preincrementing and postincrementing using the increment operator ++.
 */

// Detect diferences between pre and pos increment.

int main( void )
{
	int pre, pos, x;
	pre = 0;
	pos = 0;
	x = 0;

	while ( pre <= 2 )
	{
		x = ++pre;
		printf( "Preincrement: %d\n", x );
	}

	printf( "\n" );

	while ( pos <= 2 )
	{
		x = pos++;
		printf( "Postincrement: %d\n", x );
	}

	return (0);

}
