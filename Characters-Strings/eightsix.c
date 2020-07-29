#include <stdio.h>
#include <ctype.h>
#define SIZE 100


/**
 * main - (Displaying Strings in Alternating Uppercase and Lowercase)
 *
 * Return: 0 if is success
 */
int main(void)
{
	char s[100];
	char c = 'c';
	int i = 0;

	/* Get the String */
	for ( ; (i < SIZE) && ((c = getchar()) != '\n'); ++i) {
		s[i] = c;
	}
	s[i] = '\0';

	for (int j = 0, i = 0; i < SIZE; ++i) {
		/* Look If is Alpha and Transform */
		if (isalpha(s[i])) {
			if (j % 2 == 0) {
				s[i] = toupper(s[i]);
				++j;
			} else {
				s[i] = tolower(s[i]);
				++j;
			}
		}
	}
	puts(s);


	return (0);
}
