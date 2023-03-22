#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define PI 3.14159
#define VOLUME_SPHERE(x) ((4.0 / 3) * (PI) * ((x) * (x) * (x)))


/**
 * main - (Volume of a Sphere)
 *        Radius 1-10
 *
 * Return: 0 if is success
 */
int main(void)
{
	float r = 0, res;

	puts("Enter the radius 1-10");
	scanf("%f", &r);

	assert(r >= 1 && r <= 10);
	res =  VOLUME_SPHERE(r);
	printf("Radius is: %.2f\n", res);

	return (0);
}
