#include <stdio.h>


/**
 * main - (Calculating the Value of π)
 *
 * Calculate the value of π from the infinite series
 * Print a table that shows the value of π approximated
 * by one term of this series, by two terms, by
 * three terms, and so on. How many terms of
 * this series do you have to use before you first get 3.14?
 * 3.141? 3.1415? 3.14159?
 *
 * Return: 0 if is success
 */
int main(void)
{
        float sucesion = 3.0, constant = 4.0, pi_un = 0.0;
        int count = 0;

        /* Calculate serie infinite pi */
        while (1) {
                pi_un = (constant / sucesion);

                printf("%f\n", pi_un);

                /* Never it will happened */
                if (pi_un >= 3.14)
                        break;

                if (count % 2 == 0)
                        putchar(43);

                if (count % 2 == 1)
                        putchar(45);

                sucesion += 2.0;
                count++;
        }
        printf("%d\n", count);

        return (0);
}
