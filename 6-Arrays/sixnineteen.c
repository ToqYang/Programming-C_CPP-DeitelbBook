#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - (Dice Rolling)
 *
 * Simulates the rolling of two dice
 *
 * Return: (int) 0 If is success
 */
int main(void)
{
        size_t roll1 = 0, roll2 = 0, sum = 0;
        size_t counter[10] = {0};

        srand(time(NULL));

        for (size_t i = 0; i < 36000; ++i) {
                roll1 = 1 + rand() % 6;
                roll2 = 1 + rand() % 6;
                sum = roll1 + roll2;
                ++counter[sum - 2];
        }

        puts("Sums   Times\n");
        for (size_t j = 0, k = 2; j < 10; j++, k++)
                printf("  %ld    %ld\n", k, counter[j]);

        return (0);
}
