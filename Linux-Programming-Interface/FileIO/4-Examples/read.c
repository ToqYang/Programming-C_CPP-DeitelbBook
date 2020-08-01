#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define CHAR_MAX 30


/**
 * main - Read Function
 *
 * Return: Success Posix
 */
int main(void)
{
	ssize_t bytes = 0;
	char buffer[CHAR_MAX];

	if ((bytes = read(STDIN_FILENO, buffer, CHAR_MAX)) == -1)
		fprintf(stderr, "This can't read\n");

	buffer[bytes] = '\0';
	printf("%s", buffer);

	return (EXIT_SUCCESS);
}
