#include <stdio.h>

/**
 * (Powers of 3 with an Infinite Loop)
 */

int main( void )
{
	int pow, base;

	pow = 1;
	base = 3;

	// Infinitive loop
	while ( base == 3 )
	{
		pow *= base;

		printf( "%d, ", pow );
	}

	return (0);
}
