#include <stdio.h>

/* 
 * (Calculating the Sum of Multiples) Write a program to calculate and print the sum of all
 * multiples of 7 from 1 to 100.
 */

/* 
 * main - Multiples of 7 from 1-100
 * Return: 0 if is success
 */

int main(void)
{
	int count;

	count = 1;

	for ( ; count <= 100; count++ )
	{
		if ( count % 7 == 0 )
		{
			printf("%d ", count);
		}
	}

	putchar(10);

	return (0);
}

