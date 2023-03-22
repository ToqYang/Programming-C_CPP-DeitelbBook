#include <stdio.h>
#include <string.h>

#define SIZE 100

void get_string(char *text, int size);

/**
 * main - (Strings Ending with "tion")
 *
 * Return: 0 if is success
 */
int main(void)
{
	char text[100], *token = NULL, cmp[4] = {'t', 'i', 'o', 'n'};
	int c = 0;

	memset(text, '\0', SIZE);

	get_string(text, SIZE);

	token = strtok(text, " ");

	while (token != NULL) {
		int len = strlen(token) - 1;
		c = 0;

		for (int i = 0, j = 3; i < 4 || j >= 0; ++i) {
			if (token[len] != cmp[j]) {
				++c;
			}
			--len;
			--j;
		}

		if (c == 0)
			printf("%s\n", token);

		token = strtok(NULL, " ");
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
