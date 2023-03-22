#include <stdio.h>


/**
 * main - (Printing  a  Question  Mark  as  a  Character  Constant)
 *        Print Only char ? or print \?
 *
 * Return: 0 if is success
 */
int main(void)
{
	char c = '?';

	printf("Character Constant: %c\n", (c == '\?') ? c : '\?');

	return (0);
}
