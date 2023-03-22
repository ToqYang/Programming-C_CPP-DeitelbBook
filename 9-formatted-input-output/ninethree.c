#include <stdio.h>

/**
 * main - Initial Exercises
 *
 * Return: 0 if is success
 */
int main(void)
{
	double number = 0.0, x = 87.4573, y = 87.4573;
	/* float percent = 0.0;
	   char string[6];
	   char c = 'a';
	   char n[100]; */
	long double g = 3.333333;

	/* A) Print 1234 Justified */
	printf("%10d\n", 1234);

	/* B) Print 123.456789 - 3 Precision and Sign */
	printf("%+.3e\n", -123.456789);
	printf("%+.3e\n", 123.456789);

	/* C) Scan and Prnt double Number */
	/* puts("Enter float.");
	   scanf("%lf", &number); */
	number = 1.5;
	printf("%lf\n", number);

	/* D) Print 100 in Octal with o */
	printf("%#o\n", 100);

	/* E) Read String */
	/* puts("Enter the STRING max 6");
	   scanf("%c%6s", &c, string);
	   printf("Char: %c with string %s", c, string); */

	/* F) Read Array Until Find a non-Digit
	scanf("%[^A-Z-a-z]", n);
	printf("%s\n", n);*/

	/* G) Example Width and Field double */
	printf("Field %.2lf\n", x);
	printf("Width %15lf\n", y);
	printf("Normal %lf\n", 87.4573);

	/* H) Read Percent Value
	puts("Enter Percentage");
	scanf("%f*", &percent);
	printf("%.1f%%\n", percent);
	*/

	/* I) Num with Sign and 20 Fields and 3 Width */
	printf("%20.3Lf\n", g);

	return (0);
}
