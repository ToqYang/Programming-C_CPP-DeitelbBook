#include <stdio.h>
#include <math.h>


float roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousandths(float number);


/**
 * main - (Rounding Numbers)
 *
 * Call functions that rounding numbers
 *
 * Return: 0 if is success
 */
int main(void)
{
        float x = 0, y = 0;

        x = 1.4;
        y = roundToInteger(x);
        printf("Original number: %f\n", x);
        printf("Number: %lf\n", y);

        x = 10.4;
        y = roundToInteger(x);
        printf("Original number: %f\n", x);
        printf("Number: %lf\n", y);

        x = 100.4;
        y = roundToHundreths(x);
        printf("Original number: %f\n", x);
        printf("Number: %lf\n", y);

        x = 1000.4;
        y = roundToThousandths(x);
        printf("Original number: %f\n", x);
        printf("Number: %lf\n", y);

        return (0);
}

/**
 * roundToInteger - Round a number
 * @number: (float) Number to receive
 *
 * Return: (float) Number rounded
 */
float roundToInteger(float number)
{
        float x = number, y = 0;

        /* Rounding the number until the floor */
        y = floor(x + .5);

        return (y);
}

/**
 * roundToTenths - Round a number in tens
 * @number: (float) Number to receive
 *
 * Return: N(float) Number, already it rounded
 */
float roundToTenths(float number)
{
        float x = number, y = 0;

        /* Rounding the number until the floor */
        y = floor(x + .5);

        return (y);
}

/**
 * roundToHundreths - Round a number hundreths
 * @number: (float) Number to receive
 *
 * Return: (float) Number, already it rounded
 */
float roundToHundreths(float number)
{
        float x = number, y = 0;

        /* Rounding the number until the floor */
        y = floor(x + .5);

        return (y);
}

/**
 * roundToThousandths - Round a number thousandths
 * @number: (float) Number to receive
 *
 * Return: (float) Number, already it rounded
 */
float roundToThousandths(float number)
{
        float x = number, y = 0;

        /* Rounding the number until the floor */
        y = floor(x + .5);

        return (y);
}
