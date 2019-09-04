#include <stdio.h>

/**
 * (Interest Calculator) The simple interest on a loan is calculated by the for
 * mulainterest = principal * rate * days / 365;The  preceding  formula
 * assumes  that  rate  is  the  annual  interest  rate,
 * and  therefore  includes  thedivision  by  365  (days).
 * Develop  a  program  that  will  input  principal, rate  and  days  for  severalloans, 
 * and will calculate and display the simple interest for each loan,
 * using the preceding formula.Here is a sample input/output dialog:
 */

/**
 * main - Print interest calculator
 * Return: 0
 */

int main( void )
{
	float interest, principal, rate;

	interest = 0.0;
	principal = 0.0;
	rate = 0.0;

	int c, i, days;

	c = 0;
	i = 0;
	days = 0;

	while ( i < 1 )
	{
		printf( "\nEnter loan principal (-1 to end): " );
		scanf( "%f", &principal );

		c = principal;

		if ( c == -1 )
		{
			i++;
			break;
		}
		else
		{
			printf( "Enter interest rate: " );
			scanf( "%f", &rate );

			printf( "Enter term of the loan in days: " );
			scanf( "%d", &days );

			interest = principal * rate * days / 365;

			printf( "The interest charge is $%.2f\n", interest );
		}
	}

	return (0);
}
