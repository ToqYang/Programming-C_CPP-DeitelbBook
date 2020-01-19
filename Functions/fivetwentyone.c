#include <stdio.h>

void print(int a, int b, char character);
void sqr_rect(int a, int b, char character);
void trapeze(int a, char character);
void triangle(int a, char character);
void rhombus(int a, char character);

/**
 * (Project: Drawing Shapes with Characters) 
 *
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

	puts("Enter the character.");
	scanf(" %c", &fillCharacter);
	
	
	print(side1, side2, fillCharacter);

	return (0);
}

/**
 * print - Print the geometrical shapes
 * @a: y position 
 * @b: x position
 * @character: Filling character
 */
void print(int a, int b, char character)
{
	putchar(10);

	sqr_rect(a, b, character);
	trapeze(a, character);
	triangle(a, character);
	rhombus(a, character);
}

/**
 * sqr_rect - Print square and rectangle shape about sides
 * @a: y position
 * @b: x position
 * @character: Filling character
 */
void sqr_rect(int a, int b, char character)
{
        /** Print Square or Rectangle
         *  1 loop: Calculate columns
         *
         *      1 nested loop: Rows of the square
         */
        for (int y = 1; y <= a; ++y)
        {
                for (int x = 1; x <= b; ++x)
                        putchar(character);

                putchar(10);
        }
        printf("-----------------------------\n");
}

/**
 * trapeze - Print the trapeze shape
 * @a: y position
 * @character: Filling character
 */
void trapeze(int a, char character)
{
	/** Print trapeze
         *  1 loop: Calculate the columns
         *
         *      1 nested loop: Calculate the spaces
         *      Decrease the spaces
         *      2 nested loop: Calculate the rows and Print the characters
         * */
 
	int spaces = a;
	
	for (int y = 1; y <= a; ++y)
        {
                for (int j = 1; j <= spaces; ++j)
                        putchar(32);

                spaces--;

                for (int x = 1; x <= a; ++x)
                {
                        putchar(character);
                        putchar(32);
                }
                putchar(10);

        }
        printf("-----------------------------\n");
}

/**
 * triangle - Print the triangle shape
 * @a: y position
 * @character: Filling character
 */
void triangle(int a, char character)
{
	/** Print triangle
         *  1 loop: Calculate te columns
         *
         *      1 nested loop: Calculate the spaces
         *      Decrease the loops
         *      2 nested loop: Calculate the rows based in the columns
         */

        int spaces = a;

        for (int i = 1; i <= a; ++i)
        {
                for (int j = 1; j <= spaces; ++j)
                        putchar(32);

                spaces--;

                for (int x = 1; x <= i; ++x)
                {
                        putchar(character);
                        putchar(32);
                }
                putchar(10);

        }
        printf("-----------------------------\n");
}

/**
 * rhombus - Print the rhombus shape
 * @a: y position 
 * @character: Filling character
 */
void rhombus(int a, char character)
{
	/** Print triangle
         *  1 loop: Calculate te columns
         *
         *      1 nested loop: Calculate the spaces
         *      Decrease the loops
         *      2 nested loop: Calculate the rows based in the columns
         */
      
	int spaces = a;

        for (int i = 1; i <= a; ++i)
        {
                for (int j = 1; j <= spaces; ++j)
                        putchar(32);

                spaces--;

                for (int x = 1; x <= i; ++x)
                {
                        putchar(character);
                        putchar(32);
                }
                putchar(10);

        }
        printf("-----------------------------\n");
}
