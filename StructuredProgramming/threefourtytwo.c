#include <stdio.h>

/**
 * What’s wrong with the following statement?
 * printf( "%d", --( x * y ) );
 * main - Print of manner correct
 * Return: 0 If is succesful
 */

int main( void )
{
	int x, y, z;

	x = 5;
	y = 10;
	z = x * y;
	--z;

	printf( "%d", z);

	return (0);
}
