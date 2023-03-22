#include <stdio.h>

#define SUMARRAY(arr, len) \
	int sum = 0; \
	for (int i = 0; i < len; ++i) { \
		printf("%d ", arr[i]); \
		sum += arr[i]; \
	} \
	puts(""); \
	printf("The sum is: %d\n", sum);				\


/**
 * main - (Totaling an Array’s Contents)
 *
 * Return: 0 if is success
 */
int main(void)
{
	int array1[4] = {5, 1, 2, 3};

        SUMARRAY(array1, 4);

	return (0);
}
