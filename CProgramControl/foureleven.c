#include <stdio.h>


/**
 * main - (Calculating the Sum of Multiples)
 *
 * Write a program to
 * calculate and print the sum of all
 * multiples of 7 from 1 to 100.
 *
 * Return: 0 if is success
 */
int main(void)
{
        for (int count = 1; count <= 100; count++)
        {
                if (count % 7 == 0)
                {
                        printf("%d ", count);
                }
        }
        putchar(10);

        return (0);
}
