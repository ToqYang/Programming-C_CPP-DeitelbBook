#include <stdio.h>
#include <math.h>

/**
 * main - Printing the Decimal Equivalent of a Binary Number
 * @base: Const base
 * @num_Bynary: Store the number of bynary
 * @i: Counter numbers binary
 * @j: Counter for power
 * @power: Store of power
 * @result: Store the result of binary
 * Return: 0
 */

int main(void)
{
	const base = 2;

	int num_Binary, i, j, power, result;

	num_Binary = 0;
	i = 3;
	j = 1;
	result = 0;

	while ( i >= 0 )
	{
		power = 0;

		printf( "Enter the binary: " );
		scanf( "%d", &num_Binary );

		while ( j <= i )
		{
			power += base * base;
			j++;
		}

		if (i == 0)
		{
			power++;
		}

		result += power;

		i--;
	}

	printf( "The number binary is: %d\n", result );

	return (0);
}
