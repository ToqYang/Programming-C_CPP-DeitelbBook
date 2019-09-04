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

	puts( "Enter the sides of posible triangle.\n" );

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

		if ( ( a + b ) > c )
		{
			puts( "The side c is correct" );

			if ( ( a + c ) > b )
			{
				puts( "The side b is correct" );
			}
			else
			{
				puts( "The side b not is correct" );
			}

			if( ( b + c ) > a )
			{
				puts( "The side a is correct" );
			}
			else
			{
				puts( "The side a not is correct" );
			}
		}
		else
		{
			puts( "The side c not is correct" );
		}
	}

	return (0);
}
