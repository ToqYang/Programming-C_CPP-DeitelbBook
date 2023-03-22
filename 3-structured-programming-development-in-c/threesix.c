#include <stdio.h>


/**
 * main - Print power math.
 *
 * Return: 0
 */
int main(void)
{

        unsigned int x = 0, y = 0, i = 0, power = 0;


        /* A) Input unsigned integer variable x with scanf.
        Use the conversion specifier %u */
        puts("Enter the number");
        scanf("%u", &x);

        /* B) Input unsigned integer variable y with scanf.
        Use the conversion specifier %u. */
        puts("Enter the number");
        scanf("%u", &y);

        /* C) Set unsigned integer variable i to 1. */
        i = 1;

        /* D) Set unsigned integer variable power to 1. */
        power = 1;

        /* E) Multiply unsigned integer variable
        power by x and assign the result to power. */
        /* Test while G */
        while (i <= y)
        {

                power *= x;

                /* F) Increment variable i by 1. */
                i++;

                /* G) Test i to see if it’s less than or equal to y in the
                condition of a while statement. */
                /* H) Output unsigned integer variable power with printf.
                Use the conversion specifier %u. */
                printf("%u\n", power);
        }

        return (0);
}
