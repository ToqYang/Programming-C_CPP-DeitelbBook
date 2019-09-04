#include <stdio.h>

int main( void )
{
	/* a) Write a program that reads a nonnegative integer and computes and prints its factorial. */

	/**

	int factorial, result;

	factorial = 0;
	result = 1;

	printf( "Enter the factorial!: " );
	scanf( "%d", &factorial );

	while ( factorial > 0 )
	{
		result *= factorial;
		--factorial;
	}

	printf( "The factorial is: %d!\n", result );

	*/

	/* b) Write a program that estimates the value of the mathematical constant e by using the formula: */

	/**

	int factorial, count;

	factorial = 0;
	count = 1;

	printf( "Enter the factorial!: " );
	scanf( "%d", &factorial );

	printf( "e: 1 + " );

	while ( count <= factorial)
	{
		printf( "1/%d!", count );

		if( count != factorial )
			printf( " + " );

		++count;
	}

	*/

	/* c) Write a program that computes the value of exby using the formula */

		int factorial, count;

	factorial = 0;
	count = 1;

	printf( "Enter the factorial!: " );
	scanf( "%d", &factorial );

	printf( "e: 1 + " );

	while ( count <= factorial)
	{
		printf( "x^%d/%d!", count, count );

		if( count != factorial )
			printf( " + " );

		++count;
	}



	return (0);
}
