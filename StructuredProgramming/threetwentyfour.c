#include <stdio.h>


/**
 * main - (Tabular Output)
 *
 * Write a program that uses looping to print the following table of values.
 * Use the tab escape sequence, \t,
 * in the printf statement to separate the columns with tabs.
 *
 * Return: 0 if is success
 */
int main(void)
{
        int base = 0, expo = 0, counter = 1, power = 0;

        printf("N\tN2\tN3\tN4\n");

        while (counter <= 10)
        {

                base = counter;
                power = base;
                expo = 2;

                printf("%d\t", counter);

                while (expo <= 4)
                {
                        power *= base;

                        printf("%d\t", power);
                        expo++;
                }

                putchar(10);
                counter++;
        }
        putchar(10);

        return (0);
}
