#include <stdio.h>
#include <string.h>

#define SIZE 100


void rev_sen(char *w, int size);


/**
 * main - (Displaying a Sentence with Its Words Reversed)
 *        Tokenize and revert word
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
	char text[SIZE];
	char c = 'p';
	char *tok = NULL;
	int k = 0;

	memset(text, '\0', 100);

	while ((k < SIZE) && ((c = getchar()) != '\n')) {
		text[k++] = c;
	}
	text[k] = '\0';

	tok = strtok(text, " ");

	while (tok != NULL) {
		if (strlen(tok) >= 2) {
			rev_sen(tok, strlen(tok));
			printf(" ");
		} else {
			printf("%s ", tok);
		}

		tok = strtok(NULL, " ");
	}
	puts("");

	return (0);
}


/**
 * rev_sen  - Print a reverse sentence
 * @w: (char *) Contain the string with the word
 * @size: (int) Length of the array
 *
 */
void rev_sen(char *w, int size)
{
	for (int i = size - 1; i >= 0; --i) {
		printf("%c", w[i]);
	}
}
