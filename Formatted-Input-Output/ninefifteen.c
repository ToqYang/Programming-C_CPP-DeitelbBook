#include <stdio.h>


/**
 * main - (Reading Strings in Quotes)
 *
 * Return: 0 if is success
 */
int main(void)
{
	char str1[10], str2[10], str3[10];
	puts("Read suzy,\"suzy\" and 'suzy'");
	fflush(stdout);
	scanf("%s%*c", str1);
	fflush(stdin);
	scanf("%*c%[^\"]s%*c", str2);
	fflush(stdin);
	/* It Works Lonely Bugs With scanf */
	scanf("%*c%[^\']s", str3);

	printf("suzy: %s\n\"suzy\": %s\n\'suze\': %s", str1, str2, str3);

	return (0);
}
