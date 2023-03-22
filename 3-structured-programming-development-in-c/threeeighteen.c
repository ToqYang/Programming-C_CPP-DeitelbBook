#include <stdio.h>


/**
 * main - Print sales comission
 *
 * (Sales-Commission Calculator) One large chemical company pays its salespeople
 * on a com-mission basis. The salespeople receive $200 per week plus 9%
 * of their gross sales for that week.
 * For example,  a  salesperson  who  sells  $5000  worth  of  chemicals
 * in  a  week  receives  $200  plus  9%  of $5000, or a total of $650.
 * Develop a program that will input each salesperson’s gross sales for
 * lastweek and will calculate and display that salesperson’s earnings.
 * Process one salesperson's figures at atime.
 * Here is a sample input/output dialog:
 *
 * Return: 0
 */

int main(void)
{

        float sales = 0.0, salary = 0.0;
        int i = 0, c = 0;

        while (i < 1)
        {
                printf("Enter sales in dollars (-1 to end): ");
                scanf("%f", &sales);

                c = sales;

                if (c == -1)
                {
                        break;
                }
                else
                {
                        salary = ((sales / 100) * 9);
                        salary += 200;

                        printf("Salary is: $%.2f\n", salary);
                }
        }

        return (0);
}
