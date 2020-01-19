#include <stdio.h>

int mystery(int a, int b); // function prototype

/**
 * main - Take two numbers and thegive at the function
 * Return: 0 If is success
 */
int main(void)
{
	printf("%s", "Enter two positive integers: ");
	// Delete unsigned 
	int x; // first integer
	int y; // second integer
	scanf("%u%u", &x, &y);

	printf("The result is %u\n", mystery(x, y));

	return (0);
} 

/**
 * mystery - Multiply the number a to b
 * @a: (int) Number base  
 * @b: (int) Number of time to sum the num a itself
 * Return: Result of the multiplication
 */
int mystery(int a, int b)
{ 
 	// base case
	if (1 == b) {
		return a;
	} 
	else { // recursive step
		return a + mystery(a, b - 1);
	} 
}
