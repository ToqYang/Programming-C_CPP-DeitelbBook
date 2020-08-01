#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define BUFFER 100

int verify_err(int argc, char *argv[]);

/**
 * main - Command tee -a FILE
 *
 * Return: Success or Failed based in POSIX
 */
int main(int argc, char *argv[])
{
	int fd1 = 0, fd2 = 0;
	ssize_t readBytes = 0, writeBytes = 0;
	char txt[BUFFER];
	memset(txt, '\0', BUFFER);

	if (verify_err(argc, argv) == -1)
		return (EXIT_FAILURE);


	if ((fd1 = open(argv[1], O_RDONLY)) == -1) {
		fprintf(stderr,
			"cp: missing destination file operand after '%s'\nTry 'cp --help' for more information.\n", argv[1]);
		return (EXIT_FAILURE);
	}

	if ((fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY)) == -1) {
		fprintf(stderr, "cp: cannot stat '%s' %s\n", argv[2], strerror(errno));
		return (EXIT_FAILURE);
	}
	if ((readBytes = read(fd1, txt, BUFFER)) != -1) {
		txt[readBytes] = '\0';
		if ((writeBytes = write(fd2, txt, readBytes)) == -1) {
			fprintf(stderr, "This not copy: %s\n", strerror(errno));
			return (EXIT_FAILURE);
		}
	}

	if (close(fd1) == -1) {
		fprintf(stderr, "Close File: %s\n", strerror(errno));
		return (EXIT_FAILURE);
	}
	if (close(fd2) == -1) {
		fprintf(stderr, "Close File: %s\n", strerror(errno));
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}


int verify_err(int argc, char *argv[])
{
	if (argc == 1) {
		fprintf(stderr,
			"cp: missing file operand\nTry 'cp --help' for more information.");
		return (-1);
	}
	if (argc == 2) {
		fprintf(stderr,
			"cp: missing destination file operand after '%s'\n", argv[1]);
		return (-1);
	}
	return (0);
}
