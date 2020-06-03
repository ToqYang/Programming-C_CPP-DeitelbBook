#include <stdio.h>

/**
 * (Total Sales)
 * Salespeople send a slip with
 * a) The salesperson number
 * b) The product number
 * c) The total dollar value of that product sold that day
 *
 * main - Make a inform in tabular format
 * -------- SalesPeople
 * Product   1 2 3
 *    1
 *
 * Return: 0 If is success
 */
int main(void)
{
	int slip[3][4] = {{1,2,3,4},
			  {2,1,5,5},
			  {32,35,38,40}};

	int sales[5][4] = {0};

	for (size_t product = 0; product < 1; ++product) {
		for (size_t id = 0; id < 4; ++id) {
			/* Multiply the product * value of the product */
			int mul = slip[product + 1][id] * slip[product + 2][id];
			/*
			   Look index of the product and the configure to access
			   to access the index product of the sales and assign
			   the total value of sales to salespeople
			 */
			sales[slip[product+1][id - 1] - 1][id] = mul;
		}
	}

	puts("---------- Sales People");
	puts("---------- [1]  [2]  [3]  [4]");
	for (size_t i = 0; i < 5; i++) {
		printf("Product[%ld] ", i + 1);
		for (size_t j = 0; j < 4; j++) {
			printf("%3d  ", sales[i][j]);
		}
		puts("");
	}

	return (0);
}
