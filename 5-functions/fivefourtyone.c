#include <stdio.h>


int isPrime(int num, int div);


/**
 * main - Verify if is prime
 *
 * Return: 0 if is success
 */
int main(void)
{
        puts("1 if is prime, 0 if not is prime");

        printf("The number 4 is: %d\n", isPrime(4, 2));
        printf("The number 13 is: %d\n", isPrime(13, 2));

        return (0);
}



/**
 * isPrime - (Recursive Prime)
 * @num: Store the num to verify
 * @div: Numbers to store the divisors
 *
 * Return: 1 if it's prime, 0 if it isn't
 */
int isPrime(int num, int div)
{
        if (div == 1)
                return (1);

        if (num % div == 0)
                return (0);

        return isPrime(num, div - 1);
}
