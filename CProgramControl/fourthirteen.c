#include <math.h>
#include <stdio.h>

/*
 * (Natural Numbers Arithmetic) Write a program that prints the sum, the sum of the
 * squares, and the sum of the cubes of all natural numbers from 1 till any number entered by the user
 */

/* 
 * main - Print sum of squares and cubes
 * Return: 0 if is success
 */

int main(void)
{
	/* The function standard its ask me to double for the functions */
	double number, res_Sqr, res_Cub, count;

	number = 0;
	res_Sqr = 0;
	res_Cub = 0;
	count = 0;

	puts("Enter the number");
	scanf("%lf", &number);

	while (count <= number)
	{
		/* Sum of the squares and cubes */
		res_Sqr += pow(number, 2);
		res_Cub += pow(number, 3);

		count++;
	}

	printf("The sum of square is: %.0lf\nThe sum of the cubes is: %.0lf\n", res_Sqr, res_Cub);

	return (0);
}
