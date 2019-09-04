#include <stdio.h>

/**
 * main - Print
 * Return: 0
 */

int main ( void )
{

/**
 *  Write a C program that uses the statements in Exercise 3.6
 *  to calculate x raised to the y power.
 *  The program should have a while iteration control statement.
 */
	unsigned int x, y, i, power;

	x = 0;
	y = 0;
	i = 1;
	power = 1;

	puts("Enter number base\n");
	scanf("%u", &x);

	power = x;

	puts("\nEnter number raised\n");
	scanf("%u", &y);

	while ( i < y )
	{
		power *= x;
		printf("\nThe power is: %u\n", power);
		i++;
	}

	return (0);
}
