#include <stdio.h>


/**
 * (Diameter, Circumference and Area of a Cirle)
 * main - Print the before said
 * Return: 0 If is success
 */
int main(void)
{
        float radio = 0.0, diam = 0.0, area = 0.0, circ = 0.0, pi = 3.14159;

        printf("Write the radio of circle: ");
        scanf("%f", &radio);

        /* Ecuation for get the diameter */
        diam = radio * 2;
        /* Ecuation for get the circuference */
        circ = pi * diam;
        /* Ecuation for get the area */
        area = (pi * (radio * radio));

        printf("The diameter of the circle is: %.2f cm\n", diam);
        printf("The circuference of the circle is: %.2f cm\n", circ);
        printf("The area of the circle is: %.2f cm2\n", area);

        return (0);
}
