#include <stdio.h>
/**
 * main - Print 4 stament for add 1
 * @x: Initialized in 0, store the +1
 * Return: 0
 */
int main(void)
{
	int x;

	x = 0;

	x += 1;
	printf("%d\n", x);

	x = 0;
	x = x + 1;
	printf("%d\n", x);

	x = 0;
	x++;
	printf("%d\n", x);

	x = 0;
	++x;
	printf("%d\n", x);

	return (0);
}
