#include <stdio.h>


/**
 * main - (World-Population-Growth Calculator)
 * Print the suposition of 1-5 years the World Population
 *
 * Return: 0 If, is successful
 */
int main(void)
{
        int pop_Anual = 0, pop_Total = 7500, years = 77, pop_Show = 1;

        while (years <= 5)
        {
                pop_Show = 0;
                pop_Show += (pop_Total + (pop_Anual * years));

                printf("Year %d: %d\n", years, pop_Show);

                ++years;
        }

        return (0);
}
