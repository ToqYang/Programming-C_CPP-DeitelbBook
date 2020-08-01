#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAR_MAX 1000


/**
 * main - Prove lseek Function
 *        Read char pairs of a file
 * @argc: (int) Count Arguments
 * @argv: (char *[]) String Arguments
 *
 *
 * Return: Success or Fail POSIX
 */
int main(int argc, char *argv[])
{
	int fd1 = 0, fd2 = 0, count = 0;
	off_t pair = 0;
	ssize_t writeChar = 0, bytesRead = 0;
	char buffer[CHAR_MAX];
	if (argc != 3) {
		fprintf(stderr, "%s", "missing file operand\n");
		return (EXIT_FAILURE);
	}

	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY);

	if (fd1 == -1 || fd2 == -1) {
		fprintf(stderr, "Open: %s", strerror(errno));
		return (EXIT_FAILURE);
	}

	while ((bytesRead = read(fd1, buffer, 1))) {

		if (lseek(fd1, pair, SEEK_CUR) == -1) {
			fprintf(stderr, "LSEEK: %s: %s", strerror(errno), argv[1]);
			return (EXIT_FAILURE);

		}
		if ((writeChar = write(fd2, buffer, 1)) == -1) {
			fprintf(stderr, "Write: %s: %s", strerror(errno), argv[2]);
			return (EXIT_FAILURE);
		}

		count += 2;
	        pair = count;
	}

	if (close(fd1) == -1 || close(fd2) == -1) {
		fprintf(stderr, "Close Fail\n");
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
