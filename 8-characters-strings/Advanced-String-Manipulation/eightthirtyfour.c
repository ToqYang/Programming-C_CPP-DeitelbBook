#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUFFER 100

void get_string(char *text, int size);
int idx_ocurrence(char txt[], int a);

/**
 * main - (Writing the Word Equivalent of a Check Amount)
 *        FIFTY TWO and 43/100
 *        [1-99].[0-9Infinite]
 *
 * Return: 0 if is success
 */
int main(void)
{
	const char *tens[] = {"TEN", "TWENTY", "THIRTY", "FOURTY", "FIFTY",
			      "SIXTY", "SEVENTY", "EIGHTY", "NINETY"};
	const char *units[] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE",
			       "SIX", "SEVEN", "EIGHT", "NINE"};
	char text[BUFFER];
	int countZero = 1, j = 0, idx = 0, idx2 = 0, leftZero = 0;

	memset(text, '\0', BUFFER);
	puts("Enter the number 1-99.0-9");
	get_string(text, BUFFER);

	if ((isdigit(text[0]) && text[0] != '0') && isdigit(text[1])) {
		idx = (text[0] - '0') - 1;
		idx2 = (text[1] - '0');
		printf("%c\n", text[0]);
		printf("%s %s and ", tens[idx], units[idx2]);
	} else {
		if (text[0] == '0' && isdigit(text[1]))
			leftZero = 1;

		idx = (text[leftZero] - '0');
		printf("%s and ", units[idx]);
	}

	if ((j = idx_ocurrence(text, '.')) == -1)
		return (1);

	for (; text[j] != '\0'; ++j) {
		printf("%c", text[j]);
		countZero *= 10;
	}
	printf("/%d\n", countZero);


	       return (0);
}


/**
 * idx_ocurrence -  Index of the First Occurrence
 * @txt: (Char *) String with Text to Compare
 * @a: (int) Occurrence
 *
 * Return: Index of the Occurence Otherswise -1
 */
int idx_ocurrence(char txt[], int a)
{
	for (int i = 0; txt[i] != '\0'; ++i) {
		if (txt[i] == a)
			return (i + 1);
	}

	return (-1);
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
