#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 73


int move_tortoise(int a);
int move_hare(int b);
void verify_position(int *a, int *b);
void print_race(char *street, int *a, int *b);


/**
 * main - (Simulation: The Tortoise and the Hare)
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        char street[SIZE] = "";
        int tortoisepos = 1, harepos = 1;

        puts("BANG !!!!!");
        puts("AND THEY'RE OFF !!!!!");
        srand(time(0));

        /* Print - */
        puts("");
        for (size_t i = 0; i < SIZE; ++i)
                putchar(45);
        puts("");

        while (tortoisepos <= 71 && harepos <= 71) {
                tortoisepos = move_tortoise(tortoisepos);
                harepos = move_hare(harepos);
                verify_position(&tortoisepos, &harepos);
                print_race(street, &tortoisepos, &harepos);

                puts("");
                for (size_t i = 0; i < SIZE; ++i)
                        putchar(45);
                puts("");

                if ((tortoisepos >= 71 && harepos >= 71) && (tortoisepos == harepos)) {
                        puts("\nIt's a tie.");
                } else if (tortoisepos >= 71) {
                        puts("\nTORTOISE WINS!!!");
                }
                else if (harepos >= 71)
                        puts("\nHare wins. Yuch");
        }

        return (0);
}



/**
 * verify_position - Look if the position < 1
 *                   and the put in correct position
 * @a: (int *) Current position of the Tortoise
 * @b: (int *) Current position of the Hare
 *
 */
void verify_position(int *a, int *b)
{
        if (*a < 1)
                *a = 1;
        if (*b < 1)
                *b = 1;
}


/**
 * move_tortoise - Based in the percentages
 * @a: (int) Contain the current position
 * Tortoise
 *  Fast plod                Slip             Slow plod
 *     50%                    20%                30%
 *  3 squares forward  6 squares backward   1 square forward
 *
 * Return: (int) New position
 */
int move_tortoise(int a)
{
        int i = 1 + rand() % 10;

        if (i >= 1 && i <= 5)
                return (a + 3);
        if (i >= 6 && i <= 7)
                return (a - 3);
        if (i >= 8 && i <= 10)
                return (a + 3);

        return (0);
}


/**
 * move_hare - Based in the percentages
 * @a: (int) Contain the current position
 * Hare
 *  Sleep                Big hop         Big slip              Small hop       Small slip
 *   20%                  20%             10%                    30%              20%
 * No move at all  9-squares forward 12-squares backward   1-square forward  2-squares backward
 *
 * Return: (int) New position
 */
int move_hare(int b)
{
        int i = 1 + rand() % 10;

        if (i >= 1 && i <= 2)
                return (0);
        if (i >= 3 && i <= 4)
                return (b + 9);
        if (i == 5)
                return (b - 12);
        if (i >= 6 && i <= 8)
                return (++b);
        if (i >= 9 && i <= 10)
                return (b - 2);

        return (0);
}


/**
 * print_race - Look the position of each one
 * @street: (char *) Contain the track
 * @a: (int *) Current position of the Tortoise
 * @b: (int *) Current position of the Hare
 *
 */
void print_race(char *street, int *a, int *b)
{
        street[0] = 'S';
        street[72] = 'G';
        char tie[7] = "OUCH!!!";

        for (size_t i = 1; i < SIZE - 1; ++i)
        {
                street[i] = ' ';
        }
        street[*a] = 'T';
        street[*b] = 'H';

        if ((*a == *b) > 0)
        {
                for (size_t j = *b; tie[j] != '\0'; ++j)
                        street[j] = tie[j];
        }

        for (size_t i = 0; i < SIZE; ++i)
        {
                printf("%c", street[i]);
        }
        puts("");
}
