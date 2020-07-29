#include <stdio.h>


/**
 * main - (Salary Calculator)
 *
 * Develop a program that will determine the gross pay
 * for each of severalemployees. The company pays “straight time”
 * for the first 40 hours worked by each employee andpays “time-and-a-half”
 * for all hours worked in excess of 40 hours.
 * You’re given a list of the employ-ees of the company,
 * the number of hours each employee worked
 * last week and the hourly rate ofeach employee.
 * Your program should input this information for each employee and
 * should deter-mine and display the employee's gross pay.
 *
 * Return: 0
 */
int main(void)
{
        int c = 0, hours = 0, hours_Extra = 0;
        float value_Hour = 0.0, val_Hour_Extra = 0.0;
        float salary_Extra = 0.0, salary = 0.0;

        while (1)
        {
                printf("Enter # of hours worked (-1 to end): ");
                scanf("%d", &hours);

                c = hours;

                if (c == -1)
                        break;
                else {
                        printf("\nEnter hourly rate of the worker ($00.00): ");
                        scanf("%f", &value_Hour);

                        if (hours > 40)
                        {
                                hours_Extra += hours;
                                hours_Extra -= 40;
                                val_Hour_Extra = ((value_Hour / 100) * 150);
                                salary_Extra = val_Hour_Extra * hours_Extra;
                        }

                        salary = (value_Hour * (hours - hours_Extra));
                        salary += salary_Extra;

                        printf("Salary is $%.2f\n", salary);
                }
        }

        return (0);
}
