#include <stdio.h>
#include <string.h>

#define SIZE 100
#define SIZEW 50

void get_string(char *text, int size);


/**
 * main - (Removing a Particular Word From a Given Line of Text)
 *
 * Return: 0 if is success
 */
int main(void)
{
	char text[SIZE], text2[SIZE], word[SIZEW], *token = NULL;
	int i = 0;

	memset(text, '\0', SIZE);
	memset(word, '\0', SIZEW);
	memset(text2, '\0', SIZE);

	puts("Enter the text");
	get_string(text, SIZE);
	puts("\nEnter the word to delete");
	get_string(word, SIZEW);
	puts("");

	token = strtok(text, " ");

	while (token != NULL) {
		if (!strcmp(token, word)) {
			++i;
		} else {
			strcpy(text2, token);
		}

		token = strtok(NULL, " ");
	}

	puts("The text is.");
	puts(text2);
	printf("\nDelete %d words\n", i);

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

