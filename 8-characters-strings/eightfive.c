#include <stdio.h>
#include <ctype.h>


/**
 * main - (Character Testing)
 *        Prove functionality all character handling
 *
 * Return: 0 if is success
 */
int main(void)
{

	printf("The character ' ': %s blank\n", isblank(' ') ? "is a" : "is not a");
	printf("The character a: %s blank\n", isblank('a') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character 1: %s digit\n", isdigit('1') ? "is a" : "is not a");
	printf("The character a: %s digit\n", isdigit('a') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character a: %s alpha\n", isalpha('a') ? "is a" : "is not a");
	printf("The character #: %s alpha\n", isalpha('#') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character -: %s alpa-num\n", isalnum('-') ? "is a" : "is not a");
	printf("The character 1: %s alpa-num\n", isalnum('1') ? "is a" : "is not a");
	printf("The character a: %s alpa-num\n", isalnum('a') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character Z: %s hexa digit\n", isxdigit('Z') ? "is a" : "is not a");
	printf("The character F: %s hexa digit\n", isxdigit('F') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character a: %s lower\n", islower('a') ? "is a" : "is not a");
	printf("The character A: %s lower\n", islower('A') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character M: %s upper\n", isupper('M') ? "is a" : "is not a");
	printf("The character m: %s upper\n", isupper('m') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character M To lower: %c\n", tolower('M'));
	printf("The character m To lower: %c\n", tolower('m'));

	puts("\n\n");

	printf("The character s To upper: %c\n", toupper('s'));
	printf("The character G To upper: %c\n", toupper('G'));

	puts("\n\n");

	printf("The character \\n: %s space control\n", isspace('\n') ? "is a" : "is not a");
	printf("The character ' ': %s space control\n", isspace(' ') ? "is a" : "is not a");
	printf("The character \\f: %s space control\n", isspace('\f') ? "is a" : "is not a");
	printf("The character \\r: %s space control\n", isspace('\r') ? "is a" : "is not a");
	printf("The character \\t: %s space control\n", isspace('\t') ? "is a" : "is not a");
	printf("The character \\v: %s space control\n", isspace('\v') ? "is a" : "is not a");
	printf("The character F: %s space control\n", isspace('F') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character $: %s punctuation\n", ispunct('$') ? "is a" : "is not a");
	printf("The character #: %s punctuation\n", ispunct('#') ? "is a" : "is not a");
	printf("The character ,: %s punctuation\n", ispunct(',') ? "is a" : "is not a");
	printf("The character (: %s punctuation\n", ispunct('(') ? "is a" : "is not a");
	printf("The character [: %s punctuation\n", ispunct('[') ? "is a" : "is not a");
	printf("The character {: %s punctuation\n", ispunct('{') ? "is a" : "is not a");
	printf("The character .: %s punctuation\n", ispunct('.') ? "is a" : "is not a");
	printf("The character ;: %s punctuation\n", ispunct(';') ? "is a" : "is not a");
	printf("The character p: %s punctuation\n", ispunct('p') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character A: %s print character\n", isprint('A') ? "is a" : "is not a");
	printf("The character \\t: %s print character\n", isprint('\t') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character Q: %s other than space\n", isgraph('Q') ? "is a" : "is not a");
	printf("The character ' ': %s other than space\n", isgraph(' ') ? "is a" : "is not a");

	return (0);
}
