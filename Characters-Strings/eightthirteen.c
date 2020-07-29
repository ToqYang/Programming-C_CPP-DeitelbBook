#include <stdio.h>
#include <string.h>

#define SIZE 100

void print_latin_word(char *w, size_t size);

/**
 * main - (Pig Latin)
 *        Translate English in PigLatin
 *
 * Return: 0 if is success
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
	puts("\nPig Latin.");

	while (tok != NULL) {
		if (strlen(tok) >= 2) {
			print_latin_word(tok, strlen(tok));
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
 * print_latin_word  - Print in Pig Latin
 * @w: (char *) Contain the string with the word
 *
 */
void print_latin_word(char *w, size_t size)
{
	char word[48];
	size_t j = 0;

	memset(word, '\0', 48);

	for (size_t i = 1; i < size; ++i, ++j) {
		word[j] = w[i];
	}


	word[j] = w[0];
	word[++j] = 'a';
	word[++j] = 'y';
	word[++j] = '\0';

	printf("%s", word);
}
