#include <stdio.h>


void print_array(char *str, int size);


/**
 * main - (Print an Array) Recursion
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        char myname[8] = "Santiago";

        print_array(myname, 7);

        return (0);
}


/**
 * print_array - In mode recursion
 * @str: (char *) String with a message
 * @size: (int) Size of the string without the NULL
 *
 */
void print_array(char *str, int size)
{
        if (size == -1)
                return;

        print_array(str, size - 1);
        printf("%c", str[size]);
}
