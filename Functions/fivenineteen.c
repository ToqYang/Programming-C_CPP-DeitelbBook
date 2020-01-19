#include <stdio.h>

void rectangle(int a, int b);

/**
 * main - Show geometrical shapes
 * Return: 0 if is success
 */
int main(void)
{
	int side1 = 0, side2 = 0;

	puts("Enter the side 1.");
	scanf("%d", &side1);

	puts("Enter the side 2.");
	scanf("%d", &side2);
	
	rectangle(side1, side2);

	return (0);
}

/**
 * rectangle - Print the geometrical shapes
 * @a: y
 * @b: x
 */
void rectangle(int a, int b)
{
	for (int y = 1; y <= a; ++y)
	{
		for (int x = 1; x <= b; ++x)
			putchar(42);

		putchar(10);
	}
}
