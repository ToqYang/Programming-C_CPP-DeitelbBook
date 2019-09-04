#include <stdio.h>

/**
 * (Sides of a Triangle)
 * main - Print if the sides are corrects
 * Return: 0 If is sucessful
 */

int main( void )
{
	int a, b, c, z;

	a = 0;
	b = 0;
	c = 0;

	puts( "Enter the sides of posible right triangle. In c the side longer" );

	while ( z != 0 )
	{
		puts( "Enter the a: " );
		scanf( "%d", &z );

		if ( z == 0 )
			break;

		a = z;

		puts( "Enter the b: " );
		scanf( "%d", &z );

		if ( z == 0 )
			break;

		b = z;

		puts( "Enter the c: " );
		scanf( "%d", &z );

		if ( z == 0 )
			break;

		c = z;

		// Theorem of Pitagoras: The sum of the legs ^2 is equal to hipotenuse ^2.
		if ( ( ( a * a ) + ( b * b ) ) == ( c * c ) )
		{
			puts( "It will can be a right triangle." );
		}
		else
		{
			puts( "It will can't be a right triangle." );
		}
	}

	return (0);
}
