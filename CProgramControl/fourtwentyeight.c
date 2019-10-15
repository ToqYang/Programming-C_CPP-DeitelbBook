#include <stdio.h>

/**
 * (Calculating Weekly Pay)
 * Managers have paycode 1, hourly workers have code 2, commission workers have
 * code 3 and pieceworkers have code 4.
 */

/**
 * main - Print the weekly pay
 * Return: 0 if is success
 */

int main(void)
{
	short int cod_Employ = 0;
	short int hours = 0;
	double salary = 1000, week_sales = 0, piece_works = 0;

	printf("Enter the code: ");
	scanf("%hd", &cod_Employ);

	printf("Enter the your hour's worked: ");
	scanf("%hd", &hours);

	switch (cod_Employ)
	{
		case 1:
			salary *= (hours * 7);
			break;
		case 2:
			if (hours > 40)
			{
				salary *= (hours * 7);
				hours = ( ( hours - 40 ) * -1 );
				salary += ( ( (salary / 100) * 150) * hours);
			}
			salary *= (hours * 7);
			break;
		case 3:
			printf("Enter your weekly sales: ");
			scanf("%lf", &week_sales);

			salary = (hours * 7);
			salary += ( ( ( (salary / 100) * 0.57 ) * hours) + 250);
			break;
		case 4:
			printf("How many parts you have? ");
			scanf("%lf", &piece_works);

			salary *= piece_works;
			break;
		default:
			puts("There error");
			break;
	}
	printf("Salary: %.0lf\n", salary);

	return (0);
}
