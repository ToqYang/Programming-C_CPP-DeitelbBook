#include <stdio.h>


/**
 * main - (Printing Command-Line Arguments)
 *
 * Return: 0 if is success
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; ++i) {
		printf("%s ", argv[i]);
	}
	putchar(10);

	return (0);
}
