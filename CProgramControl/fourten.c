#include <stdio.h>

/* (Conversion Celsius to Fahrenheit) Write a program that converts temperatures from 30 C
 * to 50 C to the Fahrenheit scale. The program should print a table displaying temperatures in the
 * two scales side by side. [Hint: F = 9/5C + 32]
*/

/* 
 * main - Print the temperature 30-50 C convert to Farenheit
 * Return: 0 if is success
 */

int main(void)
{
	float t_far;
	int celsius;

	t_far = 0.0;
	celsius = 30;

	printf("%s\t%s\n", "Celsius", "Farenheit");

	for (celsius = 30; celsius <= 50; celsius++)
	{
		t_far = ( ( (1.8)  * (celsius) ) + 32);
		printf(" %d\t %0.f\n", celsius, t_far);
	}

	return (0);
}




