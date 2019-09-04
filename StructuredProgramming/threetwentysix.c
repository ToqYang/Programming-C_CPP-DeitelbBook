#include <stdio.h>

/**
 * (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23,
 * find the twolargest values of the 10 numbers. [Note: You may input each number only once.]
 */

/**
 * main - Print the two numbers more largest
 * Return: 0
 */

int main( void )
{
        int counter, number, largest, largest_Two;

        counter = 0;
        number = 0;
        largest = 0;
	largest_Two = 0;

        while ( counter < 11 )
        {
                printf( "Number (%d): ", counter );
                scanf( "%d", &number );

                if ( number >= largest )
                {
                        largest = number;

			if ( counter <= 9 && largest > largest_Two )
			{
				largest_Two = largest;
				printf( "%d-%d", counter, largest_Two );
			}

                }

                counter++;
        }

        printf( "The first number largest is: %d\nThe second number largest is: %d\n", largest, largest_Two );

        return (0);
}
