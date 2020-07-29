#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 26
#define BUFFER 100
#define WORDS 7

void get_string(char *text, int size);
void alphabet_times(const char *text);
void length_word(char text[]);
void count_words(char text[]);

/**
 * main - (Text Analysis)
 *
 * Return: 0 if is success
 */
int main(void)
{
	char txt[BUFFER];

	memset(txt, '\0', BUFFER);

	puts("Enter the text to analyze");
	get_string(txt, BUFFER);

	/*  A) Times of a Letter inside Text */
	alphabet_times(txt);
	/* B) Words Length 1-7 */
	length_word(txt);
	puts("--");
	/* C) Count the Words */
	count_words(txt);
	puts("");

	return (0);
}


/**
 * count_words - Count the Repetition of a Word
 * @text: (const char *): Ptr to original text to count letters
 *
 */
void count_words(char text[])
{
	char *word = NULL, *token = NULL;
	char *saveword1 = NULL, *saveword2 = NULL;
	char delim[] = " ,:.";
	int times[30] = {0};
	int i = 0;

	word = strtok_r(text, delim, &saveword1);
	puts("Word\tOccurrences");
	while ((word != NULL) && i < 30) {

		token = strtok_r(text, delim, &saveword2);
		while (token != NULL) {
			if (strcmp(word, token) == 0)
				times[i] += 1;
			token = strtok_r(text, delim, &saveword2);
		}
		printf("  %s\t%d\n", word, times[i]);
		++i;
		word = strtok_r(text, delim, &saveword1);
	}
}


/**
 * length_word - Find the Ocurrences of the Size 1-7
 * @text: (const char *): Ptr to original text to count the length
 *
 */
void length_word(char text[])
{
	char *token = NULL;
	char delim[] = " ,:.";
	int timeword[WORDS] = {0};

	token = strtok(text, delim);

	while (token != NULL) {
		int len = strlen(token);
		timeword[len - 1] += 1;

		token = strtok(text, delim);
	}

	puts("Word Length\tOccurences");
	for (int i = 0; i < WORDS; ++i) {
		printf("     %d\t\t     %d\n", (i + 1), timeword[i]);
	}
}


/**
 * alphabet_times - Find the concurrences of the letters of a text
 * @text: (const char *): Ptr to original text to count letters
 *
 */
void alphabet_times(const char *text)
{
	int alphabet[SIZE] = {0};
	char c = 'a';

	for (size_t i = 0; text[i] != '\0'; ++i) {
		c = text[i];
		if (isalpha(c)) {
			if(isupper(c))
				alphabet[c - 65] += 1;
			if (islower(c))
				alphabet[c - 97] += 1;
		}
	}

	puts("Letters\tOccurences");
	for (int i = 0; i < SIZE; ++i) {
		printf("    %c\t     %d\n", (i + 65), alphabet[i]);
	}
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
