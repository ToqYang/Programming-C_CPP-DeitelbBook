#include <stdio.h>


/**
 * (Detecting Multiples of a Number)
 * main - Print $, If is multiple of 50 print new space
 * Return: 0
 */
int main(void)
{
        int i = 1;

        while (i <= 500)
        {
                printf("$ ");

                if (i % 50 == 0)
                {
                        printf("\n");
                }

                i++;
        }

        return (0);
}
