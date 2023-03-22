#include <stdio.h>


/**
 * main - (Bar-Chart Printing Program)
 *
 * One interesting application of computers is drawing graphs
 * and bar charts.
 * Write a program that reads five numbers (each between 1 and 30).
 * For each number
 * read, your program should print a line containing
 * that number of adjacent asterisks. For example,
 * if your program reads the number seven, it should print *******.
 *
 * Return: 0 if is success
*/
int main(void)
{
        int count = 0, count_five = 0, number = 0;

        /* Loop for read 5 numbers */
        while (count_five < 5)
        {
                printf("Enter the number: ");
                scanf("%d", &number);

                if (number > 30 || number < 1)
                        break;

                /* Numbers of * to print in screen */
                for (count = 0; count < number; ++count)
                        printf("*");
                puts("");

                ++count_five;
        }
        return (0);
}
