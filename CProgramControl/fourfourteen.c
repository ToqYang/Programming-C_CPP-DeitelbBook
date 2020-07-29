#include <stdio.h>


/**
 * main - Print the factorials
 *
 * Return: 0 if is success
*/
int main(void)
{
        int count = 5, fact = 0, len = 0;

        fact = count;
        len = count - 1;

        printf("%d!: %d", count, count);

        while (count >= 1)
        {
                if (count <= len) {
                        fact *= count;
                        printf("(%d)", count);
                }
                count--;
        }
        printf(" = %d", fact);
        putchar(10);

        return (0);
}

/*
 * The factorial
 *
 * Function is used frequently in probability problems. The factorial
 * of a positive integer n (written n! and pronounced “n factorial”)
 * is equal to the product of the positive integers from 1 to n.
 * Write a program that evaluates the factorials of the integers from 1 to 5.
 * Print the results in tabular format. What difficulty
 * might prevent you from calculating the factorial of 20?
 * Answer: If, I try calculate 20! is a number very big to data type int
 * then it doesn't show the correct calculate
 *
 */
