#include <stdio.h>

#define SUM(x, y) ((x) + (y))


/**
 * main - (Adding Two Numbers)
 *
 * Return: 0 if is success
 */
int main(void)
{
	int x = 0, y = 0;

	puts("SUM");
	puts("Enter X");
	scanf("%d", &x);
	puts("Enter Y");
	scanf("%d", &y);

	printf("The sum of x and y is: %d\n", SUM(x, y));

	return (0);
}
