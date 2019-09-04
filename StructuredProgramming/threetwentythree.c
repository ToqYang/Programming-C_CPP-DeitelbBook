#include <stdio.h>

/**
 * main - Print the largest number
 * Return: 0
 */

/**
 * (Find the Largest Number) The process of finding the largest number (i.e., the maximumof a group of numbers) 
 * is used frequently in computer applications. For example, a program that
 * determines the winner of a sales contest would input the number of units sold by each salesperson.
 * The salesperson who sells the most units wins the contest.
 * Write a pseudocode program and then aprogram that inputs a series of 10 non-negative numbers and determines and prints the largest ofthe numbers. 
 * [Hint: Your program should use three variables as shown below.]counter:A counter to count to 10 
 * (i.e., to keep track of how many numbers havebeen input and to determine when all 10 numbers have been processed)number:
 * The current number input to the programlargest:The largest number found so far
 */

int main( void )
{
	int counter, number, largest;

	counter = 0;
	number = 0;
	largest = 0;

	while ( counter <= 10 )
	{
		printf( "Number (%d): ", counter );
		scanf( "%d", &number );

		if ( number > largest )
		{
			largest = number;
		}

		counter++;
	}

	printf( "The number largest is: %d\n", largest );

	return (0);
}
