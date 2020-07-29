#include <stdio.h>
#include <stdarg.h>

float product(int n, ...);

/**
 * main - (Variable-Length Argument List: Calculating Products)
 *
 * Return: 0 if is success
 */
int main(void)
{
	int x = 0, y = 0, z = 0;

	puts("Enter the numbers to multiply");
	scanf("%d", &x);
	puts("");
	scanf("%d", &y);
	puts("");
	scanf("%d", &z);
	puts("");

	printf("The average of the numbers is: %.1f\n", product(3, x, y, z));

	return (0);
}


/**
 * product - Product of a number
 * @n: (int) Number of arguments
 * @...: (List) Arguments
 *
 * Return: (float) Average of the arguments
 */
float product(int n, ...)
{
	float res = 0;
	va_list mylist;

	va_start(mylist, n);

	for (int i = 0; i < n; ++i) {
		res += va_arg(mylist, int);
	}

	res /= n;

	return (res);
}
