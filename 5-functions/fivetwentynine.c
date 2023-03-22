#include <stdio.h>


int gcd(int x, int y);


/**
 * main - Find the maximum common divsor
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        printf("Divisor of (6)(4) is:%d\n", gcd(6, 4));
        printf("Divisor of (60)(72) is:%d\n", gcd(60, 72));

        return (0);
}


/**
 * gcd - (Recursive Greatest Common Divisor)
 * @x: (int) Store the first number
 * @y: (int) Store the second number
 *
 * Return: (int) Common divisor
 */
int gcd(int x, int y)
{
        if (y == 0)
                return (x);

        return gcd(y, x % y);
}
