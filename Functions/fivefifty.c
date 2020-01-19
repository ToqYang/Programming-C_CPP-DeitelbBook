#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mul(void);
int genRandomNumbers(int up, int low);
int isEqual(int a, int b);
void answers(int equal);

/**
 * main - (Computer-Assisted Instruction)
 * Return: 0 If is success
 */
int main(void)
{
	int result = 0, num = 0, numeq = 0;
	srand(time(0));

	while (num != -1)
	{
		result = mul();

		scanf(" %d", &num);

		numeq = isEqual(result, num);
		answers(numeq);
	}
	return (0);
}

/**
 * mul - Multiply two number of one single digit
 * Return: Result of the number multiplied
 */
int mul(void)
{
	int num1 = 0, num2 = 0;

	num1 = genRandomNumbers(1, 9);
	num2 = genRandomNumbers(1, 9);

	printf("How much is %d times %d?\n", num1, num2);

	return (num1 * num2);
}

/**
 * genRandomNumbers - Generate numbers based in a range
 * @up: (int) Store the max of the range
 * @low: (int) Store the low of the range
 * Return: pseudo random number
 */
int genRandomNumbers(int up, int low)
{
	return (rand() % (up - low + 1));
}

/**
 * isEqual - Compare if a number is equal to other
 * @a: (int) Store first number to compare
 * @b: (int) Store the second number to compare
 * Return: 1 is equal, 0 if not is equal 
 */
int isEqual(int a, int b)
{
	return (a == b ? 1:0);
}

/**
 * answers - Print the answers of the exercise
 * @equal:  (int) Store if is equal
 */
void answers(int equal)
{
	if (equal)
		puts("Very good!");
	else
		puts("No. Please try again.");
}
