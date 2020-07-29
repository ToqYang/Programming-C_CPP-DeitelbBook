#include <stdio.h>


/**
 * main - (Square of Asterisks)
 *
 * Write a program that reads in
 * the side of a square and then prints thatsquare out of asterisks.
 * Your program should work for squares of all side sizes between 1 and 20.
 * For example, if your program reads a size of 4, it should print
 *
 * Return: 0 if is success
 */
int main(void)
{
        int rows = 0, column = 0, size = 0;

        printf("Enter the size: ");
        scanf("%d", &size);

        while (column < size)
        {
                rows = 0;

                while (rows < size)
                {
                        putchar(42);
                        rows++;
                }

                putchar(10);
                column++;
        }

        return (0);
}
