#include <stdio.h>


/**
 * (Table of Decimal, Binary, Octal and Hexadecimal Equivalents)
 *
 * Write a program that prints a table of the binary, octal and hexadecimal
 * equivalents of the decimal numbers in the rang 1 through 256.
 * If you’re not familiar with these number systems,
 * read Appendix C before you at￾tempt this exercise.
 * [Note: You c * an display an integer as an octal or hexadecimal
 * value with the con￾version specifiers %o and %X, respectively.
 *
 * Return: 0 if is success
 */
int main(void)
{
        int number = 0, res = 0;

        printf("%s %5s %10s %15s\n", "Decimal",
               "Binary", "Octal", "Hexadecimal");

        for (int count = 0; count <= 256; count++)
        {
                /* Print the decimal */
                printf("%d\t", count);

                number = count;
                if (count == 0)
                        putchar(48);

                /* Operation for get and print the reverse binary */
                while (number > 0)
                {
                        res = number % 2;
                        printf("%d", res);
                        number /= 2;
                }

                /* Print the octal and hexadecimal and newline */
                printf("\t\t%o", count);
                printf("\t%x", count);
                putchar(10);
        }

        return (0);
}
