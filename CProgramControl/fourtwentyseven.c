#include <stdio.h>
#include <math.h>


/**
 * main - (Pythagorean Triples)
 *
 * if the three sides are corrects and C <= 500
 *
 * Return: 0 if is success
 */
int main(void)
{
        int a1 = 0, b1 = 0, c1 = 0;
        int a = 0, b = 0, c = 0;
        int side1 = 0, side2 = 0, side3 = 0;

        while (a1 != -1 || b1 != -1 || c1 != -1) {
                puts("Enter your numbers");
                scanf("%d %d %d", &a1, &b1, &c1);

                /* If there negative numbers */
                if (a1 == -1 || b1 == -1 || c1 == -1)
                        return (1);

                /* Verify if the sides are corrects and the
		   hypotenuse is <= 500
		 */
                while ((side1 + side2) == side3 && side3 <= 500) {
                        /* Step for take the constan and sum to get the family*/
                        a += a1;
                        b += b1;
                        c += c1;

                        side1 = pow(a, 2);
                        side2 = pow(b, 2);
                        side3 = pow(c, 2);

                        /* Print if the condition o the loop is correct */
                        if ((side1 + side2) == side3 && side3 <= 500)
                                printf("\na^2 = %d, b^2 = %d c^2 = %d^2\n",
                                       a, b, c);
                }
        }
        return (0);
}
