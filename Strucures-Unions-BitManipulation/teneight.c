#include <stdio.h>

union integer {
	long b;
	int i;
	short s;
	char c;
};

void show_union(union integer *n);


/**
 * main - (Using Unions)
 *        To show different data type integers
 *        Share same value ? yes
 *
 * Return: 0 if is Success
 */
int main(void)
{
	union integer enteros;

	puts("Enter long 1000");
	enteros.b = 1000;
	show_union(&enteros);

	puts("Enter int 1000");
	enteros.i = 2000;
	show_union(&enteros);

	puts("Enter short 100");
	enteros.s = 300;
	show_union(&enteros);

	puts("Enter char 70");
	enteros.s = 70;
	show_union(&enteros);

	return (0);
}


/**
 * show_union - Show the different values of the storage shared
 * @n: (integer *): Pointer of the new data type
 *
 */
void show_union(union integer *n)
{
	puts("-----------------");
	printf("Long: %li\n", n->b);
	printf("int: %d\n", n->i);
	printf("short: %hi\n", n->s);
	printf("char: %c\n", n->c);
	puts("-----------------");
}
