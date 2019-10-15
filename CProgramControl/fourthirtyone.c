#include <stdio.h> 

/**
 * (Diamond-Printing Program) Write a program that prints the following diamond shape.
 * You may use printf statements that print either a single asterisk (*) or a single blank. Maximize
 * your use of iteration (with nested for statements) and minimize the number of printf statements.
 */

/**
 * main - Print diamond with asterisk
 * Return: 0 if is success
 */

int main(void)
{
	int size_Diam = 5, rows = 1;
	int blank_spc = size_Diam;

	/* Loop to the columns */
	for (int columns = 1; columns <= size_Diam; columns++)
	{
		/* Loop to count and print spaces */
		for (int count_col = blank_spc; count_col > columns; count_col--)
		{
			putchar(32);
		}

		/* Loop to the asterisk  */
		for (int count = 0; count < rows; count++)
		{
		 	putchar(42);
		}

		/* Sum to know how many asterisk I going to print */
		rows += 2;
		putchar(10);
	}

	/* This beacause when i break the loop before sum +2 */
	rows -= 2;

	/* Print all in reverse */
	for (int columns = 1; columns <= size_Diam; columns++)
	{
		for (int count_col = 0; count_col < columns; count_col++)
		{
			putchar(32);
		}

		rows -= 2;

		for (int count = 0; count < rows; count++)
		{
			putchar(42);
		}
		putchar(10);
	}
	return (0);
}
