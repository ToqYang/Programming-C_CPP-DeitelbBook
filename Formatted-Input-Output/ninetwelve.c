#include <stdio.h>


/**
 * main - (Printing a Question Mark)
 *        I will look Wh uestion
 *
 * Return: 0 if is success
 */
int main(void)
{
	char str1[] = "What time is it";
	char str2[] = "Tell me a something";

	/* Detect if Put ? or New Line */
	printf("%s%c", str1, ('W' == str1[0] && 'h' == str1[1]) ? '?' : '\n');
	puts("");
	printf("%s%c", str2, ('W' == str2[0] && 'h' == str2[1]) ? '?' : '\n');

	return (0);
}
