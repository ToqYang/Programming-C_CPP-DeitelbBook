#include <stdio.h>

#define PRINTARRAY(arr, len)\
for (int i = 0; i < len; ++i)\
	printf("%d\n", arr[i]);

/**
 * main - (Printing an Array)
 *
 * Return: 0 if is success
 */
int main(void)
{
	int array1[4] = {5, 1, 2, 3};

	PRINTARRAY(array1, 4);

	return (0);
}
