#include <stdio.h>


unsigned long long int factorial(unsigned int number);


/**
 * main - Print the th factorial of determined numbers
 * Return: 0 if is success
 */
int main(void)
{
        puts("\tSteps to factorial 5!");
        puts("");

        for (unsigned int fact = 5, count = 10, rows = 0; fact > 0;
             --fact, ++rows, --count)
        {
                for (unsigned int j = 0; j <= rows; j++)
                        putchar(32);
                printf("Introdcing(%u)---- %llu -----(%u)RetResults\n",
                       rows + 1, factorial(fact), count);
        }

        return (0);
}




/* recursive definition of function factorial */

/**
 * factorial - Calculate the factorial through recursion
 * @number: Store the number to find the factorial
 * Return: Factorial number
 */
unsigned long long int factorial(unsigned int number)
{
        /* base case */
        if (number <= 1)
                return 1;
        else
        {
                /* recursive step */
                return (number * factorial(number - 1));
        }
}
