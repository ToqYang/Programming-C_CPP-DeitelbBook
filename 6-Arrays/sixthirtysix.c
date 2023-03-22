#include <stdio.h>
#include <stdlib.h>


void print_backward(char *str, int size);


/**
 * main - (Print a String Backward) Recursion
 *
 * Return: 0 if is success
 */
int main(void)
{
	char myname[8] = "Santiago";

	print_backward(myname, 0);

	return (0);
}


/**
 * print_backward - In mode recursion print one string
 * @str: (char *) String with a message
 * @size: (int) Iterator of the string
 *
 */
void print_backward(char *str, int size)
{
	if (*(str + size) == '\0')
		return;

	print_backward(str, size + 1);
	printf("%c", str[size]);
}
