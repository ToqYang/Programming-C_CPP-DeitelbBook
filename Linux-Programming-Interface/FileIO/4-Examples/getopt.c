#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * main - Proves How getopt Works
 * @argc: (int) Count Arguments
 * @argv: (char *[]) String Arguments
 *
 * Return: Success or Final POSIX
 */
int main(int argc, char *argv[])
{
	int opt = 0, xflag = 0, yflag = 0, zflag = 0;

	while ((opt = getopt(argc, argv, "a:bc")) != -1) {
		switch(opt)
		{
		case 'a':
			xflag = 1;
			break;
		case 'b':
			yflag = 1;
			break;
		case 'c':
			zflag = 1;
			break;
		case '?':
			if (optopt == 'a')
				fprintf(stderr, "Option %c need Argument\n", optopt);
			else
				fprintf(stderr, "Inespecific Character\n");

			return (EXIT_FAILURE);
		default:
			fprintf(stderr, "Put Options\n");
		}
	}

	printf("xflag=%d yflag=%d zflag=%d\n", xflag, yflag, zflag);

	return (EXIT_SUCCESS);
}
