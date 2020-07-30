#include <stdio.h>


int power(int base, int exponent);


/**
 * main - power recursion
 *
 * Return: 0 if is success
 */
int main(void)
{
        int res = 0;

        res = power(3, 4);
        printf("The power is: %d\n", res);

        return (0);
}



/**
 * power - Recursion functiion power
 * @base: x
 * @exponent: y
 *
 * Return: Power
 */
int power(int base, int exponent)
{
        if (exponent <= 0)
                return (1);
        return base * power(base, exponent - 1);
}
