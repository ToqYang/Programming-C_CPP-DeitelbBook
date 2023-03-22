#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100
#define SIZELIKE 20

void get_string(char *text, int size);
int vowels(const int c);

/**
 * main - (Counting Occurrences of Various Characters in a String)
 *
 * Return: 0 if is success
 */
int main(void)
{
	char text[SIZE];
	int vowel = 0, consonant = 0, digits = 0, spaces = 0;

	memset(text, '\0', SIZE);

	puts("Enter the text");
	get_string(text, SIZE);

	for (int i = 0; text[i] != '\0'; ++i) {
		if (isalpha(text[i])) {
			if (vowels(text[i])) {
				++vowel;
			} else {
				++consonant;
			}
		}

		if(isspace(text[i])) {
			++spaces;
		}

		if (isdigit(text[i])) {
			++digits;
		}
	}

	printf("\nThe word contain\nVowels = %d\nConsonants = %d\nDigits = %d\nSpaces = %d\n",
	       vowel, consonant, digits, spaces);

	return (0);
}


/**
 * vowels - Detect if a character is vowel
 * @c: (const int) Character to comparate
 *
 * Return: 1 if is success or 0 if not found nothing
 */
int vowels(const int c)
{
	int vow[10] = {65, 97, 69, 101, 73, 105, 79, 111, 85, 117};

	for (int i = 0; i < 10; ++i) {
		if (vow[i] == c)
			return (1);
	}

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
