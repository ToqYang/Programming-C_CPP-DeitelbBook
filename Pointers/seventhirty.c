#include <stdio.h>
#include <math.h>


void circunference_circle(double *radio);
void area_circle(double *radio);
void volume_sphere(double *radio);


/**
 * main - (Calculating Circle Circumference,
 *        Circle Area or Sphere Volume Using Function Pointers)
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        int opt = 0;
        double radio = 0;
        void (*circleop[3])(double *) = {circunference_circle, area_circle, volume_sphere};

        while (opt != 3) {
                puts("Enter a choice:");
                puts("    0  Circunference");
                puts("    1  Circle Area");
                puts("    2  Sphere Volume");
                puts("    3  End Program");

                scanf("%d", &opt);

                if (opt != 3) {
                        puts("Enter The Radio");
                        scanf("%lf", &radio);
                        (*circleop[opt])(&radio);
                }
        }
        return (0);
}



/**
 * circunference_circle - Calculate circunference based in the radio
 *
 * @radio: (double *) It is the straight line that can be drawn
 *               from the center of a circle to the circunference
 *
 */
void circunference_circle(double *radio)
{
        printf("\nThe circuference is: %.2lf\n\n", (2 * M_PI * *radio));
}


/**
 * area_circle - Calculate area based in the radio
 * @radio: (double *) It is the straight line that can be drawn
 *               from the center of a circle to the circunference
 */
void area_circle(double *radio)
{
        printf("\nArea of the is: %.2lf\n\n", (M_PI * pow(*radio, 2)));
}


/**
 * volume_sphere - Calculate volume based in the radio
 * @radio: (double *) It is the straight line that can be drawn
 *               from the center of a circle to the circunference
 */
void volume_sphere(double *radio)
{
        printf("\nVolume of a sphere: %.2lf\n\n", ((4 / 3) * M_PI * pow(*radio, 3)));
}
