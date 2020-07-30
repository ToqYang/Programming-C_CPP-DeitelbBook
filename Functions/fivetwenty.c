#include <stdio.h>


void rectangle(int a, int b, char character);


/**
 * main - Show geometrical shapes
 * Return: 0 if is success
 */
int main(void)
{
	int side1 = 0, side2 = 0;
	char fillCharacter = '*';

	puts("Enter the side 1.");
	scanf("%d", &side1);

	puts("Enter the side 2.");
	scanf("%d", &side2);

	puts("Enter the character");
	scanf(" %c", &fillCharacter);

	rectangle(side1, side2, fillCharacter);

	return (0);
}



/**
 * rectangle - Print the geometrical shapes
 * @a: y
 * @b: x
 * @character: (char) Character
 *
 */
void rectangle(int a, int b, char character)
{
	for (int y = 1; y <= a; ++y)
	{
		for (int x = 1; x <= b; ++x)
			putchar(character);

		putchar(10);
	}
}
