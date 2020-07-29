#include <stdio.h>


/**
 * main -(Checkerboard Pattern of Asterisks)
 *
 * Write a program that
 * displays the following checker-board pattern.
 *
 * Return: 0
 */
int main(void)
{
        /* I = Columns. */
        /* J = Rows. */
        int i = 1, j = 1;

        while (i < 9)
        {
                /* If is pair print a space extra. */
                if (i % 2 == 0)
                        printf("%s", " ");

                j = 1;

                while (j < 9)
                {
                        printf("%s", "* ");
                        j++;
                }
                /* New line normal */
                puts("");

                i++;
        }

        return (0);
}
