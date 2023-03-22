#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

void print_latin_word(char *w, size_t size);

/**
 * main - (Tokenizing Telephone Numbers)
 *        Get token Area Code and 4 last Numbers phone
 *
 * Return: 0 if is success
 */
int main(void)
{

	char text[SIZE], num[4], *arcode = NULL, *txttoken = NULL, c = 'p';
	int k = 0, len = 0, area = 0;
	long int phone = 0;

	memset(text, '\0', 100);

	while ((k < SIZE) && ((c = getchar()) != '\n')) {
		text[k++] = c;
	}
	text[k] = '\0';
	k = 0;

	len = strlen(text);
	len -= 4;

	/* Tokenize Area Code */
	arcode = strtok(text, "(");
	arcode = strtok(arcode, ")");

	/* Tokenize 4 last digits */
	for (k = 0; k < 4; ++k) {
		num[k] = text[len];
		++len;
	}
	num[k] = '\0';

	area = atoi(arcode);
	phone = strtol(num, &txttoken, 10);

	puts("Area Code    Number");
	printf(" %d\t\t%ld\n", area, phone);

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
