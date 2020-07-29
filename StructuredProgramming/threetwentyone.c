#include <stdio.h>


/**
 * main - (Preincrementing vs Postincrementing)
 * Write a program that demonstrates the difference
 * between preincrementing and postincrementing using the increment operator ++.
 *
 * Return: 0 If is success
 */
int main(void)
{
        int pre = 0, pos = 0, x = 0;

        while (pre <= 2)
        {
                x = ++pre;
                printf("Preincrement: %d\n", x);
        }

        putchar(10);

        while (pos <= 2)
        {
                x = pos++;
                printf("Postincrement: %d\n", x);
        }

        return (0);
}
