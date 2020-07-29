#include <stdio.h>


/**
 * main - Print A + 3 succession
 *
 * (Tabular Output) Write a program that utilizes
 * looping to produce the following table of values:
 *
 * Return: 0 if is success
 */
int main(void)
{
        int rows = 0, columns = 0, counter = 1;

        printf("A\tA+3\tA+6\tA+9\n");

        while (counter <= 5)
        {
                rows = 1;

                columns = counter * 7;

                printf("%d\t", columns);

                while (rows <= 3)
                {
                        columns += 3;

                        printf("%d\t", columns);
                        rows++;
                }

                counter++;

                printf("\n");
        }

        return (0);
}
