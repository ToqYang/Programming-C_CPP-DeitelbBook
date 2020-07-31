#include <stdio.h>


int test_palindrome(char str[], int a, int b);


/**
 * main - (Palindromes)
 *        Detect palindromes with space and punctuation
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        char uno[5] = "radar";
        char dos[26] = "able was i ere i saw elba,";
        char tres[28] = "a man a plan a canal panama.";

        puts("Word: Radar");
        printf("%d\n", test_palindrome(uno, 0, 5 - 1));
        puts("Word: able was i ere i saw elba,");
        printf("%d\n", test_palindrome(dos, 0, 26 - 1));
        puts("Word: a man a plan a canal panama.");
        printf("%d\n", test_palindrome(tres, 0, 28 - 1));

        return (0);
}


/**
 * test_palindrome - Look if a string is palindrome
 * @str: (char []) Store the word or phrases
 * @a: (int) Start of the array
 * @b: (int) Length of the array
 *
 * Return: (int) 1 if is palindrome, otherwise 0
 */
int test_palindrome(char str[], int a, int b)
{
        if (str[a] == ',' || str[a] == '.' || str[a] == ' ')
                return (test_palindrome(str, ++a, b));
        else if (str[b] == ',' || str[b] == '.' || str[b] == ' ')
                return (test_palindrome(str, a, --b));
        else if (str[a] != str[b])
                return (0);
        else if (a == b)
                return (1);
        else
                return (test_palindrome(str, ++a, --b));
}
