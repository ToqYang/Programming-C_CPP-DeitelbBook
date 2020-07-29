#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

void get_string(char *text, int size);

/**
 * main - (Printing Letters for Various ASCII Codes)
 *
 * Return: 0 if is success
 */
int main(void)
{
	char text[SIZE];
	int i = 0;

	memset(text, '\0', SIZE);

	do {
		get_string(text, SIZE);
		i = atoi(text);

		putchar(i);
		putchar(10);
	} while (i != -1);

	return (0);
}


/**
 * get_string - Get a array of chars
 * @text: (char *) Char to Store Information
 * @size: (int) Size of the array
 */
void get_string(char *text, int size)
{
	char c = 'p';
	int k = 0;

	/* Get the Text */
	while ((k < size) && ((c = getchar()) != '\n')) {
		text[k++] = c;
	}
	text[k] = '\0';
}
