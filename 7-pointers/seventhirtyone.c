#include <stdio.h>

void add(double *a, double *b);
void sub(double *a, double *b);
void mul(double *a, double *b);
void div(double *a, double *b);


/**
 * main -  (Calculator Using Function Pointers)
 *
 * Return: 0 if is success
 */
int main(void)
{
	int opt = 0;
	double a = 0, b = 0;
	void (*calc[4])(double *, double *) = {add, sub, mul, div};

	while (opt != 4) {
		puts("Enter a choice:");
		puts("    0  Add");
		puts("    1  Substract");
		puts("    2  Multiply");
		puts("    3  Divide");
		puts("    4  End Program");

		scanf("%d", &opt);

		if (opt != 4) {
			puts("Enter The First Number");
			scanf("%lf", &a);
			puts("Enter The Second Number");
			scanf("%lf", &b);

			(*calc[opt])(&a, &b);
		}
	}
	return (0);
}


/**
 * add - Sum Two Numbers
 * @a: (double *) First Number
 * @b: (double *) Second Number
 *
 */
void add(double *a, double *b)
{
	printf("\n%.0lf + %.0lf = %.0lf\n", *a, *b, *a + *b);
}


/**
 * sub - Substract Two Numbers
 * @a: (double *) First Number
 * @b: (double *) Second Number
 *
 */
void sub(double *a, double *b)
{
	printf("\n%.0lf - %.0lf = %.0lf\n", *a, *b, *a - *b);
}


/**
 * mul - Multiply Two Numbers
 * @a: (double *) First Number
 * @b: (double *) Second Number
 *
 */
void mul(double *a, double *b)
{
	printf("\n%.0lf * %.0lf = %.0lf\n", *a, *b, *a * *b);
}


/**
 * div - Divide Two Numbers
 * @a: (double *) First Number
 * @b: (double *) Second Number
 *
 */
void div(double *a, double *b)
{
	printf("\n%.2lf / %.2lf = %.2lf\n", *a, *b, *a / *b);
}
