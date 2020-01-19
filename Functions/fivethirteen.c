#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * a) 1 ≤ n ≤ 6
 * b) 100 ≤ n ≤ 1000
 * c) 0 ≤ n ≤ 19
 * d) 1000 ≤ n ≤ 2222
 * e) –1 ≤ n ≤ 1
 * f) –3 ≤ n ≤ 11
*/

/**
 * main -
 * Return: 0 If is success
 */
int main(void)
{
	/* Update value pseudo random */
	srand(time(0));

	/* Print  ranges function  end 
	 *  Ex:      1    rand()    6 */

	printf("Range: 1-6: %d", 1 + rand() % 6);	
	printf("\nRange: 100-1000: %d", 100 + rand() % 1000);	
	printf("\nRange: 0-19: %d", rand() % 19);	
	printf("\nRange: 1000-2222: %d", 1000 + rand() % 2222);	
	printf("\nRange: -1 - 1: %d", -1 + rand() % 1);	
	printf("\nRange: -3 - 11: %d\n", -3 + rand() % 11);

	return (0);
}
