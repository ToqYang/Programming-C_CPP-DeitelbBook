#include <stdio.h>
#include <string.h>


/**
 * main - (Concatenating Strings)
 *
 * Return: 0 if is success
 */
int main(void)
{
	char s1[100], s2[100];

	puts("Enter the string");
	scanf("%99s", s1);
	puts("Enter the string");
	scanf("%99s", s2);

	strcat(s1, s2);

	puts(s1);

	return (0);
}
