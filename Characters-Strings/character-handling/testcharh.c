#include "characters.h"

/**
 * main - (Character Testing)
 *        Prove functionality all character handling
 *
 * Return: 0 if is success
 */
int main(void)
{

	printf("The character ' ': %s blank\n", is_blank(' ') ? "is a" : "is not a");
	printf("The character a: %s blank\n", is_blank('a') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character 1: %s digit\n", is_digit('1') ? "is a" : "is not a");
	printf("The character a: %s digit\n", is_digit('a') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character a: %s alpha\n", is_alpha('a') ? "is a" : "is not a");
	printf("The character #: %s alpha\n", is_alpha('#') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character -: %s alpa-num\n", is_alnum('-') ? "is a" : "is not a");
	printf("The character 1: %s alpa-num\n", is_alnum('1') ? "is a" : "is not a");
	printf("The character a: %s alpa-num\n", is_alnum('a') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character Z: %s hexa digit\n", is_xdigit('Z') ? "is a" : "is not a");
	printf("The character F: %s hexa digit\n", is_xdigit('F') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character a: %s lower\n", is_lower('a') ? "is a" : "is not a");
	printf("The character A: %s lower\n", is_lower('A') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character M: %s upper\n", is_upper('M') ? "is a" : "is not a");
	printf("The character m: %s upper\n", is_upper('m') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character M To lower: %c\n", to_lower('M'));
	printf("The character m To lower: %c\n", to_lower('m'));

	puts("\n\n");

	printf("The character s To upper: %c\n", to_upper('s'));
	printf("The character G To upper: %c\n", to_upper('G'));

	puts("\n\n");

	printf("The character \\n: %s space control\n", is_sspace('\n') ? "is a" : "is not a");
	printf("The character ' ': %s space control\n", is_sspace(' ') ? "is a" : "is not a");
	printf("The character \\f: %s space control\n", is_sspace('\f') ? "is a" : "is not a");
	printf("The character \\r: %s space control\n", is_sspace('\r') ? "is a" : "is not a");
	printf("The character \\t: %s space control\n", is_sspace('\t') ? "is a" : "is not a");
	printf("The character \\v: %s space control\n", is_sspace('\v') ? "is a" : "is not a");
	printf("The character F: %s space control\n", is_sspace('F') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character $: %s punctuation\n", is_punct('$') ? "is a" : "is not a");
	printf("The character #: %s punctuation\n", is_punct('#') ? "is a" : "is not a");
	printf("The character ,: %s punctuation\n", is_punct(',') ? "is a" : "is not a");
	printf("The character (: %s punctuation\n", is_punct('(') ? "is a" : "is not a");
	printf("The character [: %s punctuation\n", is_punct('[') ? "is a" : "is not a");
	printf("The character {: %s punctuation\n", is_punct('{') ? "is a" : "is not a");
	printf("The character .: %s punctuation\n", is_punct('.') ? "is a" : "is not a");
	printf("The character ;: %s punctuation\n", is_punct(';') ? "is a" : "is not a");
	printf("The character p: %s punctuation\n", is_punct('p') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character A: %s print character\n", is_print('A') ? "is a" : "is not a");
	printf("The character \\t: %s print character\n", is_print('\t') ? "is a" : "is not a");

	puts("\n\n");

	printf("The character Q: %s other than space\n", is_graph('Q') ? "is a" : "is not a");
	printf("The character ' ': %s other than space\n", is_graph(' ') ? "is a" : "is not a");

	return (0);
}
