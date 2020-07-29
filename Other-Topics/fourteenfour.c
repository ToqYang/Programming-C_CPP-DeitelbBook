#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int len);
void choose_opt(int len, int array[len], char *argv[]);
void swap(int *a, int *b);

/**
 * main - (Sorting Integers)
 *        -d: Descend; -a: Ascend
 * @argc: (int) Length of the arguments
 * @argv: (char *) Variable of arguments
 *
 * Return: 0 if is success
 */
int main(int argc, char *argv[])
{
	int *arr = NULL, length = 0;
	size_t siz = 0;

	if (argc < 4) {
		exit(EXIT_FAILURE);
	}

	siz = (argc - 2) * sizeof(int);

	arr = malloc(siz);

	if (!arr)
		exit(EXIT_FAILURE);

	length = argc - 2;
	for (int i = 0, j = 2; i < length; ++i, ++j) {
		arr[i] = atoi(argv[j]);
	}

	choose_opt(length, arr, argv);

	free(arr);
	arr = NULL;

	exit(EXIT_SUCCESS);
}


/**
 * choose_opt - Look if the order is ascend or descend
 * @array:(int) Array of the numbers
 * @argv: (char *) Variable of arguments
 *
 */
void choose_opt(int len, int array[len], char *argv[])
{
	void ascend(int length, int tosort[length]);
	void descend(int length, int tosort[length]);

	if (argv[1][1] == 'a')
		ascend(len, array);
	if (argv[1][1] == 'd')
		descend(len, array);
}


/**
 * ascend - Sort in ascend
 * @tosort: (int *) Array to sort
 *
 */
void ascend(int length, int tosort[length])
{
	/* Size Of Array / Size Of Data Type */
	int len = length;

	for (int i = 0; i < (len - 1); ++i) {
		if (tosort[i] > tosort[i + 1]) {
			swap(&tosort[i], &tosort[i + 1]);
		}
	}

	print_arr(tosort, len);
}


/**
 * descend - Sort in descend
 * @tosort: (int *) Array to sort
 *
 */
void descend(int length, int tosort[length])
{
	/* Size Of Array / Size Of Data Type */
	int len = length;

	for (int i = 0; i < (len - 1); ++i) {
		if (tosort[i] < tosort[i + 1]) {
			swap(&tosort[i], &tosort[i + 1]);
		}
	}

	print_arr(tosort, len);
}


/**
 * swap - Exchange values
 * @a: (int) Value a
 * @b: (int) Value b
 *
 */
void swap(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}


/**
 * print_arr - Print the array
 * @arr: (int *) Array to print
 * @len: Length of the array
 *
 */
void print_arr(int *arr, int len)
{
	puts("Array");
	for (int i = 0; i < len; ++i) {
		printf("%d ", arr[i]);
	}
	putchar(10);
}
