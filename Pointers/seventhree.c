#include <stdio.h>
#define SIZE 10

/**
 * main - Basics about pointers
 *
 * Return: 0 if is success
 */
int main(void)
{
	/* A) */
	float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	/* B) */
	float *nPtr = numbers;

	/* C) */
	for (int i = 0; i < SIZE; ++i) {
		printf("arr[%d] = %.1f\n", i, numbers[i]);
	}
	puts("");

	/* D) */
	nPtr = numbers;
	nPtr = &numbers[0];

	/* E) Pointer/Offset Arimethic */
	for (int i = 0; i < SIZE; ++i) {
		printf("*(nPtr + [%d]) = %.1f\n", i, *(nPtr + i));
	}
	puts("");

	/* F) Pointer/Offset Array Pointer */
	for (int i = 0; i < SIZE; ++i) {
		printf("*(numbers + [%d]) = %.1f\n", i, *(numbers + i));
	}
	puts("");

	/* G) Pointer how array */
	for (int i = 0; i < SIZE; ++i) {
		printf("nPtr[%d] = %.1f\n", i, nPtr[i]);
	}
	puts("");

	/* H) Refer 4 element with before options */
	printf("arr[4] = %.1f\n", numbers[4]);
	printf("*(numbers + 4) = %.1f\n", *(numbers + 4));
	printf("arr[4] = %.1f\n", nPtr[4]);
	printf("*(nPtr + 4) = %.1f\n", *(nPtr + 4));
	puts("");

	/* I) */
	nPtr = &numbers[8];
	printf("(%p) = *nPtr + 8 = %.1f\n",
	       (void *)nPtr, *nPtr);

	/* J) */
	nPtr = &numbers[5];
	printf("(%p) = nPtr[5 - 4] = %.1f\n",
	       (void *)nPtr, *(nPtr - 4));
	puts("");

	return (0);
}
