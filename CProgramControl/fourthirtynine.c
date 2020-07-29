#include <stdio.h>


/**
 * main - (Limitations of Floating-Point Numbers for Monetary Amounts)
 *
 * Section 4.6 cautioned about using floating-point values
 * for monetary calculations. Try this experiment: Create a float
 * variable with the value 1000000.00.
 *  Next add to that variable the literal float value 0.12f. Display
 * the result using printf and the conversion specifier "%.2f". What do you get?
 *
 * Return: 0 if is success
 */

/**
 * main - Look the limitations of float point numbers
 * Return: 0 if is success
 */
int main(void)
{
        float monetary = 1000000.00;
        float result = monetary + 0.12;

        printf("%.2f\n", result);

        return (0);
}
