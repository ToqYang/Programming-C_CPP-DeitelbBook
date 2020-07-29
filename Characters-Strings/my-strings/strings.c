#include "mystring.h"


/**
 * str_cmp: Compare two strings
 * @s1: (const char *) First String
 * @s2: (const char *) Second String
 *
 * Return: 0 if its equal or the difference of chracters
 */
int str_cmp(const char *s1, const char *s2)
{
	size_t i = 0;

	if (!s1 || !s2)
		return (-1);

	for (; s1[i] && s2[i]; ++i) {
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (s1[i] - s2[i]);
}


/**
 * strn_cmp: Compare two strings based in size
 * @s1: (const char *) First String
 * @s2: (const char *) Second String
 * @n: (size_t) Length to compare
 *
 * Return: 0 if its equal or the difference of chracters
 */
int strn_cmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;

	if (!s1 || !s2)
		return (-1);

	for (; i < n; ++i) {
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (s1[i] - s2[i]);
}


/**
 * str_cpy - Copy a string s2 inside s1
 * @s1: (char *) Destination
 * @s2: (const char *) Source
 *
 * Return: Pointer with the copy
 */
char *str_cpy(char *s1, const char *s2)
{
	size_t i = 0;

	for (; *(s2 + i); ++i) {
		s1[i] = s2[i];
	}
	s1[i] = '\0';

	return (s1);
}


/**
 * strn_cpy - Copy a string s2 inside s1 based in size
 * @s1: (char *) Destination
 * @s2: (const char *) Source
 * n: (int) Maximun to copy
 *
 * Return: Pointer with the copy
 */
char *strn_cpy(char *s1, const char *s2, size_t n)
{
	size_t i = 0;

	for (; i < n && *(s2 + i); ++i)
		s1[i] = s2[i];

	for (; i < n; ++i)
		s1[i] = '\0';

	return (s1);
}


/**
 * str_cat - Concatenate two strings
 * @s1: (char *) Destination
 * @s2: (const char *) Source
 *
 */
char *str_cat(char *s1, const char *s2)
{
	size_t i = str_len(s1), j = 0;

	for (; *(s2 + j) != '\0'; ++j)
		s1[i + j] = s2[j];
	s1[i + j] = '\0';

	return (s1);
}


/**
 * strn_cat - Concatenate two strings
 * @s1: (char *) Destination
 * @s2: (const char *) Source
 * n: (int) Maximun to copy
 *
 * Return: Pointer Concatenad
 */
char *strn_cat(char *s1, const char *s2, size_t n)
{
	size_t i = str_len(s1), j = 0;

	for (; i < n && *(s2 + j) != '\0'; ++j)
		s1[i + j] = s2[j];
	s1[i + j] = '\0';

	return (s1);
}


/**
 * str_len - Find the size length of a array
 * @s2: (const char *) Source
 *
 * Return: Length of the array
 */
size_t str_len(const char *s)
{
	size_t i = 0;

	for (; *(s + i) != '\0'; ++i)
		;

	return (i);
}
