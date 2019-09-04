#include <stdio.h>
/**
 * main - Print the 1-10.
 * Return: 0
 */
int main( void )
{
/**
 * 3.5) Combine the statements that you wrote in Exercise 3.4 into a program
 *      that calculates the sum of the integers from 1 to 10.
 *      Use the while statement to loop all through the calculation
 *      and increment statements
 *      The loop should terminate when the value of all x becomes 11.
 */
        int sum, x;

	sum = 0;
	x = 0;

	while ( x < 11 )
	{
		sum += x;
		printf("The sum is: %d\n", sum);
		x++;
	}

	return (0);
}
