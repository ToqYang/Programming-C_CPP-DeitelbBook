#include <stdio.h>


/**
 * main - Print different arguments
 * Return: 0
 */
int main(void)
{
	/* A) Define variables sum and x to be of type int. */
	int sum, x;

	/* B) Set variable x to 1. */
	x = 1;

	/* C) Set variable sum to 0. */
	sum = 0;

	/* D) Add variable x to variable sum and assign the result to variable sum. */
	sum += x;

	/* E) Print "The sum is: " followed by the value of variable sum. */
	printf("The sum is %d\n", sum);

	return (0);
}
