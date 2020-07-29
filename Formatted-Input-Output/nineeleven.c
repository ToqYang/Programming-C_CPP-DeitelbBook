#include <stdio.h>


/**
 * main - (Escape Sequences)
 *        Print the work Sequences
 *
 * Return: 0 if is success
 */
int main(void)
{
	printf("\\': \'\n");
	printf("\\\": \"\n");
	printf("\\?: \?\n");
	printf("\\\\: \\\\ \n");
	printf("\\a: \a\n");
	printf("\\b: BackSpace\b---\n");
	printf("\\n: Before Line\nNew Line\n");
	printf("                      \\r: Likely lseek to 0\r Carriage return\n");
	printf("\\t: Text Before\t Text After\n");

	return (0);
}
