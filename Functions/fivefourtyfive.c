#include <stdio.h>
#include <math.h>


/**
 * main - Show the test at the function math
 *
 * Return: 0 If is success
 */
int main(void)
{
        /* Square root */
        printf("sqrt(%.1f) = %.1f\n", 900.0, sqrt(900.0));
        printf("sqrt(%.1f) = %.1f\n", 9.0, sqrt(9.0));

        /* Cube root */
        printf("cbrt(%.1f) = %.1f\n", 27.0, cbrt(27.0));
        printf("cbrt(%.1f) = %.1f\n", -8.0, cbrt(-8.0));

        /* Exponential e to x */
        printf("exp(%.1f) = %f\n", 1.0, exp(1.0));
        printf("exp(%.1f) = %f\n", 2.0, exp(2.0));

        /* Logarithm */
        printf("log(%f) = %.1f\n", 2.718282, log(2.718282));
        printf("log(%f) = %.1f\n", 7.389056, log(7.389056));

        /* Logarithm in base 10 */
        printf("log10(%.1f) = %.1f\n", 1.0, log10(1.0));
        printf("log10(%.1f) = %.1f\n", 10.0, log10(10.0));
        printf("log10(%.1f) = %.1f\n", 100.0, log10(100.0));

        /* Value absolute */
        printf("fabs(%.1f) = %.1f\n", 13.5, fabs(13.5));
        printf("fabs(%.1f) = %.1f\n", 0.0, fabs(0.0));
        printf("fabs(%.1f) = %.1f\n", -13.5, fabs(-13.5));

        /* Ceil of the numbers(Hight value) */
        printf("ceil(%.1f) = %.1f\n", 9.2, ceil(9.2));
        printf("ceil(%.1f) = %.1f\n", -9.8, ceil(-9.8));

        /* Floor of the number(Low value) */
        printf("floor(%.1f) = %.1f\n", 9.2, floor(9.2));
        printf("floor(%.1f) = %.1f\n", -9.8, floor(-9.8));

        /* Pow a^b */
        printf("pow(%.1f, %.1f) = %.1f\n", 2.0, 7.0, pow(2.0, 7.0));
        printf("pow(%.1f, %.1f) = %.1f\n", 9.0, 0.5, pow(9.0, 0.5));

        /* Float module */
        printf("fmod(%.3f/%.3f) = %.3f\n", 13.657, 2.333, fmod(13.657, 2.333));

        /* sin math */
        printf("sin(%.1f) = %.1f\n", 0.0, sin(0.0));

        /* Cos math */
        printf("cos(%.1f) = %.1f\n", 0.0, cos(0.0));

        /* tan math */
        printf("tan(%.1f) = %.1f\n", 0.0, tan(0.0));

        return (0);
}
