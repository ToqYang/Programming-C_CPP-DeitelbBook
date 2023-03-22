#include <stdio.h>


unsigned long long int fibonacci(unsigned int n);


/**
 * main - Print Number fibonacci
 *
 * Return: 0 if is success
 */
int main(void)
{
        unsigned int num = 1000;

        printf("The number of fibonacci is: %llu\n", fibonacci(num));

        return (0);
}



/**
 * fibonacci - Print the the succesion of fibonnacci
 * @n: Number fibonacci to find
 *
 * Return: Number of fibonacci
 */
unsigned long long int fibonacci(unsigned int n)
{
        unsigned int num1 = 0, num2 = 1, res = 1;

        for (unsigned int i = 0; i < n; ++i)
        {
                /* Sum current and before number */
                res = num1 + num2;
                /* it does a flip to change the value
		   of num1 to follow num
		 */
                num1 = num2;
                /* it does to num2 the change of the follow value */
                num2 = res;
        }
        return (res);
}
