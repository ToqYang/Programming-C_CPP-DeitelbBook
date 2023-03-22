#include <stdio.h>

int kind_card(unsigned int *c, unsigned int *r);
int flush_card(unsigned int *r);
int straight_cards(unsigned int *c);

int main(void)
{
	unsigned int c[7] = {0, 5, 1, 3, 4, 0, 2};
	unsigned int r[7] = {0, 0, 0, 0, 0, 0, 0};

	for (int j = 0; j < 7; j++) {
		printf("[%d] = [%d][%d]\n", j, c[j], r[j]);
	}
	printf("Straight: %d\n", straight_cards(c));

	return (0);
}



/**
 * straight_cards - Detect a normal straight
 * @c: (int *) Array with the position cards
 *
 * Return: return 1 if the array is descend
 */
int straight_cards(unsigned int *c)
{
	int descend(unsigned int *c);
	int ascend(unsigned int *c);

	if (descend(c) && ascend(c)) {
		return (1);
	}
	return (0);
}


/**
 * descend - Look if the array is descend
 * @c: (int *) Array with the position cards
 *
 * Return: return 1 if the array is descend
 */
int descend(unsigned int *c)
{
	unsigned int max = c[0], times = 0;

	for (size_t i = 1; i < 7; ++i) {
		if (c[i] > max)
			max = c[i];
	}

	for (size_t i = 0; i < 7; i++) {
		if (max == c[i]) {
			++times;
			--max;
			i = 0;
		}
	}

	return ((times >= 5) ? 1 : 0);
}


/**
 * ascend - Look if the array is ascend
 * @c: (int *) Array with the position cards
 *
 * Return: return 1 if the array is ascend
 */
int ascend(unsigned int *c)
{
	unsigned int min = c[0], times = 0;

	for (size_t i = 1; i < 7; ++i) {
		if (c[i] < min)
			min = c[i];
	}

	for (size_t i = 0; i < 7; ++i) {
		if (min == c[i]) {
			++times;
			++min;
			i = 0;
		}
	}

	return ((times >= 5) ? 1 : 0);
}
