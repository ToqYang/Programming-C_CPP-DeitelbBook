#include <stdio.h>

union floatingPoint {
	long double x;
	double d;
	float f;
};

void show_union(union floatingPoint *n);

/**
 * main - (Using Unions)
 *        To show different data type floats
 *        in floats don't share the same value how the integers
 *
 * Return: 0 if is Success
 */
int main(void)
{
	union floatingPoint flotantes;

	puts("Enter long long double 100.456");
	flotantes.x = 100.456;
	show_union(&flotantes);

	puts("Enter double 123.456");
	flotantes.d = 123.456;
	show_union(&flotantes);

	puts("Enter float 111.456");
	flotantes.f = 111.456;
	show_union(&flotantes);

	return (0);
}


/**
 * show_union - Show the different values of the storage shared
 * @n: (floatingPoint *): Pointer of the new data type
 *
 */
void show_union(union floatingPoint *n)
{
	puts("-----------------");
	printf("long double: %Lf\n", n->x);
	printf("double: %lf\n", n->d);
	printf("float: %f\n", n->f);
	puts("-----------------");
}
