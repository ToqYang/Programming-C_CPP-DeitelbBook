#include <stdio.h>

/**
 * World-Population-Growth Calculator)
 * Print the suposition of 1-5 years the World Population
 * Return: 0 If, is successful
 */

int main ( void )
{
	int pop_Anual, pop_Total, years, pop_Show;

	pop_Show = 0;
	pop_Total = 7500;
	pop_Anual = 77;
	years = 1;

	while ( years <= 5 )
	{
		pop_Show = 0;
		pop_Show += ( pop_Total + ( pop_Anual * years) );

		printf( "Year %d: %d\n", years, pop_Show);

		++years;
	}

	return (0);
}
