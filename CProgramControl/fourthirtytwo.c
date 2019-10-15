#include <stdio.h> 

/**
 *(Modified Diamond-Printing Program) Modify the program you wrote in Exercise 4.31 to
 * read an odd number in the range 1 to 19 to specify the number of rows in the diamond. 
 * Your pogram should then display a diamond of the appropriate size
 */

/**
 * main - Print diamond about user
 * Return: 0 if is success
 */

int main(void)
{
	int size_Diam = 5, rows = 1;
	int blank_spc = size_Diam;

	/* Ask to the sizz */
	puts("Enter the size of the diamond 1-19");
	scanf("%d", &size_Diam);

	/* Verify values between 1-19 */
	if (size_Diam < 1 || size_Diam > 19)
		return (1);

	/* Assign the size of the diamond at the blank space */
	blank_spc = size_Diam;

	for (int columns = 1; columns <= size_Diam; columns++)
	{
		for (int count_col = blank_spc; count_col > columns; count_col--)
		{
			putchar(32);
		}

		for (int count = 0; count < rows; count++)
		{
		 	putchar(42);
		}
		rows += 2;
		putchar(10);
	}

	rows -= 2;

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
