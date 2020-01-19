#include <stdio.h>

int isEven(int);

/**
 * (Even or Odd)
 * main - Show if a number is odd, or even
 * Return: 0 if is success
 */
int main(void)
{
	int number = 0;

	number = isEven(number);

	puts("Enter te number.");
	scanf("%d", &number);

	number = isEven(number);
	
	printf("(1 is even - 0 is odd): %d\n", number);

	return (0);
}

/**
 * isEven - Determine if a number is even or odd
 * Return: 1 if is even and 0 if it isn't
 */
int isEven(int num)
{
	if (num % 2 == 0)
		return (1);
	return (0);
}
