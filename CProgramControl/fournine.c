#include <stdio.h>

/*
* (Sum and Average of Integers) Write a program to sum a sequence of integers and calcu-
* late their average. Assume that the first integer read with scanf specifies the number of values to
* be entered. Your program should read only one value each time scanf is executed. A typical input
* sequence might be
*/

/**
 * main - Print the average of the numbers 
 * Return: Integer if is succesful
 */

int main(void)
{
	int number, result, sentinel, count;
 
	number = 0;
	result = 0;
	sentinel = 1;
	count = 0;

	while (sentinel)
	{
		printf("Enter your number: ");
		scanf("%d", &number);

		if (number == -1)
		{
			sentinel = -1;
			break;
		}
		else
		{
			result += number;
			++count;
		}
	}
	printf("The average is: %d\n", (result / count));

	return (0);
}
