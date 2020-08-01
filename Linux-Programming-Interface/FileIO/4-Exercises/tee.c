 #include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define BUFFER 100

/**
 * main - Command tee -a FILE
 *
 * Return: Success or Failed based in POSIX
 */
int main(int argc, char *argv[])
{
	int opt = 0, optflag = 0, fd = 0, minFile = 0, finish = 1;
	ssize_t readBytes = 0, writeBytes = 0;
	char txt[BUFFER];
	memset(txt, '\0', BUFFER);
	printf("%s", txt);

	while ((opt =  getopt(argc, argv, "a")) != -1) {

		switch (opt)
		{
		case 'a':
			optflag = 1;
			break;
		case '?':
			fprintf(stderr, "Unrecognized Argument: %s\n", optarg);
			return (EXIT_FAILURE);
		default:
			fprintf(stderr, "Unexpected Error\n");
			return (EXIT_FAILURE);
		}
	}

	if (optflag == 0) {
		fprintf(stderr, "missing: %s %s\n", "-a", "<FILE>");
		return (EXIT_FAILURE);
	}

	while (finish && optflag == 1) {
		if (optind != argc) {
			char *file = argv[optind];
			if ((fd = open(file, O_RDWR | O_CREAT | O_APPEND, 0644)) == -1) {
				fprintf(stderr, "Open\n");
				return (EXIT_FAILURE);
			}

			if ((readBytes = read(STDIN_FILENO, txt, BUFFER)) == -1) {
				fprintf(stderr, "Read\n");
				return (EXIT_FAILURE);
			} else
				fprintf(stdout, "%s", txt);

			if ((writeBytes = write(fd, txt, readBytes)) == -1) {
				fprintf(stderr, "Write\n");
				return (EXIT_FAILURE);
			}

			if (close(fd) == -1) {
				fprintf(stderr, "Close\n");
				return (EXIT_FAILURE);
			}
			++minFile;
		} else if (minFile == 0) {
			fprintf(stderr, "Missing File\n");
			return (EXIT_FAILURE);
		} else
			finish = 0;
	}
	return (EXIT_SUCCESS);
}
