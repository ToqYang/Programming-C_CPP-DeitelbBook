#include "sml.h"


/**
 * verify_overflow - Look if the program exceed the temporal space
 * @acc: (int) Get the state of the accumulator
 *
 * Return: (int) 0 if it isn't overflow or -1 if it's
 */
int verify_overflow(const double *acc)
{
        if (*acc > 9999 || *acc < -9999) {
		puts("*** Overflow accumulator ***");
		puts("*** Simpletron execution abnormally terminated ***");
                return (-1);
        }
        return (1);
}


/**
 * divide_to_zero - Look if the operand is 0
 *
 * Return: (int) 0 if it isn't or 1 if its
 */
int divide_to_zero(double const *num)
{
        if (*num == 0) {
                puts("*** Attempt to divide by zero ***");
		puts("*** Simpletron execution abnormally terminated ***");
                return (1);
        }

        return (0);
}


/**
 * _pow: Find the pow of the numbers give
 * @a: (int) Base
 * @b: (int) Exponente or times to multiplicate itself
 *
 * Return: (int) Result of the pow
 */
void _pow(double *a, double *b)
{
        double pow = *a;

        if (*b == 0)
                *a = 1;
        else {
                for (int i = 1; i < (*b); ++i)
                        pow *= (*a);

                *a = pow;
        }
}


/**
 * cmp - Compare two doubles
 *
 * Return: (int) 1 if is equal otherwise 0
 */
int cmp(double x, double y)
{
        x = ceil(x);
        y = floor(y);

        return ((x == y) ? 1 : 0);
}
