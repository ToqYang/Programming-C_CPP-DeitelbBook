#include <stdio.h>
/**
 * main - Print the different declarations
¨* Return: 0
 */
int main( void )
{
// A) Multiply the variable product by 2 using the *= operator

	int product;

	product = 5;

//error value  product * 2;

// B) Multiply the variable product by 2 using the = and * operators.
	product *= 5;

/** C) Test whether the value of the variable count is greater than 10.
      If it is, print "Count is greater than 10." */

	int count;

	count = 11;

	if ( count > 10 )
	{
		puts("Count is greater than 10.");
	}

/** D) Calculate the remainder after q is divided by divisor
       and assign the result to q.
       Write this statement two different ways. */

	int q;

	q = 40;

	q /= 2;
	q = q / 2;

/** E) Print the value 123.4567 with two digits of precision.
       What value is printed? */

	float precision;

	precision = 123.4567;

	printf("%.2f\n", precision);

/** F) Print the floating-point value 3.14159 with three digits to the right of
       the decimal point. What value is printed? */

	float pi;

	pi = 3.14159;

	printf("%.3f\n", pi);

	return (0);
}
