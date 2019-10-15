#include <stdio.h>

/**
 * (Roman-Numeral Equivalent of Decimal Values) Write a program that prints a table of all
 * the Roman-numeral equivalents of the decimal numbers in the range 1 to 100.
 */

/**
 * main - Print the roman numeral
 * Return: 0 if is success
 */

int main(void)
{
	char one = 'I', five = 'V', ten = 'X', fifty = 'L', o_hun = 'C';
	int num = 0;

	for (int i = 1; i <= 100; i++)
	{
		num = i;

		printf("\n%d: ", num);

		while (num > 0)
		{
			if (num == 100)
			{
				num -= 100;
				printf("%c", o_hun);
				continue;
			}

			if (num >= 50)
			{
				num -= 50;
				printf("%c", fifty);
				continue;
			}

			if (num >= 10)
			{
				num -= 10;
				printf("%c", ten);
				continue;
			}

			if (num >= 5)
			{
				num -= 5;
				printf("%c", five);
				continue;
			}

			if (num >= 1)
			{
				num -= 1;
				printf("%c", one);
				continue;
			}
		}
	}
	putchar(10);

	return (0);
}
