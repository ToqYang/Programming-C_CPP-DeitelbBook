#include <stdio.h>
#include <math.h>

/**
 * main - Print some mathematic functions
 * Return: 0 If is success
 */
int main(void)
{
	double x = 0;

	x = fabs(10.85);
	printf("%lf\n", x);

	x = floor(10.85);
	printf("%lf\n", x);

	x = fabs(-0.678);
	printf("%lf\n", x);

	x = ceil(9.234);
	printf("%lf\n", x);

	x = fabs(0.0);
	printf("%lf\n", x);

	x = ceil(-34.87);
	printf("%lf\n", x);

	x = ceil(-fabs(-12 - floor(-9.5)));
	printf("%lf\n", x);

	return (0);
}
