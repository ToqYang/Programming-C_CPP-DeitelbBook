#include <stdio.h>


/**
 * main - Print of manner correct
 *
 * Return: 0 If is succesful
 */
int main(void)
{
        /* What’s wrong with the following statement?
                printf( "%d", --( x * y ) ); */
        int x = 5, y = 10, z = 0;

        z = x * y;
        --z;

        printf("%d\n", z);

        return (0);
}
