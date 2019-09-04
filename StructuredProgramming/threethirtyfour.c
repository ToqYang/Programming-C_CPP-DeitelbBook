#include <stdio.h>

/**
 * (Floyd's Triangle) Floyd’s Triangle is a right-angled triangular array of natural numbers.
 * It is defined by filling rows with consecutive integers.
 * Thus, row 1 will have the number 1, row 2 willhave the numbers 2 and 3, and so on. 
 * Write a program that draws a 10-line Floyd’s triangle.
 * An outer loop can control the number of lines to be printed and an inner loop can ensure that each rowcontains the correct number of integers.
 */

/**
 * main -Print floyd triangle
 * Return: 0
 */

int main( void )
{
	int column, rows, counter_Nums, counter;

	column = 1;
	rows = 0;
	counter_Nums = 1;
	counter = 1;

	printf( "Enter the numbers of rows: " );
	scanf( "%d", &rows );

	while ( counter < rows )
	{
		column = 0;

		while ( column < counter )
		{
			printf( "%d ", counter_Nums );
			counter_Nums++;
			column++;
		}

		counter++;
		printf( "\n" );
	}
	return (0);
}
