#include <stdio.h>

/**
 * main - (Recursive main)
 * Return: Infinite recursion
 */
int main()
{
	/* Variable that stay in memory */
	static int count = 1;

	printf("%d", count++);

	main();
}
