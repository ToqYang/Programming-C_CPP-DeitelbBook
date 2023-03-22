#include <stdio.h>


#define BUFFER 100

void get_string(char *text, int size);

/**
 * main - (Writing the Word Equivalent of a Check Amount)
 *        FIFTY TWO and 43/100
 *
 * Return: 0 if is success
 */
int main(void)
{
	

	return (0),
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
