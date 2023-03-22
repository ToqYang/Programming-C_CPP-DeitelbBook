#include "characters.h"


/**
 * is_blank - Find if is a Blank Character
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_blank(int c)
{
	return ((c == 32 || c == 9) ? 1 : 0);
}


/**
 * is_digit - Find if is a Digit
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_digit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}


/**
 * is_alpha - Find if is a Alpha
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_alpha(int c)
{
	return (((c >= 65 || c >= 97) && (c <= 90 || c <= 122)) ? 1 : 0);
}


/**
 * is_alnum - Find if is a Alpha-Numeric
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_alnum(int c)
{
	return ((is_digit(c) && is_alpha(c) ? 1 : 0));
}


/**
 * is_xdigit - Find if is a hexadecimal digit
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_xdigit(int c)
{
	return (((c >= 65 || c >= 70) || (c <= 90 || c <= 102)
		 || is_digit(c)) ? 1 : 0);
}


/**
 * is_lower - Find if is a Lowercase
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_lower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);
}


/**
 * is_upper - Find if is a uppercase
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_upper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}


/**
 * to_lower - Convert to Lower
 * @c: (int) Character in ASCII
 *
 * Return: Character in ASCII lower or unchanged character
 */
int to_lower(int c)
{
	return ((is_lower(c)) ? c : (c += 32));
}


/**
 * to_upper - Convert to Upper
 * @c: (int) Character in ASCII
 *
 * Return: Character in ASCII upper or unchanged character
 */
int to_upper(int c)
{
	return ((is_upper(c)) ? c : (c -= 32));
}


/**
 * is_sspace - Find if is a Space
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_sspace(int c)
{
	return ((c >= 9 && c <= 13) ? 1 : 0);
}


/**
 * is_cntrl - Find if is a Character Control
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_cntrl(int c)
{
	return ((c >= 7 || c <= 13) ? 1 : 0);
}


/**
 * is_punct - Find if is a Puntuaction Character
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_punct(int c)
{
	return ((is_print(c) && is_alnum(c) == 0) ? 1 : 0);
}


/**
 * is_print - Find if is a Printing Character
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_print(int c)
{
	return ((c >= 32 && c <= 126) ? 1 : 0);
}


/**
 * is_graph - Find if is a Printing Character More One Space
 * @c: (int) Character in ASCII
 *
 * Return: 1 if is true, otherswise 0
 */
int is_graph(int c)
{
	return ((c >= 33 && c <= 126) ? 1 : 0);
}
