#include <stdio.h>


/**
 * main - (Temperature Conversions)
 *
 * Return: 0 if is success
 */
int main(void)
{
	float celsius = 0.0, farenheit = 0.0;

	puts("Enter in Farenheit");
	scanf("%f", &farenheit);

	celsius = 5.0 / 9.0 * (farenheit - 32);

	printf("The temperature in °C\n%+10.3f\n", celsius);

	return (0);
}
