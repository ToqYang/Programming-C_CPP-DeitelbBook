#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER 100
void get_string(char *text, int size);

/**
 * main - (Check Protection)
 *        Write  a  program  that  inputs  a  dollar  amount  to  be  printed
 *        on  a  check  and  then  prints  theamount in check-protected format
 *        with leading asterisks if necessary. Assume that nine spaces
 *        areavailable for printing an amount.
 *
 * Return: 0 if is success
 */
int main(void)
{
	int len = 0;
	char text[BUFFER];

	memset(text, '\0', BUFFER);
	puts("Enter the number");
	get_string(text, BUFFER);

	if ((len = strlen(text)) > 9)
		return (1);

	int aster = 9 - len;

	for (int i = 0; i < aster; ++i) {
		putchar(42);
	}

	for (int i = 0; i < len; ++i) {
		if (isdigit(text[i])) {
			printf("%c", text[i]);
		} else if (ispunct(text[i])) {
			printf("%c", text[i]);
		}
	}
	puts("\n---------");

	for (int i = 1; i <= 9; ++i)
		printf("%d", i);
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
