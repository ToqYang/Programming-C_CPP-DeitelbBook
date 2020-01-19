#include <stdio.h>
#include <math.h>

int quotient(int a, int b);
int remain(int a, int b);
int count_num(int n);
int sumNum(int n);

/**
 * (Separating Digits)
 * C)
 * main - Separate a number with two spaces
 * Return: 0 If is success
 */
int main(void)
{
	int num = 0, result = 0;

	puts("Enter the number:");
	scanf("%d", &num);

	result = sumNum(num);

	printf("%d\n", result);

	return (0);
}

/**
 * A)
 * quotient - Divide a between b
 * @a: First number
 * @b: Second number
 * Return: (int) quotient of the division
 */
int quotient(int a, int b)
{
	return (a / b);
}

/**
 * B)
 * remain - Remainder of the division of two numbers
 * @a: First number
 * @b: Second number
 * Return: (int) Remainder of the division
 */
int remain(int a, int b)
{
	return (a % b);
}

/**
 * count_num - Remainder of the division of two numbers
 * @n: Num to receive
 * Return: (int) Length of the num
 */
int count_num(int n)
{
	int len = 0;

	while (n >= 1)
	{
		n /= 10;
		++len;
	}
	return (len);
}

/**
 * sumNum - Take a num and sum the value
 * of each position
 * 7631 -> 17
 * @n: (int) Num to reveive
 * Return: Result of the sum numbers
 */
int sumNum(int n)
{
	int num = n, resq = 0, result = 0, div = 10, i = 0, count = 1, sum = 0;

	count = count_num(num);
	div = pow(div, count);
	div /= 10;

	while (i < count)
	{
		resq = quotient(num, div);
		result = remain(resq, 10);
	
		sum += result;

		div /= 10;

		++i;
	}
	return (sum);
}
