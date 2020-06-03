#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 20

int cmp_arr(int num, int arr[LENGTH]);
void print_arr(int array[LENGTH]);

/**
 * main - (Duplicate Elimination)
 *        Generate 20 random numbers between
 *        1-20 and store in a array the numbers
 *        non-duplicate
 *
 * Return: 0 if is success
 */
int main(void)
{
	int num = 0, i = 0;
	int arr[LENGTH] = {0};

	srand(time(0));

	while (i < 20) {
		num = 1 + rand() % 20;
		if (num <= 20 && num >= 0) {
			if (cmp_arr(num, arr) == 1)
				continue;
			arr[i] = num;
			++i;
		}
	}
	print_arr(arr);

	return (0);
}



/**
 * cmp_arr - Compare if inside a array is equal at the num
 * @num: (int) Number to compare
 * @arr: (int) Contiguos memory with numbers
 *
 * Return: 1 if there at least one equal or 0 ohterwise
 */
int cmp_arr(int num, int arr[LENGTH])
{
	int equal = 0;

	for (int i = 0; i < LENGTH; ++i) {
		if (num == arr[i])
			equal = 1;
	}

	return (equal);
}


/**
 * print_arr - Print contiguos memory location
 * @array: (int) Contiguos memory to print
 */
void print_arr(int array[LENGTH])
{
	for (int i = 0; i < LENGTH; ++i) {
		printf("%d ", array[i]);
	}
	puts("");
}
