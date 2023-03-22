#include "mystring.h"
#define SIZE1 25
#define SIZE2 15


/**
 * main - Tests my string functions
 *
 * Return: 0 if is success
 */
int main(void)
{
	char x[] = "Happy Birthday to You";
	char y[SIZE1];
	char z[SIZE2];

	char s1[20] = "Happy ";
	char s2[] = "New Year ";
	char s3[40] = "";

	const char *string1 = "abcdefghijklmnopqrstuvwxyz";
	const char *string2 = "four";
	const char *string3 = "Boston";

	const char *x1 = "Happy New Year";
	const char *x2 = "Happy New Year";
	const char *x3 = "Happy Holidays";

	puts("String Copy");
	printf("%s%s\n%s%s\n",
	       "The string in array x is: ", x,
	       "The string in array y is: ", str_cpy(y, x) );

	strn_cpy(z, x, SIZE2 - 1);
	z[SIZE2 - 1] = '\0';
	printf("The string in array z is: %s\n", z);
	puts("----------");

	puts("String Concatenate");
	printf("s1 = %s\ns2 = %s\n", s1, s2);
	printf("str_cat(s1, s2) = %s\n", str_cat(s1, s2));
	printf("strn_cat(s3, s1, 6) = %s\n", strn_cat(s3, s1, 6));
	printf("str_cat(s3, s1) = %s\n", str_cat(s3, s1) );
	puts("----------");


	puts("Length of a String");
	printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
	       "The length of ", string1, " is ", str_len(string1),
	       "The length of ", string2, " is ", str_len(string2),
	       "The length of ", string3, " is ", str_len(string3) );
	puts("----------");

	puts("String Comparing");
	printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
	       "s1 = ", x1, "s2 = ", x2, "s3 = ", x3,
	       "str_cmp(s1, s2) = ", str_cmp(x1, x2),
	       "str_cmp(s1, s3) = ", str_cmp(x1, x3),
	       "str_cmp(s3, s1) = ", str_cmp(x3, x1) );

	printf("%s%2d\n%s%2d\n%s%2d\n",
	       "strn_cmp(s1, s3, 6) = ", strn_cmp(x1, x3, 6),
	       "strn_cmp(s1, s3, 7) = ", strn_cmp(x1, x3, 7),
	       "strn_cmp(s3, s1, 7) = ", strn_cmp(x3, x1, 7) );
	puts("----------");

	return (0);
}
