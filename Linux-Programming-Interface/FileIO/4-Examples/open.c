#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


/**
 * main - Open a File
 *
 * Return: Success Posix
 */
int main(int argc, char *argv[])
{
	int fd = 0;

	if (argc != 2) {
		fprintf(stderr, "%s", "touch: missing file operand\n");
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_CREAT | O_EXCL, 0644);

	if (fd == -1)
		fprintf(stderr, "%s: %s", strerror(errno), argv[1]);

	if (close(fd) == -1)
		fprintf(stderr, "Close\n");

	return (EXIT_SUCCESS);
}
