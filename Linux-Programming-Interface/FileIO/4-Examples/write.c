#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define CHAR_MAX 9


/**
 * main - Prove Write Function
 * @argc: (int) Count Arguments
 * @argv: (char *[]) String Arguments
 *
 * Return: Success Posix
 */
int main(int argc, char *argv[])
{
	int fd = 0;
	ssize_t writeChar = 0;
	char buffer[] = "Santiago\n";

	if (argc != 2) {
		fprintf(stderr, "%s", "missing file operand\n");
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_WRONLY | O_CREAT | O_EXCL, 0644);

	if (fd == -1)
		fprintf(stderr, "Open %s: %s", strerror(errno), argv[1]);

	if ((writeChar = write(fd, buffer, CHAR_MAX)) == -1)
	    fprintf(stderr, "Write: %s: %s", strerror(errno), argv[1]);

	if (close(fd) == -1)
		fprintf(stderr, "Close Fail\n");

	return (EXIT_SUCCESS);
}
