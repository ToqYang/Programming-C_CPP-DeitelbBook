#include <stdio.h>

/**
 * main - (Printing Numbers in Various Field Widths)
 *        Behavior: Same
 *
 * Return: 0 if is success
 */
int main(void)
{
	puts("Integer");
	printf("%d\n", 12345);
	printf("2 Field %2d\n", 12345);
	printf("10 Field %10d\n", 12345);

	puts("\n");

	puts("Float");
	printf("%f\n", 1.2345);
	printf("2 Field %2f\n", 1.2345);
	printf("10 Field %10f\n", 1.2345);
	printf("30 Field %30f\n", 1.2345);

	return (0);
}
