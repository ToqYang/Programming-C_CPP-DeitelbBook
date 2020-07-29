#include <stdio.h>
#include <string.h>

#define SIZE 100
#define SIZELIKE 20

void get_string(char *text, int size);

/**
 * main - (Counting the Occurrences of a Substring)
 *
 * Return: 0 if is success
 */
int main(void)
{
	char text[SIZE], like[SIZELIKE], *searchptr = NULL;
	int count = 0;

	memset(text, '\0', SIZE);
	memset(like, '\0', SIZELIKE);

	puts("Enter the text");
	get_string(text, SIZE);
	puts("Enter first letter about concurrence.");
	get_string(like, SIZELIKE);
	searchptr = strstr(text, like);

	/* Count Concurrences Until Find Null */
	while (searchptr != NULL) {
		searchptr = strstr(searchptr + 1, like);
		++count;
	}
	printf("There %d concurrences of %s\n", count, like);

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
