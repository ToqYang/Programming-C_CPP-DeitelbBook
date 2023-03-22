#include <stdio.h>

#define LENGTH 1000


void print_arr(int array[LENGTH]);


/**
 * main - (The Sieve of Eratosthenes)
 *
 *        Detect if a number is prime
 *
 * Return: (int) 0 If is success
 */
int main(void)
{
        int elements[LENGTH] = {0};

        /* Initialize Array in 1 */
        for (int i = 0; i < LENGTH; ++i) {
                elements[i] = 1;
        }

        /* Delete num to num to verify is prime */
        for (int i = 2; i < LENGTH; ++i) {
                for (int j = 2; j < LENGTH; ++j) {
                        if (i % j == 0 && i != j)
                                elements[i] = 0;
                }
        }
        elements[0] = 0;
        print_arr(elements);

        return (0);
}


/**
 * print_arr - Print contiguos memory location
 * @array: (int) Contiguos memory to print
 */
void print_arr(int array[LENGTH])
{
        for (int i = 0; i < LENGTH; ++i) {
                if (array[i] == 1)
                        printf("%d ", i);
        }
        puts("");
}
