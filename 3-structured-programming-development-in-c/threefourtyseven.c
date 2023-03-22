#include <stdio.h>


/**
 * main - Print the target heart rate about years
 * (Target-Heart-Rate Calculator)
 *
 * Return: 0 If, is succesful
 */
int main(void)
{
        int day = 0, day_Current = 2, month = 0, month_Current = 9;
        int year = 0, year_Current = 2019, years = 0;
        int frec_Max = 0, percentage = 0, input = 1;

        while (1)
        {
                puts("Enter your day birth: ");
                scanf("%d", &input);

                if (input <= 0)
                        break;

                day = input;

                puts("Enter your month birth:");
                scanf("%d", &input);

                if (input <= 0)
                        break;

                month = input;

                puts("Enter your year birth: ");
                scanf("%d", &input);

                if (input <= 0)
                        break;

                year = input;

                /* Calculate through the date current minus date birth */
                if (year < year_Current)
                {
                        years = year_Current - year;

                        if (month > month_Current)
                        {
                                --years;
                        }
                        if (month == month_Current)
                        {
                                if (day_Current > day)
                                        --years;
                        }
                }

                /* Ecuation of the American Heart Asociation */
                frec_Max = 220 - years;

                /* Percentage of the 50%, average of heart rate */
                percentage = ((frec_Max * 50) / 100);
                printf("Your years old is: %d\nYour max frequency is:\
                %d\nYour average of the heart rate of the 50: %d\n",
                       years, frec_Max, percentage);

                /* Percentage of the 85%, average of heart rate */
                percentage = ((frec_Max * 85) / 100);
                printf("Your average of the heart rate of the 85: %d\n",
                       percentage);
        }

        return (0);
}
