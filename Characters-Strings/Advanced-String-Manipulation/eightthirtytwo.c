#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER 100

void get_string(char *text, int size);

/**
 * main - (Printing Dates in Various Formats)
 *        07/21/2003 and July 21, 2003
 *
 * Return: 0 if is success
 */
int main(void)
{
	char *token = NULL, text[BUFFER];
	char *month[] = {"January", "February", "March", "April", "May", "June",
			"July", "August", "September", "October", "November",
			"December"};
	char *saveptr = NULL;
	short int i = 0;
	int idx = 0;

	memset(text, '\0', BUFFER);
	puts("Enter your date");
	get_string(text, BUFFER);

	token = strtok_r(text, "/", &saveptr);
	idx = atoi(token);

	while (token != NULL) {

		if (i == 0) {
			printf("%s ", month[idx - 1]);
		} else if (i == 1) {
			printf("%s, ", token);
		} else {
			printf("%s ", token);
		}

		++i;
		token = strtok_r(NULL, "/", &saveptr);
	}
	putchar(10);

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
