#include <stdio.h>
#include <stddef.h>

void print_histogram(size_t size, int earnings[size]);

/**
 *  (Sales Commissions)
 *   Generate a counter of a range of
 *   different ranges of salaries
 * Return: 0 if is success
 */
int main(void)
{
	size_t size = 9;
	int earn = 0, total = 0;
	int range[9] = {0};

	do {
		total = 0;
		puts("How many are your earnings?");
		scanf("%d", &earn);

		total = ((earn * 9) / 100);
		total += 200;


		if (total >= 200 && total <= 299 && earn != -1) {
			range[0] += 1;
		} else if (total >= 300 && total <= 399) {
			range[1] += 1;
		} else if (total >= 400 && total <= 499) {
			range[2] += 1;
		} else if (total >= 500 && total <= 599) {
			range[3] += 1;
		} else if (total >= 600 && total <= 699) {
			range[4] += 1;
		} else if (total >= 700 && total <= 799) {
			range[5] += 1;
		} else if (total >= 800 && total <= 899) {
			range[6] += 1;
		} else if (total >= 900 && total <= 999) {
			range[7] += 1;
		} else if (total >= 1000) {
			range[8] += 1;
		} else {
			puts("Lowest earnings");
		}

	} while (earn != -1);

	print_histogram(size, range);

	return (0);
}

/**
 * print_histogram - Print with * the range
 * @size: (size_t) Lenght of the array
 * @earnings: (int)
 */
void print_histogram(size_t size, int earnings[size])
{
	int ranges = 200;

	puts("Ranges\tHistogram");
	for (size_t i = 0; i < size; i++) {
		if (i < 8)
			printf("%d - %d: ", ranges, ranges + 99);
		else
			printf("%d and over: ", ranges);
		ranges += 100;

		for (int j = 0; j < earnings[i]; j++) {
			putchar(42);
		}
		putchar(10);
	}
}
