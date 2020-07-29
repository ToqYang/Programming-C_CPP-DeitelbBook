#include <stdio.h>
#include <string.h>

#define SIZE 100

void get_string(char *text, int size);


/**
 * main - (Counting the Number of Words in a String)
 *
 * Return: 0 if is success
 */
int main(void)
{
	char text[SIZE], *token = NULL;
	int i = 0;

	memset(text, '\0', SIZE);

	puts("Enter the text");
	get_string(text, SIZE);

	token = strtok(text, " ");

	while (token != NULL) {
		++i;
		token = strtok(NULL, " ");
	}

	printf("\nNumber of words is: %d\n", i);

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
