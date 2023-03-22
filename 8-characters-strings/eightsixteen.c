#include <stdio.h>
#include <string.h>

#define SIZE 100
#define SIZELIKE 20

void get_string(char *text, int size);

/**
 * main - (Searching for Substrings)
 *        Something like cut command
 *
 * Return: 0 if is success
 */
int main(void)
{
	char text[SIZE], like[SIZELIKE], *searchptr = NULL;

	memset(text, '\0', SIZE);
	memset(like, '\0', SIZELIKE);

	get_string(text, SIZE);
	puts("Enter first letter about concurrence.");
	get_string(like, SIZELIKE);

	if ((searchptr = strstr(text, like)) != NULL) {
		memset(like, '\0', SIZELIKE);
		puts("Enter second letter about concurrence.");
		get_string(like, SIZELIKE);

		strcat(searchptr, strstr(searchptr + 1, like));
	}
	puts(searchptr);

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
