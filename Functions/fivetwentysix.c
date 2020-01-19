#include <stdio.h>

void isPerfect(int a);

/**
 * main - Entry point of the program
 * (Perfect Numbers) 
 * Return: 0 if is success
 */
int main(void)
{
	int num = 8128, num2 = 23;

	isPerfect(num);
	isPerfect(num2);

	return (0);
}

/**
 * isPerfect - Find if a number is perfect
 * @a: Number to be check
 */
void isPerfect(int a)
{
	int count = 1, res = 0;

	/* Find the divisors an the sum */
	while (count < a)
	{
		if (a % count == 0)
			res += count;

		++count;
	}

	/* Verify if the sum of the divisors
	 * is equal to initial num
	 */
	if (res == a)
		printf("The %d is a number perfect\n", a);
	else
		printf("The %d not is a perfect number\n", a);
	
}
