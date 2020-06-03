#include <stdio.h>

size_t linear_search(const int array[], int key, size_t size);

int main(void)
{
	int elem[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("Search Key: 8\nIndex = %ld\n",
	       linear_search(elem, 8, 10 - 1));

	return (0);
}



/**
 * linear_search - search linear based in the key
 * @array: (int *) Contain all nums
 * @key: (int) Num to search
 * @size: (int) Length of the array
 *
 * Return: Index or otherwise -1
 */
size_t linear_search(const int array[], int key, size_t size)
{
	if (size == 0)
		return (-1);

	if (array[size] == key)
		return (size);

	return (linear_search(array, key, --size));
}
