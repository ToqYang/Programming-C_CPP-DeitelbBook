#include <stdio.h>

#define MINIMUM2(x, y) (((x) < (y)) ? x : y)


/**
 * main - (Smallest of Two Numbers)
 *
 * Return: 0 if is success
 */
int main(void)
{
	int x = 0, y = 0;

	puts("SMALLEST");
	puts("Enter X");
	scanf("%d", &x);
	puts("Enter Y");
	scanf("%d", &y);

	printf("The min is is: %d\n", MINIMUM2(x, y));

	return (0);
}
