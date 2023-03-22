#include <stdio.h>

/**
 * main - Exercises About Format
 *
 * Return: 0 if is success
 */
int main(void)
{
	/* unsigned int hex = 0;
	   char s[10];
	   int h = 0, m = 0, s = 0; */
	char f[100];

	/* A) Left Justified */
	printf("%-15.8u\n", 40000);

	/* B) Read Hexadecimal
	puts("Enter Hexa");
	scanf("%X", &hex);
	printf("Normal %u\n", hex);*/

	/* C) Print only 200 */
	printf("%d\n", 200);

	/* D) 100 Hex With 0 */
	printf("%#X\n", 100);

	/* E) Read Until Find P
	scanf("%[^p]10s", s);
	printf("%10s\n", s);*/

	/* F) Print 1.234 9 Fields */
	printf("%9.3f\n", 1.234);

	/* G) Scanf hh:mm:ss
	scanf("%d%*c%d%*c%d", &h, &m, &s);
	printf("%d:%d:%d\n", h, m, s); */

	/* H) Read "Characters"
	puts("Enter the phrase");
	scanf("%*c%[^\"]s", f);
	printf("%s\n",f); */

	/* I) Same G but with strtok :/ */

	return (0);
}
