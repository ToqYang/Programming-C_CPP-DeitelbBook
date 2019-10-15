#include <stdio.h>

/*
 * (ASCII Values) Write a program to convert and print the characters for the ASCII values
 * 0 to 127. The program should print 10 characters per line.
 */

/* 
 * main - Print the characters of the 0 at the 127
 * Return: 0 if is success
 */

int main(void)
{
	int line = 0, limit = 127;

	for ( ; line <= limit; ++line)
	{
		/* Print the character ascii */
		putchar(line);
		putchar(32);

		if (line % 10 == 0)
			putchar(10);

	}
	putchar(10);

	return (0);
}
