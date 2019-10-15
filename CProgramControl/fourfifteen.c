#include <stdio.h>
#include <math.h>

/*
 * (Modified Compound-Interest Program) Modify the compound-interest program of
 * Section 4.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and 10%. Use a for loop
 * to vary the interest rate
*/

/*
 * main - Print the iinterest
 * Return: 0 if is success
 */

int main(void)
{
	double principal = 1000.0; // starting principal
	double rate = 0.5; // annual interest rate
	
	// output table column heads
	printf("%4s%21s\n", "Year", "Amount on deposit");

	// calculate amount on deposit for each of ten years
	for (unsigned int year = 1; year <= 10; ++year) {

		rate += 1.0;
		// calculate new amount for specified year
		double amount = principal * pow(rate, year);
		// output one table row
		printf("%4u%21.2f\n", year, amount); 
 	}	 
}
