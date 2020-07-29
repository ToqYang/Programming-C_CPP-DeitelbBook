#include <stdio.h>


/**
 * main - (World-Population-Growth Calculator)
 *
 * Print the suposition of 1-75 years the World Population
 * The values of the people is in millions
 * Total population is 7.500 millions
 * Annual growth is of 80 millions
 *
 * Return: 0 If, is successful
 */
int main(void)
{
        int pop_Anual = 80, pop_Total = 7500, years = 1, pop_Show = 0;

        puts("Year  Population end year  Mensual growth\n");

        while (years <= 75)
        {
                pop_Show = 0;

                /* Calculate the anual populstion */
                pop_Show += (pop_Total + (pop_Anual * years));

                printf("%d\t\t%d\t\t%d\n", years, pop_Show, pop_Anual / 12);

                ++years;
        }

        return (0);
}
