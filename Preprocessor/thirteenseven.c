#include <stdio.h>


#define MINIMUM2(x, y) (((x) < (y)) ? x : y)
#define MINIMUM3(x, y, z) ((MINIMUM2(x, y) > z) ? z : MINIMUM2(x, y))


/**
 * main - (Smallest of Three Numbers)
 *
 * Return: 0 if is success
 */
int main(void)
{
	int x = 0, y = 0, z = 0;

	puts("SMALLEST");
	puts("Enter X");
	scanf("%d", &x);
	puts("Enter Y");
	scanf("%d", &y);
	puts("Enter Z");
	scanf("%d", &z);

	printf("The min is is: %d\n", MINIMUM3(x, y, z));

	return (0);
}
