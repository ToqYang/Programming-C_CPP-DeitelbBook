#include <stdio.h>

/**
 * main - (Armstrong Numbers)
 *
 * Return: 0
 */
int main(void)
{
        /* Variables */
        int num = 0, num1 = 0, num2 = 0, num3 = 0;
        int pow1 = 1, pow2 = 1, pow3 = 1, resultpower = 0;
        int i = 0;

        /* Print number and scan amstrong */
        printf("Enter the number of amstrong: ");
        scanf("%d", &num);

        /* 153 */
        num1 = num / 100;          /* 1 */
        num2 = ((num % 100) / 10); /* 5 */
        num3 = num % 10;           /* 3 */

        /* Power */
        while (i < 3)
        {
                pow1 *= num1;
                i++;
        }

        i = 0;

        while (i < 3)
        {
                pow2 *= num2;
                i++;
        }

        i = 0;

        while (i < 3)
        {
                pow3 *= num3;
                i++;
        }

        resultpower = pow1 + pow2 + pow3;

        if (num == resultpower)
        {
                printf("It's number of amstrong: %d^3 + %d^3 + %d^3 = %d\n",
                       num1, num2, num3, num);
        }
        else
        {
                printf("It isn't number of amstrong:\
                 %d^3 + %d^3 + %d^3 != %d\n",
                       num1, num2, num3, num);
        }

        return (0);
}
