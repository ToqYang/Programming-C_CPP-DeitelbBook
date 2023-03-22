#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


/**
 * main - Complete task
 *        Attention it can generate seg fault because
 *        some function return Null
 *
 * Return: 0 if is success
 */
int main(void)
{
	char c = 'c';
	int x = 0, y = 0, z = 0;
	double d = 0, e = 0, f = 0;
	char *ptr = NULL;
	char s1[100], s2[100];
	char *str = "1.27 10.3 9.432";

	/* A) Convert to Uppercase */
	printf("%c\n", c - 32);

	/* B) Look if is Digit */
	printf("The char %s number\n", isdigit(c) ? "is a" : "is not a");

	/* C) Is Character Control? */
	printf("The char %s character control\n", iscntrl(c) ? "is a" : "is not a");

	/* D) Read Line Without scanf */
	puts("Enter your phrase: ");
	while ((x < (100 - 1)) && (c = getchar()) != '\n') {
		s1[x] = c;
		++x;
	}
	s1[x] = '\0';
	x = 0;

	/* E) Print Without printf */
	puts("\nThe phrase is");
	puts(s1);

	/* F) Locate last occurence */
	ptr = strrchr(s1, 'c');
	/* G) Same E */
	puts(ptr);

	/* H) Is a Letter?  */
	printf("\nThe char %s letter\n", isalpha(c) ? "is a" : "is not a");

	/* I) Read Character */
	c = getchar();

	/* J) Assing ptr First Occurrence of s2 in s1 */
	printf("%c\n", *strpbrk(s2, s1));

	/* K) Is Printing Character? */
	printf("The char %s printing character\n", isprint(c) ? "is a" : "is not a");

	/* L) Read doubles From String */
	d = strtod(str, &str);
	e = strtod(str, &str);
	f = strtod(str, &str);

	printf("\nString: 1.27 10.3 9.43: %lf\n%lf\n%lf\n", d, e, f);

	/* M) Copy the string s2 in s1 */
	strcpy(s2, s1);
	puts("S1 is.");
	puts(s1);

	puts("S2 is.");
	puts(s1);

	/* N) First Occurrence in s1 of s2 Any Character */
	ptr = strpbrk(s1, s2);
	puts(ptr);

	/* O) Compare String s1 and s2 */
	printf("\nThe string %s equal\n", strcmp(s1, s2) ? "is" : "is not");

	/* P) First Occurrence c in s1 */
	ptr = strrchr(s1, 'c');

	/* Q) Use sprintf */
	sprintf(s1, "1: %d\n2: %d\n3: %d\n", x, y, z);

	/* R) Concatenate s1 with s2 */
	printf("\nConcat: %s\n", strncat(s1, s2, 10));

	/* S) Length of array */
	printf("\n%ld\n", strlen(s1));

	/* T) First Token */
	puts("Put ,");
	sscanf(s2, "%s", s1);
	ptr = strtok(s2, ",");
	puts(ptr);

	return (0);
}
