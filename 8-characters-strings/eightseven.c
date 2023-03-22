#include <stdio.h>
#include <stdlib.h>


/**
 * main - (Converting Strings to Integers for Calculations)
 *        Read 6 string and take average
 *
 * Return: 0 if is success
 */
int main(void)
{
	int n = 0, avg = 0;
	char num[100];
	char input = 'i';

	for (int i = 0, j = 0; i < 6; ++i) {
		while ((j < 100) && ((input = getchar()) != '\n')) {
			num[j] = input;
			++j;
		}
		num[j] = '\0';
		j = 0;

		n += atoi(num);
	}

	avg = n / 6;
	printf("The average is: %d\n", avg);

	return (0);
}
