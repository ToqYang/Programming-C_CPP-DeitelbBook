#include <stdio.h>

/** (Sales Tax) Sales tax is collected from buyers and remitted to the government. 
 *  A retailer has to file a monthly sales tax report which lists the sales for
 *  the month and the * amount of sa lestax collected, at both the county and state levels. 
 *  Develop a program that will input the total collections for a month,
 *  calculate the sales tax on the collections, and display the county and statetaxes. 
 *  Assume that states have a 4% sales tax and counties have a 5% sales tax.
 *  Here is a sampleinput/output dialog.
 */

/**
 * main - Print the % discount of taxed
 * Return: 0
 */

int main( void )
{
	float t_amm_coll, sales, county, state, total_Tax;

	char month[10];

	int c, i;
	c = 0;
	i = 0;

	t_amm_coll = 0;
	sales = 0.0;
	county = 0.0;
	state = 0.0;
	total_Tax = 0.0;

	while( i < 1 )
	{
		printf( "Enter total amount collected (-1 to quit): " );
	        scanf( "%f", &t_amm_coll );

		c = t_amm_coll;

		if( c == -1)
		{
			break;
		}
		else
		{
		printf( "Enter name of month: " );
		scanf( "%s", month );

		printf( "Total Collections: $ %.2f\n", t_amm_coll );

		county = ( ( t_amm_coll * 5 ) / 100 );
		state = ( ( t_amm_coll * 4 ) / 100 );
		total_Tax = county + state;

		sales = t_amm_coll - total_Tax;

		printf( "Sales: $ %.2f\n", county );

		printf( "County Sales Tax: $ %.2f\n", county );
		printf( "State Sales Tax: $ %.2f\n", state );
		printf( "Total Sales Tax Collected: $ %.2f\n\n", total_Tax );
		}
	}
	return (0);
}
