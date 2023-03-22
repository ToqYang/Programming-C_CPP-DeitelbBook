#include <stdio.h>


/**
 * main - (Recursive main)
 *
 * Return: (int) Infinite recursion
 */
int main()
{
	/* Variable that stay in memory */
	static int count = 1;

	printf("%d", count++);

	main();
}
