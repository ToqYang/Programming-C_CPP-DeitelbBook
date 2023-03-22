#include <stdio.h>


/**
 * main - (Triangle-Printing Program)
 *
 * Write a program that prints the following patterns separately,
 * one below the other. Use for loops to generate the patterns.
 * All asterisks (*) should be printed by a
 * single printf statement of the form printf("%s", "*");
 * (this causes the asterisks to print side by side).
 *  [Hint: The last two patterns require that
 * each line begin with an appropriate number of blanks.]
 *
 * Return: 0 if is success
 */
int main(void)
{
        /* Triangle rectangle */
        /*
	for (unsigned int columns = 1; columns <= 10; columns++)
	{
 		for (unsigned int rows = 1; rows <= columns; rows++)
		{
			putchar(42);
		}
		putchar(10);
	}
	putchar(10);
*/

        /*
 * Triangle rectangle invert
	for (unsigned int columns = 1; columns <= 10; columns++)
	{
		for (unsigned int rows = 10; rows >= columns; rows--)
		{
			putchar(42);
		}
		putchar(10);
	}
	putchar(10);
*/

        /*
 * Triangle inverse side and the other wide round
	for (unsigned int columns = 1; columns <= 10; columns++)
	{
		for(unsigned int blank_Spaces = 1; blank_Spaces < columns ; blank_Spaces++)
		{
			printf(" ");
		}

		for (unsigned int rows = 10; rows >= columns; rows--)
		{
			putchar(42);
		}
		putchar(10);
	}
	putchar(10);
*/

        /*
 * Triangle reverse side
	for (unsigned int columns = 1; columns <= 10; columns++)
	{
		for(unsigned int blank_Spaces = 10; blank_Spaces > columns ; blank_Spaces--)
		{
			printf(" ");
		}

		for (unsigned int rows = 1; rows <= columns; rows++)
		{
			putchar(42);
		}
		putchar(10);
	}
	putchar(10);
*/
        return (0);
}
