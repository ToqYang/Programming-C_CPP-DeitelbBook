#include <stdio.h>


/**
 * main - (Hollow  Square  of  Asterisks)
 * Modify  the  program  you  wrote  in  Exercise 3.32
 * so  that  itprints a hollow square.
 * For example, if your program reads a size of 5, it should print
 *
 * Return: 0 If is success
 */
int main(void)
{
        int rows = 0, column = 0, size = 0;

        printf("Enter the size: ");
        scanf("%d", &size);

        while (column < size)
        {

                /* Print since the first and last line of the column ***** */
                if (column == 0 || (column == (size - 1)))
                {
                        /* Print the rows */
                        while (rows < size)
                        {
                                printf("*");
                                rows++;
                        }
                        /* Restart of the variable for be, used */
                        rows = 0;
                }

                /* Print after of first line and
                before the last end line (size - 1) */
                else if (column >= 1 && (column < (size - 1)))
                {
                        /* Print first */
                        printf("*");

                        /*
			 rows less than size - 3 for adjust the spaces
			 -3 because quit the two characters
			 first and last line asterisk
			 */
                        while (rows <= size - 3)
                        {
                                printf(" ");
                                rows++;
                        }

                        /* Print last */
                        printf("*");
                        rows = 0;
                }

                putchar(10);
                column++;
        }

        return (0);
}
